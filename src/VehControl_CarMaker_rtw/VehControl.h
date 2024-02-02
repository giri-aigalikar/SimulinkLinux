/*
 * VehControl.h
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

#ifndef RTW_HEADER_VehControl_h_
#define RTW_HEADER_VehControl_h_
#include <stddef.h>
#include <string.h>
#ifndef VehControl_COMMON_INCLUDES_
#define VehControl_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* VehControl_COMMON_INCLUDES_ */

#include "VehControl_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define VehControl_M_TYPE              RT_MODEL_VehControl_T

/* Definition required by CarMaker */
#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           0.001
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  cmVehicleControlIn FromCM;           /* '<Root>/FromCM' */
} ExtU_VehControl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  cmVehicleControlOut ToCM;            /* '<Root>/ToCM' */
} ExtY_VehControl_T;

/* Parameters (default storage) */
struct P_VehControl_T_ {
  real_T SST_Value;                    /* Expression: 0
                                        * Referenced by: '<S1>/SST'
                                        */
  real_T Key_Value;                    /* Expression: 0
                                        * Referenced by: '<S1>/Key'
                                        */
  real_T UserSignals0_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/UserSignal.s0'
                                        */
  real_T UserSignals1_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/UserSignal.s1'
                                        */
  real_T UserSignals2_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/UserSignal.s2'
                                        */
  real_T UserSignals3_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/UserSignal.s3'
                                        */
  real_T UserSignals4_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/UserSignal.s4'
                                        */
  real_T GearNo_Value;                 /* Expression: 0
                                        * Referenced by: '<S1>/GearNo'
                                        */
  real_T SelectorCtrl_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/SelectorCtrl'
                                        */
  real_T BrakePark_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/BrakePark'
                                        */
  real_T BrakeLever_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/BrakeLever'
                                        */
  real_T Clutch_Value;                 /* Expression: 0
                                        * Referenced by: '<S1>/Clutch'
                                        */
  real_T Gas_Value;                    /* Expression: 0
                                        * Referenced by: '<S1>/Gas'
                                        */
  real_T SteeringAng_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/Steering.Ang'
                                        */
  real_T SteeringAngVel_Value;         /* Expression: 0
                                        * Referenced by: '<S1>/Steering.AngVel'
                                        */
  real_T SteeringAngAcc_Value;         /* Expression: 0
                                        * Referenced by: '<S1>/Steering.AngAcc'
                                        */
  real_T SteeringTrq_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/Steering.Trq'
                                        */
  real_T RiderRollAng_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Rider.RollAng'
                                        */
  real_T RiderRollAngVel_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/Rider.RollAngVel'
                                        */
  real_T LightsLowBeam_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/Lights.LowBeam'
                                        */
  real_T LightsHighBeam_Value;         /* Expression: 0
                                        * Referenced by: '<S1>/Lights.HighBeam'
                                        */
  real_T LightsDaytime_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/Lights.Daytime'
                                        */
  real_T LightsParkL_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/Lights.ParkL'
                                        */
  real_T LightsParkR_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/Lights.ParkR'
                                        */
  real_T LightsIndL_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Lights.IndL'
                                        */
  real_T LightsIndR_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Lights.IndR'
                                        */
  real_T LightsFogFrontL_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/Lights.FogFrontL'
                                        */
  real_T LightsFogFrontR_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/Lights.FogFrontR'
                                        */
  real_T LightsFogRear_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/Lights.FogRear'
                                        */
  real_T LightsBrake_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/Lights.Brake'
                                        */
  real_T LightsReverse_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/Lights.Reverse'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_VehControl_T {
  const char_T *errorStatus;
  const void *constBlockIO;
  void *inputs;
  void *outputs;
};

/* Block parameters (default storage) */
extern P_VehControl_T VehControl_P;

/* External data declarations for dependent source files */
extern const cmVehicleControlIn VehControl_rtZcmVehicleControlIn;/* cmVehicleControlIn ground */
extern const cmVehicleControlOut VehControl_rtZcmVehicleControlOut;/* cmVehicleControlOut ground */
extern const char *RT_MEMORY_ALLOCATION_ERROR;

/* Model entry point functions */
struct tInfos;
extern RT_MODEL_VehControl_T *VehControl(struct tInfos *inf);
extern void VehControl_initialize(RT_MODEL_VehControl_T *const VehControl_M);
extern void VehControl_step(RT_MODEL_VehControl_T *const VehControl_M);
extern void VehControl_terminate(RT_MODEL_VehControl_T * VehControl_M);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'VehControl'
 * '<S1>'   : 'VehControl/IF_Out_Selector'
 */
#endif                                 /* RTW_HEADER_VehControl_h_ */
