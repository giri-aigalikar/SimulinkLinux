import matlab.engine

# Start MATLAB engine
matlab_engine = matlab.engine.start_matlab()

# Load Simulink model and disable launch report
jenkins_brake = 'Jenkins_brake'
matlab_engine.load_system(jenkins_brake)
#_, updated_settings = matlab_engine.set_param(jenkins_brake, 'LaunchReport', 'off', nargout=2)

# Build Simulink model using Real-Time Workshop
try:
    matlab_engine.rtwbuild(jenkins_brake)
except matlab.engine.EngineError as error:
    # Handle build error here
    print(error)

# Save Simulink model and close
matlab_engine.save_system(jenkins_brake)
matlab_engine.close_system(jenkins_brake)

# Shut down MATLAB engine
matlab_engine.quit()

