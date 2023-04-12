/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/
#ifndef __JENKINS_BRAKE_WRAP_H__
#define __JENKINS_BRAKE_WRAP_H__
#ifndef IS_CAR
# define IS_CAR
#endif

#ifdef __cplusplus

extern "C" {

#endif

  struct tInfos;
  struct tMdlBdyFrame;
  struct tMatSuppDictDef;
  struct tMatSuppTunables;

#ifdef CLASSIC_INTERFACE
# define rtModel_Jenkins_brake         RT_MODEL_Jenkins_brake_T
#else
# define rtModel_Jenkins_brake         tag_RTM_Jenkins_brake_T
#endif                                 //CLASSIC_INTERFACE

#define ExternalInputs_Jenkins_brake   ExtU_Jenkins_brake_T
#define ExternalOutputs_Jenkins_brake  ExtY_Jenkins_brake_T
#ifndef Jenkins_brake_rtModel

  typedef struct rtModel_Jenkins_brake rtModel_Jenkins_brake;

#endif

  /* Model registration function */
  rtModel_Jenkins_brake *Jenkins_brake (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)

  void rt_ODECreateIntegrationData (RTWSolverInfo *si);
  void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
  void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);

#endif

  /* Dictionary variables and other items of the model */
  extern struct tMatSuppDictDef *Jenkins_brake_DictDefines;
  extern struct tMdlBdyFrame *Jenkins_brake_BdyFrameDefines;

  /* Wrapper functions */
  void Jenkins_brake_SetParams (rtModel_Jenkins_brake *rtm,
      struct tMatSuppTunables *tuns,
      struct tInfos *Inf);
  int Jenkins_brake_Register (void);

#ifdef __cplusplus

}
#endif
#endif                                 /* __JENKINS_BRAKE_WRAP_H__ */
