/*
 * Jenkins_brake.c
 *
 * Sponsored Third Party Support License -- for use only to support
 * products interfaced to MathWorks software under terms specified in your
 * company's restricted use license agreement.
 *
 * Code generation for model "Jenkins_brake".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri Apr 14 12:56:33 2023
 *
 * Target selection: CarMaker.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <infoc.h>
#include <Log.h>
#include <InfoParam.h>
#include <DataDict.h>
#include <MatSupp.h>
#include "Jenkins_brake.h"
#include "Jenkins_brake_private.h"
#include "Jenkins_brake_wrap.h"

/* CarMaker: Compile- and link-time checks for the right Matlab version. */
#if MATSUPP_NUMVER == 91100

/* The following statement will cause an "unresolved symbol" error when
   linking with a MatSupp library built for the wrong Matlab version. */
extern int MATSUPP_VARNAME(MatSupp, MATSUPP_NUMVER);
void *MATSUPP_VARNAME(MODEL, MATSUPP_NUMVER) = &MATSUPP_VARNAME(MatSupp,
  MATSUPP_NUMVER);

#else
# error Compiler options unsuitable for C code created with Matlab 9.11
#endif

/* Block parameters (default storage) */
P_Jenkins_brake_T Jenkins_brake_P = {
  /* Expression: 25
   * Referenced by: '<Root>/Gain'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_DriveSrc_trg.d0'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_DriveSrc_trg.d1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_DriveSrc_trg.d2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Trq_DriveSrc_trg.d3'
   */
  0.0
};

const cmBrakeOut Jenkins_brake_rtZcmBrakeOut = { { { 0.0,/* Trq_WB */
      0.0,                             /* Trq_PB */
      0.0                              /* Trq_BrakeReg_trg */
    },                                 /* FL */

    { 0.0,                             /* Trq_WB */
      0.0,                             /* Trq_PB */
      0.0                              /* Trq_BrakeReg_trg */
    },                                 /* FR */

    { 0.0,                             /* Trq_WB */
      0.0,                             /* Trq_PB */
      0.0                              /* Trq_BrakeReg_trg */
    },                                 /* RL */

    { 0.0,                             /* Trq_WB */
      0.0,                             /* Trq_PB */
      0.0                              /* Trq_BrakeReg_trg */
    }                                  /* RR */
  },                                   /* WheelOut */

  { 0.0,                               /* d0 */
    0.0,                               /* d1 */
    0.0,                               /* d2 */
    0.0                                /* d3 */
  }                                    /* Trq_DriveSrc_trg */
};

/* Model step function */
void Jenkins_brake_step(RT_MODEL_Jenkins_brake_T *const Jenkins_brake_M)
{
  ExtU_Jenkins_brake_T *Jenkins_brake_U = (ExtU_Jenkins_brake_T *)
    Jenkins_brake_M->inputs;
  ExtY_Jenkins_brake_T *Jenkins_brake_Y = (ExtY_Jenkins_brake_T *)
    Jenkins_brake_M->outputs;

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_brake_Y->ToCM.WheelOut.FL.Trq_WB = Jenkins_brake_P.Gain_Gain *
    Jenkins_brake_U->FromCM.Pedal;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_brake_Y->ToCM.WheelOut.FL.Trq_PB =
    Jenkins_brake_U->FromCM.WheelIn.RR.Trq_BrakeReg_max;
  Jenkins_brake_Y->ToCM.WheelOut.FL.Trq_BrakeReg_trg =
    Jenkins_brake_U->FromCM.WheelIn.RR.Trq_BrakeReg;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_brake_Y->ToCM.WheelOut.FR.Trq_WB =
    Jenkins_brake_U->FromCM.WheelIn.RL.Trq_BrakeReg_max;
  Jenkins_brake_Y->ToCM.WheelOut.FR.Trq_PB =
    Jenkins_brake_U->FromCM.WheelIn.RL.Trq_BrakeReg;
  Jenkins_brake_Y->ToCM.WheelOut.FR.Trq_BrakeReg_trg =
    Jenkins_brake_U->FromCM.WheelIn.FR.Trq_BrakeReg_max;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_brake_Y->ToCM.WheelOut.RL.Trq_WB =
    Jenkins_brake_U->FromCM.WheelIn.FR.Trq_BrakeReg;
  Jenkins_brake_Y->ToCM.WheelOut.RL.Trq_PB =
    Jenkins_brake_U->FromCM.WheelIn.FL.Trq_BrakeReg_max;
  Jenkins_brake_Y->ToCM.WheelOut.RL.Trq_BrakeReg_trg =
    Jenkins_brake_U->FromCM.WheelIn.FL.Trq_BrakeReg;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_brake_Y->ToCM.WheelOut.RR.Trq_WB = Jenkins_brake_U->FromCM.Park;
  Jenkins_brake_Y->ToCM.WheelOut.RR.Trq_PB = Jenkins_brake_U->FromCM.T_env;
  Jenkins_brake_Y->ToCM.WheelOut.RR.Trq_BrakeReg_trg =
    Jenkins_brake_U->FromCM.T_env;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_DriveSrc_trg.d0'
   *  Constant: '<S1>/Trq_DriveSrc_trg.d1'
   *  Constant: '<S1>/Trq_DriveSrc_trg.d2'
   *  Constant: '<S1>/Trq_DriveSrc_trg.d3'
   */
  Jenkins_brake_Y->ToCM.Trq_DriveSrc_trg.d0 =
    Jenkins_brake_P.Trq_DriveSrc_trgd0_Value;
  Jenkins_brake_Y->ToCM.Trq_DriveSrc_trg.d1 =
    Jenkins_brake_P.Trq_DriveSrc_trgd1_Value;
  Jenkins_brake_Y->ToCM.Trq_DriveSrc_trg.d2 =
    Jenkins_brake_P.Trq_DriveSrc_trgd2_Value;
  Jenkins_brake_Y->ToCM.Trq_DriveSrc_trg.d3 =
    Jenkins_brake_P.Trq_DriveSrc_trgd3_Value;
}

