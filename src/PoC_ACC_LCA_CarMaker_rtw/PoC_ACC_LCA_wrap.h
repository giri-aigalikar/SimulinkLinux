/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/
#ifndef __POC_ACC_LCA_WRAP_H__
#define __POC_ACC_LCA_WRAP_H__
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
# define rtModel_PoC_ACC_LCA           RT_MODEL_PoC_ACC_LCA_T
#else
# define rtModel_PoC_ACC_LCA           tag_RTM_PoC_ACC_LCA_T
#endif                                 //CLASSIC_INTERFACE

#define ExternalInputs_PoC_ACC_LCA     ExtU_PoC_ACC_LCA_T
#define ExternalOutputs_PoC_ACC_LCA    ExtY_PoC_ACC_LCA_T
#ifndef PoC_ACC_LCA_rtModel

  typedef struct rtModel_PoC_ACC_LCA rtModel_PoC_ACC_LCA;

#endif

  /* Model registration function */
  rtModel_PoC_ACC_LCA *PoC_ACC_LCA (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)

  void rt_ODECreateIntegrationData (RTWSolverInfo *si);
  void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
  void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);

#endif

  /* Dictionary variables and other items of the model */
  extern struct tMatSuppDictDef *PoC_ACC_LCA_DictDefines;
  extern struct tMdlBdyFrame *PoC_ACC_LCA_BdyFrameDefines;

  /* Wrapper functions */
  void PoC_ACC_LCA_SetParams (rtModel_PoC_ACC_LCA *rtm,
      struct tMatSuppTunables *tuns,
      struct tInfos *Inf);
  int PoC_ACC_LCA_Register (void);

#ifdef __cplusplus

}
#endif
#endif                                 /* __POC_ACC_LCA_WRAP_H__ */
