/*
 * Jenkins_Brake.h
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "Jenkins_Brake".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Apr 14 13:52:06 2023
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Jenkins_Brake_h_
#define RTW_HEADER_Jenkins_Brake_h_
#include <string.h>
#include <stddef.h>
#ifndef Jenkins_Brake_COMMON_INCLUDES_
#define Jenkins_Brake_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Jenkins_Brake_COMMON_INCLUDES_ */

#include "Jenkins_Brake_types.h"

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

#define Jenkins_Brake_M_TYPE           RT_MODEL_Jenkins_Brake_T

/* Definition required by CarMaker */
#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           0.001
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  cmBrakeIn FromCM;                    /* '<Root>/FromCM' */
  cmBrakeCfgIn CfgInFromCM;            /* '<Root>/CfgInFromCM' */
} ExtU_Jenkins_Brake_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  cmBrakeOut ToCM;                     /* '<Root>/ToCM' */
} ExtY_Jenkins_Brake_T;

/* Parameters (default storage) */
struct P_Jenkins_Brake_T_ {
  real_T Gain_Gain;                    /* Expression: 25
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T WheelOutFLTrq_PB_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/WheelOut.FL.Trq_PB'
                                        */
  real_T WheelOutFLTrq_BrakeReg_trg_Value;/* Expression: 0
                                           * Referenced by: '<S1>/WheelOut.FL.Trq_BrakeReg_trg'
                                           */
  real_T Gain1_Gain;                   /* Expression: 15
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T WheelOutFRTrq_PB_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/WheelOut.FR.Trq_PB'
                                        */
  real_T WheelOutFRTrq_BrakeReg_trg_Value;/* Expression: 0
                                           * Referenced by: '<S1>/WheelOut.FR.Trq_BrakeReg_trg'
                                           */
  real_T WheelOutRLTrq_PB_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/WheelOut.RL.Trq_PB'
                                        */
  real_T WheelOutRLTrq_BrakeReg_trg_Value;/* Expression: 0
                                           * Referenced by: '<S1>/WheelOut.RL.Trq_BrakeReg_trg'
                                           */
  real_T WheelOutRRTrq_PB_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/WheelOut.RR.Trq_PB'
                                        */
  real_T WheelOutRRTrq_BrakeReg_trg_Value;/* Expression: 0
                                           * Referenced by: '<S1>/WheelOut.RR.Trq_BrakeReg_trg'
                                           */
  real_T Trq_DriveSrc_trgd0_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/Trq_DriveSrc_trg.d0'
                                        */
  real_T Trq_DriveSrc_trgd1_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/Trq_DriveSrc_trg.d1'
                                        */
  real_T Trq_DriveSrc_trgd2_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/Trq_DriveSrc_trg.d2'
                                        */
  real_T Trq_DriveSrc_trgd3_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/Trq_DriveSrc_trg.d3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Jenkins_Brake_T {
  const char_T *errorStatus;
  const void *constBlockIO;
  void *inputs;
  void *outputs;
};

/* Block parameters (default storage) */
extern P_Jenkins_Brake_T Jenkins_Brake_P;

/* External data declarations for dependent source files */
extern const cmBrakeOut Jenkins_Brake_rtZcmBrakeOut;/* cmBrakeOut ground */
extern const char *RT_MEMORY_ALLOCATION_ERROR;

/* Model entry point functions */
struct tInfos;
extern RT_MODEL_Jenkins_Brake_T *Jenkins_Brake(struct tInfos *inf);
extern void Jenkins_Brake_initialize(RT_MODEL_Jenkins_Brake_T *const
  Jenkins_Brake_M);
extern void Jenkins_Brake_step(RT_MODEL_Jenkins_Brake_T *const Jenkins_Brake_M);
extern void Jenkins_Brake_terminate(RT_MODEL_Jenkins_Brake_T * Jenkins_Brake_M);

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
 * '<Root>' : 'Jenkins_Brake'
 * '<S1>'   : 'Jenkins_Brake/IF_Out_Selector'
 */
#endif                                 /* RTW_HEADER_Jenkins_Brake_h_ */
