/*
 * VehControl_types.h
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "VehControl".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Feb  2 15:29:15 2024
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VehControl_types_h_
#define RTW_HEADER_VehControl_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_cm31UserSignal_
#define DEFINED_TYPEDEF_FOR_cm31UserSignal_

typedef struct {
  real_T s0;
  real_T s1;
  real_T s2;
  real_T s3;
  real_T s4;
} cm31UserSignal;

#endif

#ifndef DEFINED_TYPEDEF_FOR_cm31VCSteering_
#define DEFINED_TYPEDEF_FOR_cm31VCSteering_

typedef struct {
  real_T Ang;
  real_T AngVel;
  real_T AngAcc;
  real_T Trq;
} cm31VCSteering;

#endif

#ifndef DEFINED_TYPEDEF_FOR_cm31VCRider_
#define DEFINED_TYPEDEF_FOR_cm31VCRider_

typedef struct {
  real_T RollAng;
  real_T RollAngVel;
} cm31VCRider;

#endif

#ifndef DEFINED_TYPEDEF_FOR_cm31VCLights_
#define DEFINED_TYPEDEF_FOR_cm31VCLights_

typedef struct {
  real_T LowBeam;
  real_T HighBeam;
  real_T Daytime;
  real_T ParkL;
  real_T ParkR;
  real_T IndL;
  real_T IndR;
  real_T FogFrontL;
  real_T FogFrontR;
  real_T FogRear;
  real_T Brake;
  real_T Reverse;
} cm31VCLights;

#endif

#ifndef DEFINED_TYPEDEF_FOR_cmVehicleControlIn_
#define DEFINED_TYPEDEF_FOR_cmVehicleControlIn_

typedef struct {
  real_T SST;
  real_T Key;
  cm31UserSignal UserSignal;
  real_T GearNo;
  real_T SelectorCtrl;
  real_T Brake;
  real_T BrakePark;
  real_T BrakeLever;
  real_T Clutch;
  real_T Gas;
  cm31VCSteering Steering;
  cm31VCRider Rider;
  cm31VCLights Lights;
} cmVehicleControlIn;

#endif

#ifndef DEFINED_TYPEDEF_FOR_cmVehicleControlOut_
#define DEFINED_TYPEDEF_FOR_cmVehicleControlOut_

typedef struct {
  real_T SST;
  real_T Key;
  cm31UserSignal UserSignal;
  real_T GearNo;
  real_T SelectorCtrl;
  real_T Brake;
  real_T BrakePark;
  real_T BrakeLever;
  real_T Clutch;
  real_T Gas;
  cm31VCSteering Steering;
  cm31VCRider Rider;
  cm31VCLights Lights;
} cmVehicleControlOut;

#endif

/* Parameters (default storage) */
typedef struct P_VehControl_T_ P_VehControl_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_VehControl_T RT_MODEL_VehControl_T;

#endif                                 /* RTW_HEADER_VehControl_types_h_ */
