import sys
sys.path.append("/opt/ipg/carmaker/linux64-12.0.1/Python/python3.8")

import cmapi
import pathlib


async def make_variations(speed):
    project_path = pathlib.Path("/home/giri/Documents/PythonProject")
    cmapi.Project.load(project_path)

    testrun_path = pathlib.Path("BrakingMuSplit")
    testrun = cmapi.Project.instance().load_testrun_parametrization(testrun_path)



    # nvals = testrun.get_nvalues()

    # Make a variation containing a copy of the testrun
    variation = cmapi.Variation.create_from_testrun(testrun)
    variation.set_name("Variation")

    nvals = []
    nvals.append(cmapi.NamedValue("Speed",speed))
    # print(f"nvalues in Testrun: {nvals}")
    
    variation.set_nvalues(nvals)

    # print(variation)
    return variation




