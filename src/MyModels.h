/*
 *****************************************************************************
 *  CarMaker - Version 14.0.1
 *  Virtual Test Driving Tool
 *
 *  Copyright ©1998-2025 IPG Automotive GmbH. All rights reserved.
 *  www.ipg-automotive.com
 *****************************************************************************
 */

#ifndef _MYMODELS_H__
#define _MYMODELS_H__

#ifdef __cplusplus
extern "C" {
#endif

int VC_Register_AccelCtrl(void);
int Aero_Register_MyModel(void);
int Battery_Register_MyModel(void);
int BatteryCU_Register_MyModel(void);
int Brake_Register_MyModel(void);
int Brake_Register_MyModelHydESPWrap(void);
int Vehicle_Register_MyModel(void);
int Clutch_Register_MyModel(void);
int DriveLine_Register_MyModel(void);
int DriveLineXWD_Register_MyModel(void);
int Engine_Register_MyModel(void);
int EngineCU_Register_MyModel(void);
int Environment_Register_MyModel(void);
int GearBox_Register_MyModel(void);
int HydBrakeCU_Register_MyModel(void);
int Motor_Register_MyModel(void);
int MotorCU_Register_MyModel(void);
int PowerSupply_Register_MyModel(void);
int PowerTrain_Register_MyModel(void);
int PowerTrainXWD_Register_MyModel(void);
int PTControl_Register_MyModel(void);
int PTControlOSM_Register_MyModel(void);
int PTGenCoupling_Register_MyModel(void);
int Inverter_Register_MyModel(void);
int Steering_Register_MyModel(void);
int Susp_BufferSystem_Register_MyModel(void);
int Susp_Buffer_Register_MyModel(void);
int Susp_DamperSystem_Register_MyModel(void);
int Susp_Damper_Register_MyModel(void);
int Susp_TopMount_Register_MyModel(void);
int Susp_FrcSystem_Register_MyModel(void);
int Susp_SpringSystem_Register_MyModel(void);
int Susp_Spring_Register_MyModel(void);
int Susp_ParasiticFriction_Register_MyModel(void);
int Susp_ParasiticStiffness_Register_MyModel(void);
int Susp_StabiSystem_Register_MyModel(void);
int Susp_Stabi_Register_MyModel(void);
int Susp_KnC_Register_MyModel(void);
int Susp_KnC_Register_MyModel_LR(void);
int Susp_KnC_Register_MyModel_FrcCpl(void);
int Susp_KnC_Register_MyModel_AuxFMU(void);
int Tire_Register_MyModelCPI(void);
int Tire_Register_MyModelSTI(void);
int TireCPMod_Register_MyModel(void);
int TireCPMod_Register_MyModelFourPoster(void);
int Tire_Register_MyModelRTTireWrap(void);
int TransmCU_Register_MyModel(void);
int VehicleControl_Register_MyModel(void);
int VehicleControl_Register_MyDigitalGearSelector(void);
int VhclOperator_Register_MyModel(void);
int SelectorCtrlMapping_Register_MySelectorCtrlMapping(void);
int UserDriver_Register_MyModel(void);
int AEB_Register_MyModel(void);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _MYMODELS_H__ */
