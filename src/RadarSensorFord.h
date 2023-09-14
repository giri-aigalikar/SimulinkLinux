#ifndef __RadarSensorFord_H__
#define __RadarSensorFord_H__

/* Definition of max objects to calculate*/
#define OBJECTS 10

#include "Vehicle/Sensor_Object.h"
#include "Traffic.h"

typedef struct tRadSens {
    struct {
        tObjectSensorObj *sensor_data;
        tTrafficObj *traffic_data;
    	unsigned int ObjID;
    	unsigned int Detection;
    } T[OBJECTS];
}tRadSens;

extern tRadSens RadSens;

void	RadSens_DeclQuants          (void);
int		RadSens_TestRun_Start_atEnd	(void);
int		RadSens_Calc				(double dt);

#endif