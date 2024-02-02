from flask import Flask, render_template, jsonify
import subprocess
import os
app = Flask(__name__)


path_exe = os.getcwd()
print(path_exe)

@app.route('/')
def index():
    return render_template('index.html')  # You'll create this HTML file in the next step

@app.route('/run-app')
def run_app():
    try:
        # Run your application here
        
        subprocess.run(['CarMaker.linux64'])
        print("ran")
        return jsonify({'status': 'success', 'message': 'Application ran successfully'})
    except Exception as e:
        return jsonify({'status': 'error', 'message': str(e)})

if __name__ == '__main__':
    app.run(debug=True)
