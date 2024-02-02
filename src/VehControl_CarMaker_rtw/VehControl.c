/*
 * VehControl.c
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

#include <infoc.h>
#include <Log.h>
#include <InfoParam.h>
#include <DataDict.h>
#include <MatSupp.h>
#include "VehControl.h"
#include "VehControl_private.h"
#include "VehControl_wrap.h"

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

const cmVehicleControlOut VehControl_rtZcmVehicleControlOut = {
  0.0,                                 /* SST */
  0.0,                                 /* Key */

  {
    0.0,                               /* s0 */
    0.0,                               /* s1 */
    0.0,                               /* s2 */
    0.0,                               /* s3 */
    0.0                                /* s4 */
  },                                   /* UserSignal */
  0.0,                                 /* GearNo */
  0.0,                                 /* SelectorCtrl */
  0.0,                                 /* Brake */
  0.0,                                 /* BrakePark */
  0.0,                                 /* BrakeLever */
  0.0,                                 /* Clutch */
  0.0,                                 /* Gas */

  {
    0.0,                               /* Ang */
    0.0,                               /* AngVel */
    0.0,                               /* AngAcc */
    0.0                                /* Trq */
  },                                   /* Steering */

  {
    0.0,                               /* RollAng */
    0.0                                /* RollAngVel */
  },                                   /* Rider */

  {
    0.0,                               /* LowBeam */
    0.0,                               /* HighBeam */
    0.0,                               /* Daytime */
    0.0,                               /* ParkL */
    0.0,                               /* ParkR */
    0.0,                               /* IndL */
    0.0,                               /* IndR */
    0.0,                               /* FogFrontL */
    0.0,                               /* FogFrontR */
    0.0,                               /* FogRear */
    0.0,                               /* Brake */
    0.0                                /* Reverse */
  }                                    /* Lights */
} ;                                    /* cmVehicleControlOut ground */

/* Block parameters (default storage) */
P_VehControl_T VehControl_P = {
  /* Expression: 0
   * Referenced by: '<S1>/SST'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Key'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/UserSignal.s0'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/UserSignal.s1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/UserSignal.s2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/UserSignal.s3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/UserSignal.s4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/GearNo'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/SelectorCtrl'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BrakePark'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/BrakeLever'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Clutch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Gas'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Steering.Ang'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Steering.AngVel'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Steering.AngAcc'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Steering.Trq'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Rider.RollAng'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Rider.RollAngVel'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.LowBeam'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.HighBeam'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.Daytime'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.ParkL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.ParkR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.IndL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.IndR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.FogFrontL'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.FogFrontR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.FogRear'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.Brake'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Lights.Reverse'
   */
  0.0
};

const cmVehicleControlIn VehControl_rtZcmVehicleControlIn = { 0.0,/* SST */
  0.0,                                 /* Key */

  { 0.0,                               /* s0 */
    0.0,                               /* s1 */
    0.0,                               /* s2 */
    0.0,                               /* s3 */
    0.0                                /* s4 */
  },                                   /* UserSignal */
  0.0,                                 /* GearNo */
  0.0,                                 /* SelectorCtrl */
  0.0,                                 /* Brake */
  0.0,                                 /* BrakePark */
  0.0,                                 /* BrakeLever */
  0.0,                                 /* Clutch */
  0.0,                                 /* Gas */

  { 0.0,                               /* Ang */
    0.0,                               /* AngVel */
    0.0,                               /* AngAcc */
    0.0                                /* Trq */
  },                                   /* Steering */

  { 0.0,                               /* RollAng */
    0.0                                /* RollAngVel */
  },                                   /* Rider */

  { 0.0,                               /* LowBeam */
    0.0,                               /* HighBeam */
    0.0,                               /* Daytime */
    0.0,                               /* ParkL */
    0.0,                               /* ParkR */
    0.0,                               /* IndL */
    0.0,                               /* IndR */
    0.0,                               /* FogFrontL */
    0.0,                               /* FogFrontR */
    0.0,                               /* FogRear */
    0.0,                               /* Brake */
    0.0                                /* Reverse */
  }                                    /* Lights */
};

