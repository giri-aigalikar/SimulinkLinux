/***************************************************** target specific file ***/
/*  Wrapper module for Simulink models                                        */
/*  ------------------------------------------------------------------------  */
/*  (c) IPG Automotive GmbH    www.ipg-automotive.com   Fon: +49.721.98520-0  */
/*  Bannwaldallee 60      D-76185 Karlsruhe   Germany   Fax: +49.721.98520-99 */
/******************************************************************************/

#ifndef __SRM_1_B4_WRAP_H__
#define __SRM_1_B4_WRAP_H__

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
# define rtModel_SRM_1_b4          RT_MODEL_SRM_1_b4_T
#else
# define rtModel_SRM_1_b4          tag_RTM_SRM_1_b4_T
#endif //CLASSIC_INTERFACE

#define ExternalInputs_SRM_1_b4   ExtU_SRM_1_b4_T
#define ExternalOutputs_SRM_1_b4  ExtY_SRM_1_b4_T

#ifndef SRM_1_b4_rtModel
typedef struct rtModel_SRM_1_b4 rtModel_SRM_1_b4;
#endif

/* Model registration function */
rtModel_SRM_1_b4 *SRM_1_b4 (struct tInfos *Inf);

#if defined(CLASSIC_INTERFACE) && !defined(CM4SLDS)
void rt_ODECreateIntegrationData (RTWSolverInfo *si);
void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);
void rt_ODEDestroyIntegrationData(RTWSolverInfo *si);
#endif


/* Dictionary variables and other items of the model */
extern struct tMatSuppDictDef *SRM_1_b4_DictDefines;
extern struct tMdlBdyFrame *SRM_1_b4_BdyFrameDefines;


/* Wrapper functions */
void SRM_1_b4_SetParams (rtModel_SRM_1_b4 *rtm,
			struct tMatSuppTunables *tuns,
			struct tInfos *Inf);
int SRM_1_b4_Register (void);


#ifdef __cplusplus
}
#endif

#endif /* __SRM_1_B4_WRAP_H__ */

