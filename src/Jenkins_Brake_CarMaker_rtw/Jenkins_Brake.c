/*
 * Jenkins_Brake.c
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

#include <infoc.h>
#include <Log.h>
#include <InfoParam.h>
#include <DataDict.h>
#include <MatSupp.h>
#include "Jenkins_Brake.h"
#include "Jenkins_Brake_private.h"
#include "Jenkins_Brake_wrap.h"

/* CarMaker: Compile- and link-time checks for the right Matlab version. */
#if MATSUPP_NUMVER == 91000

/* The following statement will cause an "unresolved symbol" error when
   linking with a MatSupp library built for the wrong Matlab version. */
extern int MATSUPP_VARNAME(MatSupp, MATSUPP_NUMVER);
void *MATSUPP_VARNAME(MODEL, MATSUPP_NUMVER) = &MATSUPP_VARNAME(MatSupp,
  MATSUPP_NUMVER);

#else
# error Compiler options unsuitable for C code created with Matlab 9.10
#endif

const cmBrakeOut Jenkins_Brake_rtZcmBrakeOut = {
  {
    {
      0.0,                             /* Trq_WB */
      0.0,                             /* Trq_PB */
      0.0                              /* Trq_BrakeReg_trg */
    },                                 /* FL */

    {
      0.0,                             /* Trq_WB */
      0.0,                             /* Trq_PB */
      0.0                              /* Trq_BrakeReg_trg */
    },                                 /* FR */

    {
      0.0,                             /* Trq_WB */
      0.0,                             /* Trq_PB */
      0.0                              /* Trq_BrakeReg_trg */
    },                                 /* RL */

    {
      0.0,                             /* Trq_WB */
      0.0,                             /* Trq_PB */
      0.0                              /* Trq_BrakeReg_trg */
    }                                  /* RR */
  },                                   /* WheelOut */

  {
    0.0,                               /* d0 */
    0.0,                               /* d1 */
    0.0,                               /* d2 */
    0.0                                /* d3 */
  }                                    /* Trq_DriveSrc_trg */
} ;                                    /* cmBrakeOut ground */

