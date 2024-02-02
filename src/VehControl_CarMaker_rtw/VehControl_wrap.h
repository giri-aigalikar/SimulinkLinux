/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/

#ifndef __VEHCONTROL_WRAP_H__
#define __VEHCONTROL_WRAP_H__

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
# define rtModel_VehControl          RT_MODEL_VehControl_T
#else
# define rtModel_VehControl          tag_RTM_VehControl_T
#endif //CLASSIC_INTERFACE

#define ExternalInputs_VehControl   ExtU_VehControl_T
#define ExternalOutputs_VehControl  ExtY_VehControl_T

#ifndef VehControl_rtModel
typedef struct rtModel_VehControl rtModel_VehControl;
#endif

/* Model registration function */
rtModel_VehControl *VehControl (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)
void rt_ODECreateIntegrationData (RTWSolverInfo *si);
void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);
#endif


/* Dictionary variables and other items of the model */
extern struct tMatSuppDictDef *VehControl_DictDefines;
extern struct tMdlBdyFrame *VehControl_BdyFrameDefines;


/* Wrapper functions */
void VehControl_SetParams (rtModel_VehControl *rtm,
			struct tMatSuppTunables *tuns,
			struct tInfos *Inf);
int VehControl_Register (void);


#ifdef __cplusplus
}
#endif

#endif /* __VEHCONTROL_WRAP_H__ */

