/*
 * ObjectSensorFord.h
 *
 * Author: Fabian Häußler
 *****************************************************************************
 *
 *  Copyright (C)   IPG Automotive GmbH
 *                  Bannwaldallee 60             Phone  +49.721.98520.0
 *                  76185 Karlsruhe              Fax    +49.721.98520.99
 *                  Germany                      WWW    www.ipg-automotive.com
 *****************************************************************************
 *
 *  Update : 13 May 2020
 *  Version 1.1
*/

#ifndef __ObjectSensorFord_H__
#define __ObjectSensorFord_H__

/* Flag to turn on 4 corner calculation*/
#define CORNER4
/* Definition of max objects to calculate*/
#define OBJECTS 10

#include "Vehicle/Sensor_Object.h"
#include "Traffic.h"

typedef struct tObjSens
{
    struct
    {
        tObjectSensorObj *sensor_data;
        tTrafficObj      *traffic_data;
        float AlphaNearPnt;
        float BearingAngleRL;
        float BearingAngleRR;
        float DistanceNearPnt;
        float ThetaNearPnt;
        unsigned int ObjID;
        unsigned int Detection;
        float TargetHeadingRel;
        float VelocityNearPnt;
        float Length;
        float Width;
        float GlobalPitch;
        int MaterialType;
        float DistanceRL;
        float DistanceRR;
        float GlobalSensorYaw;
#if defined(CORNER4)
        float BearingAngleFL;
        float BearingAngleFR;
        float DistanceFL;
        float DistanceFR;
#endif
    } T[OBJECTS];
} tObjSens;

void    ObjSens_DeclQuants(void);
int     ObjSens_TestRun_Start_atEnd(void);
int     ObjSens_Calc(double dt);


#define Calc_Rot(R, rx, ry, rz) \
do { \
        double srx, crx, sry, cry, srz, crz; \
\
        M_SINCOS((rx), &srx, &crx); \
        M_SINCOS((ry), &sry, &cry); \
        M_SINCOS((rz), &srz, &crz); \
\
        (R)[0][0] =  cry*crz; \
        (R)[0][1] =  srx*sry*crz - crx*srz; \
        (R)[0][2] =  crx*sry*crz + srx*srz; \
        (R)[1][0] =  cry*srz; \
        (R)[1][1] =  srx*sry*srz + crx*crz; \
        (R)[1][2] =  crx*sry*srz - srx*crz; \
        (R)[2][0] = -sry; \
        (R)[2][1] =  srx*cry; \
        (R)[2][2] =  crx*cry; \
} while (0)

#endif
