#ifndef __CameraSensorFord_H__
#define __CameraSensorFord_H__

/* Definition of max objects to calculate*/
#define OBJECTS 10

#include "Vehicle/Sensor_Object.h"
#include "Traffic.h"

typedef struct tCamSens {
    struct {
        tObjectSensorObj *sensor_data;
        tTrafficObj *traffic_data;
    	unsigned int ObjID;
    	unsigned int Detection;
    } T[OBJECTS];
}tCamSens;

extern tCamSens CamSens;

void	CamSens_DeclQuants          (void);
int		CamSens_TestRun_Start_atEnd	(void);
int		CamSens_Calc				(double dt);

#endif