/* Model initialize function */
void Jenkins_brake_initialize(RT_MODEL_Jenkins_brake_T *const Jenkins_brake_M)
{
  UNUSED_PARAMETER(Jenkins_brake_M);
}

/* Model terminate function */
void Jenkins_brake_terminate(RT_MODEL_Jenkins_brake_T * Jenkins_brake_M)
{
  /* model code */
  rt_FREE(Jenkins_brake_M->inputs);
  rt_FREE(Jenkins_brake_M->outputs);
  rt_FREE(Jenkins_brake_M);
}

/* Model data allocation function */
RT_MODEL_Jenkins_brake_T *Jenkins_brake(struct tInfos *inf)
{
  RT_MODEL_Jenkins_brake_T *Jenkins_brake_M;
  Jenkins_brake_M = (RT_MODEL_Jenkins_brake_T *) malloc(sizeof
    (RT_MODEL_Jenkins_brake_T));
  if (Jenkins_brake_M == (NULL)) {
    return (NULL);
  }

  (void) memset((char *)Jenkins_brake_M, 0,
                sizeof(RT_MODEL_Jenkins_brake_T));
  MatSupp_Init();

  /* external inputs */
  {
    ExtU_Jenkins_brake_T *Jenkins_brake_U = (ExtU_Jenkins_brake_T *) malloc
      (sizeof(ExtU_Jenkins_brake_T));
    rt_VALIDATE_MEMORY(Jenkins_brake_M,Jenkins_brake_U);
    Jenkins_brake_M->inputs = (((ExtU_Jenkins_brake_T *) Jenkins_brake_U));
  }

  /* external outputs */
  {
    ExtY_Jenkins_brake_T *Jenkins_brake_Y = (ExtY_Jenkins_brake_T *) malloc
      (sizeof(ExtY_Jenkins_brake_T));
    rt_VALIDATE_MEMORY(Jenkins_brake_M,Jenkins_brake_Y);
    Jenkins_brake_M->outputs = (Jenkins_brake_Y);
  }

  /* CarMaker parameter tuning */
  {
    Jenkins_brake_SetParams(Jenkins_brake_M, NULL, inf);
  }

  {
    ExtU_Jenkins_brake_T *Jenkins_brake_U = (ExtU_Jenkins_brake_T *)
      Jenkins_brake_M->inputs;
    ExtY_Jenkins_brake_T *Jenkins_brake_Y = (ExtY_Jenkins_brake_T *)
      Jenkins_brake_M->outputs;

    /* external inputs */
    (void)memset(Jenkins_brake_U, 0, sizeof(ExtU_Jenkins_brake_T));

    /* external outputs */
    Jenkins_brake_Y->ToCM = Jenkins_brake_rtZcmBrakeOut;
  }

  return Jenkins_brake_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *Jenkins_brake_main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)Jenkins_brake_main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { NULL, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 }
};

tQuantEntry *Jenkins_brake_DictDefines = DictDefines;
tQuantEntry *Jenkins_brake_main_DictDefines[] = {
  DictDefines,
  NULL
};

/* CarMaker bodyframe definitions. */
#ifndef RTMAKER

extern tMdlBdyFrame *Jenkins_brake_main_BdyFrameDefines[];
static tMdlBdyFrame BdyFrameDefines[] = {
  { (void*)0x01234567 },

  { (void*)0x89ABCDEF },

  { (void*)Jenkins_brake_main_BdyFrameDefines },

  { NULL }
};

tMdlBdyFrame *Jenkins_brake_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *Jenkins_brake_main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
