from flask import Flask, jsonify, render_template,redirect,url_for,request,session,flash
from flask_cors import CORS
import sys
import os
import re
sys.path.append("/opt/ipg/carmaker/linux64-12.0.1/Python/python3.8")
import cmapi
from cmapi import Application, ApoServer, SimControlInteractive
import asyncio
from functools import wraps
import subprocess
import pathlib


app = Flask(__name__)
app.secret_key = 'IPG2022us@'
CORS(app)
Project_Path = os.getcwd()
print(Project_Path)
def my_path(self):
    path = os.path.join(Project_Path,"SimOutput",session.get('outputpath'))
    print(f"frompath: {path}")
    return path

class CarMakerControl:
    sim_control = None

    @staticmethod
    async def initialize():
        HOST = "localhost"
        application = Application.create(cmapi.AppType.CarMaker)
        application.set_host(HOST)
        PID = application.get_pid()

        sinfo = cmapi.ApoServerInfo(pid=PID, description="Idle")
        master = ApoServer()
        master.set_sinfo(sinfo)

        CarMakerControl.sim_control = await SimControlInteractive.create_with_master(master)
        await CarMakerControl.sim_control.connect()

@app.route('/login', methods=['GET', 'POST'])
def login():
    error = None
    if request.method == 'POST':
        if request.form['username'] != 'admin' or request.form['password'] != 'secret':
            error = 'Invalid Credentials. Please try again.'
        else:
            session['logged_in'] = True
            flash('You were just logged in!')
            return redirect(url_for('index'))
    return render_template('login.html', error=error)

def login_required(f):
    @wraps(f)
    def decorated_function(*args, **kwargs):
        if 'logged_in' not in session:
            return redirect(url_for('login', next=request.url))
        return f(*args, **kwargs)
    return decorated_function
@app.route('/logout')
def logout():
    session.pop('logged_in', None)
    flash('You were just logged out!')
    return redirect(url_for('login'))

@app.route('/')
@login_required
def index():
    return render_template('index.html')

@app.route('/button-click', methods=['POST'])
async def button_click():
    await CarMakerControl.initialize()
    message = f"Running servers on host: {cmapi.query_aposerverinfos('localhost')}"
    cmapi.logger.info(message)
    jsonify(message=message)
    return redirect(url_for('simulation'))

@app.route('/simulation')
def simulation():
    return render_template('simulation.html')

@app.route('/list-txt-files')
def list_txt_files():
    folder_path = os.path.join(Project_Path,"Data","TestRun")  # Update this to your folder path
    txt_files = [f for f in os.listdir(folder_path)]
    return jsonify(txt_files)

@app.route('/parse-file', methods=['POST'])
def parse_file():
    filename = request.form['fileName']
    folder_path = os.path.join(Project_Path,"Data","TestRun")   # Update to your folder path
    file_path = os.path.join(folder_path, filename)

    pattern = r"\$\w+=[\w.]+"
    variables = []

    # Ensure filename is provided
    if not filename:
        return jsonify({"error": "No file name provided"}), 400

    try:
        with open(file_path, 'r') as file:
            for line in file:
                matches = re.findall(pattern, line)
                variables.extend(matches)
    except IOError as e:
        return jsonify({"error": f"File not found or unable to read. Details: {e}"}), 404
    except Exception as e:
        return jsonify({"error": f"An error occurred: {e}"}), 500

    session['TestRunName'] = filename
    # Ensure some variables are found, or return a default message
    if variables:
        return jsonify(variables)
    else:
        return jsonify({"message": "No variables found in file"}), 200
    

@app.route('/save-variables', methods=['POST'])
def save_variables():
    
    # Extract the submitted data
    submitted_data = request.form
    nvals = []

    for key, value in submitted_data.items():
        try:
            nvals.append((key, float(value)))
        except ValueError:
            return jsonify({"error": f"Invalid value for {key}: {value}"}), 400

    # Here, you can process 'nvals' as needed, e.g., set them in a variation
    #variation.set_nvalues(nvals)
    session['variables'] = nvals
    print(nvals)
    return jsonify({"message": "Variables saved successfully"})


@app.route('/start-simulation', methods=['POST'])
async def start_simulation():

    if CarMakerControl.sim_control:

        slected_file = session.get('TestRunName')
        named_values = session.get('variables',[])
        print(named_values)
        assign = []

        project_path = os.path.join(Project_Path)
        cmapi.Project.load(project_path)

        testrun_path = pathlib.Path(slected_file)
        testrun = cmapi.Project.instance().load_testrun_parametrization(testrun_path)
        # print(n_vals)

        # nvals = testrun.get_nvalues()

        # Make a variation containing a copy of the testrun
        variation = cmapi.Variation.create_from_testrun(testrun)
        variation.set_name("Variation")
        
        #Assign named Values
        for name,value in named_values:
            assign.append(cmapi.NamedValue(name,value))
            outp = f"{slected_file}_{name}_{value}"
        variation.set_nvalues(assign)
        print(f"running:{outp}")
        session['outputpath'] = outp


        #Define Output Path
        variation.get_result_file_path = my_path.__get__(variation,cmapi.Variation)
        outputpath = variation.get_result_file_path
        print(f"{outputpath}")

        #Define output quants required.
        output_quants = cmapi.OutputQuantities.create()
        output_quants.add_quantities(["Car.v", "Time.Global", "Car.ay","Car.ax","Car.Distance"])
        variation.set_outputquantities(output_quants)
        variation.set_storage_mode(cmapi.StorageMode.save)
        variation.set_storage_buffer_size(5000)


        CarMakerControl.sim_control.set_variation(variation)
        var = CarMakerControl.sim_control.get_variation()
        await CarMakerControl.sim_control.start_sim()
        print("Simulation Started")
        
        # Notify App Simulation has started
        await CarMakerControl.sim_control.disconnect()
        await CarMakerControl.sim_control.connect()
        return jsonify(message="Simulation Completed successfully!")
        
    else:
        return jsonify(message="Simulation control not initialized"), 500


@app.route('/post-process', methods=['POST'])
def post_process():
    try:
        # Path to your PythonProject/SimOutput directory
        print("inside post-process")
        sim_output_path = os.path.join(Project_Path,"SimOutput")
        

        # Path to the CsvWriter.py script
        script_path = os.path.join(sim_output_path, "Csv_Writer.py")
        print("found_Path")
        # Run the script
        subprocess.run(["python3", script_path], cwd=sim_output_path)
        print("Process_Ran")

        flash("Post-processing completed successfully.")
        return redirect(url_for('simulation'))
    except Exception as e:
        flash(f"An error occurred: {e}")
        return redirect(url_for('simulation'))
    




if __name__ == '__main__':
    app.run(host = '0.0.0.0',port=5000)