/* Model step function */
void VehControl_step(RT_MODEL_VehControl_T *const VehControl_M)
{
  ExtU_VehControl_T *VehControl_U = (ExtU_VehControl_T *) VehControl_M->inputs;
  ExtY_VehControl_T *VehControl_Y = (ExtY_VehControl_T *) VehControl_M->outputs;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/UserSignal.s0'
   *  Constant: '<S1>/UserSignal.s1'
   *  Constant: '<S1>/UserSignal.s2'
   *  Constant: '<S1>/UserSignal.s3'
   *  Constant: '<S1>/UserSignal.s4'
   */
  VehControl_Y->ToCM.UserSignal.s0 = VehControl_P.UserSignals0_Value;
  VehControl_Y->ToCM.UserSignal.s1 = VehControl_P.UserSignals1_Value;
  VehControl_Y->ToCM.UserSignal.s2 = VehControl_P.UserSignals2_Value;
  VehControl_Y->ToCM.UserSignal.s3 = VehControl_P.UserSignals3_Value;
  VehControl_Y->ToCM.UserSignal.s4 = VehControl_P.UserSignals4_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Steering.Ang'
   *  Constant: '<S1>/Steering.AngAcc'
   *  Constant: '<S1>/Steering.AngVel'
   *  Constant: '<S1>/Steering.Trq'
   */
  VehControl_Y->ToCM.Steering.Ang = VehControl_P.SteeringAng_Value;
  VehControl_Y->ToCM.Steering.AngVel = VehControl_P.SteeringAngVel_Value;
  VehControl_Y->ToCM.Steering.AngAcc = VehControl_P.SteeringAngAcc_Value;
  VehControl_Y->ToCM.Steering.Trq = VehControl_P.SteeringTrq_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Rider.RollAng'
   *  Constant: '<S1>/Rider.RollAngVel'
   */
  VehControl_Y->ToCM.Rider.RollAng = VehControl_P.RiderRollAng_Value;
  VehControl_Y->ToCM.Rider.RollAngVel = VehControl_P.RiderRollAngVel_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/Lights.Brake'
   *  Constant: '<S1>/Lights.Daytime'
   *  Constant: '<S1>/Lights.FogFrontL'
   *  Constant: '<S1>/Lights.FogFrontR'
   *  Constant: '<S1>/Lights.FogRear'
   *  Constant: '<S1>/Lights.HighBeam'
   *  Constant: '<S1>/Lights.IndL'
   *  Constant: '<S1>/Lights.IndR'
   *  Constant: '<S1>/Lights.LowBeam'
   *  Constant: '<S1>/Lights.ParkL'
   *  Constant: '<S1>/Lights.ParkR'
   *  Constant: '<S1>/Lights.Reverse'
   */
  VehControl_Y->ToCM.Lights.LowBeam = VehControl_P.LightsLowBeam_Value;
  VehControl_Y->ToCM.Lights.HighBeam = VehControl_P.LightsHighBeam_Value;
  VehControl_Y->ToCM.Lights.Daytime = VehControl_P.LightsDaytime_Value;
  VehControl_Y->ToCM.Lights.ParkL = VehControl_P.LightsParkL_Value;
  VehControl_Y->ToCM.Lights.ParkR = VehControl_P.LightsParkR_Value;
  VehControl_Y->ToCM.Lights.IndL = VehControl_P.LightsIndL_Value;
  VehControl_Y->ToCM.Lights.IndR = VehControl_P.LightsIndR_Value;
  VehControl_Y->ToCM.Lights.FogFrontL = VehControl_P.LightsFogFrontL_Value;
  VehControl_Y->ToCM.Lights.FogFrontR = VehControl_P.LightsFogFrontR_Value;
  VehControl_Y->ToCM.Lights.FogRear = VehControl_P.LightsFogRear_Value;
  VehControl_Y->ToCM.Lights.Brake = VehControl_P.LightsBrake_Value;
  VehControl_Y->ToCM.Lights.Reverse = VehControl_P.LightsReverse_Value;

  /* BusCreator generated from: '<Root>/ToCM' incorporates:
   *  Constant: '<S1>/BrakeLever'
   *  Constant: '<S1>/BrakePark'
   *  Constant: '<S1>/Clutch'
   *  Constant: '<S1>/Gas'
   *  Constant: '<S1>/GearNo'
   *  Constant: '<S1>/Key'
   *  Constant: '<S1>/SST'
   *  Constant: '<S1>/SelectorCtrl'
   *  Inport: '<Root>/FromCM'
   *  Outport: '<Root>/ToCM'
   */
  VehControl_Y->ToCM.SST = VehControl_P.SST_Value;
  VehControl_Y->ToCM.Key = VehControl_P.Key_Value;
  VehControl_Y->ToCM.GearNo = VehControl_P.GearNo_Value;
  VehControl_Y->ToCM.SelectorCtrl = VehControl_P.SelectorCtrl_Value;
  VehControl_Y->ToCM.Brake = VehControl_U->FromCM.Brake;
  VehControl_Y->ToCM.BrakePark = VehControl_P.BrakePark_Value;
  VehControl_Y->ToCM.BrakeLever = VehControl_P.BrakeLever_Value;
  VehControl_Y->ToCM.Clutch = VehControl_P.Clutch_Value;
  VehControl_Y->ToCM.Gas = VehControl_P.Gas_Value;
}

