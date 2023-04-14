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
# define rtModel_Jenkins_Brake          RT_MODEL_Jenkins_Brake_T
#else
# define rtModel_Jenkins_Brake          tag_RTM_Jenkins_Brake_T
#endif //CLASSIC_INTERFACE

#define ExternalInputs_Jenkins_Brake   ExtU_Jenkins_Brake_T
#define ExternalOutputs_Jenkins_Brake  ExtY_Jenkins_Brake_T

#ifndef Jenkins_Brake_rtModel
typedef struct rtModel_Jenkins_Brake rtModel_Jenkins_Brake;
#endif

/* Model registration function */
rtModel_Jenkins_Brake *Jenkins_Brake (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)
void rt_ODECreateIntegrationData (RTWSolverInfo *si);
void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);
#endif


/* Dictionary variables and other items of the model */
extern struct tMatSuppDictDef *Jenkins_Brake_DictDefines;
extern struct tMdlBdyFrame *Jenkins_Brake_BdyFrameDefines;


/* Wrapper functions */
void Jenkins_Brake_SetParams (rtModel_Jenkins_Brake *rtm,
			struct tMatSuppTunables *tuns,
			struct tInfos *Inf);
int Jenkins_Brake_Register (void);


#ifdef __cplusplus
}
#endif

#endif /* __JENKINS_BRAKE_WRAP_H__ */