/* Block parameters (default storage) */
P_Jenkins_Brake_T Jenkins_Brake_P = {
  /* Expression: 25
   * Referenced by: '<Root>/Gain'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.FL.Trq_PB'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.FL.Trq_BrakeReg_trg'
   */
  0.0,

  /* Expression: 15
   * Referenced by: '<Root>/Gain1'
   */
  15.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.FR.Trq_PB'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.FR.Trq_BrakeReg_trg'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.RL.Trq_PB'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.RL.Trq_BrakeReg_trg'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.RR.Trq_PB'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/WheelOut.RR.Trq_BrakeReg_trg'
   */
  0.0,

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

/* Model step function */
void Jenkins_Brake_step(RT_MODEL_Jenkins_Brake_T *const Jenkins_Brake_M)
{
  ExtU_Jenkins_Brake_T *Jenkins_Brake_U = (ExtU_Jenkins_Brake_T *)
    Jenkins_Brake_M->inputs;
  ExtY_Jenkins_Brake_T *Jenkins_Brake_Y = (ExtY_Jenkins_Brake_T *)
    Jenkins_Brake_M->outputs;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FL.Trq_BrakeReg_trg'
   *  Constant: '<S1>/WheelOut.FL.Trq_PB'
   *  Gain: '<Root>/Gain'
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_Brake_Y->ToCM.WheelOut.FL.Trq_WB = Jenkins_Brake_P.Gain_Gain *
    Jenkins_Brake_U->FromCM.WheelIn.RR.Trq_BrakeReg;
  Jenkins_Brake_Y->ToCM.WheelOut.FL.Trq_PB =
    Jenkins_Brake_P.WheelOutFLTrq_PB_Value;
  Jenkins_Brake_Y->ToCM.WheelOut.FL.Trq_BrakeReg_trg =
    Jenkins_Brake_P.WheelOutFLTrq_BrakeReg_trg_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.FR.Trq_BrakeReg_trg'
   *  Constant: '<S1>/WheelOut.FR.Trq_PB'
   *  Gain: '<Root>/Gain1'
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_Brake_Y->ToCM.WheelOut.FR.Trq_WB = Jenkins_Brake_P.Gain1_Gain *
    Jenkins_Brake_U->FromCM.WheelIn.RL.Trq_BrakeReg;
  Jenkins_Brake_Y->ToCM.WheelOut.FR.Trq_PB =
    Jenkins_Brake_P.WheelOutFRTrq_PB_Value;
  Jenkins_Brake_Y->ToCM.WheelOut.FR.Trq_BrakeReg_trg =
    Jenkins_Brake_P.WheelOutFRTrq_BrakeReg_trg_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RL.Trq_BrakeReg_trg'
   *  Constant: '<S1>/WheelOut.RL.Trq_PB'
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_Brake_Y->ToCM.WheelOut.RL.Trq_WB =
    Jenkins_Brake_U->FromCM.WheelIn.FR.Trq_BrakeReg;
  Jenkins_Brake_Y->ToCM.WheelOut.RL.Trq_PB =
    Jenkins_Brake_P.WheelOutRLTrq_PB_Value;
  Jenkins_Brake_Y->ToCM.WheelOut.RL.Trq_BrakeReg_trg =
    Jenkins_Brake_P.WheelOutRLTrq_BrakeReg_trg_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/WheelOut.RR.Trq_BrakeReg_trg'
   *  Constant: '<S1>/WheelOut.RR.Trq_PB'
   *  Inport: '<Root>/FromCM'
   */
  Jenkins_Brake_Y->ToCM.WheelOut.RR.Trq_WB =
    Jenkins_Brake_U->FromCM.WheelIn.FL.Trq_BrakeReg;
  Jenkins_Brake_Y->ToCM.WheelOut.RR.Trq_PB =
    Jenkins_Brake_P.WheelOutRRTrq_PB_Value;
  Jenkins_Brake_Y->ToCM.WheelOut.RR.Trq_BrakeReg_trg =
    Jenkins_Brake_P.WheelOutRRTrq_BrakeReg_trg_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Trq_DriveSrc_trg.d0'
   *  Constant: '<S1>/Trq_DriveSrc_trg.d1'
   *  Constant: '<S1>/Trq_DriveSrc_trg.d2'
   *  Constant: '<S1>/Trq_DriveSrc_trg.d3'
   */
  Jenkins_Brake_Y->ToCM.Trq_DriveSrc_trg.d0 =
    Jenkins_Brake_P.Trq_DriveSrc_trgd0_Value;
  Jenkins_Brake_Y->ToCM.Trq_DriveSrc_trg.d1 =
    Jenkins_Brake_P.Trq_DriveSrc_trgd1_Value;
  Jenkins_Brake_Y->ToCM.Trq_DriveSrc_trg.d2 =
    Jenkins_Brake_P.Trq_DriveSrc_trgd2_Value;
  Jenkins_Brake_Y->ToCM.Trq_DriveSrc_trg.d3 =
    Jenkins_Brake_P.Trq_DriveSrc_trgd3_Value;
}

/* Model initialize function */
void Jenkins_Brake_initialize(RT_MODEL_Jenkins_Brake_T *const Jenkins_Brake_M)
{
  UNUSED_PARAMETER(Jenkins_Brake_M);
}

/* Model terminate function */
void Jenkins_Brake_terminate(RT_MODEL_Jenkins_Brake_T * Jenkins_Brake_M)
{
  /* model code */
  rt_FREE(Jenkins_Brake_M->inputs);
  rt_FREE(Jenkins_Brake_M->outputs);
  rt_FREE(Jenkins_Brake_M);
}

/* Model data allocation function */
RT_MODEL_Jenkins_Brake_T *Jenkins_Brake(struct tInfos *inf)
{
  RT_MODEL_Jenkins_Brake_T *Jenkins_Brake_M;
  Jenkins_Brake_M = (RT_MODEL_Jenkins_Brake_T *) malloc(sizeof
    (RT_MODEL_Jenkins_Brake_T));
  if (Jenkins_Brake_M == NULL) {
    return NULL;
  }

  (void) memset((char *)Jenkins_Brake_M, 0,
                sizeof(RT_MODEL_Jenkins_Brake_T));
  MatSupp_Init();

  /* external inputs */
  {
    ExtU_Jenkins_Brake_T *Jenkins_Brake_U = (ExtU_Jenkins_Brake_T *) malloc
      (sizeof(ExtU_Jenkins_Brake_T));
    rt_VALIDATE_MEMORY(Jenkins_Brake_M,Jenkins_Brake_U);
    Jenkins_Brake_M->inputs = (((ExtU_Jenkins_Brake_T *) Jenkins_Brake_U));
  }

  /* external outputs */
  {
    ExtY_Jenkins_Brake_T *Jenkins_Brake_Y = (ExtY_Jenkins_Brake_T *) malloc
      (sizeof(ExtY_Jenkins_Brake_T));
    rt_VALIDATE_MEMORY(Jenkins_Brake_M,Jenkins_Brake_Y);
    Jenkins_Brake_M->outputs = (Jenkins_Brake_Y);
  }

  /* CarMaker parameter tuning */
  {
    Jenkins_Brake_SetParams(Jenkins_Brake_M, NULL, inf);
  }

  {
    ExtU_Jenkins_Brake_T *Jenkins_Brake_U = (ExtU_Jenkins_Brake_T *)
      Jenkins_Brake_M->inputs;
    ExtY_Jenkins_Brake_T *Jenkins_Brake_Y = (ExtY_Jenkins_Brake_T *)
      Jenkins_Brake_M->outputs;

    /* external inputs */
    (void)memset(Jenkins_Brake_U, 0, sizeof(ExtU_Jenkins_Brake_T));

    /* external outputs */
    Jenkins_Brake_Y->ToCM = Jenkins_Brake_rtZcmBrakeOut;
  }

  return Jenkins_Brake_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *Jenkins_Brake_main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)Jenkins_Brake_main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { NULL, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 }
};

tQuantEntry *Jenkins_Brake_DictDefines = DictDefines;
tQuantEntry *Jenkins_Brake_main_DictDefines[] = {
  DictDefines,
  NULL
};

/* CarMaker bodyframe definitions. */
#ifndef RTMAKER

extern tMdlBdyFrame *Jenkins_Brake_main_BdyFrameDefines[];
static tMdlBdyFrame BdyFrameDefines[] = {
  { (void*)0x01234567 },

  { (void*)0x89ABCDEF },

  { (void*)Jenkins_Brake_main_BdyFrameDefines },

  { NULL }
};

tMdlBdyFrame *Jenkins_Brake_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *Jenkins_Brake_main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