/* Model initialize function */
void VehControl_initialize(RT_MODEL_VehControl_T *const VehControl_M)
{
  UNUSED_PARAMETER(VehControl_M);
}

/* Model terminate function */
void VehControl_terminate(RT_MODEL_VehControl_T * VehControl_M)
{
  /* model code */
  rt_FREE(VehControl_M->inputs);
  rt_FREE(VehControl_M->outputs);
  rt_FREE(VehControl_M);
}

/* Model data allocation function */
RT_MODEL_VehControl_T *VehControl(struct tInfos *inf)
{
  RT_MODEL_VehControl_T *VehControl_M;
  VehControl_M = (RT_MODEL_VehControl_T *) malloc(sizeof(RT_MODEL_VehControl_T));
  if (VehControl_M == NULL) {
    return NULL;
  }

  (void) memset((char *)VehControl_M, 0,
                sizeof(RT_MODEL_VehControl_T));
  MatSupp_Init();

  /* external inputs */
  {
    ExtU_VehControl_T *VehControl_U = (ExtU_VehControl_T *) malloc(sizeof
      (ExtU_VehControl_T));
    rt_VALIDATE_MEMORY(VehControl_M,VehControl_U);
    VehControl_M->inputs = (((ExtU_VehControl_T *) VehControl_U));
  }

  /* external outputs */
  {
    ExtY_VehControl_T *VehControl_Y = (ExtY_VehControl_T *) malloc(sizeof
      (ExtY_VehControl_T));
    rt_VALIDATE_MEMORY(VehControl_M,VehControl_Y);
    VehControl_M->outputs = (VehControl_Y);
  }

  /* CarMaker parameter tuning */
  {
    VehControl_SetParams(VehControl_M, NULL, inf);
  }

  {
    ExtU_VehControl_T *VehControl_U = (ExtU_VehControl_T *) VehControl_M->inputs;
    ExtY_VehControl_T *VehControl_Y = (ExtY_VehControl_T *)
      VehControl_M->outputs;

    /* external inputs */
    VehControl_U->FromCM = VehControl_rtZcmVehicleControlIn;

    /* external outputs */
    VehControl_Y->ToCM = VehControl_rtZcmVehicleControlOut;
  }

  return VehControl_M;
}

/* CarMaker dictionary definitions. */
extern tQuantEntry *VehControl_main_DictDefines[];
static tQuantEntry DictDefines[] = {
  { (void*)0x01234567, (void*)0x89ABCDEF, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { (void*)VehControl_main_DictDefines, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 },

  { NULL, NULL, NULL, 0, 0, 0, "", 0.0, 0.0 }
};

tQuantEntry *VehControl_DictDefines = DictDefines;
tQuantEntry *VehControl_main_DictDefines[] = {
  DictDefines,
  NULL
};

/* CarMaker bodyframe definitions. */
#ifndef RTMAKER

extern tMdlBdyFrame *VehControl_main_BdyFrameDefines[];
static tMdlBdyFrame BdyFrameDefines[] = {
  { (void*)0x01234567 },

  { (void*)0x89ABCDEF },

  { (void*)VehControl_main_BdyFrameDefines },

  { NULL }
};

tMdlBdyFrame *VehControl_BdyFrameDefines = BdyFrameDefines;
tMdlBdyFrame *VehControl_main_BdyFrameDefines[] = {
  BdyFrameDefines,
  NULL
};

#endif
