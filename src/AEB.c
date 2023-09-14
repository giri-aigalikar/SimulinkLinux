#include <Global.h>

#if defined(WIN32)
# include <windows.h>
#endif

#include <stdlib.h>
#include <string.h>
#include <math.h>


#include <CarMaker.h>
#include <Car/Vehicle_Car.h>

#include "IOVec.h"
#include "User.h"
#include "MathUtils.h"
#include "Traffic.h"
#include "Vehicle/Sensor_Object.h"
#include "AEB.h"

void
AEB_User_DeclQuants (void)
{
	DDefInt(NULL, "AEB_Switch", "", &AEB_ON, DVA_IO_In);
}

void
AEB_User_TestRun_Start_atBegin (void)
{
	AEB_ON =0;
}

void
AEB_User_Calc (void)
{
	// read object sensor data
	tObjectSensor *tgt_dtct;
	tgt_dtct = ObjectSensor_GetByIndex(0);
	// AEB Logic
	if (tgt_dtct-> relvTarget.NearPnt.ds_p <= 3 && tgt_dtct-> relvTarget.NearPnt.ds_p >0 && AEB_ON == 1) { 
		DrivMan.Brake = 0.5;

	}
}
