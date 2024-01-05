/**
 * @file cap_canApi.c
 * 
 * Project: Tamkin (e-VCU)
 * \file    cap_canApi.c
 * \author  Sonuzun C. , Culhacioglu F.
 * \brief   Module for CAN Api functions
 * \details	This file defines a set of CAN Api functions.
 *          
 *
 * \copyright Copyright (c) 2023 FEV GmbH, Germany.
 *
 * This file has been created with comFramework - codeGenerator version 1.9.0,
 * see http://sourceforge.net/projects/comframe/
 *
 * Copyright (C) 2023 FEV Europe GmbH (mailto:Peter.Vranken@FEV.com)
 *
 * All rights reserved. Reproduction in whole or in part is prohibited without the written
 * consent of the copyright owner.
 */

/*
 * Include files
 */

#include "cap_canApi_pub.h"
#include "cap_canApi_priv.h"

/*
 * Defines
 */

 

/*
 * Local type definitions
 */

 

/*
 * Local prototypes
 */

 

/*
 * Data definitions
 */

#define CPU1_START_SEC_CODE 
#include "MemMap.h"



void cap_canRx_1ms(){
}

void cap_canRx_5ms(){
	cap_getRxSignals_AVL_RPM_WHL_CHS1();/*131*/ /*size:12*/ /*5ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_AVL_RPM_WHL_CHS2();/*131*/ /*size:12*/ /*5ms*/ /*Cyclic*/ /*CHS2*/ 


}

void cap_canRx_10ms(){
	static uint16 cycle = 0;

	cap_getRxSignals_ESC_A_CHS1();/*200*/ /*size:4*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_ABS_ESC_01_CHS1();/*180*/ /*size:1*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_IEB_01_CHS1();/*210*/ /*size:2*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_BundleEAFlexrayToAECANFD10msNo1_CHS1();/*296*/ /*size:64*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_SFA_SteerWheel_Info_CHS1();/*88*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_ESC_A_CHS2();/*200*/ /*size:4*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ 


	cap_getRxSignals_ABS_ESC_01_CHS2();/*180*/ /*size:1*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ 


	cap_getRxSignals_IEB_01_CHS2();/*210*/ /*size:2*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ 


	cap_getRxSignals_BundleEAFlexrayToAECANFD10msNo1_CHS2();/*296*/ /*size:64*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ 


	cap_getRxSignals_SFA_SteerWheel_Info_CHS2();/*88*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ 


	cap_getRxSignals_BMS_ChgParamReq_PT();/*132*/ /*size:32*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_CurMeas_PT();/*137*/ /*size:4*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_HighVoltageStorage10msNo2_PT();/*143*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_TracEMacElectc1Time10msNo1_PT();/*145*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_Error_PT();/*162*/ /*size:5*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_HVMeas_PT();/*168*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_TracEMacElectc2Time10msNo1_PT();/*170*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_PowerCont_PT();/*172*/ /*size:24*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_RelayStatus_PT();/*177*/ /*size:4*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_Sts_PT();/*182*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_WarnMsg_PT();/*187*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_DCDC_VCU_Measure_Fbk_PT();/*249*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_DCDC_VCU_Req_Fbk_PT();/*254*/ /*size:7*/ /*10ms*/ /*Cyclic*/ /*PT*/ 



	if(cycle%30==0){
		cap_getRxSignals_ST_GWS_BCAN();/*407*/ /*size:4*/ /*30ms*/ /*Cyclic*/ /*BCAN*/ 


	}	
	if(cycle%50==0){
		cap_getRxSignals_ST_STAB_DSC_CHS1();/*213*/ /*size:8*/ /*50ms*/ /*Cyclic*/ /*CHS1*/ 


		cap_getRxSignals_ST_STAB_DSC_CHS2();/*213*/ /*size:8*/ /*50ms*/ /*Cyclic*/ /*CHS2*/ 


	}
	cycle=cycle+10;

	if(cycle>= 150){
		cycle = 0;
	}
}

void cap_canRx_20ms(){
	cap_getRxSignals_EBCM_ACC_LONG_LAT_YAW_CHS1();/*140*/ /*size:5*/ /*20ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_EBCM_STATUS_CHS1();/*150*/ /*size:7*/ /*20ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_BundleEAFlexrayToAECANFD20msNo2_CHS1();/*297*/ /*size:20*/ /*20ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_BundleEAFlexrayToCANFD20msNo1_CHS1();/*289*/ /*size:32*/ /*20ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_EBCM_STATUS_CHS2();/*150*/ /*size:7*/ /*20ms*/ /*Cyclic*/ /*CHS2*/ 


	cap_getRxSignals_BundleEAFlexrayToCANFD20msNo1_CHS2();/*289*/ /*size:32*/ /*20ms*/ /*Cyclic*/ /*CHS2*/ 


}

void cap_canRx_100ms(){

	static uint16 cycle = 0;

	cap_getRxSignals_FZU_ChargingControl_BCAN();/*451*/ /*size:1*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ 


	cap_getRxSignals_FAHRGESTELLNUMMER_BCAN();/*896*/ /*size:7*/ /*100ms*/ /*NoMsgSendType*/ /*BCAN*/ 


	cap_getRxSignals_CON_VEH_BCAN();/*60*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ 


	cap_getRxSignals_CLAMP_STAT_BCAN();/*497*/ /*size:3*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ 


	cap_getRxSignals_CLAMP_STAT_CHS1();/*497*/ /*size:3*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_TLT_RW_CHS1();/*911*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_ST_STAB_DSC_2_CHS1();/*214*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ 


	cap_getRxSignals_ST_STAB_DSC_2_CHS2();/*214*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS2*/ 


	cap_getRxSignals_OBC_01_100ms_PT();/*411*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_DCDC_01_100ms_PT();/*634*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_CellTempMeas2_PT();/*395*/ /*size:12*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_TracEMacElectc1Time100msNo1_PT();/*314*/ /*size:32*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_TracEMacElectc2Time100msNo1_PT();/*326*/ /*size:32*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_CellTemp_PT();/*389*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_CellTempMeas_PT();/*394*/ /*size:64*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_CellVolMeas1_PT();/*399*/ /*size:48*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_CellVolMeas2_PT();/*404*/ /*size:48*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_OBC_Status_PT();/*405*/ /*size:20*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_CellVolMeas3_PT();/*409*/ /*size:64*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_CoolantInletOutletTmp_PT();/*414*/ /*size:5*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_Insulation_PT();/*419*/ /*size:4*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_VCU_THMReq_PT();/*424*/ /*size:6*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_BMS_VolMeas_PT();/*429*/ /*size:12*/ /*100ms*/ /*Cyclic*/ /*PT*/ 


	cap_getRxSignals_DCDC_VCU_Temperature_Fbk_PT();/*450*/ /*size:7*/ /*100ms*/ /*Cyclic*/ /*PT*/ 



	if(cycle%200==0){
		cap_getRxSignals_BMS_HistData_PT();/*517*/ /*size:3*/ /*200ms*/ /*Cyclic*/ /*PT*/ 


		cap_getRxSignals_HighVoltageStorage200msNo1_PT();/*1107*/ /*size:4*/ /*200ms*/ /*Cyclic*/ /*PT*/ 


	}	
	if(cycle%300==0){
		cap_getRxSignals_Kilometerstand_2_BCAN();/*490*/ /*size:8*/ /*300ms*/ /*Cyclic*/ /*BCAN*/ 


	}	
	if(cycle%500==0){
		cap_getRxSignals_OBC_Temperature_PT();/*645*/ /*size:4*/ /*500ms*/ /*Cyclic*/ /*PT*/ 


	}
	if(cycle%1000==0){
		cap_getRxSignals_RELATIVZEIT_BCAN();/*1090*/ /*size:4*/ /*1000ms*/ /*Cyclic*/ /*BCAN*/ 


		cap_getRxSignals_A_TEMP_BCAN();/*749*/ /*size:2*/ /*1000ms*/ /*Cyclic*/ /*BCAN*/ 


		cap_getRxSignals_StatusCrashIdentETractSys1_PT();/*1237*/ /*size:8*/ /*1000ms*/ /*Cyclic*/ /*PT*/ 


		cap_getRxSignals_StatusCrashIdentETractSys2_PT();/*1239*/ /*size:8*/ /*1000ms*/ /*Cyclic*/ /*PT*/ 


	}
	if(cycle%5000==0){
		cap_getRxSignals_STAT_ANHAENGER_BCAN();/*632*/ /*size:8*/ /*5000ms*/ /*Cyclic*/ /*BCAN*/ 


		cap_getRxSignals_FZZSTD_BCAN();/*630*/ /*size:8*/ /*5000ms*/ /*Cyclic*/ /*BCAN*/ 


		cap_getRxSignals_ERRM_BN_U_BCAN();/*146*/ /*size:2*/ /*5000ms*/ /*Cyclic*/ /*BCAN*/ 


	}
	if(cycle%10000==0){
		cap_getRxSignals_KILOMETERSTAND_BCAN();/*816*/ /*size:8*/ /*10000ms*/ /*Cyclic*/ /*BCAN*/ 


	}
	cycle=cycle+100;

	if(cycle>= 10000){
		cycle = 0;
	}
}

void cap_canTx_1ms(){
}

void cap_canTx_5ms(){
	cap_setTxSignals_AVL_RPM_WHL_PT();/*131*/ /*size:12*/ /*5ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */



}

void cap_canTx_10ms(){
	static uint16 cycle = 0;

	cap_setTxSignals_HighVoltageStorage10msNo2_BCAN();/*143*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	cap_setTxSignals_CombinedChargerUnit10msNo2_BCAN();/*293*/ /*size:20*/ /*10ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	cap_setTxSignals_VCU_TractionEMachine2_10ms_CHS1();/*170*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */


	cap_setTxSignals_VCU_TractionEMachine1_10ms_CHS1();/*145*/ /*size:16*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */


	cap_setTxSignals_VCU_CombinedChargerUnit_CHS1();/*138*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */


	cap_setTxSignals_VCU_TractionEMachine2_10ms_CHS2();/*170*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


	cap_setTxSignals_VCU_TractionEMachine1_10ms_CHS2();/*145*/ /*size:16*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


	cap_setTxSignals_VCU_CombinedChargerUnit_CHS2();/*138*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


	cap_setTxSignals_VCU_HV_DrvSys_status_PT();/*501*/ /*size:1*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_CombinedChargerUnit10msNo3_PT();/*138*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_CombinedChargerUnit10msNo1_PT();/*141*/ /*size:32*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_WMOM_DRV_9_PT();/*166*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_WMOM_PT_AVL_PT();/*217*/ /*size:16*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_CombinedChargerUnit10msNo2_PT();/*293*/ /*size:20*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_BundleEAFlexrayToAECANFD10msNo1_PT();/*296*/ /*size:64*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_VCU_OBC_Req_PT();/*193*/ /*size:6*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_VCU_DCDC_Req_PT();/*197*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */



	if(cycle%50==0){
		cap_setTxSignals_VCU_ChargingConnection_BCAN();/*277*/ /*size:5*/ /*50ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


		cap_setTxSignals_ST_STAB_DSC_PT();/*213*/ /*size:8*/ /*50ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


		cap_setTxSignals_VCU_ChargingConnectionSts_PT();/*272*/ /*size:2*/ /*50ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


		cap_setTxSignals_ParkByWire50msNo1_PT();/*532*/ /*size:8*/ /*50ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	}
	if(cycle%150==0){
		cap_setTxSignals_VCU_Batt_Info_BCAN();/*514*/ /*size:16*/ /*150ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	}

	cycle=cycle+10;

	if(cycle>= 150){
		cycle= 0;
	}

}

void cap_canTx_20ms(){

	static uint16 cycle = 0;

	cap_setTxSignals_VCU_HVsystem_status_BCAN();/*151*/ /*size:6*/ /*20ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	cap_setTxSignals_BundleEAFlexrayToCANFD20msNo1_PT();/*289*/ /*size:32*/ /*20ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_BundleEAFlexrayToAECANFD20msNo2_PT();/*297*/ /*size:20*/ /*20ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */



	if(cycle%40==0){
		cap_setTxSignals_VCU_HV_DrvSys_status_BCAN();/*273*/ /*size:6*/ /*40ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


		cap_setTxSignals_VCU_Status_CHS1();/*300*/ /*size:8*/ /*40ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */


		cap_setTxSignals_VCU_HV_Status_CHS1();/*275*/ /*size:2*/ /*40ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */


		cap_setTxSignals_VCU_Status_CHS2();/*300*/ /*size:8*/ /*40ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


		cap_setTxSignals_VCU_HV_Status_CHS2();/*275*/ /*size:2*/ /*40ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


	}
	cycle=cycle+20;
	if(cycle>= 40){
		cycle= 0;
	}
}

void cap_canTx_100ms(){

	static uint16 cycle = 0;
	cap_setTxSignals_VCU_StatusDCDC_BCAN();/*433*/ /*size:12*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	cap_setTxSignals_VCU_MHU_info_BCAN();/*498*/ /*size:7*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	cap_setTxSignals_DT_DISP_GRDT_BCAN();/*1021*/ /*size:5*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	cap_setTxSignals_TracEMacElectc1Time100msNo1_BCAN();/*314*/ /*size:32*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	cap_setTxSignals_TracEMacElectc2Time100msNo1_BCAN();/*326*/ /*size:32*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


	cap_setTxSignals_VCU_TractionEMachine2_100ms_CHS1();/*326*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */


	cap_setTxSignals_VCU_TractionEMachine1_100ms_CHS1();/*314*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */


	cap_setTxSignals_CLAMP_STAT_CHS2();/*497*/ /*size:3*/ /*100ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


	cap_setTxSignals_VCU_TractionEMachine2_100ms_CHS2();/*326*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


	cap_setTxSignals_VCU_TractionEMachine1_100ms_CHS2();/*314*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


	cap_setTxSignals_VCU_Thermal_Status_PT();/*451*/ /*size:1*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_CLAMP_STAT_PT();/*497*/ /*size:3*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_CON_VEH_PT();/*60*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_ST_STAB_DSC_2_PT();/*214*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_VCU_BMS_ThermalStatus_PT();/*385*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_VCU_BMS_ChargingParams_PT();/*418*/ /*size:4*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_VCU_BMS_ChargingControl_PT();/*420*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_VCU_BMS_HVCoordination_PT();/*433*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_DMEBK100_PT();/*811*/ /*size:24*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_CombinedChargerUnit100msNo1_PT();/*832*/ /*size:12*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_TLT_RW_PT();/*911*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_Networkmanagement3_PT();/*1296*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	cap_setTxSignals_FAHRGESTELLNUMMER_PT();/*896*/ /*size:7*/ /*0ms*/ /*NoMsgSendType*/ /*PT*/ /*SentMsg */




	if(cycle%200==0){
		cap_setTxSignals_HighVoltageStorage200msNo1_BCAN();/*1107*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


		cap_setTxSignals_HighVoltageStorage200msNo1_CHS1();/*1107*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */


		cap_setTxSignals_HighVoltageStorage200msNo1_CHS2();/*1107*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */


		cap_setTxSignals_ST_CR_PT();/*130*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


		cap_setTxSignals_EnergyStorageMeasurementValues_PT();/*1120*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	}
	if(cycle%300==0){
		cap_setTxSignals_Kilometerstand_2_PT();/*490*/ /*size:8*/ /*300ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	}
	if(cycle%1000==0){
		cap_setTxSignals_VCU_WarnMsg_BCAN();/*881*/ /*size:5*/ /*1000ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


		cap_setTxSignals_VCU_Batt_WarnMsg_BCAN();/*882*/ /*size:8*/ /*1000ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */


		cap_setTxSignals_A_TEMP_PT();/*749*/ /*size:2*/ /*1000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


		cap_setTxSignals_RELATIVZEIT_PT();/*1090*/ /*size:6*/ /*1000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


		cap_setTxSignals_CombinedChargerUnit1000msNo1_PT();/*1272*/ /*size:24*/ /*1000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	}
	if(cycle%5000==0){
		cap_setTxSignals_ERRM_BN_U_PT();/*146*/ /*size:2*/ /*5000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


		cap_setTxSignals_FZZSTD_PT();/*630*/ /*size:8*/ /*5000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


		cap_setTxSignals_STAT_ANHAENGER_PT();/*632*/ /*size:8*/ /*5000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	}	
	if(cycle%10000==0){
		cap_setTxSignals_KILOMETERSTAND_PT();/*1052*/ /*size:8*/ /*10000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */


	}
	cycle=cycle+100;

	if(cycle>= 30000){
		cycle= 0;
	}
}

/**** Received Messages ****/
/*0X632*/ /*size:8*/ /*5000ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_STAT_ANHAENGER_BCAN(void){
	uint8 tmp_STAT_ANHAENGER_BCAN_ST_TRAI_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_STAT_ANHAENGER_BCAN.msg_tout = FALSE;
	cap_canApiMsg_STAT_ANHAENGER_BCAN.msg_tout |= Rte_Read_RPort_ST_TRAI_STAT_ANHAENGER_BCAN_ST_TRAI_STAT_ANHAENGER_BCAN(&tmp_STAT_ANHAENGER_BCAN_ST_TRAI_phy);


	if(TRUE != cap_canApiMsg_STAT_ANHAENGER_BCAN.msg_tout){
		cap_canApiMsg_STAT_ANHAENGER_BCAN.ST_TRAI_phy = tmp_STAT_ANHAENGER_BCAN_ST_TRAI_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X407*/ /*size:4*/ /*30ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_ST_GWS_BCAN(void){
	uint8 tmp_ST_GWS_BCAN_CRC_ST_GWS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ST_GWS_BCAN_ALIV_ST_GWS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ST_GWS_BCAN_OP_GWS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ST_GWS_BCAN_OP_GWS_PUBU_PKG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ST_GWS_BCAN.msg_tout = FALSE;
	cap_canApiMsg_ST_GWS_BCAN.msg_tout |= Rte_Read_RPort_CRC_ST_GWS_ST_GWS_BCAN_CRC_ST_GWS_ST_GWS_BCAN(&tmp_ST_GWS_BCAN_CRC_ST_GWS_phy);
	cap_canApiMsg_ST_GWS_BCAN.msg_tout |= Rte_Read_RPort_ALIV_ST_GWS_ST_GWS_BCAN_ALIV_ST_GWS_ST_GWS_BCAN(&tmp_ST_GWS_BCAN_ALIV_ST_GWS_phy);
	cap_canApiMsg_ST_GWS_BCAN.msg_tout |= Rte_Read_RPort_OP_GWS_ST_GWS_BCAN_OP_GWS_ST_GWS_BCAN(&tmp_ST_GWS_BCAN_OP_GWS_phy);
	cap_canApiMsg_ST_GWS_BCAN.msg_tout |= Rte_Read_RPort_OP_GWS_PUBU_PKG_ST_GWS_BCAN_OP_GWS_PUBU_PKG_ST_GWS_BCAN(&tmp_ST_GWS_BCAN_OP_GWS_PUBU_PKG_phy);


	if(TRUE != cap_canApiMsg_ST_GWS_BCAN.msg_tout){
		cap_canApiMsg_ST_GWS_BCAN.CRC_ST_GWS_phy = tmp_ST_GWS_BCAN_CRC_ST_GWS_phy;
		cap_canApiMsg_ST_GWS_BCAN.ALIV_ST_GWS_phy = tmp_ST_GWS_BCAN_ALIV_ST_GWS_phy;
		cap_canApiMsg_ST_GWS_BCAN.OP_GWS_phy = tmp_ST_GWS_BCAN_OP_GWS_phy;
		cap_canApiMsg_ST_GWS_BCAN.OP_GWS_PUBU_PKG_phy = tmp_ST_GWS_BCAN_OP_GWS_PUBU_PKG_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X1090*/ /*size:4*/ /*1000ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_RELATIVZEIT_BCAN(void){
	uint32 tmp_RELATIVZEIT_BCAN_T_SEC_COU_REL_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint32*/ 

	cap_canApiMsg_RELATIVZEIT_BCAN.msg_tout = FALSE;
	cap_canApiMsg_RELATIVZEIT_BCAN.msg_tout |= Rte_Read_RPort_T_SEC_COU_REL_RELATIVZEIT_BCAN_T_SEC_COU_REL_RELATIVZEIT_BCAN(&tmp_RELATIVZEIT_BCAN_T_SEC_COU_REL_phy);


	if(TRUE != cap_canApiMsg_RELATIVZEIT_BCAN.msg_tout){
		cap_canApiMsg_RELATIVZEIT_BCAN.T_SEC_COU_REL_phy = tmp_RELATIVZEIT_BCAN_T_SEC_COU_REL_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X816*/ /*size:8*/ /*10000ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_KILOMETERSTAND_BCAN(void){
	uint32 tmp_KILOMETERSTAND_BCAN_MILE_KM_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint32*/ 

	cap_canApiMsg_KILOMETERSTAND_BCAN.msg_tout = FALSE;
	cap_canApiMsg_KILOMETERSTAND_BCAN.msg_tout |= Rte_Read_RPort_MILE_KM_KILOMETERSTAND_BCAN_MILE_KM_KILOMETERSTAND_BCAN(&tmp_KILOMETERSTAND_BCAN_MILE_KM_phy);


	if(TRUE != cap_canApiMsg_KILOMETERSTAND_BCAN.msg_tout){
		cap_canApiMsg_KILOMETERSTAND_BCAN.MILE_KM_phy = tmp_KILOMETERSTAND_BCAN_MILE_KM_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X630*/ /*size:8*/ /*5000ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_FZZSTD_BCAN(void){
	uint8 tmp_FZZSTD_BCAN_ST_ENERG_FZM_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_FZZSTD_BCAN_ST_ILK_ERRM_FZM_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_FZZSTD_BCAN.msg_tout = FALSE;
	cap_canApiMsg_FZZSTD_BCAN.msg_tout |= Rte_Read_RPort_ST_ENERG_FZM_FZZSTD_BCAN_ST_ENERG_FZM_FZZSTD_BCAN(&tmp_FZZSTD_BCAN_ST_ENERG_FZM_phy);
	cap_canApiMsg_FZZSTD_BCAN.msg_tout |= Rte_Read_RPort_ST_ILK_ERRM_FZM_FZZSTD_BCAN_ST_ILK_ERRM_FZM_FZZSTD_BCAN(&tmp_FZZSTD_BCAN_ST_ILK_ERRM_FZM_phy);


	if(TRUE != cap_canApiMsg_FZZSTD_BCAN.msg_tout){
		cap_canApiMsg_FZZSTD_BCAN.ST_ENERG_FZM_phy = tmp_FZZSTD_BCAN_ST_ENERG_FZM_phy;
		cap_canApiMsg_FZZSTD_BCAN.ST_ILK_ERRM_FZM_phy = tmp_FZZSTD_BCAN_ST_ILK_ERRM_FZM_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X451*/ /*size:1*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_FZU_ChargingControl_BCAN(void){
	uint8 tmp_FZU_ChargingControl_BCAN_FZU_ChargingStopReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_FZU_ChargingControl_BCAN.msg_tout = FALSE;
	cap_canApiMsg_FZU_ChargingControl_BCAN.msg_tout |= Rte_Read_RPort_FZU_ChargingStopReq_FZU_ChargingControl_BCAN_FZU_ChargingStopReq_FZU_ChargingControl_BCAN(&tmp_FZU_ChargingControl_BCAN_FZU_ChargingStopReq_phy);


	if(TRUE != cap_canApiMsg_FZU_ChargingControl_BCAN.msg_tout){
		cap_canApiMsg_FZU_ChargingControl_BCAN.FZU_ChargingStopReq_phy = tmp_FZU_ChargingControl_BCAN_FZU_ChargingStopReq_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X896*/ /*size:7*/ /*100ms*/ /*NoMsgSendType*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_FAHRGESTELLNUMMER_BCAN(void){
	uint8 tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_3_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_4_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_5_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_6_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_7_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout = FALSE;
	cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout |= Rte_Read_RPort_NO_VECH_1_FAHRGESTELLNUMMER_BCAN_NO_VECH_1_FAHRGESTELLNUMMER_BCAN(&tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_1_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout |= Rte_Read_RPort_NO_VECH_2_FAHRGESTELLNUMMER_BCAN_NO_VECH_2_FAHRGESTELLNUMMER_BCAN(&tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_2_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout |= Rte_Read_RPort_NO_VECH_3_FAHRGESTELLNUMMER_BCAN_NO_VECH_3_FAHRGESTELLNUMMER_BCAN(&tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_3_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout |= Rte_Read_RPort_NO_VECH_4_FAHRGESTELLNUMMER_BCAN_NO_VECH_4_FAHRGESTELLNUMMER_BCAN(&tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_4_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout |= Rte_Read_RPort_NO_VECH_5_FAHRGESTELLNUMMER_BCAN_NO_VECH_5_FAHRGESTELLNUMMER_BCAN(&tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_5_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout |= Rte_Read_RPort_NO_VECH_6_FAHRGESTELLNUMMER_BCAN_NO_VECH_6_FAHRGESTELLNUMMER_BCAN(&tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_6_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout |= Rte_Read_RPort_NO_VECH_7_FAHRGESTELLNUMMER_BCAN_NO_VECH_7_FAHRGESTELLNUMMER_BCAN(&tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_7_phy);


	if(TRUE != cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout){
		cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_1_phy = tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_1_phy;
		cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_2_phy = tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_2_phy;
		cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_3_phy = tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_3_phy;
		cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_4_phy = tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_4_phy;
		cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_5_phy = tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_5_phy;
		cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_6_phy = tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_6_phy;
		cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_7_phy = tmp_FAHRGESTELLNUMMER_BCAN_NO_VECH_7_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X146*/ /*size:2*/ /*5000ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_ERRM_BN_U_BCAN(void){
	uint8 tmp_ERRM_BN_U_BCAN_CTR_ERRM_BN_U_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ERRM_BN_U_BCAN.msg_tout = FALSE;
	cap_canApiMsg_ERRM_BN_U_BCAN.msg_tout |= Rte_Read_RPort_CTR_ERRM_BN_U_ERRM_BN_U_BCAN_CTR_ERRM_BN_U_ERRM_BN_U_BCAN(&tmp_ERRM_BN_U_BCAN_CTR_ERRM_BN_U_phy);


	if(TRUE != cap_canApiMsg_ERRM_BN_U_BCAN.msg_tout){
		cap_canApiMsg_ERRM_BN_U_BCAN.CTR_ERRM_BN_U_phy = tmp_ERRM_BN_U_BCAN_CTR_ERRM_BN_U_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X60*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_CON_VEH_BCAN(void){
	uint8 tmp_CON_VEH_BCAN_CRC_CON_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CON_VEH_BCAN_ALIV_CON_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CON_VEH_BCAN_CTR_BS_PRTNT_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint32 tmp_CON_VEH_BCAN_CTR_FKTN_PRTNT_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint32*/ 
	uint8 tmp_CON_VEH_BCAN_ST_CON_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CON_VEH_BCAN_QU_ST_CON_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_CON_VEH_BCAN.msg_tout = FALSE;
	cap_canApiMsg_CON_VEH_BCAN.msg_tout |= Rte_Read_RPort_CRC_CON_VEH_CON_VEH_BCAN_CRC_CON_VEH_CON_VEH_BCAN(&tmp_CON_VEH_BCAN_CRC_CON_VEH_phy);
	cap_canApiMsg_CON_VEH_BCAN.msg_tout |= Rte_Read_RPort_ALIV_CON_VEH_CON_VEH_BCAN_ALIV_CON_VEH_CON_VEH_BCAN(&tmp_CON_VEH_BCAN_ALIV_CON_VEH_phy);
	cap_canApiMsg_CON_VEH_BCAN.msg_tout |= Rte_Read_RPort_CTR_BS_PRTNT_CON_VEH_BCAN_CTR_BS_PRTNT_CON_VEH_BCAN(&tmp_CON_VEH_BCAN_CTR_BS_PRTNT_phy);
	cap_canApiMsg_CON_VEH_BCAN.msg_tout |= Rte_Read_RPort_CTR_FKTN_PRTNT_CON_VEH_BCAN_CTR_FKTN_PRTNT_CON_VEH_BCAN(&tmp_CON_VEH_BCAN_CTR_FKTN_PRTNT_phy);
	cap_canApiMsg_CON_VEH_BCAN.msg_tout |= Rte_Read_RPort_ST_CON_VEH_CON_VEH_BCAN_ST_CON_VEH_CON_VEH_BCAN(&tmp_CON_VEH_BCAN_ST_CON_VEH_phy);
	cap_canApiMsg_CON_VEH_BCAN.msg_tout |= Rte_Read_RPort_QU_ST_CON_VEH_CON_VEH_BCAN_QU_ST_CON_VEH_CON_VEH_BCAN(&tmp_CON_VEH_BCAN_QU_ST_CON_VEH_phy);


	if(TRUE != cap_canApiMsg_CON_VEH_BCAN.msg_tout){
		cap_canApiMsg_CON_VEH_BCAN.CRC_CON_VEH_phy = tmp_CON_VEH_BCAN_CRC_CON_VEH_phy;
		cap_canApiMsg_CON_VEH_BCAN.ALIV_CON_VEH_phy = tmp_CON_VEH_BCAN_ALIV_CON_VEH_phy;
		cap_canApiMsg_CON_VEH_BCAN.CTR_BS_PRTNT_phy = tmp_CON_VEH_BCAN_CTR_BS_PRTNT_phy;
		cap_canApiMsg_CON_VEH_BCAN.CTR_FKTN_PRTNT_phy = tmp_CON_VEH_BCAN_CTR_FKTN_PRTNT_phy;
		cap_canApiMsg_CON_VEH_BCAN.ST_CON_VEH_phy = tmp_CON_VEH_BCAN_ST_CON_VEH_phy;
		cap_canApiMsg_CON_VEH_BCAN.QU_ST_CON_VEH_phy = tmp_CON_VEH_BCAN_QU_ST_CON_VEH_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X749*/ /*size:2*/ /*1000ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_A_TEMP_BCAN(void){
	float32 tmp_A_TEMP_BCAN_TEMP_EX_phy = 0; /*f32 factor : 0.5 , offset : -40.0 , DBCtype: uint8*/ 

	cap_canApiMsg_A_TEMP_BCAN.msg_tout = FALSE;
	cap_canApiMsg_A_TEMP_BCAN.msg_tout |= Rte_Read_RPort_TEMP_EX_A_TEMP_BCAN_TEMP_EX_A_TEMP_BCAN(&tmp_A_TEMP_BCAN_TEMP_EX_phy);


	if(TRUE != cap_canApiMsg_A_TEMP_BCAN.msg_tout){
		cap_canApiMsg_A_TEMP_BCAN.TEMP_EX_phy = tmp_A_TEMP_BCAN_TEMP_EX_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X490*/ /*size:8*/ /*300ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_Kilometerstand_2_BCAN(void){
	float32 tmp_Kilometerstand_2_BCAN_MILE_KM_TOT_phy = 0; /*f32 factor : 0.001 , offset : 0.0 , DBCtype: uint32*/ 

	cap_canApiMsg_Kilometerstand_2_BCAN.msg_tout = FALSE;
	cap_canApiMsg_Kilometerstand_2_BCAN.msg_tout |= Rte_Read_RPort_MILE_KM_TOT_Kilometerstand_2_BCAN_MILE_KM_TOT_Kilometerstand_2_BCAN(&tmp_Kilometerstand_2_BCAN_MILE_KM_TOT_phy);


	if(TRUE != cap_canApiMsg_Kilometerstand_2_BCAN.msg_tout){
		cap_canApiMsg_Kilometerstand_2_BCAN.MILE_KM_TOT_phy = tmp_Kilometerstand_2_BCAN_MILE_KM_TOT_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X497*/ /*size:3*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*ReceivedMsg */
void cap_getRxSignals_CLAMP_STAT_BCAN(void){
	uint8 tmp_CLAMP_STAT_BCAN_CRC_CLAMP_STAT_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_BCAN_ALIV_CLAMP_STAT_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_BCAN_STAT_CL15_L_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_BCAN_STAT_CL30S_L_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_BCAN_STAT_CL30S_Light_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_BCAN_STAT_CL15_WUPL_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout = FALSE;
	cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout |= Rte_Read_RPort_CRC_CLAMP_STAT_CLAMP_STAT_BCAN_CRC_CLAMP_STAT_CLAMP_STAT_BCAN(&tmp_CLAMP_STAT_BCAN_CRC_CLAMP_STAT_phy);
	cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout |= Rte_Read_RPort_ALIV_CLAMP_STAT_CLAMP_STAT_BCAN_ALIV_CLAMP_STAT_CLAMP_STAT_BCAN(&tmp_CLAMP_STAT_BCAN_ALIV_CLAMP_STAT_phy);
	cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout |= Rte_Read_RPort_STAT_CL15_L_CLAMP_STAT_BCAN_STAT_CL15_L_CLAMP_STAT_BCAN(&tmp_CLAMP_STAT_BCAN_STAT_CL15_L_phy);
	cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout |= Rte_Read_RPort_STAT_CL30S_L_CLAMP_STAT_BCAN_STAT_CL30S_L_CLAMP_STAT_BCAN(&tmp_CLAMP_STAT_BCAN_STAT_CL30S_L_phy);
	cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout |= Rte_Read_RPort_STAT_CL30S_Light_CLAMP_STAT_BCAN_STAT_CL30S_Light_CLAMP_STAT_BCAN(&tmp_CLAMP_STAT_BCAN_STAT_CL30S_Light_phy);
	cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout |= Rte_Read_RPort_STAT_CL15_WUPL_CLAMP_STAT_BCAN_STAT_CL15_WUPL_CLAMP_STAT_BCAN(&tmp_CLAMP_STAT_BCAN_STAT_CL15_WUPL_phy);


	if(TRUE != cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout){
		cap_canApiMsg_CLAMP_STAT_BCAN.CRC_CLAMP_STAT_phy = tmp_CLAMP_STAT_BCAN_CRC_CLAMP_STAT_phy;
		cap_canApiMsg_CLAMP_STAT_BCAN.ALIV_CLAMP_STAT_phy = tmp_CLAMP_STAT_BCAN_ALIV_CLAMP_STAT_phy;
		cap_canApiMsg_CLAMP_STAT_BCAN.STAT_CL15_L_phy = tmp_CLAMP_STAT_BCAN_STAT_CL15_L_phy;
		cap_canApiMsg_CLAMP_STAT_BCAN.STAT_CL30S_L_phy = tmp_CLAMP_STAT_BCAN_STAT_CL30S_L_phy;
		cap_canApiMsg_CLAMP_STAT_BCAN.STAT_CL30S_Light_phy = tmp_CLAMP_STAT_BCAN_STAT_CL30S_Light_phy;
		cap_canApiMsg_CLAMP_STAT_BCAN.STAT_CL15_WUPL_phy = tmp_CLAMP_STAT_BCAN_STAT_CL15_WUPL_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X497*/ /*size:3*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_CLAMP_STAT_CHS1(void){
	uint8 tmp_CLAMP_STAT_CHS1_CRC_CLAMP_STAT_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_CHS1_ALIV_CLAMP_STAT_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_CHS1_STAT_CL15_L_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_CHS1_STAT_CL30S_L_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_CHS1_STAT_CL30S_Light_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_CLAMP_STAT_CHS1_STAT_CL15_WUPL_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout = FALSE;
	cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout |= Rte_Read_RPort_CRC_CLAMP_STAT_CLAMP_STAT_CHS1_CRC_CLAMP_STAT_CLAMP_STAT_CHS1(&tmp_CLAMP_STAT_CHS1_CRC_CLAMP_STAT_phy);
	cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout |= Rte_Read_RPort_ALIV_CLAMP_STAT_CLAMP_STAT_CHS1_ALIV_CLAMP_STAT_CLAMP_STAT_CHS1(&tmp_CLAMP_STAT_CHS1_ALIV_CLAMP_STAT_phy);
	cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout |= Rte_Read_RPort_STAT_CL15_L_CLAMP_STAT_CHS1_STAT_CL15_L_CLAMP_STAT_CHS1(&tmp_CLAMP_STAT_CHS1_STAT_CL15_L_phy);
	cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout |= Rte_Read_RPort_STAT_CL30S_L_CLAMP_STAT_CHS1_STAT_CL30S_L_CLAMP_STAT_CHS1(&tmp_CLAMP_STAT_CHS1_STAT_CL30S_L_phy);
	cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout |= Rte_Read_RPort_STAT_CL30S_Light_CLAMP_STAT_CHS1_STAT_CL30S_Light_CLAMP_STAT_CHS1(&tmp_CLAMP_STAT_CHS1_STAT_CL30S_Light_phy);
	cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout |= Rte_Read_RPort_STAT_CL15_WUPL_CLAMP_STAT_CHS1_STAT_CL15_WUPL_CLAMP_STAT_CHS1(&tmp_CLAMP_STAT_CHS1_STAT_CL15_WUPL_phy);


	if(TRUE != cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout){
		cap_canApiMsg_CLAMP_STAT_CHS1.CRC_CLAMP_STAT_phy = tmp_CLAMP_STAT_CHS1_CRC_CLAMP_STAT_phy;
		cap_canApiMsg_CLAMP_STAT_CHS1.ALIV_CLAMP_STAT_phy = tmp_CLAMP_STAT_CHS1_ALIV_CLAMP_STAT_phy;
		cap_canApiMsg_CLAMP_STAT_CHS1.STAT_CL15_L_phy = tmp_CLAMP_STAT_CHS1_STAT_CL15_L_phy;
		cap_canApiMsg_CLAMP_STAT_CHS1.STAT_CL30S_L_phy = tmp_CLAMP_STAT_CHS1_STAT_CL30S_L_phy;
		cap_canApiMsg_CLAMP_STAT_CHS1.STAT_CL30S_Light_phy = tmp_CLAMP_STAT_CHS1_STAT_CL30S_Light_phy;
		cap_canApiMsg_CLAMP_STAT_CHS1.STAT_CL15_WUPL_phy = tmp_CLAMP_STAT_CHS1_STAT_CL15_WUPL_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X200*/ /*size:4*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_ESC_A_CHS1(void){
	uint8 tmp_ESC_A_CHS1_AD3_PrsrVal_Fl_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ESC_A_CHS1_AD3_PrsrVal_Fr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ESC_A_CHS1_AD3_PrsrVal_Rl_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ESC_A_CHS1_AD3_PrsrVal_Rr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ESC_A_CHS1.msg_tout = FALSE;
	cap_canApiMsg_ESC_A_CHS1.msg_tout |= Rte_Read_RPort_AD3_PrsrVal_Fl_ESC_A_CHS1_AD3_PrsrVal_Fl_ESC_A_CHS1(&tmp_ESC_A_CHS1_AD3_PrsrVal_Fl_phy);
	cap_canApiMsg_ESC_A_CHS1.msg_tout |= Rte_Read_RPort_AD3_PrsrVal_Fr_ESC_A_CHS1_AD3_PrsrVal_Fr_ESC_A_CHS1(&tmp_ESC_A_CHS1_AD3_PrsrVal_Fr_phy);
	cap_canApiMsg_ESC_A_CHS1.msg_tout |= Rte_Read_RPort_AD3_PrsrVal_Rl_ESC_A_CHS1_AD3_PrsrVal_Rl_ESC_A_CHS1(&tmp_ESC_A_CHS1_AD3_PrsrVal_Rl_phy);
	cap_canApiMsg_ESC_A_CHS1.msg_tout |= Rte_Read_RPort_AD3_PrsrVal_Rr_ESC_A_CHS1_AD3_PrsrVal_Rr_ESC_A_CHS1(&tmp_ESC_A_CHS1_AD3_PrsrVal_Rr_phy);


	if(TRUE != cap_canApiMsg_ESC_A_CHS1.msg_tout){
		cap_canApiMsg_ESC_A_CHS1.AD3_PrsrVal_Fl_phy = tmp_ESC_A_CHS1_AD3_PrsrVal_Fl_phy;
		cap_canApiMsg_ESC_A_CHS1.AD3_PrsrVal_Fr_phy = tmp_ESC_A_CHS1_AD3_PrsrVal_Fr_phy;
		cap_canApiMsg_ESC_A_CHS1.AD3_PrsrVal_Rl_phy = tmp_ESC_A_CHS1_AD3_PrsrVal_Rl_phy;
		cap_canApiMsg_ESC_A_CHS1.AD3_PrsrVal_Rr_phy = tmp_ESC_A_CHS1_AD3_PrsrVal_Rr_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X180*/ /*size:1*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_ABS_ESC_01_CHS1(void){
	uint8 tmp_ABS_ESC_01_CHS1_ABS_ACTIVE_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ABS_ESC_01_CHS1.msg_tout = FALSE;
	cap_canApiMsg_ABS_ESC_01_CHS1.msg_tout |= Rte_Read_RPort_ABS_ACTIVE_ABS_ESC_01_CHS1_ABS_ACTIVE_ABS_ESC_01_CHS1(&tmp_ABS_ESC_01_CHS1_ABS_ACTIVE_phy);


	if(TRUE != cap_canApiMsg_ABS_ESC_01_CHS1.msg_tout){
		cap_canApiMsg_ABS_ESC_01_CHS1.ABS_ACTIVE_phy = tmp_ABS_ESC_01_CHS1_ABS_ACTIVE_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X210*/ /*size:2*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_IEB_01_CHS1(void){
	uint16 tmp_IEB_01_CHS1_WEstTot_Nm_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_IEB_01_CHS1.msg_tout = FALSE;
	cap_canApiMsg_IEB_01_CHS1.msg_tout |= Rte_Read_RPort_WEstTot_Nm_IEB_01_CHS1_WEstTot_Nm_IEB_01_CHS1(&tmp_IEB_01_CHS1_WEstTot_Nm_phy);


	if(TRUE != cap_canApiMsg_IEB_01_CHS1.msg_tout){
		cap_canApiMsg_IEB_01_CHS1.WEstTot_Nm_phy = tmp_IEB_01_CHS1_WEstTot_Nm_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X140*/ /*size:5*/ /*20ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_EBCM_ACC_LONG_LAT_YAW_CHS1(void){
	uint8 tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_CRC_EBCM_ACC_LONG_LAT_YAW_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_ALIV_EBCM_ACC_LONG_LAT_YAW_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_VYAW_VEH_phy = 0; /*f32 factor : 0.005 , offset : -163.84 , DBCtype: uint16*/ 
	uint8 tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_QU_VYAW_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.msg_tout = FALSE;
	cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.msg_tout |= Rte_Read_RPort_CRC_EBCM_ACC_LONG_LAT_YAW_EBCM_ACC_LONG_LAT_YAW_CHS1_CRC_EBCM_ACC_LONG_LAT_YAW_EBCM_ACC_LONG_LAT_YAW_CHS1(&tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_CRC_EBCM_ACC_LONG_LAT_YAW_phy);
	cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.msg_tout |= Rte_Read_RPort_ALIV_EBCM_ACC_LONG_LAT_YAW_EBCM_ACC_LONG_LAT_YAW_CHS1_ALIV_EBCM_ACC_LONG_LAT_YAW_EBCM_ACC_LONG_LAT_YAW_CHS1(&tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_ALIV_EBCM_ACC_LONG_LAT_YAW_phy);
	cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.msg_tout |= Rte_Read_RPort_VYAW_VEH_EBCM_ACC_LONG_LAT_YAW_CHS1_VYAW_VEH_EBCM_ACC_LONG_LAT_YAW_CHS1(&tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_VYAW_VEH_phy);
	cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.msg_tout |= Rte_Read_RPort_QU_VYAW_VEH_EBCM_ACC_LONG_LAT_YAW_CHS1_QU_VYAW_VEH_EBCM_ACC_LONG_LAT_YAW_CHS1(&tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_QU_VYAW_VEH_phy);


	if(TRUE != cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.msg_tout){
		cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.CRC_EBCM_ACC_LONG_LAT_YAW_phy = tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_CRC_EBCM_ACC_LONG_LAT_YAW_phy;
		cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.ALIV_EBCM_ACC_LONG_LAT_YAW_phy = tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_ALIV_EBCM_ACC_LONG_LAT_YAW_phy;
		cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.VYAW_VEH_phy = tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_VYAW_VEH_phy;
		cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.QU_VYAW_VEH_phy = tmp_EBCM_ACC_LONG_LAT_YAW_CHS1_QU_VYAW_VEH_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X150*/ /*size:7*/ /*20ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_EBCM_STATUS_CHS1(void){
	uint8 tmp_EBCM_STATUS_CHS1_CRC_EBCM_STATUS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_EBCM_STATUS_CHS1_ALIV_EBCM_STATUS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_EBCM_STATUS_CHS1_MCPressure_phy = 0; /*f32 factor : 1.0 , offset : -42.5 , DBCtype: uint16*/ 
	float32 tmp_EBCM_STATUS_CHS1_BreakPedalPercent_phy = 0; /*f32 factor : 0.0625 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_EBCM_STATUS_CHS1_EPBStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_EBCM_STATUS_CHS1_HillholderStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_EBCM_STATUS_CHS1_TCSAvailable_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS1_TCSActive_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS1_BreakPedalPercentValid_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS1_MCPressureSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS1_HillholderFault_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS1_EPBFault_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS1_EBCM_BrkPedlSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout = FALSE;
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_CRC_EBCM_STATUS_EBCM_STATUS_CHS1_CRC_EBCM_STATUS_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_CRC_EBCM_STATUS_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_ALIV_EBCM_STATUS_EBCM_STATUS_CHS1_ALIV_EBCM_STATUS_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_ALIV_EBCM_STATUS_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_MCPressure_EBCM_STATUS_CHS1_MCPressure_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_MCPressure_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_BreakPedalPercent_EBCM_STATUS_CHS1_BreakPedalPercent_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_BreakPedalPercent_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_EPBStatus_EBCM_STATUS_CHS1_EPBStatus_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_EPBStatus_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_HillholderStatus_EBCM_STATUS_CHS1_HillholderStatus_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_HillholderStatus_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_TCSAvailable_EBCM_STATUS_CHS1_TCSAvailable_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_TCSAvailable_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_TCSActive_EBCM_STATUS_CHS1_TCSActive_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_TCSActive_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_BreakPedalPercentValid_EBCM_STATUS_CHS1_BreakPedalPercentValid_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_BreakPedalPercentValid_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_MCPressureSts_EBCM_STATUS_CHS1_MCPressureSts_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_MCPressureSts_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_HillholderFault_EBCM_STATUS_CHS1_HillholderFault_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_HillholderFault_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_EPBFault_EBCM_STATUS_CHS1_EPBFault_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_EPBFault_phy);
	cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout |= Rte_Read_RPort_EBCM_BrkPedlSts_EBCM_STATUS_CHS1_EBCM_BrkPedlSts_EBCM_STATUS_CHS1(&tmp_EBCM_STATUS_CHS1_EBCM_BrkPedlSts_phy);


	if(TRUE != cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout){
		cap_canApiMsg_EBCM_STATUS_CHS1.CRC_EBCM_STATUS_phy = tmp_EBCM_STATUS_CHS1_CRC_EBCM_STATUS_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.ALIV_EBCM_STATUS_phy = tmp_EBCM_STATUS_CHS1_ALIV_EBCM_STATUS_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.MCPressure_phy = tmp_EBCM_STATUS_CHS1_MCPressure_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.BreakPedalPercent_phy = tmp_EBCM_STATUS_CHS1_BreakPedalPercent_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.EPBStatus_phy = tmp_EBCM_STATUS_CHS1_EPBStatus_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.HillholderStatus_phy = tmp_EBCM_STATUS_CHS1_HillholderStatus_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.TCSAvailable_phy = tmp_EBCM_STATUS_CHS1_TCSAvailable_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.TCSActive_phy = tmp_EBCM_STATUS_CHS1_TCSActive_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.BreakPedalPercentValid_phy = tmp_EBCM_STATUS_CHS1_BreakPedalPercentValid_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.MCPressureSts_phy = tmp_EBCM_STATUS_CHS1_MCPressureSts_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.HillholderFault_phy = tmp_EBCM_STATUS_CHS1_HillholderFault_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.EPBFault_phy = tmp_EBCM_STATUS_CHS1_EPBFault_phy;
		cap_canApiMsg_EBCM_STATUS_CHS1.EBCM_BrkPedlSts_phy = tmp_EBCM_STATUS_CHS1_EBCM_BrkPedlSts_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X911*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_TLT_RW_CHS1(void){
	uint8 tmp_TLT_RW_CHS1_CRC_TLT_RW_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TLT_RW_CHS1_ALIV_TLT_RW_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_TLT_RW_CHS1_AVL_LOGR_RW_phy = 0; /*f32 factor : 0.05 , offset : -64.0 , DBCtype: uint16*/ 
	uint8 tmp_TLT_RW_CHS1_QU_AVL_LOGR_RW_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_TLT_RW_CHS1.msg_tout = FALSE;
	cap_canApiMsg_TLT_RW_CHS1.msg_tout |= Rte_Read_RPort_CRC_TLT_RW_TLT_RW_CHS1_CRC_TLT_RW_TLT_RW_CHS1(&tmp_TLT_RW_CHS1_CRC_TLT_RW_phy);
	cap_canApiMsg_TLT_RW_CHS1.msg_tout |= Rte_Read_RPort_ALIV_TLT_RW_TLT_RW_CHS1_ALIV_TLT_RW_TLT_RW_CHS1(&tmp_TLT_RW_CHS1_ALIV_TLT_RW_phy);
	cap_canApiMsg_TLT_RW_CHS1.msg_tout |= Rte_Read_RPort_AVL_LOGR_RW_TLT_RW_CHS1_AVL_LOGR_RW_TLT_RW_CHS1(&tmp_TLT_RW_CHS1_AVL_LOGR_RW_phy);
	cap_canApiMsg_TLT_RW_CHS1.msg_tout |= Rte_Read_RPort_QU_AVL_LOGR_RW_TLT_RW_CHS1_QU_AVL_LOGR_RW_TLT_RW_CHS1(&tmp_TLT_RW_CHS1_QU_AVL_LOGR_RW_phy);


	if(TRUE != cap_canApiMsg_TLT_RW_CHS1.msg_tout){
		cap_canApiMsg_TLT_RW_CHS1.CRC_TLT_RW_phy = tmp_TLT_RW_CHS1_CRC_TLT_RW_phy;
		cap_canApiMsg_TLT_RW_CHS1.ALIV_TLT_RW_phy = tmp_TLT_RW_CHS1_ALIV_TLT_RW_phy;
		cap_canApiMsg_TLT_RW_CHS1.AVL_LOGR_RW_phy = tmp_TLT_RW_CHS1_AVL_LOGR_RW_phy;
		cap_canApiMsg_TLT_RW_CHS1.QU_AVL_LOGR_RW_phy = tmp_TLT_RW_CHS1_QU_AVL_LOGR_RW_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X214*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_ST_STAB_DSC_2_CHS1(void){
	uint8 tmp_ST_STAB_DSC_2_CHS1_ST_SLIP_THO_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ST_STAB_DSC_2_CHS1.msg_tout = FALSE;
	cap_canApiMsg_ST_STAB_DSC_2_CHS1.msg_tout |= Rte_Read_RPort_ST_SLIP_THO_ST_STAB_DSC_2_CHS1_ST_SLIP_THO_ST_STAB_DSC_2_CHS1(&tmp_ST_STAB_DSC_2_CHS1_ST_SLIP_THO_phy);


	if(TRUE != cap_canApiMsg_ST_STAB_DSC_2_CHS1.msg_tout){
		cap_canApiMsg_ST_STAB_DSC_2_CHS1.ST_SLIP_THO_phy = tmp_ST_STAB_DSC_2_CHS1_ST_SLIP_THO_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X213*/ /*size:8*/ /*50ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_ST_STAB_DSC_CHS1(void){
	uint8 tmp_ST_STAB_DSC_CHS1_CRC_ST_STAB_DSC_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ST_STAB_DSC_CHS1_ALIV_ST_STAB_DSC_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint16 tmp_ST_STAB_DSC_CHS1_QU_FN_FDR_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint16 tmp_ST_STAB_DSC_CHS1_QU_FN_ABS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint16 tmp_ST_STAB_DSC_CHS1_QU_FN_ASC_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_ST_STAB_DSC_CHS1_ST_BRG_DV_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout = FALSE;
	cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout |= Rte_Read_RPort_CRC_ST_STAB_DSC_ST_STAB_DSC_CHS1_CRC_ST_STAB_DSC_ST_STAB_DSC_CHS1(&tmp_ST_STAB_DSC_CHS1_CRC_ST_STAB_DSC_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout |= Rte_Read_RPort_ALIV_ST_STAB_DSC_ST_STAB_DSC_CHS1_ALIV_ST_STAB_DSC_ST_STAB_DSC_CHS1(&tmp_ST_STAB_DSC_CHS1_ALIV_ST_STAB_DSC_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout |= Rte_Read_RPort_QU_FN_FDR_ST_STAB_DSC_CHS1_QU_FN_FDR_ST_STAB_DSC_CHS1(&tmp_ST_STAB_DSC_CHS1_QU_FN_FDR_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout |= Rte_Read_RPort_QU_FN_ABS_ST_STAB_DSC_CHS1_QU_FN_ABS_ST_STAB_DSC_CHS1(&tmp_ST_STAB_DSC_CHS1_QU_FN_ABS_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout |= Rte_Read_RPort_QU_FN_ASC_ST_STAB_DSC_CHS1_QU_FN_ASC_ST_STAB_DSC_CHS1(&tmp_ST_STAB_DSC_CHS1_QU_FN_ASC_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout |= Rte_Read_RPort_ST_BRG_DV_ST_STAB_DSC_CHS1_ST_BRG_DV_ST_STAB_DSC_CHS1(&tmp_ST_STAB_DSC_CHS1_ST_BRG_DV_phy);


	if(TRUE != cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout){
		cap_canApiMsg_ST_STAB_DSC_CHS1.CRC_ST_STAB_DSC_phy = tmp_ST_STAB_DSC_CHS1_CRC_ST_STAB_DSC_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS1.ALIV_ST_STAB_DSC_phy = tmp_ST_STAB_DSC_CHS1_ALIV_ST_STAB_DSC_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS1.QU_FN_FDR_phy = tmp_ST_STAB_DSC_CHS1_QU_FN_FDR_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS1.QU_FN_ABS_phy = tmp_ST_STAB_DSC_CHS1_QU_FN_ABS_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS1.QU_FN_ASC_phy = tmp_ST_STAB_DSC_CHS1_QU_FN_ASC_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS1.ST_BRG_DV_phy = tmp_ST_STAB_DSC_CHS1_ST_BRG_DV_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X297*/ /*size:20*/ /*20ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_BundleEAFlexrayToAECANFD20msNo2_CHS1(void){
	uint8 tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_CRC_ACLNX_COG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ALIV_ACLNX_COG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ACLNX_COG_phy = 0; /*f32 factor : 0.002 , offset : -65.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_QU_ACLNX_COG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_CRC_ACLNY_COG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ALIV_ACLNY_COG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ACLNY_COG_phy = 0; /*f32 factor : 0.002 , offset : -65.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_QU_ACLNY_COG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout = FALSE;
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout |= Rte_Read_RPort_CRC_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1_CRC_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1(&tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_CRC_ACLNX_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout |= Rte_Read_RPort_ALIV_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1_ALIV_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1(&tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ALIV_ACLNX_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout |= Rte_Read_RPort_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1(&tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ACLNX_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout |= Rte_Read_RPort_QU_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1_QU_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1(&tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_QU_ACLNX_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout |= Rte_Read_RPort_CRC_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1_CRC_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1(&tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_CRC_ACLNY_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout |= Rte_Read_RPort_ALIV_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1_ALIV_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1(&tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ALIV_ACLNY_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout |= Rte_Read_RPort_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1(&tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ACLNY_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout |= Rte_Read_RPort_QU_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1_QU_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_CHS1(&tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_QU_ACLNY_COG_phy);


	if(TRUE != cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout){
		cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.CRC_ACLNX_COG_phy = tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_CRC_ACLNX_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.ALIV_ACLNX_COG_phy = tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ALIV_ACLNX_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.ACLNX_COG_phy = tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ACLNX_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.QU_ACLNX_COG_phy = tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_QU_ACLNX_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.CRC_ACLNY_COG_phy = tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_CRC_ACLNY_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.ALIV_ACLNY_COG_phy = tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ALIV_ACLNY_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.ACLNY_COG_phy = tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_ACLNY_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.QU_ACLNY_COG_phy = tmp_BundleEAFlexrayToAECANFD20msNo2_CHS1_QU_ACLNY_COG_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X296*/ /*size:64*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_BundleEAFlexrayToAECANFD10msNo1_CHS1(void){
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_EXTS_ARB_INTF_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_EXTS_ARB_INTF_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_EXTS_ARB_INTF_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	sint32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_RS_LH_EXT_phy = 0; /*f32 factor : 1.0 , offset : -32000.0 , DBCtype: uint16*/ 
	sint32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_RS_RH_EXT_phy = 0; /*f32 factor : 1.0 , offset : -32000.0 , DBCtype: uint16*/ 
	sint32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_FS_LH_EXT_phy = 0; /*f32 factor : 1.0 , offset : -32000.0 , DBCtype: uint16*/ 
	sint32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_FS_RH_EXT_phy = 0; /*f32 factor : 1.0 , offset : -32000.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_RQ_RPM_BAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_RQ_RPM_BAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_RQ_RPM_BAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MAX_BAX_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MIN_BAX_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ST_TAR_RPM_BAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_STIF_SPCO_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_RQ_RPM_FTAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_RQ_RPM_FTAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_RQ_RPM_FTAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MAX_FTAX_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MIN_FTAX_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ST_TAR_RPM_FTAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_StatusSlipThresholds_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_StatusSlipThresholds_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_StatusSlipThresholds_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_StatusSlipThresholdsFrontAxle_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_StatusSlipThresholdsRearAxle_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout = FALSE;
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_CRC_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_ALIV_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_CHL_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_AVL_BRTORQ_WHL_RS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_RS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_RS_LH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_AVL_BRTORQ_WHL_RS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_RS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_RS_RH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_AVL_BRTORQ_WHL_FS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_FS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_FS_LH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_AVL_BRTORQ_WHL_FS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_FS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_FS_RH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_CRC_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_ALIV_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_CHL_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_TAR_RPM_MAX_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MAX_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MAX_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_TAR_RPM_MIN_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MIN_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MIN_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_ST_TAR_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_ST_TAR_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ST_TAR_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_TAR_STIF_SPCO_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_STIF_SPCO_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_STIF_SPCO_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_CRC_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_ALIV_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_CHL_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_TAR_RPM_MAX_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MAX_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MAX_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_TAR_RPM_MIN_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MIN_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MIN_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_ST_TAR_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1_ST_TAR_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ST_TAR_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_CRC_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_ALIV_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_CHL_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_StatusSlipThresholdsFrontAxle_BundleEAFlexrayToAECANFD10msNo1_CHS1_StatusSlipThresholdsFrontAxle_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_StatusSlipThresholdsFrontAxle_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout |= Rte_Read_RPort_StatusSlipThresholdsRearAxle_BundleEAFlexrayToAECANFD10msNo1_CHS1_StatusSlipThresholdsRearAxle_BundleEAFlexrayToAECANFD10msNo1_CHS1(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_StatusSlipThresholdsRearAxle_phy);


	if(TRUE != cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout){
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CRC_EXTS_ARB_INTF_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_EXTS_ARB_INTF_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ALIV_EXTS_ARB_INTF_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_EXTS_ARB_INTF_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CHL_EXTS_ARB_INTF_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_EXTS_ARB_INTF_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.AVL_BRTORQ_WHL_RS_LH_EXT_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_RS_LH_EXT_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.AVL_BRTORQ_WHL_RS_RH_EXT_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_RS_RH_EXT_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.AVL_BRTORQ_WHL_FS_LH_EXT_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_FS_LH_EXT_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.AVL_BRTORQ_WHL_FS_RH_EXT_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_AVL_BRTORQ_WHL_FS_RH_EXT_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CRC_RQ_RPM_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_RQ_RPM_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ALIV_RQ_RPM_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_RQ_RPM_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CHL_RQ_RPM_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_RQ_RPM_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_RPM_MAX_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MAX_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_RPM_MIN_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MIN_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ST_TAR_RPM_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ST_TAR_RPM_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_STIF_SPCO_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_STIF_SPCO_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CRC_RQ_RPM_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_RQ_RPM_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ALIV_RQ_RPM_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_RQ_RPM_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CHL_RQ_RPM_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_RQ_RPM_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_RPM_MAX_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MAX_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_RPM_MIN_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_TAR_RPM_MIN_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ST_TAR_RPM_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ST_TAR_RPM_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CRC_StatusSlipThresholds_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CRC_StatusSlipThresholds_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ALIV_StatusSlipThresholds_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_ALIV_StatusSlipThresholds_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CHL_StatusSlipThresholds_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_CHL_StatusSlipThresholds_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.StatusSlipThresholdsFrontAxle_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_StatusSlipThresholdsFrontAxle_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.StatusSlipThresholdsRearAxle_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS1_StatusSlipThresholdsRearAxle_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X131*/ /*size:12*/ /*5ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_AVL_RPM_WHL_CHS1(void){
	uint8 tmp_AVL_RPM_WHL_CHS1_CRC_AVL_RPM_WHL_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_AVL_RPM_WHL_CHS1_ALIV_AVL_RPM_WHL_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_RLH_phy = 0; /*f32 factor : 0.015625 , offset : -511.984375 , DBCtype: uint16*/ 
	float32 tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_RRH_phy = 0; /*f32 factor : 0.015625 , offset : -511.984375 , DBCtype: uint16*/ 
	float32 tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_FLH_phy = 0; /*f32 factor : 0.015625 , offset : -511.984375 , DBCtype: uint16*/ 
	float32 tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_FRH_phy = 0; /*f32 factor : 0.015625 , offset : -511.984375 , DBCtype: uint16*/ 
	uint8 tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_RLH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_RRH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_FLH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_FRH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout = FALSE;
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_CRC_AVL_RPM_WHL_AVL_RPM_WHL_CHS1_CRC_AVL_RPM_WHL_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_CRC_AVL_RPM_WHL_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_ALIV_AVL_RPM_WHL_AVL_RPM_WHL_CHS1_ALIV_AVL_RPM_WHL_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_ALIV_AVL_RPM_WHL_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_AVL_RPM_WHL_RLH_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_RLH_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_RLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_AVL_RPM_WHL_RRH_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_RRH_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_RRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_AVL_RPM_WHL_FLH_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_FLH_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_FLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_AVL_RPM_WHL_FRH_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_FRH_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_FRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_QU_AVL_RPM_WHL_RLH_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_RLH_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_RLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_QU_AVL_RPM_WHL_RRH_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_RRH_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_RRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_QU_AVL_RPM_WHL_FLH_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_FLH_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_FLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout |= Rte_Read_RPort_QU_AVL_RPM_WHL_FRH_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_FRH_AVL_RPM_WHL_CHS1(&tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_FRH_phy);


	if(TRUE != cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout){
		cap_canApiMsg_AVL_RPM_WHL_CHS1.CRC_AVL_RPM_WHL_phy = tmp_AVL_RPM_WHL_CHS1_CRC_AVL_RPM_WHL_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.ALIV_AVL_RPM_WHL_phy = tmp_AVL_RPM_WHL_CHS1_ALIV_AVL_RPM_WHL_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.AVL_RPM_WHL_RLH_phy = tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_RLH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.AVL_RPM_WHL_RRH_phy = tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_RRH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.AVL_RPM_WHL_FLH_phy = tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_FLH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.AVL_RPM_WHL_FRH_phy = tmp_AVL_RPM_WHL_CHS1_AVL_RPM_WHL_FRH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.QU_AVL_RPM_WHL_RLH_phy = tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_RLH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.QU_AVL_RPM_WHL_RRH_phy = tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_RRH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.QU_AVL_RPM_WHL_FLH_phy = tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_FLH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS1.QU_AVL_RPM_WHL_FRH_phy = tmp_AVL_RPM_WHL_CHS1_QU_AVL_RPM_WHL_FRH_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X289*/ /*size:32*/ /*20ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_BundleEAFlexrayToCANFD20msNo1_CHS1(void){
	uint8 tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_CRC_V_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_ALIV_V_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_V_VEH_COG_phy = 0; /*f32 factor : 0.015625 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_QU_V_VEH_COG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint64 tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_SecOcDataP2V_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint64*/ 

	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.msg_tout = FALSE;
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.msg_tout |= Rte_Read_RPort_CRC_V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS1_CRC_V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS1(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_CRC_V_VEH_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.msg_tout |= Rte_Read_RPort_ALIV_V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS1_ALIV_V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS1(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_ALIV_V_VEH_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.msg_tout |= Rte_Read_RPort_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_CHS1_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_CHS1(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_V_VEH_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.msg_tout |= Rte_Read_RPort_QU_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_CHS1_QU_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_CHS1(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_QU_V_VEH_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.msg_tout |= Rte_Read_RPort_SecOcDataP2V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS1_SecOcDataP2V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS1(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_SecOcDataP2V_VEH_phy);


	if(TRUE != cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.msg_tout){
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.CRC_V_VEH_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_CRC_V_VEH_phy;
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.ALIV_V_VEH_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_ALIV_V_VEH_phy;
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.V_VEH_COG_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_V_VEH_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.QU_V_VEH_COG_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_QU_V_VEH_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.SecOcDataP2V_VEH_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS1_SecOcDataP2V_VEH_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X88*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*ReceivedMsg */
void cap_getRxSignals_SFA_SteerWheel_Info_CHS1(void){
	uint8 tmp_SFA_SteerWheel_Info_CHS1_CRC_SFA_SteerWheel_Info_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_SFA_SteerWheel_Info_CHS1_ALIV_SFA_SteerWheel_Info_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelTorque_phy = 0; /*f32 factor : 0.02 , offset : 0.0 , DBCtype: sint16*/ 
	uint16 tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelAngleSpeed_phy = 0; /*f32 factor : 4.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelAngle_phy = 0; /*f32 factor : 0.02 , offset : 0.0 , DBCtype: sint16*/ 
	uint8 tmp_SFA_SteerWheel_Info_CHS1_SFA_WarningLamp_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_SFA_SteerWheel_Info_CHS1_SFA_EmergencyRequest_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_SFA_SteerWheel_Info_CHS1_SFA_CenteringStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout = FALSE;
	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout |= Rte_Read_RPort_CRC_SFA_SteerWheel_Info_SFA_SteerWheel_Info_CHS1_CRC_SFA_SteerWheel_Info_SFA_SteerWheel_Info_CHS1(&tmp_SFA_SteerWheel_Info_CHS1_CRC_SFA_SteerWheel_Info_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout |= Rte_Read_RPort_ALIV_SFA_SteerWheel_Info_SFA_SteerWheel_Info_CHS1_ALIV_SFA_SteerWheel_Info_SFA_SteerWheel_Info_CHS1(&tmp_SFA_SteerWheel_Info_CHS1_ALIV_SFA_SteerWheel_Info_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout |= Rte_Read_RPort_SFA_SteerWheelTorque_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelTorque_SFA_SteerWheel_Info_CHS1(&tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelTorque_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout |= Rte_Read_RPort_SFA_SteerWheelAngleSpeed_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelAngleSpeed_SFA_SteerWheel_Info_CHS1(&tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelAngleSpeed_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout |= Rte_Read_RPort_SFA_SteerWheelAngle_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelAngle_SFA_SteerWheel_Info_CHS1(&tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelAngle_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout |= Rte_Read_RPort_SFA_WarningLamp_SFA_SteerWheel_Info_CHS1_SFA_WarningLamp_SFA_SteerWheel_Info_CHS1(&tmp_SFA_SteerWheel_Info_CHS1_SFA_WarningLamp_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout |= Rte_Read_RPort_SFA_EmergencyRequest_SFA_SteerWheel_Info_CHS1_SFA_EmergencyRequest_SFA_SteerWheel_Info_CHS1(&tmp_SFA_SteerWheel_Info_CHS1_SFA_EmergencyRequest_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout |= Rte_Read_RPort_SFA_CenteringStatus_SFA_SteerWheel_Info_CHS1_SFA_CenteringStatus_SFA_SteerWheel_Info_CHS1(&tmp_SFA_SteerWheel_Info_CHS1_SFA_CenteringStatus_phy);


	if(TRUE != cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout){
		cap_canApiMsg_SFA_SteerWheel_Info_CHS1.CRC_SFA_SteerWheel_Info_phy = tmp_SFA_SteerWheel_Info_CHS1_CRC_SFA_SteerWheel_Info_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS1.ALIV_SFA_SteerWheel_Info_phy = tmp_SFA_SteerWheel_Info_CHS1_ALIV_SFA_SteerWheel_Info_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_SteerWheelTorque_phy = tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelTorque_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_SteerWheelAngleSpeed_phy = tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelAngleSpeed_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_SteerWheelAngle_phy = tmp_SFA_SteerWheel_Info_CHS1_SFA_SteerWheelAngle_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_WarningLamp_phy = tmp_SFA_SteerWheel_Info_CHS1_SFA_WarningLamp_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_EmergencyRequest_phy = tmp_SFA_SteerWheel_Info_CHS1_SFA_EmergencyRequest_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_CenteringStatus_phy = tmp_SFA_SteerWheel_Info_CHS1_SFA_CenteringStatus_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X200*/ /*size:4*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_ESC_A_CHS2(void){
	uint8 tmp_ESC_A_CHS2_AD3_PrsrVal_Fl_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ESC_A_CHS2_AD3_PrsrVal_Fr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ESC_A_CHS2_AD3_PrsrVal_Rl_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ESC_A_CHS2_AD3_PrsrVal_Rr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ESC_A_CHS2.msg_tout = FALSE;
	cap_canApiMsg_ESC_A_CHS2.msg_tout |= Rte_Read_RPort_AD3_PrsrVal_Fl_ESC_A_CHS2_AD3_PrsrVal_Fl_ESC_A_CHS2(&tmp_ESC_A_CHS2_AD3_PrsrVal_Fl_phy);
	cap_canApiMsg_ESC_A_CHS2.msg_tout |= Rte_Read_RPort_AD3_PrsrVal_Fr_ESC_A_CHS2_AD3_PrsrVal_Fr_ESC_A_CHS2(&tmp_ESC_A_CHS2_AD3_PrsrVal_Fr_phy);
	cap_canApiMsg_ESC_A_CHS2.msg_tout |= Rte_Read_RPort_AD3_PrsrVal_Rl_ESC_A_CHS2_AD3_PrsrVal_Rl_ESC_A_CHS2(&tmp_ESC_A_CHS2_AD3_PrsrVal_Rl_phy);
	cap_canApiMsg_ESC_A_CHS2.msg_tout |= Rte_Read_RPort_AD3_PrsrVal_Rr_ESC_A_CHS2_AD3_PrsrVal_Rr_ESC_A_CHS2(&tmp_ESC_A_CHS2_AD3_PrsrVal_Rr_phy);


	if(TRUE != cap_canApiMsg_ESC_A_CHS2.msg_tout){
		cap_canApiMsg_ESC_A_CHS2.AD3_PrsrVal_Fl_phy = tmp_ESC_A_CHS2_AD3_PrsrVal_Fl_phy;
		cap_canApiMsg_ESC_A_CHS2.AD3_PrsrVal_Fr_phy = tmp_ESC_A_CHS2_AD3_PrsrVal_Fr_phy;
		cap_canApiMsg_ESC_A_CHS2.AD3_PrsrVal_Rl_phy = tmp_ESC_A_CHS2_AD3_PrsrVal_Rl_phy;
		cap_canApiMsg_ESC_A_CHS2.AD3_PrsrVal_Rr_phy = tmp_ESC_A_CHS2_AD3_PrsrVal_Rr_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X180*/ /*size:1*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_ABS_ESC_01_CHS2(void){
	uint8 tmp_ABS_ESC_01_CHS2_ABS_ACTIVE_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ABS_ESC_01_CHS2.msg_tout = FALSE;
	cap_canApiMsg_ABS_ESC_01_CHS2.msg_tout |= Rte_Read_RPort_ABS_ACTIVE_ABS_ESC_01_CHS2_ABS_ACTIVE_ABS_ESC_01_CHS2(&tmp_ABS_ESC_01_CHS2_ABS_ACTIVE_phy);


	if(TRUE != cap_canApiMsg_ABS_ESC_01_CHS2.msg_tout){
		cap_canApiMsg_ABS_ESC_01_CHS2.ABS_ACTIVE_phy = tmp_ABS_ESC_01_CHS2_ABS_ACTIVE_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X210*/ /*size:2*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_IEB_01_CHS2(void){
	uint16 tmp_IEB_01_CHS2_WEstTot_Nm_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_IEB_01_CHS2.msg_tout = FALSE;
	cap_canApiMsg_IEB_01_CHS2.msg_tout |= Rte_Read_RPort_WEstTot_Nm_IEB_01_CHS2_WEstTot_Nm_IEB_01_CHS2(&tmp_IEB_01_CHS2_WEstTot_Nm_phy);


	if(TRUE != cap_canApiMsg_IEB_01_CHS2.msg_tout){
		cap_canApiMsg_IEB_01_CHS2.WEstTot_Nm_phy = tmp_IEB_01_CHS2_WEstTot_Nm_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X150*/ /*size:7*/ /*20ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_EBCM_STATUS_CHS2(void){
	uint8 tmp_EBCM_STATUS_CHS2_CRC_EBCM_STATUS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_EBCM_STATUS_CHS2_ALIV_EBCM_STATUS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_EBCM_STATUS_CHS2_MCPressure_phy = 0; /*f32 factor : 1.0 , offset : -42.5 , DBCtype: uint16*/ 
	float32 tmp_EBCM_STATUS_CHS2_BreakPedalPercent_phy = 0; /*f32 factor : 0.0625 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_EBCM_STATUS_CHS2_EPBStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_EBCM_STATUS_CHS2_HillholderStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_EBCM_STATUS_CHS2_TCSAvailable_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS2_TCSActive_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS2_BreakPedalPercentValid_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS2_MCPressureSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS2_HillholderFault_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS2_EPBFault_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_EBCM_STATUS_CHS2_EBCM_BrkPedlSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout = FALSE;
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_CRC_EBCM_STATUS_EBCM_STATUS_CHS2_CRC_EBCM_STATUS_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_CRC_EBCM_STATUS_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_ALIV_EBCM_STATUS_EBCM_STATUS_CHS2_ALIV_EBCM_STATUS_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_ALIV_EBCM_STATUS_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_MCPressure_EBCM_STATUS_CHS2_MCPressure_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_MCPressure_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_BreakPedalPercent_EBCM_STATUS_CHS2_BreakPedalPercent_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_BreakPedalPercent_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_EPBStatus_EBCM_STATUS_CHS2_EPBStatus_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_EPBStatus_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_HillholderStatus_EBCM_STATUS_CHS2_HillholderStatus_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_HillholderStatus_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_TCSAvailable_EBCM_STATUS_CHS2_TCSAvailable_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_TCSAvailable_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_TCSActive_EBCM_STATUS_CHS2_TCSActive_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_TCSActive_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_BreakPedalPercentValid_EBCM_STATUS_CHS2_BreakPedalPercentValid_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_BreakPedalPercentValid_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_MCPressureSts_EBCM_STATUS_CHS2_MCPressureSts_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_MCPressureSts_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_HillholderFault_EBCM_STATUS_CHS2_HillholderFault_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_HillholderFault_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_EPBFault_EBCM_STATUS_CHS2_EPBFault_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_EPBFault_phy);
	cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout |= Rte_Read_RPort_EBCM_BrkPedlSts_EBCM_STATUS_CHS2_EBCM_BrkPedlSts_EBCM_STATUS_CHS2(&tmp_EBCM_STATUS_CHS2_EBCM_BrkPedlSts_phy);


	if(TRUE != cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout){
		cap_canApiMsg_EBCM_STATUS_CHS2.CRC_EBCM_STATUS_phy = tmp_EBCM_STATUS_CHS2_CRC_EBCM_STATUS_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.ALIV_EBCM_STATUS_phy = tmp_EBCM_STATUS_CHS2_ALIV_EBCM_STATUS_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.MCPressure_phy = tmp_EBCM_STATUS_CHS2_MCPressure_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.BreakPedalPercent_phy = tmp_EBCM_STATUS_CHS2_BreakPedalPercent_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.EPBStatus_phy = tmp_EBCM_STATUS_CHS2_EPBStatus_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.HillholderStatus_phy = tmp_EBCM_STATUS_CHS2_HillholderStatus_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.TCSAvailable_phy = tmp_EBCM_STATUS_CHS2_TCSAvailable_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.TCSActive_phy = tmp_EBCM_STATUS_CHS2_TCSActive_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.BreakPedalPercentValid_phy = tmp_EBCM_STATUS_CHS2_BreakPedalPercentValid_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.MCPressureSts_phy = tmp_EBCM_STATUS_CHS2_MCPressureSts_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.HillholderFault_phy = tmp_EBCM_STATUS_CHS2_HillholderFault_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.EPBFault_phy = tmp_EBCM_STATUS_CHS2_EPBFault_phy;
		cap_canApiMsg_EBCM_STATUS_CHS2.EBCM_BrkPedlSts_phy = tmp_EBCM_STATUS_CHS2_EBCM_BrkPedlSts_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X214*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_ST_STAB_DSC_2_CHS2(void){
	uint8 tmp_ST_STAB_DSC_2_CHS2_ST_SLIP_THO_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ST_STAB_DSC_2_CHS2.msg_tout = FALSE;
	cap_canApiMsg_ST_STAB_DSC_2_CHS2.msg_tout |= Rte_Read_RPort_ST_SLIP_THO_ST_STAB_DSC_2_CHS2_ST_SLIP_THO_ST_STAB_DSC_2_CHS2(&tmp_ST_STAB_DSC_2_CHS2_ST_SLIP_THO_phy);


	if(TRUE != cap_canApiMsg_ST_STAB_DSC_2_CHS2.msg_tout){
		cap_canApiMsg_ST_STAB_DSC_2_CHS2.ST_SLIP_THO_phy = tmp_ST_STAB_DSC_2_CHS2_ST_SLIP_THO_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X213*/ /*size:8*/ /*50ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_ST_STAB_DSC_CHS2(void){
	uint8 tmp_ST_STAB_DSC_CHS2_CRC_ST_STAB_DSC_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_ST_STAB_DSC_CHS2_ALIV_ST_STAB_DSC_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint16 tmp_ST_STAB_DSC_CHS2_QU_FN_FDR_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint16 tmp_ST_STAB_DSC_CHS2_QU_FN_ABS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint16 tmp_ST_STAB_DSC_CHS2_QU_FN_ASC_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_ST_STAB_DSC_CHS2_ST_BRG_DV_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout = FALSE;
	cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout |= Rte_Read_RPort_CRC_ST_STAB_DSC_ST_STAB_DSC_CHS2_CRC_ST_STAB_DSC_ST_STAB_DSC_CHS2(&tmp_ST_STAB_DSC_CHS2_CRC_ST_STAB_DSC_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout |= Rte_Read_RPort_ALIV_ST_STAB_DSC_ST_STAB_DSC_CHS2_ALIV_ST_STAB_DSC_ST_STAB_DSC_CHS2(&tmp_ST_STAB_DSC_CHS2_ALIV_ST_STAB_DSC_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout |= Rte_Read_RPort_QU_FN_FDR_ST_STAB_DSC_CHS2_QU_FN_FDR_ST_STAB_DSC_CHS2(&tmp_ST_STAB_DSC_CHS2_QU_FN_FDR_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout |= Rte_Read_RPort_QU_FN_ABS_ST_STAB_DSC_CHS2_QU_FN_ABS_ST_STAB_DSC_CHS2(&tmp_ST_STAB_DSC_CHS2_QU_FN_ABS_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout |= Rte_Read_RPort_QU_FN_ASC_ST_STAB_DSC_CHS2_QU_FN_ASC_ST_STAB_DSC_CHS2(&tmp_ST_STAB_DSC_CHS2_QU_FN_ASC_phy);
	cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout |= Rte_Read_RPort_ST_BRG_DV_ST_STAB_DSC_CHS2_ST_BRG_DV_ST_STAB_DSC_CHS2(&tmp_ST_STAB_DSC_CHS2_ST_BRG_DV_phy);


	if(TRUE != cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout){
		cap_canApiMsg_ST_STAB_DSC_CHS2.CRC_ST_STAB_DSC_phy = tmp_ST_STAB_DSC_CHS2_CRC_ST_STAB_DSC_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS2.ALIV_ST_STAB_DSC_phy = tmp_ST_STAB_DSC_CHS2_ALIV_ST_STAB_DSC_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS2.QU_FN_FDR_phy = tmp_ST_STAB_DSC_CHS2_QU_FN_FDR_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS2.QU_FN_ABS_phy = tmp_ST_STAB_DSC_CHS2_QU_FN_ABS_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS2.QU_FN_ASC_phy = tmp_ST_STAB_DSC_CHS2_QU_FN_ASC_phy;
		cap_canApiMsg_ST_STAB_DSC_CHS2.ST_BRG_DV_phy = tmp_ST_STAB_DSC_CHS2_ST_BRG_DV_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X296*/ /*size:64*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_BundleEAFlexrayToAECANFD10msNo1_CHS2(void){
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_EXTS_ARB_INTF_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_EXTS_ARB_INTF_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_EXTS_ARB_INTF_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	sint32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_RS_LH_EXT_phy = 0; /*f32 factor : 1.0 , offset : -32000.0 , DBCtype: uint16*/ 
	sint32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_RS_RH_EXT_phy = 0; /*f32 factor : 1.0 , offset : -32000.0 , DBCtype: uint16*/ 
	sint32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_FS_LH_EXT_phy = 0; /*f32 factor : 1.0 , offset : -32000.0 , DBCtype: uint16*/ 
	sint32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_FS_RH_EXT_phy = 0; /*f32 factor : 1.0 , offset : -32000.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_RQ_RPM_BAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_RQ_RPM_BAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_RQ_RPM_BAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MAX_BAX_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MIN_BAX_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ST_TAR_RPM_BAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_STIF_SPCO_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_RQ_RPM_FTAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_RQ_RPM_FTAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_RQ_RPM_FTAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MAX_FTAX_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MIN_FTAX_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ST_TAR_RPM_FTAX_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_StatusSlipThresholds_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_StatusSlipThresholds_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_StatusSlipThresholds_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_StatusSlipThresholdsFrontAxle_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_StatusSlipThresholdsRearAxle_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout = FALSE;
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_CRC_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_ALIV_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_CHL_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_AVL_BRTORQ_WHL_RS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_RS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_RS_LH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_AVL_BRTORQ_WHL_RS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_RS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_RS_RH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_AVL_BRTORQ_WHL_FS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_FS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_FS_LH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_AVL_BRTORQ_WHL_FS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_FS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_FS_RH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_CRC_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_ALIV_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_CHL_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_TAR_RPM_MAX_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MAX_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MAX_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_TAR_RPM_MIN_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MIN_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MIN_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_ST_TAR_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_ST_TAR_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ST_TAR_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_TAR_STIF_SPCO_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_STIF_SPCO_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_STIF_SPCO_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_CRC_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_ALIV_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_CHL_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_TAR_RPM_MAX_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MAX_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MAX_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_TAR_RPM_MIN_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MIN_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MIN_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_ST_TAR_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2_ST_TAR_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ST_TAR_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_CRC_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_ALIV_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_CHL_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_StatusSlipThresholdsFrontAxle_BundleEAFlexrayToAECANFD10msNo1_CHS2_StatusSlipThresholdsFrontAxle_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_StatusSlipThresholdsFrontAxle_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout |= Rte_Read_RPort_StatusSlipThresholdsRearAxle_BundleEAFlexrayToAECANFD10msNo1_CHS2_StatusSlipThresholdsRearAxle_BundleEAFlexrayToAECANFD10msNo1_CHS2(&tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_StatusSlipThresholdsRearAxle_phy);


	if(TRUE != cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout){
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CRC_EXTS_ARB_INTF_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_EXTS_ARB_INTF_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ALIV_EXTS_ARB_INTF_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_EXTS_ARB_INTF_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CHL_EXTS_ARB_INTF_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_EXTS_ARB_INTF_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.AVL_BRTORQ_WHL_RS_LH_EXT_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_RS_LH_EXT_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.AVL_BRTORQ_WHL_RS_RH_EXT_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_RS_RH_EXT_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.AVL_BRTORQ_WHL_FS_LH_EXT_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_FS_LH_EXT_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.AVL_BRTORQ_WHL_FS_RH_EXT_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_AVL_BRTORQ_WHL_FS_RH_EXT_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CRC_RQ_RPM_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_RQ_RPM_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ALIV_RQ_RPM_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_RQ_RPM_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CHL_RQ_RPM_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_RQ_RPM_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_RPM_MAX_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MAX_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_RPM_MIN_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MIN_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ST_TAR_RPM_BAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ST_TAR_RPM_BAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_STIF_SPCO_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_STIF_SPCO_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CRC_RQ_RPM_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_RQ_RPM_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ALIV_RQ_RPM_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_RQ_RPM_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CHL_RQ_RPM_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_RQ_RPM_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_RPM_MAX_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MAX_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_RPM_MIN_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_TAR_RPM_MIN_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ST_TAR_RPM_FTAX_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ST_TAR_RPM_FTAX_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CRC_StatusSlipThresholds_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CRC_StatusSlipThresholds_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ALIV_StatusSlipThresholds_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_ALIV_StatusSlipThresholds_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CHL_StatusSlipThresholds_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_CHL_StatusSlipThresholds_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.StatusSlipThresholdsFrontAxle_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_StatusSlipThresholdsFrontAxle_phy;
		cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.StatusSlipThresholdsRearAxle_phy = tmp_BundleEAFlexrayToAECANFD10msNo1_CHS2_StatusSlipThresholdsRearAxle_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X131*/ /*size:12*/ /*5ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_AVL_RPM_WHL_CHS2(void){
	uint8 tmp_AVL_RPM_WHL_CHS2_CRC_AVL_RPM_WHL_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_AVL_RPM_WHL_CHS2_ALIV_AVL_RPM_WHL_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_RLH_phy = 0; /*f32 factor : 0.015625 , offset : -511.984375 , DBCtype: uint16*/ 
	float32 tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_RRH_phy = 0; /*f32 factor : 0.015625 , offset : -511.984375 , DBCtype: uint16*/ 
	float32 tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_FLH_phy = 0; /*f32 factor : 0.015625 , offset : -511.984375 , DBCtype: uint16*/ 
	float32 tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_FRH_phy = 0; /*f32 factor : 0.015625 , offset : -511.984375 , DBCtype: uint16*/ 
	uint8 tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_RLH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_RRH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_FLH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_FRH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout = FALSE;
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_CRC_AVL_RPM_WHL_AVL_RPM_WHL_CHS2_CRC_AVL_RPM_WHL_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_CRC_AVL_RPM_WHL_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_ALIV_AVL_RPM_WHL_AVL_RPM_WHL_CHS2_ALIV_AVL_RPM_WHL_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_ALIV_AVL_RPM_WHL_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_AVL_RPM_WHL_RLH_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_RLH_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_RLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_AVL_RPM_WHL_RRH_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_RRH_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_RRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_AVL_RPM_WHL_FLH_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_FLH_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_FLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_AVL_RPM_WHL_FRH_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_FRH_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_FRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_QU_AVL_RPM_WHL_RLH_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_RLH_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_RLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_QU_AVL_RPM_WHL_RRH_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_RRH_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_RRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_QU_AVL_RPM_WHL_FLH_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_FLH_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_FLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout |= Rte_Read_RPort_QU_AVL_RPM_WHL_FRH_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_FRH_AVL_RPM_WHL_CHS2(&tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_FRH_phy);


	if(TRUE != cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout){
		cap_canApiMsg_AVL_RPM_WHL_CHS2.CRC_AVL_RPM_WHL_phy = tmp_AVL_RPM_WHL_CHS2_CRC_AVL_RPM_WHL_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.ALIV_AVL_RPM_WHL_phy = tmp_AVL_RPM_WHL_CHS2_ALIV_AVL_RPM_WHL_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.AVL_RPM_WHL_RLH_phy = tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_RLH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.AVL_RPM_WHL_RRH_phy = tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_RRH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.AVL_RPM_WHL_FLH_phy = tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_FLH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.AVL_RPM_WHL_FRH_phy = tmp_AVL_RPM_WHL_CHS2_AVL_RPM_WHL_FRH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.QU_AVL_RPM_WHL_RLH_phy = tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_RLH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.QU_AVL_RPM_WHL_RRH_phy = tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_RRH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.QU_AVL_RPM_WHL_FLH_phy = tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_FLH_phy;
		cap_canApiMsg_AVL_RPM_WHL_CHS2.QU_AVL_RPM_WHL_FRH_phy = tmp_AVL_RPM_WHL_CHS2_QU_AVL_RPM_WHL_FRH_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X289*/ /*size:32*/ /*20ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_BundleEAFlexrayToCANFD20msNo1_CHS2(void){
	uint8 tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_CRC_V_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_ALIV_V_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_V_VEH_COG_phy = 0; /*f32 factor : 0.015625 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_QU_V_VEH_COG_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint64 tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_SecOcDataP2V_VEH_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint64*/ 

	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.msg_tout = FALSE;
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.msg_tout |= Rte_Read_RPort_CRC_V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS2_CRC_V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS2(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_CRC_V_VEH_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.msg_tout |= Rte_Read_RPort_ALIV_V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS2_ALIV_V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS2(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_ALIV_V_VEH_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.msg_tout |= Rte_Read_RPort_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_CHS2_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_CHS2(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_V_VEH_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.msg_tout |= Rte_Read_RPort_QU_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_CHS2_QU_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_CHS2(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_QU_V_VEH_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.msg_tout |= Rte_Read_RPort_SecOcDataP2V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS2_SecOcDataP2V_VEH_BundleEAFlexrayToCANFD20msNo1_CHS2(&tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_SecOcDataP2V_VEH_phy);


	if(TRUE != cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.msg_tout){
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.CRC_V_VEH_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_CRC_V_VEH_phy;
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.ALIV_V_VEH_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_ALIV_V_VEH_phy;
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.V_VEH_COG_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_V_VEH_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.QU_V_VEH_COG_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_QU_V_VEH_COG_phy;
		cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.SecOcDataP2V_VEH_phy = tmp_BundleEAFlexrayToCANFD20msNo1_CHS2_SecOcDataP2V_VEH_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X88*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*ReceivedMsg */
void cap_getRxSignals_SFA_SteerWheel_Info_CHS2(void){
	uint8 tmp_SFA_SteerWheel_Info_CHS2_CRC_SFA_SteerWheel_Info_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_SFA_SteerWheel_Info_CHS2_ALIV_SFA_SteerWheel_Info_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelTorque_phy = 0; /*f32 factor : 0.02 , offset : 0.0 , DBCtype: sint16*/ 
	uint16 tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelAngleSpeed_phy = 0; /*f32 factor : 4.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelAngle_phy = 0; /*f32 factor : 0.02 , offset : 0.0 , DBCtype: sint16*/ 
	uint8 tmp_SFA_SteerWheel_Info_CHS2_SFA_WarningLamp_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_SFA_SteerWheel_Info_CHS2_SFA_EmergencyRequest_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_SFA_SteerWheel_Info_CHS2_SFA_CenteringStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout = FALSE;
	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout |= Rte_Read_RPort_CRC_SFA_SteerWheel_Info_SFA_SteerWheel_Info_CHS2_CRC_SFA_SteerWheel_Info_SFA_SteerWheel_Info_CHS2(&tmp_SFA_SteerWheel_Info_CHS2_CRC_SFA_SteerWheel_Info_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout |= Rte_Read_RPort_ALIV_SFA_SteerWheel_Info_SFA_SteerWheel_Info_CHS2_ALIV_SFA_SteerWheel_Info_SFA_SteerWheel_Info_CHS2(&tmp_SFA_SteerWheel_Info_CHS2_ALIV_SFA_SteerWheel_Info_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout |= Rte_Read_RPort_SFA_SteerWheelTorque_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelTorque_SFA_SteerWheel_Info_CHS2(&tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelTorque_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout |= Rte_Read_RPort_SFA_SteerWheelAngleSpeed_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelAngleSpeed_SFA_SteerWheel_Info_CHS2(&tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelAngleSpeed_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout |= Rte_Read_RPort_SFA_SteerWheelAngle_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelAngle_SFA_SteerWheel_Info_CHS2(&tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelAngle_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout |= Rte_Read_RPort_SFA_WarningLamp_SFA_SteerWheel_Info_CHS2_SFA_WarningLamp_SFA_SteerWheel_Info_CHS2(&tmp_SFA_SteerWheel_Info_CHS2_SFA_WarningLamp_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout |= Rte_Read_RPort_SFA_EmergencyRequest_SFA_SteerWheel_Info_CHS2_SFA_EmergencyRequest_SFA_SteerWheel_Info_CHS2(&tmp_SFA_SteerWheel_Info_CHS2_SFA_EmergencyRequest_phy);
	cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout |= Rte_Read_RPort_SFA_CenteringStatus_SFA_SteerWheel_Info_CHS2_SFA_CenteringStatus_SFA_SteerWheel_Info_CHS2(&tmp_SFA_SteerWheel_Info_CHS2_SFA_CenteringStatus_phy);


	if(TRUE != cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout){
		cap_canApiMsg_SFA_SteerWheel_Info_CHS2.CRC_SFA_SteerWheel_Info_phy = tmp_SFA_SteerWheel_Info_CHS2_CRC_SFA_SteerWheel_Info_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS2.ALIV_SFA_SteerWheel_Info_phy = tmp_SFA_SteerWheel_Info_CHS2_ALIV_SFA_SteerWheel_Info_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_SteerWheelTorque_phy = tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelTorque_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_SteerWheelAngleSpeed_phy = tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelAngleSpeed_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_SteerWheelAngle_phy = tmp_SFA_SteerWheel_Info_CHS2_SFA_SteerWheelAngle_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_WarningLamp_phy = tmp_SFA_SteerWheel_Info_CHS2_SFA_WarningLamp_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_EmergencyRequest_phy = tmp_SFA_SteerWheel_Info_CHS2_SFA_EmergencyRequest_phy;
		cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_CenteringStatus_phy = tmp_SFA_SteerWheel_Info_CHS2_SFA_CenteringStatus_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X411*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_OBC_01_100ms_PT(void){
	uint8 tmp_OBC_01_100ms_PT_OBC_HvIntlkStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_OBC_01_100ms_PT_OBC_SeqSta_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_OBC_01_100ms_PT.msg_tout = FALSE;
	cap_canApiMsg_OBC_01_100ms_PT.msg_tout |= Rte_Read_RPort_OBC_HvIntlkStatus_OBC_01_100ms_PT_OBC_HvIntlkStatus_OBC_01_100ms_PT(&tmp_OBC_01_100ms_PT_OBC_HvIntlkStatus_phy);
	cap_canApiMsg_OBC_01_100ms_PT.msg_tout |= Rte_Read_RPort_OBC_SeqSta_OBC_01_100ms_PT_OBC_SeqSta_OBC_01_100ms_PT(&tmp_OBC_01_100ms_PT_OBC_SeqSta_phy);


	if(TRUE != cap_canApiMsg_OBC_01_100ms_PT.msg_tout){
		cap_canApiMsg_OBC_01_100ms_PT.OBC_HvIntlkStatus_phy = tmp_OBC_01_100ms_PT_OBC_HvIntlkStatus_phy;
		cap_canApiMsg_OBC_01_100ms_PT.OBC_SeqSta_phy = tmp_OBC_01_100ms_PT_OBC_SeqSta_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X634*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_DCDC_01_100ms_PT(void){
	uint8 tmp_DCDC_01_100ms_PT_DCDC_HvIntlkStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_DCDC_01_100ms_PT_DCDC_SysOpSta_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_DCDC_01_100ms_PT.msg_tout = FALSE;
	cap_canApiMsg_DCDC_01_100ms_PT.msg_tout |= Rte_Read_RPort_DCDC_HvIntlkStatus_DCDC_01_100ms_PT_DCDC_HvIntlkStatus_DCDC_01_100ms_PT(&tmp_DCDC_01_100ms_PT_DCDC_HvIntlkStatus_phy);
	cap_canApiMsg_DCDC_01_100ms_PT.msg_tout |= Rte_Read_RPort_DCDC_SysOpSta_DCDC_01_100ms_PT_DCDC_SysOpSta_DCDC_01_100ms_PT(&tmp_DCDC_01_100ms_PT_DCDC_SysOpSta_phy);


	if(TRUE != cap_canApiMsg_DCDC_01_100ms_PT.msg_tout){
		cap_canApiMsg_DCDC_01_100ms_PT.DCDC_HvIntlkStatus_phy = tmp_DCDC_01_100ms_PT_DCDC_HvIntlkStatus_phy;
		cap_canApiMsg_DCDC_01_100ms_PT.DCDC_SysOpSta_phy = tmp_DCDC_01_100ms_PT_DCDC_SysOpSta_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X395*/ /*size:12*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_CellTempMeas2_PT(void){
	uint8 tmp_BMS_CellTempMeas2_PT_CRC_BMS_CellTempMeas2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CellTempMeas2_PT_ALV_BMS_CellTempMeas2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_CellTempMeas2_PT_BMS_CellTemp42_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas2_PT_BMS_CellTemp43_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas2_PT_BMS_CellTemp44_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas2_PT_BMS_CellTemp45_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas2_PT_BMS_CellTemp46_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas2_PT_BMS_CellTemp47_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas2_PT_BMS_CellTemp48_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_CellTempMeas2_BMS_CellTempMeas2_PT_CRC_BMS_CellTempMeas2_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_CRC_BMS_CellTempMeas2_phy);
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_CellTempMeas2_BMS_CellTempMeas2_PT_ALV_BMS_CellTempMeas2_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_ALV_BMS_CellTempMeas2_phy);
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp42_BMS_CellTempMeas2_PT_BMS_CellTemp42_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_BMS_CellTemp42_phy);
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp43_BMS_CellTempMeas2_PT_BMS_CellTemp43_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_BMS_CellTemp43_phy);
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp44_BMS_CellTempMeas2_PT_BMS_CellTemp44_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_BMS_CellTemp44_phy);
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp45_BMS_CellTempMeas2_PT_BMS_CellTemp45_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_BMS_CellTemp45_phy);
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp46_BMS_CellTempMeas2_PT_BMS_CellTemp46_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_BMS_CellTemp46_phy);
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp47_BMS_CellTempMeas2_PT_BMS_CellTemp47_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_BMS_CellTemp47_phy);
	cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp48_BMS_CellTempMeas2_PT_BMS_CellTemp48_BMS_CellTempMeas2_PT(&tmp_BMS_CellTempMeas2_PT_BMS_CellTemp48_phy);


	if(TRUE != cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout){
		cap_canApiMsg_BMS_CellTempMeas2_PT.CRC_BMS_CellTempMeas2_phy = tmp_BMS_CellTempMeas2_PT_CRC_BMS_CellTempMeas2_phy;
		cap_canApiMsg_BMS_CellTempMeas2_PT.ALV_BMS_CellTempMeas2_phy = tmp_BMS_CellTempMeas2_PT_ALV_BMS_CellTempMeas2_phy;
		cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp42_phy = tmp_BMS_CellTempMeas2_PT_BMS_CellTemp42_phy;
		cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp43_phy = tmp_BMS_CellTempMeas2_PT_BMS_CellTemp43_phy;
		cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp44_phy = tmp_BMS_CellTempMeas2_PT_BMS_CellTemp44_phy;
		cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp45_phy = tmp_BMS_CellTempMeas2_PT_BMS_CellTemp45_phy;
		cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp46_phy = tmp_BMS_CellTempMeas2_PT_BMS_CellTemp46_phy;
		cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp47_phy = tmp_BMS_CellTempMeas2_PT_BMS_CellTemp47_phy;
		cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp48_phy = tmp_BMS_CellTempMeas2_PT_BMS_CellTemp48_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X132*/ /*size:32*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_ChgParamReq_PT(void){
	uint8 tmp_BMS_ChgParamReq_PT_CRC_BMS_ChgParamReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_ChgParamReq_PT_ALV_BMS_ChgParamReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_ChgParamReq_PT_BMS_ChargeStopReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_ChgVoltageReq_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_ChgCurrentReq_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	uint16 tmp_BMS_ChgParamReq_PT_BMS_RemainChargeTime_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrentLim_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrentLimPeak_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent2s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent10s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent30s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwrLim_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwrLimPeak_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr2s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr10s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr30s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_ChgParamReq_BMS_ChgParamReq_PT_CRC_BMS_ChgParamReq_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_CRC_BMS_ChgParamReq_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_ChgParamReq_BMS_ChgParamReq_PT_ALV_BMS_ChgParamReq_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_ALV_BMS_ChgParamReq_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_ChargeStopReq_BMS_ChgParamReq_PT_BMS_ChargeStopReq_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_ChargeStopReq_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_ChgVoltageReq_BMS_ChgParamReq_PT_BMS_ChgVoltageReq_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_ChgVoltageReq_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_ChgCurrentReq_BMS_ChgParamReq_PT_BMS_ChgCurrentReq_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_ChgCurrentReq_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_RemainChargeTime_BMS_ChgParamReq_PT_BMS_RemainChargeTime_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_RemainChargeTime_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgCurrentLim_BMS_ChgParamReq_PT_BMS_MaxChgCurrentLim_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrentLim_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgCurrentLimPeak_BMS_ChgParamReq_PT_BMS_MaxChgCurrentLimPeak_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrentLimPeak_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgCurrent2s_BMS_ChgParamReq_PT_BMS_MaxChgCurrent2s_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent2s_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgCurrent10s_BMS_ChgParamReq_PT_BMS_MaxChgCurrent10s_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent10s_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgCurrent30s_BMS_ChgParamReq_PT_BMS_MaxChgCurrent30s_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent30s_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgPwrLim_BMS_ChgParamReq_PT_BMS_MaxChgPwrLim_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwrLim_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgPwrLimPeak_BMS_ChgParamReq_PT_BMS_MaxChgPwrLimPeak_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwrLimPeak_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgPwr2s_BMS_ChgParamReq_PT_BMS_MaxChgPwr2s_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr2s_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgPwr10s_BMS_ChgParamReq_PT_BMS_MaxChgPwr10s_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr10s_phy);
	cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout |= Rte_Read_RPort_BMS_MaxChgPwr30s_BMS_ChgParamReq_PT_BMS_MaxChgPwr30s_BMS_ChgParamReq_PT(&tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr30s_phy);


	if(TRUE != cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout){
		cap_canApiMsg_BMS_ChgParamReq_PT.CRC_BMS_ChgParamReq_phy = tmp_BMS_ChgParamReq_PT_CRC_BMS_ChgParamReq_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.ALV_BMS_ChgParamReq_phy = tmp_BMS_ChgParamReq_PT_ALV_BMS_ChgParamReq_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_ChargeStopReq_phy = tmp_BMS_ChgParamReq_PT_BMS_ChargeStopReq_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_ChgVoltageReq_phy = tmp_BMS_ChgParamReq_PT_BMS_ChgVoltageReq_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_ChgCurrentReq_phy = tmp_BMS_ChgParamReq_PT_BMS_ChgCurrentReq_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_RemainChargeTime_phy = tmp_BMS_ChgParamReq_PT_BMS_RemainChargeTime_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrentLim_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrentLim_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrentLimPeak_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrentLimPeak_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrent2s_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent2s_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrent10s_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent10s_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrent30s_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgCurrent30s_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwrLim_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwrLim_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwrLimPeak_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwrLimPeak_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwr2s_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr2s_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwr10s_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr10s_phy;
		cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwr30s_phy = tmp_BMS_ChgParamReq_PT_BMS_MaxChgPwr30s_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X137*/ /*size:4*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_CurMeas_PT(void){
	uint8 tmp_BMS_CurMeas_PT_CRC_BMS_CurMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CurMeas_PT_ALV_BMS_CurMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CurMeas_PT_BMS_StartOfMeasument_STS_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	float32 tmp_BMS_CurMeas_PT_BMS_PackCurMeas_phy = 0; /*f32 factor : 0.1 , offset : -1500.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_CurMeas_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_CurMeas_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_CurMeas_BMS_CurMeas_PT_CRC_BMS_CurMeas_BMS_CurMeas_PT(&tmp_BMS_CurMeas_PT_CRC_BMS_CurMeas_phy);
	cap_canApiMsg_BMS_CurMeas_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_CurMeas_BMS_CurMeas_PT_ALV_BMS_CurMeas_BMS_CurMeas_PT(&tmp_BMS_CurMeas_PT_ALV_BMS_CurMeas_phy);
	cap_canApiMsg_BMS_CurMeas_PT.msg_tout |= Rte_Read_RPort_BMS_StartOfMeasument_STS_BMS_CurMeas_PT_BMS_StartOfMeasument_STS_BMS_CurMeas_PT(&tmp_BMS_CurMeas_PT_BMS_StartOfMeasument_STS_phy);
	cap_canApiMsg_BMS_CurMeas_PT.msg_tout |= Rte_Read_RPort_BMS_PackCurMeas_BMS_CurMeas_PT_BMS_PackCurMeas_BMS_CurMeas_PT(&tmp_BMS_CurMeas_PT_BMS_PackCurMeas_phy);


	if(TRUE != cap_canApiMsg_BMS_CurMeas_PT.msg_tout){
		cap_canApiMsg_BMS_CurMeas_PT.CRC_BMS_CurMeas_phy = tmp_BMS_CurMeas_PT_CRC_BMS_CurMeas_phy;
		cap_canApiMsg_BMS_CurMeas_PT.ALV_BMS_CurMeas_phy = tmp_BMS_CurMeas_PT_ALV_BMS_CurMeas_phy;
		cap_canApiMsg_BMS_CurMeas_PT.BMS_StartOfMeasument_STS_phy = tmp_BMS_CurMeas_PT_BMS_StartOfMeasument_STS_phy;
		cap_canApiMsg_BMS_CurMeas_PT.BMS_PackCurMeas_phy = tmp_BMS_CurMeas_PT_BMS_PackCurMeas_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X143*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_HighVoltageStorage10msNo2_PT(void){
	uint16 tmp_HighVoltageStorage10msNo2_PT_CRC_HighVoltageStorage10msNo2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_HighVoltageStorage10msNo2_PT_ALIV_HighVoltageStorage10msNo2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_HighVoltageStorage10msNo2_PT_ActualValueVoltageLinkVerified_phy = 0; /*f32 factor : 0.25 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_HighVoltageStorage10msNo2_PT.msg_tout = FALSE;
	cap_canApiMsg_HighVoltageStorage10msNo2_PT.msg_tout |= Rte_Read_RPort_CRC_HighVoltageStorage10msNo2_HighVoltageStorage10msNo2_PT_CRC_HighVoltageStorage10msNo2_HighVoltageStorage10msNo2_PT(&tmp_HighVoltageStorage10msNo2_PT_CRC_HighVoltageStorage10msNo2_phy);
	cap_canApiMsg_HighVoltageStorage10msNo2_PT.msg_tout |= Rte_Read_RPort_ALIV_HighVoltageStorage10msNo2_HighVoltageStorage10msNo2_PT_ALIV_HighVoltageStorage10msNo2_HighVoltageStorage10msNo2_PT(&tmp_HighVoltageStorage10msNo2_PT_ALIV_HighVoltageStorage10msNo2_phy);
	cap_canApiMsg_HighVoltageStorage10msNo2_PT.msg_tout |= Rte_Read_RPort_ActualValueVoltageLinkVerified_HighVoltageStorage10msNo2_PT_ActualValueVoltageLinkVerified_HighVoltageStorage10msNo2_PT(&tmp_HighVoltageStorage10msNo2_PT_ActualValueVoltageLinkVerified_phy);


	if(TRUE != cap_canApiMsg_HighVoltageStorage10msNo2_PT.msg_tout){
		cap_canApiMsg_HighVoltageStorage10msNo2_PT.CRC_HighVoltageStorage10msNo2_phy = tmp_HighVoltageStorage10msNo2_PT_CRC_HighVoltageStorage10msNo2_phy;
		cap_canApiMsg_HighVoltageStorage10msNo2_PT.ALIV_HighVoltageStorage10msNo2_phy = tmp_HighVoltageStorage10msNo2_PT_ALIV_HighVoltageStorage10msNo2_phy;
		cap_canApiMsg_HighVoltageStorage10msNo2_PT.ActualValueVoltageLinkVerified_phy = tmp_HighVoltageStorage10msNo2_PT_ActualValueVoltageLinkVerified_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X145*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_TracEMacElectc1Time10msNo1_PT(void){
	uint16 tmp_TracEMacElectc1Time10msNo1_PT_CRC_TracEMacElectc1Time10msNo1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_ALIV_TracEMacElectc1Time10msNo1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_CurrDrctCurrETractSys1ActVal_phy = 0; /*f32 factor : 0.1 , offset : -1400.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_VolDrctCurrETractSys1ActVal_phy = 0; /*f32 factor : 0.5 , offset : 0.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1MaximumLimit_phy = 0; /*f32 factor : 1.0 , offset : -32768.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1MinimumLimit_phy = 0; /*f32 factor : 1.0 , offset : -32768.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1VibrationDampSusp_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1ActualValue_phy = 0; /*f32 factor : 1.0 , offset : -32768.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1GeneratorStatic_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1GeneratorDynamic_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1MotorStatic_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1MotorDynamic_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1ActualValue_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_StatusLockPositionPbWETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1MotorSumLimTarget_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_DirOfRotETractSys1ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_OVCUrrenceStatorPWMETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_StatusPbWETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_QualifierTqEmETractSys1ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_QualifierRpmEmETractSys1ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_Qu_CurrDrctCurrETractSys1ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time10msNo1_PT_StatusArbRpmETractSys1Limit_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint16 tmp_TracEMacElectc1Time10msNo1_PT_SumWhlTqIntvETractSys1_phy = 0; /*f32 factor : 10.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint16 tmp_TracEMacElectc1Time10msNo1_PT_StETractSys1Asd_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint32 tmp_TracEMacElectc1Time10msNo1_PT_PowerETractSys1LossActualValue_phy = 0; /*f32 factor : 50.0 , offset : 0.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc1Time10msNo1_PT_TarTqETractSys1NControlStatic_phy = 0; /*f32 factor : 1.0 , offset : -510.0 , DBCtype: uint16*/ 
	uint32 tmp_TracEMacElectc1Time10msNo1_PT_PwrLossPrednETractSys1Mot_phy = 0; /*f32 factor : 50.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint32 tmp_TracEMacElectc1Time10msNo1_PT_PwrLossPrednETractSys1Genr_phy = 0; /*f32 factor : 50.0 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout = FALSE;
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_CRC_TracEMacElectc1Time10msNo1_TracEMacElectc1Time10msNo1_PT_CRC_TracEMacElectc1Time10msNo1_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_CRC_TracEMacElectc1Time10msNo1_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_ALIV_TracEMacElectc1Time10msNo1_TracEMacElectc1Time10msNo1_PT_ALIV_TracEMacElectc1Time10msNo1_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_ALIV_TracEMacElectc1Time10msNo1_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_CurrDrctCurrETractSys1ActVal_TracEMacElectc1Time10msNo1_PT_CurrDrctCurrETractSys1ActVal_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_CurrDrctCurrETractSys1ActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_VolDrctCurrETractSys1ActVal_TracEMacElectc1Time10msNo1_PT_VolDrctCurrETractSys1ActVal_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_VolDrctCurrETractSys1ActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_RpmEmETractSys1MaximumLimit_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1MaximumLimit_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1MaximumLimit_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_RpmEmETractSys1MinimumLimit_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1MinimumLimit_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1MinimumLimit_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TqEmETractSys1VibrationDampSusp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1VibrationDampSusp_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1VibrationDampSusp_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_RpmEmETractSys1ActualValue_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1ActualValue_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1ActualValue_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TqEmETractSys1GeneratorStatic_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1GeneratorStatic_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1GeneratorStatic_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TqEmETractSys1GeneratorDynamic_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1GeneratorDynamic_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1GeneratorDynamic_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TorqueEmETractSys1MotorStatic_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1MotorStatic_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1MotorStatic_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TorqueEmETractSys1MotorDynamic_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1MotorDynamic_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1MotorDynamic_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TorqueEmETractSys1ActualValue_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1ActualValue_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1ActualValue_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_StatusLockPositionPbWETractSys1_TracEMacElectc1Time10msNo1_PT_StatusLockPositionPbWETractSys1_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_StatusLockPositionPbWETractSys1_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TqEmETractSys1MotorSumLimTarget_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1MotorSumLimTarget_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1MotorSumLimTarget_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_DirOfRotETractSys1ActVal_TracEMacElectc1Time10msNo1_PT_DirOfRotETractSys1ActVal_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_DirOfRotETractSys1ActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_OVCUrrenceStatorPWMETractSys1_TracEMacElectc1Time10msNo1_PT_OVCUrrenceStatorPWMETractSys1_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_OVCUrrenceStatorPWMETractSys1_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_StatusPbWETractSys1_TracEMacElectc1Time10msNo1_PT_StatusPbWETractSys1_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_StatusPbWETractSys1_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_QualifierTqEmETractSys1ActVal_TracEMacElectc1Time10msNo1_PT_QualifierTqEmETractSys1ActVal_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_QualifierTqEmETractSys1ActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_QualifierRpmEmETractSys1ActVal_TracEMacElectc1Time10msNo1_PT_QualifierRpmEmETractSys1ActVal_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_QualifierRpmEmETractSys1ActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_Qu_CurrDrctCurrETractSys1ActVal_TracEMacElectc1Time10msNo1_PT_Qu_CurrDrctCurrETractSys1ActVal_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_Qu_CurrDrctCurrETractSys1ActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_StatusArbRpmETractSys1Limit_TracEMacElectc1Time10msNo1_PT_StatusArbRpmETractSys1Limit_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_StatusArbRpmETractSys1Limit_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_SumWhlTqIntvETractSys1_TracEMacElectc1Time10msNo1_PT_SumWhlTqIntvETractSys1_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_SumWhlTqIntvETractSys1_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_StETractSys1Asd_TracEMacElectc1Time10msNo1_PT_StETractSys1Asd_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_StETractSys1Asd_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_PowerETractSys1LossActualValue_TracEMacElectc1Time10msNo1_PT_PowerETractSys1LossActualValue_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_PowerETractSys1LossActualValue_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TarTqETractSys1NControlStatic_TracEMacElectc1Time10msNo1_PT_TarTqETractSys1NControlStatic_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_TarTqETractSys1NControlStatic_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_PwrLossPrednETractSys1Mot_TracEMacElectc1Time10msNo1_PT_PwrLossPrednETractSys1Mot_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_PwrLossPrednETractSys1Mot_phy);
	cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout |= Rte_Read_RPort_PwrLossPrednETractSys1Genr_TracEMacElectc1Time10msNo1_PT_PwrLossPrednETractSys1Genr_TracEMacElectc1Time10msNo1_PT(&tmp_TracEMacElectc1Time10msNo1_PT_PwrLossPrednETractSys1Genr_phy);


	if(TRUE != cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout){
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.CRC_TracEMacElectc1Time10msNo1_phy = tmp_TracEMacElectc1Time10msNo1_PT_CRC_TracEMacElectc1Time10msNo1_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.ALIV_TracEMacElectc1Time10msNo1_phy = tmp_TracEMacElectc1Time10msNo1_PT_ALIV_TracEMacElectc1Time10msNo1_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.CurrDrctCurrETractSys1ActVal_phy = tmp_TracEMacElectc1Time10msNo1_PT_CurrDrctCurrETractSys1ActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.VolDrctCurrETractSys1ActVal_phy = tmp_TracEMacElectc1Time10msNo1_PT_VolDrctCurrETractSys1ActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.RpmEmETractSys1MaximumLimit_phy = tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1MaximumLimit_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.RpmEmETractSys1MinimumLimit_phy = tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1MinimumLimit_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TqEmETractSys1VibrationDampSusp_phy = tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1VibrationDampSusp_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.RpmEmETractSys1ActualValue_phy = tmp_TracEMacElectc1Time10msNo1_PT_RpmEmETractSys1ActualValue_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TqEmETractSys1GeneratorStatic_phy = tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1GeneratorStatic_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TqEmETractSys1GeneratorDynamic_phy = tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1GeneratorDynamic_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TorqueEmETractSys1MotorStatic_phy = tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1MotorStatic_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TorqueEmETractSys1MotorDynamic_phy = tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1MotorDynamic_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TorqueEmETractSys1ActualValue_phy = tmp_TracEMacElectc1Time10msNo1_PT_TorqueEmETractSys1ActualValue_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.StatusLockPositionPbWETractSys1_phy = tmp_TracEMacElectc1Time10msNo1_PT_StatusLockPositionPbWETractSys1_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TqEmETractSys1MotorSumLimTarget_phy = tmp_TracEMacElectc1Time10msNo1_PT_TqEmETractSys1MotorSumLimTarget_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.DirOfRotETractSys1ActVal_phy = tmp_TracEMacElectc1Time10msNo1_PT_DirOfRotETractSys1ActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.OVCUrrenceStatorPWMETractSys1_phy = tmp_TracEMacElectc1Time10msNo1_PT_OVCUrrenceStatorPWMETractSys1_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.StatusPbWETractSys1_phy = tmp_TracEMacElectc1Time10msNo1_PT_StatusPbWETractSys1_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.QualifierTqEmETractSys1ActVal_phy = tmp_TracEMacElectc1Time10msNo1_PT_QualifierTqEmETractSys1ActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.QualifierRpmEmETractSys1ActVal_phy = tmp_TracEMacElectc1Time10msNo1_PT_QualifierRpmEmETractSys1ActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.Qu_CurrDrctCurrETractSys1ActVal_phy = tmp_TracEMacElectc1Time10msNo1_PT_Qu_CurrDrctCurrETractSys1ActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.StatusArbRpmETractSys1Limit_phy = tmp_TracEMacElectc1Time10msNo1_PT_StatusArbRpmETractSys1Limit_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.SumWhlTqIntvETractSys1_phy = tmp_TracEMacElectc1Time10msNo1_PT_SumWhlTqIntvETractSys1_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.StETractSys1Asd_phy = tmp_TracEMacElectc1Time10msNo1_PT_StETractSys1Asd_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.PowerETractSys1LossActualValue_phy = tmp_TracEMacElectc1Time10msNo1_PT_PowerETractSys1LossActualValue_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TarTqETractSys1NControlStatic_phy = tmp_TracEMacElectc1Time10msNo1_PT_TarTqETractSys1NControlStatic_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.PwrLossPrednETractSys1Mot_phy = tmp_TracEMacElectc1Time10msNo1_PT_PwrLossPrednETractSys1Mot_phy;
		cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.PwrLossPrednETractSys1Genr_phy = tmp_TracEMacElectc1Time10msNo1_PT_PwrLossPrednETractSys1Genr_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X162*/ /*size:5*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_Error_PT(void){
	uint8 tmp_BMS_Error_PT_CRC_BMS_Error_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_ALV_BMS_Error_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_CellLowVolErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_HVILErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_PackInsuErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_CellVoltDiffErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_ProbeTempDiffErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_PackHighVolErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_PackLowVolErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_CellHighVolErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_ProbeHighTempErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_FuseStatusErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_PackOverCurrErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Error_PT_BMS_ProbeLowTempErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_BMS_Error_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_Error_BMS_Error_PT_CRC_BMS_Error_BMS_Error_PT(&tmp_BMS_Error_PT_CRC_BMS_Error_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_Error_BMS_Error_PT_ALV_BMS_Error_BMS_Error_PT(&tmp_BMS_Error_PT_ALV_BMS_Error_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_CellLowVolErr_BMS_Error_PT_BMS_CellLowVolErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_CellLowVolErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_HVILErr_BMS_Error_PT_BMS_HVILErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_HVILErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_PackInsuErr_BMS_Error_PT_BMS_PackInsuErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_PackInsuErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_CellVoltDiffErr_BMS_Error_PT_BMS_CellVoltDiffErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_CellVoltDiffErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_ProbeTempDiffErr_BMS_Error_PT_BMS_ProbeTempDiffErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_ProbeTempDiffErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_PackHighVolErr_BMS_Error_PT_BMS_PackHighVolErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_PackHighVolErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_PackLowVolErr_BMS_Error_PT_BMS_PackLowVolErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_PackLowVolErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_CellHighVolErr_BMS_Error_PT_BMS_CellHighVolErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_CellHighVolErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_ProbeHighTempErr_BMS_Error_PT_BMS_ProbeHighTempErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_ProbeHighTempErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_FuseStatusErr_BMS_Error_PT_BMS_FuseStatusErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_FuseStatusErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_PackOverCurrErr_BMS_Error_PT_BMS_PackOverCurrErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_PackOverCurrErr_phy);
	cap_canApiMsg_BMS_Error_PT.msg_tout |= Rte_Read_RPort_BMS_ProbeLowTempErr_BMS_Error_PT_BMS_ProbeLowTempErr_BMS_Error_PT(&tmp_BMS_Error_PT_BMS_ProbeLowTempErr_phy);


	if(TRUE != cap_canApiMsg_BMS_Error_PT.msg_tout){
		cap_canApiMsg_BMS_Error_PT.CRC_BMS_Error_phy = tmp_BMS_Error_PT_CRC_BMS_Error_phy;
		cap_canApiMsg_BMS_Error_PT.ALV_BMS_Error_phy = tmp_BMS_Error_PT_ALV_BMS_Error_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_CellLowVolErr_phy = tmp_BMS_Error_PT_BMS_CellLowVolErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_HVILErr_phy = tmp_BMS_Error_PT_BMS_HVILErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_PackInsuErr_phy = tmp_BMS_Error_PT_BMS_PackInsuErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_CellVoltDiffErr_phy = tmp_BMS_Error_PT_BMS_CellVoltDiffErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_ProbeTempDiffErr_phy = tmp_BMS_Error_PT_BMS_ProbeTempDiffErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_PackHighVolErr_phy = tmp_BMS_Error_PT_BMS_PackHighVolErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_PackLowVolErr_phy = tmp_BMS_Error_PT_BMS_PackLowVolErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_CellHighVolErr_phy = tmp_BMS_Error_PT_BMS_CellHighVolErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_ProbeHighTempErr_phy = tmp_BMS_Error_PT_BMS_ProbeHighTempErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_FuseStatusErr_phy = tmp_BMS_Error_PT_BMS_FuseStatusErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_PackOverCurrErr_phy = tmp_BMS_Error_PT_BMS_PackOverCurrErr_phy;
		cap_canApiMsg_BMS_Error_PT.BMS_ProbeLowTempErr_phy = tmp_BMS_Error_PT_BMS_ProbeLowTempErr_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X168*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_HVMeas_PT(void){
	uint8 tmp_BMS_HVMeas_PT_CRC_BMS_HVMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_HVMeas_PT_ALV_BMS_HVMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_HVMeas_PT_BMS_HVPackVol_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_HVMeas_PT_BMS_HVLinkVol_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_HVMeas_PT_BMS_HVBusVol_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_HVMeas_PT_BMS_HVFuseVol_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_HVMeas_PT_BMS_DCPlugVol_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_HVMeas_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_HVMeas_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_HVMeas_BMS_HVMeas_PT_CRC_BMS_HVMeas_BMS_HVMeas_PT(&tmp_BMS_HVMeas_PT_CRC_BMS_HVMeas_phy);
	cap_canApiMsg_BMS_HVMeas_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_HVMeas_BMS_HVMeas_PT_ALV_BMS_HVMeas_BMS_HVMeas_PT(&tmp_BMS_HVMeas_PT_ALV_BMS_HVMeas_phy);
	cap_canApiMsg_BMS_HVMeas_PT.msg_tout |= Rte_Read_RPort_BMS_HVPackVol_BMS_HVMeas_PT_BMS_HVPackVol_BMS_HVMeas_PT(&tmp_BMS_HVMeas_PT_BMS_HVPackVol_phy);
	cap_canApiMsg_BMS_HVMeas_PT.msg_tout |= Rte_Read_RPort_BMS_HVLinkVol_BMS_HVMeas_PT_BMS_HVLinkVol_BMS_HVMeas_PT(&tmp_BMS_HVMeas_PT_BMS_HVLinkVol_phy);
	cap_canApiMsg_BMS_HVMeas_PT.msg_tout |= Rte_Read_RPort_BMS_HVBusVol_BMS_HVMeas_PT_BMS_HVBusVol_BMS_HVMeas_PT(&tmp_BMS_HVMeas_PT_BMS_HVBusVol_phy);
	cap_canApiMsg_BMS_HVMeas_PT.msg_tout |= Rte_Read_RPort_BMS_HVFuseVol_BMS_HVMeas_PT_BMS_HVFuseVol_BMS_HVMeas_PT(&tmp_BMS_HVMeas_PT_BMS_HVFuseVol_phy);
	cap_canApiMsg_BMS_HVMeas_PT.msg_tout |= Rte_Read_RPort_BMS_DCPlugVol_BMS_HVMeas_PT_BMS_DCPlugVol_BMS_HVMeas_PT(&tmp_BMS_HVMeas_PT_BMS_DCPlugVol_phy);


	if(TRUE != cap_canApiMsg_BMS_HVMeas_PT.msg_tout){
		cap_canApiMsg_BMS_HVMeas_PT.CRC_BMS_HVMeas_phy = tmp_BMS_HVMeas_PT_CRC_BMS_HVMeas_phy;
		cap_canApiMsg_BMS_HVMeas_PT.ALV_BMS_HVMeas_phy = tmp_BMS_HVMeas_PT_ALV_BMS_HVMeas_phy;
		cap_canApiMsg_BMS_HVMeas_PT.BMS_HVPackVol_phy = tmp_BMS_HVMeas_PT_BMS_HVPackVol_phy;
		cap_canApiMsg_BMS_HVMeas_PT.BMS_HVLinkVol_phy = tmp_BMS_HVMeas_PT_BMS_HVLinkVol_phy;
		cap_canApiMsg_BMS_HVMeas_PT.BMS_HVBusVol_phy = tmp_BMS_HVMeas_PT_BMS_HVBusVol_phy;
		cap_canApiMsg_BMS_HVMeas_PT.BMS_HVFuseVol_phy = tmp_BMS_HVMeas_PT_BMS_HVFuseVol_phy;
		cap_canApiMsg_BMS_HVMeas_PT.BMS_DCPlugVol_phy = tmp_BMS_HVMeas_PT_BMS_DCPlugVol_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X170*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_TracEMacElectc2Time10msNo1_PT(void){
	uint16 tmp_TracEMacElectc2Time10msNo1_PT_CRC_TracEMacElectc2Time10msNo1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_ALIV_TracEMacElectc2Time10msNo1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_CurrDrctCurrETractSys2ActVal_phy = 0; /*f32 factor : 0.1 , offset : -1400.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_VolDrctCurrETractSys2ActVal_phy = 0; /*f32 factor : 0.5 , offset : 0.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2MaximumLimit_phy = 0; /*f32 factor : 1.0 , offset : -32768.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2MinimumLimit_phy = 0; /*f32 factor : 1.0 , offset : -32768.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2VibrationDampSusp_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2ActualValue_phy = 0; /*f32 factor : 1.0 , offset : -32768.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2GeneratorStatic_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2GeneratorDynamic_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2MotorStatic_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2MotorDynamic_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2ActualValue_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_StatusLockPositionPbWETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2MotorSumLimTarget_phy = 0; /*f32 factor : 0.5 , offset : -1023.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_DirOfRotETractSys2ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_OVCUrrenceStatorPWMETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_StatusPbWETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_QualifierTqEmETractSys2ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_QualifierRpmEmETractSys2ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_Qu_CurrDrctCurrETractSys2ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time10msNo1_PT_StatusArbRpmETractSys2Limit_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint16 tmp_TracEMacElectc2Time10msNo1_PT_SumWhlTqIntvETractSys2_phy = 0; /*f32 factor : 10.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint16 tmp_TracEMacElectc2Time10msNo1_PT_StETractSys2Asd_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint32 tmp_TracEMacElectc2Time10msNo1_PT_PowerETractSys2LossActualValue_phy = 0; /*f32 factor : 50.0 , offset : 0.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc2Time10msNo1_PT_TarTqETractSys2NControlStatic_phy = 0; /*f32 factor : 1.0 , offset : -510.0 , DBCtype: uint16*/ 
	uint32 tmp_TracEMacElectc2Time10msNo1_PT_PwrLossPrednETractSys2Mot_phy = 0; /*f32 factor : 50.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint32 tmp_TracEMacElectc2Time10msNo1_PT_PwrLossPrednETractSys2Genr_phy = 0; /*f32 factor : 50.0 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout = FALSE;
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_CRC_TracEMacElectc2Time10msNo1_TracEMacElectc2Time10msNo1_PT_CRC_TracEMacElectc2Time10msNo1_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_CRC_TracEMacElectc2Time10msNo1_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_ALIV_TracEMacElectc2Time10msNo1_TracEMacElectc2Time10msNo1_PT_ALIV_TracEMacElectc2Time10msNo1_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_ALIV_TracEMacElectc2Time10msNo1_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_CurrDrctCurrETractSys2ActVal_TracEMacElectc2Time10msNo1_PT_CurrDrctCurrETractSys2ActVal_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_CurrDrctCurrETractSys2ActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_VolDrctCurrETractSys2ActVal_TracEMacElectc2Time10msNo1_PT_VolDrctCurrETractSys2ActVal_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_VolDrctCurrETractSys2ActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_RpmEmETractSys2MaximumLimit_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2MaximumLimit_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2MaximumLimit_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_RpmEmETractSys2MinimumLimit_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2MinimumLimit_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2MinimumLimit_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TqEmETractSys2VibrationDampSusp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2VibrationDampSusp_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2VibrationDampSusp_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_RpmEmETractSys2ActualValue_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2ActualValue_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2ActualValue_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TqEmETractSys2GeneratorStatic_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2GeneratorStatic_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2GeneratorStatic_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TqEmETractSys2GeneratorDynamic_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2GeneratorDynamic_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2GeneratorDynamic_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TorqueEmETractSys2MotorStatic_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2MotorStatic_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2MotorStatic_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TorqueEmETractSys2MotorDynamic_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2MotorDynamic_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2MotorDynamic_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TorqueEmETractSys2ActualValue_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2ActualValue_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2ActualValue_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_StatusLockPositionPbWETractSys2_TracEMacElectc2Time10msNo1_PT_StatusLockPositionPbWETractSys2_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_StatusLockPositionPbWETractSys2_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TqEmETractSys2MotorSumLimTarget_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2MotorSumLimTarget_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2MotorSumLimTarget_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_DirOfRotETractSys2ActVal_TracEMacElectc2Time10msNo1_PT_DirOfRotETractSys2ActVal_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_DirOfRotETractSys2ActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_OVCUrrenceStatorPWMETractSys2_TracEMacElectc2Time10msNo1_PT_OVCUrrenceStatorPWMETractSys2_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_OVCUrrenceStatorPWMETractSys2_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_StatusPbWETractSys2_TracEMacElectc2Time10msNo1_PT_StatusPbWETractSys2_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_StatusPbWETractSys2_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_QualifierTqEmETractSys2ActVal_TracEMacElectc2Time10msNo1_PT_QualifierTqEmETractSys2ActVal_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_QualifierTqEmETractSys2ActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_QualifierRpmEmETractSys2ActVal_TracEMacElectc2Time10msNo1_PT_QualifierRpmEmETractSys2ActVal_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_QualifierRpmEmETractSys2ActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_Qu_CurrDrctCurrETractSys2ActVal_TracEMacElectc2Time10msNo1_PT_Qu_CurrDrctCurrETractSys2ActVal_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_Qu_CurrDrctCurrETractSys2ActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_StatusArbRpmETractSys2Limit_TracEMacElectc2Time10msNo1_PT_StatusArbRpmETractSys2Limit_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_StatusArbRpmETractSys2Limit_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_SumWhlTqIntvETractSys2_TracEMacElectc2Time10msNo1_PT_SumWhlTqIntvETractSys2_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_SumWhlTqIntvETractSys2_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_StETractSys2Asd_TracEMacElectc2Time10msNo1_PT_StETractSys2Asd_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_StETractSys2Asd_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_PowerETractSys2LossActualValue_TracEMacElectc2Time10msNo1_PT_PowerETractSys2LossActualValue_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_PowerETractSys2LossActualValue_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_TarTqETractSys2NControlStatic_TracEMacElectc2Time10msNo1_PT_TarTqETractSys2NControlStatic_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_TarTqETractSys2NControlStatic_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_PwrLossPrednETractSys2Mot_TracEMacElectc2Time10msNo1_PT_PwrLossPrednETractSys2Mot_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_PwrLossPrednETractSys2Mot_phy);
	cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout |= Rte_Read_RPort_PwrLossPrednETractSys2Genr_TracEMacElectc2Time10msNo1_PT_PwrLossPrednETractSys2Genr_TracEMacElectc2Time10msNo1_PT(&tmp_TracEMacElectc2Time10msNo1_PT_PwrLossPrednETractSys2Genr_phy);


	if(TRUE != cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout){
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.CRC_TracEMacElectc2Time10msNo1_phy = tmp_TracEMacElectc2Time10msNo1_PT_CRC_TracEMacElectc2Time10msNo1_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.ALIV_TracEMacElectc2Time10msNo1_phy = tmp_TracEMacElectc2Time10msNo1_PT_ALIV_TracEMacElectc2Time10msNo1_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.CurrDrctCurrETractSys2ActVal_phy = tmp_TracEMacElectc2Time10msNo1_PT_CurrDrctCurrETractSys2ActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.VolDrctCurrETractSys2ActVal_phy = tmp_TracEMacElectc2Time10msNo1_PT_VolDrctCurrETractSys2ActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.RpmEmETractSys2MaximumLimit_phy = tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2MaximumLimit_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.RpmEmETractSys2MinimumLimit_phy = tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2MinimumLimit_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TqEmETractSys2VibrationDampSusp_phy = tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2VibrationDampSusp_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.RpmEmETractSys2ActualValue_phy = tmp_TracEMacElectc2Time10msNo1_PT_RpmEmETractSys2ActualValue_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TqEmETractSys2GeneratorStatic_phy = tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2GeneratorStatic_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TqEmETractSys2GeneratorDynamic_phy = tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2GeneratorDynamic_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TorqueEmETractSys2MotorStatic_phy = tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2MotorStatic_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TorqueEmETractSys2MotorDynamic_phy = tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2MotorDynamic_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TorqueEmETractSys2ActualValue_phy = tmp_TracEMacElectc2Time10msNo1_PT_TorqueEmETractSys2ActualValue_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.StatusLockPositionPbWETractSys2_phy = tmp_TracEMacElectc2Time10msNo1_PT_StatusLockPositionPbWETractSys2_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TqEmETractSys2MotorSumLimTarget_phy = tmp_TracEMacElectc2Time10msNo1_PT_TqEmETractSys2MotorSumLimTarget_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.DirOfRotETractSys2ActVal_phy = tmp_TracEMacElectc2Time10msNo1_PT_DirOfRotETractSys2ActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.OVCUrrenceStatorPWMETractSys2_phy = tmp_TracEMacElectc2Time10msNo1_PT_OVCUrrenceStatorPWMETractSys2_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.StatusPbWETractSys2_phy = tmp_TracEMacElectc2Time10msNo1_PT_StatusPbWETractSys2_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.QualifierTqEmETractSys2ActVal_phy = tmp_TracEMacElectc2Time10msNo1_PT_QualifierTqEmETractSys2ActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.QualifierRpmEmETractSys2ActVal_phy = tmp_TracEMacElectc2Time10msNo1_PT_QualifierRpmEmETractSys2ActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.Qu_CurrDrctCurrETractSys2ActVal_phy = tmp_TracEMacElectc2Time10msNo1_PT_Qu_CurrDrctCurrETractSys2ActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.StatusArbRpmETractSys2Limit_phy = tmp_TracEMacElectc2Time10msNo1_PT_StatusArbRpmETractSys2Limit_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.SumWhlTqIntvETractSys2_phy = tmp_TracEMacElectc2Time10msNo1_PT_SumWhlTqIntvETractSys2_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.StETractSys2Asd_phy = tmp_TracEMacElectc2Time10msNo1_PT_StETractSys2Asd_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.PowerETractSys2LossActualValue_phy = tmp_TracEMacElectc2Time10msNo1_PT_PowerETractSys2LossActualValue_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TarTqETractSys2NControlStatic_phy = tmp_TracEMacElectc2Time10msNo1_PT_TarTqETractSys2NControlStatic_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.PwrLossPrednETractSys2Mot_phy = tmp_TracEMacElectc2Time10msNo1_PT_PwrLossPrednETractSys2Mot_phy;
		cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.PwrLossPrednETractSys2Genr_phy = tmp_TracEMacElectc2Time10msNo1_PT_PwrLossPrednETractSys2Genr_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X172*/ /*size:24*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_PowerCont_PT(void){
	uint8 tmp_BMS_PowerCont_PT_CRC_BMS_PowerCont_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_PowerCont_PT_ALV_BMS_PowerCont_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrentLim_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrentLimPeak_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent2s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent10s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent30s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgPwrLim_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgPwrLimPeak_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr2s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr10s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr30s_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_PowerCont_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_PowerCont_BMS_PowerCont_PT_CRC_BMS_PowerCont_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_CRC_BMS_PowerCont_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_PowerCont_BMS_PowerCont_PT_ALV_BMS_PowerCont_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_ALV_BMS_PowerCont_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgCurrentLim_BMS_PowerCont_PT_BMS_MaxDischgCurrentLim_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrentLim_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgCurrentLimPeak_BMS_PowerCont_PT_BMS_MaxDischgCurrentLimPeak_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrentLimPeak_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgCurrent2s_BMS_PowerCont_PT_BMS_MaxDischgCurrent2s_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent2s_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgCurrent10s_BMS_PowerCont_PT_BMS_MaxDischgCurrent10s_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent10s_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgCurrent30s_BMS_PowerCont_PT_BMS_MaxDischgCurrent30s_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent30s_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgPwrLim_BMS_PowerCont_PT_BMS_MaxDischgPwrLim_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgPwrLim_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgPwrLimPeak_BMS_PowerCont_PT_BMS_MaxDischgPwrLimPeak_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgPwrLimPeak_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgPwr2s_BMS_PowerCont_PT_BMS_MaxDischgPwr2s_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr2s_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgPwr10s_BMS_PowerCont_PT_BMS_MaxDischgPwr10s_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr10s_phy);
	cap_canApiMsg_BMS_PowerCont_PT.msg_tout |= Rte_Read_RPort_BMS_MaxDischgPwr30s_BMS_PowerCont_PT_BMS_MaxDischgPwr30s_BMS_PowerCont_PT(&tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr30s_phy);


	if(TRUE != cap_canApiMsg_BMS_PowerCont_PT.msg_tout){
		cap_canApiMsg_BMS_PowerCont_PT.CRC_BMS_PowerCont_phy = tmp_BMS_PowerCont_PT_CRC_BMS_PowerCont_phy;
		cap_canApiMsg_BMS_PowerCont_PT.ALV_BMS_PowerCont_phy = tmp_BMS_PowerCont_PT_ALV_BMS_PowerCont_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrentLim_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrentLim_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrentLimPeak_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrentLimPeak_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrent2s_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent2s_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrent10s_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent10s_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrent30s_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgCurrent30s_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwrLim_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgPwrLim_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwrLimPeak_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgPwrLimPeak_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwr2s_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr2s_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwr10s_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr10s_phy;
		cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwr30s_phy = tmp_BMS_PowerCont_PT_BMS_MaxDischgPwr30s_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X177*/ /*size:4*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_RelayStatus_PT(void){
	uint8 tmp_BMS_RelayStatus_PT_CRC_BMS_RelayStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_RelayStatus_PT_ALV_BMS_RelayStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_MainPosRelayStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_PreChgRelayStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_TotalNegRelayStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_MainPosRelayErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_TotalNegRelayErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_PreChgRelayErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_DCFCPosRelayStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_DCFCNegRelayStatus_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_DCFCPosRelayErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_RelayStatus_PT_BMS_DCFCNegRelayErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 

	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_RelayStatus_BMS_RelayStatus_PT_CRC_BMS_RelayStatus_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_CRC_BMS_RelayStatus_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_RelayStatus_BMS_RelayStatus_PT_ALV_BMS_RelayStatus_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_ALV_BMS_RelayStatus_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_MainPosRelayStatus_BMS_RelayStatus_PT_BMS_MainPosRelayStatus_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_MainPosRelayStatus_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_PreChgRelayStatus_BMS_RelayStatus_PT_BMS_PreChgRelayStatus_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_PreChgRelayStatus_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_TotalNegRelayStatus_BMS_RelayStatus_PT_BMS_TotalNegRelayStatus_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_TotalNegRelayStatus_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_MainPosRelayErr_BMS_RelayStatus_PT_BMS_MainPosRelayErr_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_MainPosRelayErr_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_TotalNegRelayErr_BMS_RelayStatus_PT_BMS_TotalNegRelayErr_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_TotalNegRelayErr_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_PreChgRelayErr_BMS_RelayStatus_PT_BMS_PreChgRelayErr_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_PreChgRelayErr_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_DCFCPosRelayStatus_BMS_RelayStatus_PT_BMS_DCFCPosRelayStatus_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_DCFCPosRelayStatus_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_DCFCNegRelayStatus_BMS_RelayStatus_PT_BMS_DCFCNegRelayStatus_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_DCFCNegRelayStatus_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_DCFCPosRelayErr_BMS_RelayStatus_PT_BMS_DCFCPosRelayErr_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_DCFCPosRelayErr_phy);
	cap_canApiMsg_BMS_RelayStatus_PT.msg_tout |= Rte_Read_RPort_BMS_DCFCNegRelayErr_BMS_RelayStatus_PT_BMS_DCFCNegRelayErr_BMS_RelayStatus_PT(&tmp_BMS_RelayStatus_PT_BMS_DCFCNegRelayErr_phy);


	if(TRUE != cap_canApiMsg_BMS_RelayStatus_PT.msg_tout){
		cap_canApiMsg_BMS_RelayStatus_PT.CRC_BMS_RelayStatus_phy = tmp_BMS_RelayStatus_PT_CRC_BMS_RelayStatus_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.ALV_BMS_RelayStatus_phy = tmp_BMS_RelayStatus_PT_ALV_BMS_RelayStatus_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_MainPosRelayStatus_phy = tmp_BMS_RelayStatus_PT_BMS_MainPosRelayStatus_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_PreChgRelayStatus_phy = tmp_BMS_RelayStatus_PT_BMS_PreChgRelayStatus_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_TotalNegRelayStatus_phy = tmp_BMS_RelayStatus_PT_BMS_TotalNegRelayStatus_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_MainPosRelayErr_phy = tmp_BMS_RelayStatus_PT_BMS_MainPosRelayErr_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_TotalNegRelayErr_phy = tmp_BMS_RelayStatus_PT_BMS_TotalNegRelayErr_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_PreChgRelayErr_phy = tmp_BMS_RelayStatus_PT_BMS_PreChgRelayErr_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_DCFCPosRelayStatus_phy = tmp_BMS_RelayStatus_PT_BMS_DCFCPosRelayStatus_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_DCFCNegRelayStatus_phy = tmp_BMS_RelayStatus_PT_BMS_DCFCNegRelayStatus_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_DCFCPosRelayErr_phy = tmp_BMS_RelayStatus_PT_BMS_DCFCPosRelayErr_phy;
		cap_canApiMsg_BMS_RelayStatus_PT.BMS_DCFCNegRelayErr_phy = tmp_BMS_RelayStatus_PT_BMS_DCFCNegRelayErr_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X182*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_Sts_PT(void){
	uint8 tmp_BMS_Sts_PT_CRC_BMS_Sts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Sts_PT_ALV_BMS_Sts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Sts_PT_BMS_HVOnOffSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Sts_PT_BMS_HVILSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Sts_PT_BMS_ErrLev_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Sts_PT_BMS_SysSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_Sts_PT_BMS_SocActualEst_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_BMS_Sts_PT_BMS_HWCrashSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_Sts_PT_BMS_BatBalanceErr_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_Sts_PT_BMS_BalanceSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_Sts_PT_BMS_IGNSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	float32 tmp_BMS_Sts_PT_BMS_SocRelativeEst_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_Sts_PT_BMS_SOH_phy = 0; /*f32 factor : 0.5 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_Sts_PT_BMS_SOE_phy = 0; /*f32 factor : 0.5 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Sts_PT_BMS_DisconnectRequestRsn_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Sts_PT_BMS_EmergencyDisconnectRsn_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Sts_PT_BMS_LimpHomeRsn_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_BMS_Sts_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_Sts_BMS_Sts_PT_CRC_BMS_Sts_BMS_Sts_PT(&tmp_BMS_Sts_PT_CRC_BMS_Sts_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_Sts_BMS_Sts_PT_ALV_BMS_Sts_BMS_Sts_PT(&tmp_BMS_Sts_PT_ALV_BMS_Sts_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_HVOnOffSts_BMS_Sts_PT_BMS_HVOnOffSts_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_HVOnOffSts_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_HVILSts_BMS_Sts_PT_BMS_HVILSts_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_HVILSts_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_ErrLev_BMS_Sts_PT_BMS_ErrLev_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_ErrLev_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_SysSts_BMS_Sts_PT_BMS_SysSts_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_SysSts_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_SocActualEst_BMS_Sts_PT_BMS_SocActualEst_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_SocActualEst_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_HWCrashSts_BMS_Sts_PT_BMS_HWCrashSts_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_HWCrashSts_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_BatBalanceErr_BMS_Sts_PT_BMS_BatBalanceErr_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_BatBalanceErr_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_BalanceSts_BMS_Sts_PT_BMS_BalanceSts_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_BalanceSts_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_IGNSts_BMS_Sts_PT_BMS_IGNSts_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_IGNSts_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_SocRelativeEst_BMS_Sts_PT_BMS_SocRelativeEst_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_SocRelativeEst_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_SOH_BMS_Sts_PT_BMS_SOH_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_SOH_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_SOE_BMS_Sts_PT_BMS_SOE_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_SOE_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_DisconnectRequestRsn_BMS_Sts_PT_BMS_DisconnectRequestRsn_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_DisconnectRequestRsn_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_EmergencyDisconnectRsn_BMS_Sts_PT_BMS_EmergencyDisconnectRsn_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_EmergencyDisconnectRsn_phy);
	cap_canApiMsg_BMS_Sts_PT.msg_tout |= Rte_Read_RPort_BMS_LimpHomeRsn_BMS_Sts_PT_BMS_LimpHomeRsn_BMS_Sts_PT(&tmp_BMS_Sts_PT_BMS_LimpHomeRsn_phy);


	if(TRUE != cap_canApiMsg_BMS_Sts_PT.msg_tout){
		cap_canApiMsg_BMS_Sts_PT.CRC_BMS_Sts_phy = tmp_BMS_Sts_PT_CRC_BMS_Sts_phy;
		cap_canApiMsg_BMS_Sts_PT.ALV_BMS_Sts_phy = tmp_BMS_Sts_PT_ALV_BMS_Sts_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_HVOnOffSts_phy = tmp_BMS_Sts_PT_BMS_HVOnOffSts_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_HVILSts_phy = tmp_BMS_Sts_PT_BMS_HVILSts_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_ErrLev_phy = tmp_BMS_Sts_PT_BMS_ErrLev_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_SysSts_phy = tmp_BMS_Sts_PT_BMS_SysSts_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_SocActualEst_phy = tmp_BMS_Sts_PT_BMS_SocActualEst_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_HWCrashSts_phy = tmp_BMS_Sts_PT_BMS_HWCrashSts_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_BatBalanceErr_phy = tmp_BMS_Sts_PT_BMS_BatBalanceErr_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_BalanceSts_phy = tmp_BMS_Sts_PT_BMS_BalanceSts_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_IGNSts_phy = tmp_BMS_Sts_PT_BMS_IGNSts_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_SocRelativeEst_phy = tmp_BMS_Sts_PT_BMS_SocRelativeEst_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_SOH_phy = tmp_BMS_Sts_PT_BMS_SOH_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_SOE_phy = tmp_BMS_Sts_PT_BMS_SOE_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_DisconnectRequestRsn_phy = tmp_BMS_Sts_PT_BMS_DisconnectRequestRsn_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_EmergencyDisconnectRsn_phy = tmp_BMS_Sts_PT_BMS_EmergencyDisconnectRsn_phy;
		cap_canApiMsg_BMS_Sts_PT.BMS_LimpHomeRsn_phy = tmp_BMS_Sts_PT_BMS_LimpHomeRsn_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X187*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_WarnMsg_PT(void){
	uint8 tmp_BMS_WarnMsg_PT_CHSKM_BMS_WarnMsg_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_WarnMsg_PT_ALV_BMS_WarnMsg_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_PackTempSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_ThermalRunaway_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_BatteryReplacement_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_5_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_6_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_7_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_8_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_9_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_MalfunctionSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_LowBattery_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Reserved_signal1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Reserved_signal2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Reserved_signal3_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Reserved_signal4_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_WarnMsg_PT_BMS_Reserved_signal5_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_CHSKM_BMS_WarnMsg_BMS_WarnMsg_PT_CHSKM_BMS_WarnMsg_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_CHSKM_BMS_WarnMsg_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_WarnMsg_BMS_WarnMsg_PT_ALV_BMS_WarnMsg_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_ALV_BMS_WarnMsg_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_PackTempSts_BMS_WarnMsg_PT_BMS_PackTempSts_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_PackTempSts_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_ThermalRunaway_BMS_WarnMsg_PT_BMS_ThermalRunaway_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_ThermalRunaway_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_BatteryReplacement_BMS_WarnMsg_PT_BMS_BatteryReplacement_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_BatteryReplacement_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Warning_Flag_5_BMS_WarnMsg_PT_BMS_Warning_Flag_5_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_5_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Warning_Flag_6_BMS_WarnMsg_PT_BMS_Warning_Flag_6_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_6_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Warning_Flag_7_BMS_WarnMsg_PT_BMS_Warning_Flag_7_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_7_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Warning_Flag_8_BMS_WarnMsg_PT_BMS_Warning_Flag_8_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_8_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Warning_Flag_9_BMS_WarnMsg_PT_BMS_Warning_Flag_9_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_9_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_MalfunctionSts_BMS_WarnMsg_PT_BMS_MalfunctionSts_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_MalfunctionSts_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_LowBattery_BMS_WarnMsg_PT_BMS_LowBattery_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_LowBattery_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Reserved_signal1_BMS_WarnMsg_PT_BMS_Reserved_signal1_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Reserved_signal1_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Reserved_signal2_BMS_WarnMsg_PT_BMS_Reserved_signal2_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Reserved_signal2_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Reserved_signal3_BMS_WarnMsg_PT_BMS_Reserved_signal3_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Reserved_signal3_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Reserved_signal4_BMS_WarnMsg_PT_BMS_Reserved_signal4_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Reserved_signal4_phy);
	cap_canApiMsg_BMS_WarnMsg_PT.msg_tout |= Rte_Read_RPort_BMS_Reserved_signal5_BMS_WarnMsg_PT_BMS_Reserved_signal5_BMS_WarnMsg_PT(&tmp_BMS_WarnMsg_PT_BMS_Reserved_signal5_phy);


	if(TRUE != cap_canApiMsg_BMS_WarnMsg_PT.msg_tout){
		cap_canApiMsg_BMS_WarnMsg_PT.CHSKM_BMS_WarnMsg_phy = tmp_BMS_WarnMsg_PT_CHSKM_BMS_WarnMsg_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.ALV_BMS_WarnMsg_phy = tmp_BMS_WarnMsg_PT_ALV_BMS_WarnMsg_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_PackTempSts_phy = tmp_BMS_WarnMsg_PT_BMS_PackTempSts_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_ThermalRunaway_phy = tmp_BMS_WarnMsg_PT_BMS_ThermalRunaway_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_BatteryReplacement_phy = tmp_BMS_WarnMsg_PT_BMS_BatteryReplacement_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_5_phy = tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_5_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_6_phy = tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_6_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_7_phy = tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_7_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_8_phy = tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_8_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_9_phy = tmp_BMS_WarnMsg_PT_BMS_Warning_Flag_9_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_MalfunctionSts_phy = tmp_BMS_WarnMsg_PT_BMS_MalfunctionSts_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_LowBattery_phy = tmp_BMS_WarnMsg_PT_BMS_LowBattery_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal1_phy = tmp_BMS_WarnMsg_PT_BMS_Reserved_signal1_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal2_phy = tmp_BMS_WarnMsg_PT_BMS_Reserved_signal2_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal3_phy = tmp_BMS_WarnMsg_PT_BMS_Reserved_signal3_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal4_phy = tmp_BMS_WarnMsg_PT_BMS_Reserved_signal4_phy;
		cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal5_phy = tmp_BMS_WarnMsg_PT_BMS_Reserved_signal5_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X249*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_DCDC_VCU_Measure_Fbk_PT(void){
	float32 tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasVs_phy = 0; /*f32 factor : 0.0625 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasOutCurr_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasInVltg_phy = 0; /*f32 factor : 0.0625 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasInCurrent_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.msg_tout = FALSE;
	cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_MeasVs_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasVs_DCDC_VCU_Measure_Fbk_PT(&tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasVs_phy);
	cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_MeasOutCurr_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasOutCurr_DCDC_VCU_Measure_Fbk_PT(&tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasOutCurr_phy);
	cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_MeasInVltg_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasInVltg_DCDC_VCU_Measure_Fbk_PT(&tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasInVltg_phy);
	cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_MeasInCurrent_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasInCurrent_DCDC_VCU_Measure_Fbk_PT(&tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasInCurrent_phy);


	if(TRUE != cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.msg_tout){
		cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.DCDC_MeasVs_phy = tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasVs_phy;
		cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.DCDC_MeasOutCurr_phy = tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasOutCurr_phy;
		cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.DCDC_MeasInVltg_phy = tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasInVltg_phy;
		cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.DCDC_MeasInCurrent_phy = tmp_DCDC_VCU_Measure_Fbk_PT_DCDC_MeasInCurrent_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X254*/ /*size:7*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_DCDC_VCU_Req_Fbk_PT(void){
	uint8 tmp_DCDC_VCU_Req_Fbk_PT_DCDC_EnableDCDCFbk_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_DCDC_VCU_Req_Fbk_PT_DCDC_Status_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_DCDC_VCU_Req_Fbk_PT_DCDC_OutVltgReqFbk_phy = 0; /*f32 factor : 0.0625 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_DCDC_VCU_Req_Fbk_PT_DCDC_OutCurrReqFbk_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_DCDC_VCU_Req_Fbk_PT_DCDC_MaxCurrentOut_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.msg_tout = FALSE;
	cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_EnableDCDCFbk_DCDC_VCU_Req_Fbk_PT_DCDC_EnableDCDCFbk_DCDC_VCU_Req_Fbk_PT(&tmp_DCDC_VCU_Req_Fbk_PT_DCDC_EnableDCDCFbk_phy);
	cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_Status_DCDC_VCU_Req_Fbk_PT_DCDC_Status_DCDC_VCU_Req_Fbk_PT(&tmp_DCDC_VCU_Req_Fbk_PT_DCDC_Status_phy);
	cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_OutVltgReqFbk_DCDC_VCU_Req_Fbk_PT_DCDC_OutVltgReqFbk_DCDC_VCU_Req_Fbk_PT(&tmp_DCDC_VCU_Req_Fbk_PT_DCDC_OutVltgReqFbk_phy);
	cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_OutCurrReqFbk_DCDC_VCU_Req_Fbk_PT_DCDC_OutCurrReqFbk_DCDC_VCU_Req_Fbk_PT(&tmp_DCDC_VCU_Req_Fbk_PT_DCDC_OutCurrReqFbk_phy);
	cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_MaxCurrentOut_DCDC_VCU_Req_Fbk_PT_DCDC_MaxCurrentOut_DCDC_VCU_Req_Fbk_PT(&tmp_DCDC_VCU_Req_Fbk_PT_DCDC_MaxCurrentOut_phy);


	if(TRUE != cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.msg_tout){
		cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_EnableDCDCFbk_phy = tmp_DCDC_VCU_Req_Fbk_PT_DCDC_EnableDCDCFbk_phy;
		cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_Status_phy = tmp_DCDC_VCU_Req_Fbk_PT_DCDC_Status_phy;
		cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_OutVltgReqFbk_phy = tmp_DCDC_VCU_Req_Fbk_PT_DCDC_OutVltgReqFbk_phy;
		cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_OutCurrReqFbk_phy = tmp_DCDC_VCU_Req_Fbk_PT_DCDC_OutCurrReqFbk_phy;
		cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_MaxCurrentOut_phy = tmp_DCDC_VCU_Req_Fbk_PT_DCDC_MaxCurrentOut_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X314*/ /*size:32*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_TracEMacElectc1Time100msNo1_PT(void){
	uint16 tmp_TracEMacElectc1Time100msNo1_PT_CRC_TracEMacElectc1Time100msNo1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc1Time100msNo1_PT_ALIV_TracEMacElectc1Time100msNo1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint32 tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1Error_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint32*/ 
	uint32 tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1Degradation_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint32*/ 
	uint16 tmp_TracEMacElectc1Time100msNo1_PT_ActStatMeclLossesGbxETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1CoolantWaterInpActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1CoolingActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time100msNo1_PT_OpModETractSys1ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1LossActive_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint16 tmp_TracEMacElectc1Time100msNo1_PT_PowerETractSys1MaximumLossActive_phy = 0; /*f32 factor : 50.0 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time100msNo1_PT_WhlRatElAxlEtractSys1ActVal_phy = 0; /*f32 factor : 0.001 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc1Time100msNo1_PT_PercentUsedExtraBoostETractSys1_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc1Time100msNo1_PT_StatusExtraBoostETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	sint16 tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1EmRotorActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 
	float32 tmp_TracEMacElectc1Time100msNo1_PT_ThermalStressLevelETractSys1_phy = 0; /*f32 factor : 0.5 , offset : 0.0 , DBCtype: uint8*/ 
	sint16 tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1EmStatorActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 
	sint16 tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1InverterActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 
	sint16 tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1GbxOilActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 

	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout = FALSE;
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_CRC_TracEMacElectc1Time100msNo1_TracEMacElectc1Time100msNo1_PT_CRC_TracEMacElectc1Time100msNo1_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_CRC_TracEMacElectc1Time100msNo1_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_ALIV_TracEMacElectc1Time100msNo1_TracEMacElectc1Time100msNo1_PT_ALIV_TracEMacElectc1Time100msNo1_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_ALIV_TracEMacElectc1Time100msNo1_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusETractSys1Error_TracEMacElectc1Time100msNo1_PT_StatusETractSys1Error_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1Error_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusETractSys1Degradation_TracEMacElectc1Time100msNo1_PT_StatusETractSys1Degradation_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1Degradation_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_ActStatMeclLossesGbxETractSys1_TracEMacElectc1Time100msNo1_PT_ActStatMeclLossesGbxETractSys1_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_ActStatMeclLossesGbxETractSys1_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys1CoolantWaterInpActVal_TracEMacElectc1Time100msNo1_PT_TETractSys1CoolantWaterInpActVal_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1CoolantWaterInpActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusETractSys1CoolingActVal_TracEMacElectc1Time100msNo1_PT_StatusETractSys1CoolingActVal_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1CoolingActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_OpModETractSys1ActVal_TracEMacElectc1Time100msNo1_PT_OpModETractSys1ActVal_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_OpModETractSys1ActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusETractSys1LossActive_TracEMacElectc1Time100msNo1_PT_StatusETractSys1LossActive_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1LossActive_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_PowerETractSys1MaximumLossActive_TracEMacElectc1Time100msNo1_PT_PowerETractSys1MaximumLossActive_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_PowerETractSys1MaximumLossActive_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_WhlRatElAxlEtractSys1ActVal_TracEMacElectc1Time100msNo1_PT_WhlRatElAxlEtractSys1ActVal_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_WhlRatElAxlEtractSys1ActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_PercentUsedExtraBoostETractSys1_TracEMacElectc1Time100msNo1_PT_PercentUsedExtraBoostETractSys1_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_PercentUsedExtraBoostETractSys1_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusExtraBoostETractSys1_TracEMacElectc1Time100msNo1_PT_StatusExtraBoostETractSys1_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_StatusExtraBoostETractSys1_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys1EmRotorActVal_TracEMacElectc1Time100msNo1_PT_TETractSys1EmRotorActVal_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1EmRotorActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_ThermalStressLevelETractSys1_TracEMacElectc1Time100msNo1_PT_ThermalStressLevelETractSys1_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_ThermalStressLevelETractSys1_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys1EmStatorActVal_TracEMacElectc1Time100msNo1_PT_TETractSys1EmStatorActVal_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1EmStatorActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys1InverterActVal_TracEMacElectc1Time100msNo1_PT_TETractSys1InverterActVal_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1InverterActVal_phy);
	cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys1GbxOilActVal_TracEMacElectc1Time100msNo1_PT_TETractSys1GbxOilActVal_TracEMacElectc1Time100msNo1_PT(&tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1GbxOilActVal_phy);


	if(TRUE != cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout){
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.CRC_TracEMacElectc1Time100msNo1_phy = tmp_TracEMacElectc1Time100msNo1_PT_CRC_TracEMacElectc1Time100msNo1_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.ALIV_TracEMacElectc1Time100msNo1_phy = tmp_TracEMacElectc1Time100msNo1_PT_ALIV_TracEMacElectc1Time100msNo1_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusETractSys1Error_phy = tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1Error_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusETractSys1Degradation_phy = tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1Degradation_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.ActStatMeclLossesGbxETractSys1_phy = tmp_TracEMacElectc1Time100msNo1_PT_ActStatMeclLossesGbxETractSys1_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1CoolantWaterInpActVal_phy = tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1CoolantWaterInpActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusETractSys1CoolingActVal_phy = tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1CoolingActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.OpModETractSys1ActVal_phy = tmp_TracEMacElectc1Time100msNo1_PT_OpModETractSys1ActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusETractSys1LossActive_phy = tmp_TracEMacElectc1Time100msNo1_PT_StatusETractSys1LossActive_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.PowerETractSys1MaximumLossActive_phy = tmp_TracEMacElectc1Time100msNo1_PT_PowerETractSys1MaximumLossActive_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.WhlRatElAxlEtractSys1ActVal_phy = tmp_TracEMacElectc1Time100msNo1_PT_WhlRatElAxlEtractSys1ActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.PercentUsedExtraBoostETractSys1_phy = tmp_TracEMacElectc1Time100msNo1_PT_PercentUsedExtraBoostETractSys1_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusExtraBoostETractSys1_phy = tmp_TracEMacElectc1Time100msNo1_PT_StatusExtraBoostETractSys1_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1EmRotorActVal_phy = tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1EmRotorActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.ThermalStressLevelETractSys1_phy = tmp_TracEMacElectc1Time100msNo1_PT_ThermalStressLevelETractSys1_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1EmStatorActVal_phy = tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1EmStatorActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1InverterActVal_phy = tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1InverterActVal_phy;
		cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1GbxOilActVal_phy = tmp_TracEMacElectc1Time100msNo1_PT_TETractSys1GbxOilActVal_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X326*/ /*size:32*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_TracEMacElectc2Time100msNo1_PT(void){
	uint16 tmp_TracEMacElectc2Time100msNo1_PT_CRC_TracEMacElectc2Time100msNo1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc2Time100msNo1_PT_ALIV_TracEMacElectc2Time100msNo1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint32 tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2Error_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint32*/ 
	uint32 tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2Degradation_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint32*/ 
	uint16 tmp_TracEMacElectc2Time100msNo1_PT_ActStatMeclLossesGbxETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	sint16 tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2CoolantWaterInpActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2CoolingActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time100msNo1_PT_OpModETractSys2ActVal_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2LossActive_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint16 tmp_TracEMacElectc2Time100msNo1_PT_PowerETractSys2MaximumLossActive_phy = 0; /*f32 factor : 50.0 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time100msNo1_PT_WhlRatElAxlEtractSys2ActVal_phy = 0; /*f32 factor : 0.001 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_TracEMacElectc2Time100msNo1_PT_PercentUsedExtraBoostETractSys2_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_TracEMacElectc2Time100msNo1_PT_StatusExtraBoostETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	sint16 tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2EmRotorActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 
	float32 tmp_TracEMacElectc2Time100msNo1_PT_ThermalStressLevelETractSys2_phy = 0; /*f32 factor : 0.5 , offset : 0.0 , DBCtype: uint8*/ 
	sint16 tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2EmStatorActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 
	sint16 tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2InverterActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 
	sint16 tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2GbxOilActVal_phy = 0; /*f32 factor : 1.0 , offset : -48.0 , DBCtype: uint8*/ 

	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout = FALSE;
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_CRC_TracEMacElectc2Time100msNo1_TracEMacElectc2Time100msNo1_PT_CRC_TracEMacElectc2Time100msNo1_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_CRC_TracEMacElectc2Time100msNo1_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_ALIV_TracEMacElectc2Time100msNo1_TracEMacElectc2Time100msNo1_PT_ALIV_TracEMacElectc2Time100msNo1_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_ALIV_TracEMacElectc2Time100msNo1_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusETractSys2Error_TracEMacElectc2Time100msNo1_PT_StatusETractSys2Error_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2Error_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusETractSys2Degradation_TracEMacElectc2Time100msNo1_PT_StatusETractSys2Degradation_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2Degradation_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_ActStatMeclLossesGbxETractSys2_TracEMacElectc2Time100msNo1_PT_ActStatMeclLossesGbxETractSys2_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_ActStatMeclLossesGbxETractSys2_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys2CoolantWaterInpActVal_TracEMacElectc2Time100msNo1_PT_TETractSys2CoolantWaterInpActVal_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2CoolantWaterInpActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusETractSys2CoolingActVal_TracEMacElectc2Time100msNo1_PT_StatusETractSys2CoolingActVal_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2CoolingActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_OpModETractSys2ActVal_TracEMacElectc2Time100msNo1_PT_OpModETractSys2ActVal_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_OpModETractSys2ActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusETractSys2LossActive_TracEMacElectc2Time100msNo1_PT_StatusETractSys2LossActive_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2LossActive_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_PowerETractSys2MaximumLossActive_TracEMacElectc2Time100msNo1_PT_PowerETractSys2MaximumLossActive_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_PowerETractSys2MaximumLossActive_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_WhlRatElAxlEtractSys2ActVal_TracEMacElectc2Time100msNo1_PT_WhlRatElAxlEtractSys2ActVal_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_WhlRatElAxlEtractSys2ActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_PercentUsedExtraBoostETractSys2_TracEMacElectc2Time100msNo1_PT_PercentUsedExtraBoostETractSys2_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_PercentUsedExtraBoostETractSys2_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_StatusExtraBoostETractSys2_TracEMacElectc2Time100msNo1_PT_StatusExtraBoostETractSys2_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_StatusExtraBoostETractSys2_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys2EmRotorActVal_TracEMacElectc2Time100msNo1_PT_TETractSys2EmRotorActVal_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2EmRotorActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_ThermalStressLevelETractSys2_TracEMacElectc2Time100msNo1_PT_ThermalStressLevelETractSys2_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_ThermalStressLevelETractSys2_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys2EmStatorActVal_TracEMacElectc2Time100msNo1_PT_TETractSys2EmStatorActVal_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2EmStatorActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys2InverterActVal_TracEMacElectc2Time100msNo1_PT_TETractSys2InverterActVal_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2InverterActVal_phy);
	cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout |= Rte_Read_RPort_TETractSys2GbxOilActVal_TracEMacElectc2Time100msNo1_PT_TETractSys2GbxOilActVal_TracEMacElectc2Time100msNo1_PT(&tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2GbxOilActVal_phy);


	if(TRUE != cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout){
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.CRC_TracEMacElectc2Time100msNo1_phy = tmp_TracEMacElectc2Time100msNo1_PT_CRC_TracEMacElectc2Time100msNo1_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.ALIV_TracEMacElectc2Time100msNo1_phy = tmp_TracEMacElectc2Time100msNo1_PT_ALIV_TracEMacElectc2Time100msNo1_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusETractSys2Error_phy = tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2Error_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusETractSys2Degradation_phy = tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2Degradation_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.ActStatMeclLossesGbxETractSys2_phy = tmp_TracEMacElectc2Time100msNo1_PT_ActStatMeclLossesGbxETractSys2_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2CoolantWaterInpActVal_phy = tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2CoolantWaterInpActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusETractSys2CoolingActVal_phy = tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2CoolingActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.OpModETractSys2ActVal_phy = tmp_TracEMacElectc2Time100msNo1_PT_OpModETractSys2ActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusETractSys2LossActive_phy = tmp_TracEMacElectc2Time100msNo1_PT_StatusETractSys2LossActive_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.PowerETractSys2MaximumLossActive_phy = tmp_TracEMacElectc2Time100msNo1_PT_PowerETractSys2MaximumLossActive_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.WhlRatElAxlEtractSys2ActVal_phy = tmp_TracEMacElectc2Time100msNo1_PT_WhlRatElAxlEtractSys2ActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.PercentUsedExtraBoostETractSys2_phy = tmp_TracEMacElectc2Time100msNo1_PT_PercentUsedExtraBoostETractSys2_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusExtraBoostETractSys2_phy = tmp_TracEMacElectc2Time100msNo1_PT_StatusExtraBoostETractSys2_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2EmRotorActVal_phy = tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2EmRotorActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.ThermalStressLevelETractSys2_phy = tmp_TracEMacElectc2Time100msNo1_PT_ThermalStressLevelETractSys2_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2EmStatorActVal_phy = tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2EmStatorActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2InverterActVal_phy = tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2InverterActVal_phy;
		cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2GbxOilActVal_phy = tmp_TracEMacElectc2Time100msNo1_PT_TETractSys2GbxOilActVal_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X389*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_CellTemp_PT(void){
	uint8 tmp_BMS_CellTemp_PT_CRC_BMS_CellTemp_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CellTemp_PT_ALV_BMS_CellTemp_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	sint16 tmp_BMS_CellTemp_PT_BMS_MinCellTemp_phy = 0; /*f32 factor : 1.0 , offset : -40.0 , DBCtype: uint8*/ 
	sint16 tmp_BMS_CellTemp_PT_BMS_PackTemp_phy = 0; /*f32 factor : 1.0 , offset : -40.0 , DBCtype: uint8*/ 
	sint16 tmp_BMS_CellTemp_PT_BMS_MaxCellTemp_phy = 0; /*f32 factor : 1.0 , offset : -40.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CellTemp_PT_BMS_ProbeNumMaxCellTemp_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CellTemp_PT_BMS_ProbeNumMinCellTemp_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	sint16 tmp_BMS_CellTemp_PT_BMS_MaxMinDiffCellTemp_phy = 0; /*f32 factor : 1.0 , offset : -40.0 , DBCtype: uint8*/ 

	cap_canApiMsg_BMS_CellTemp_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_CellTemp_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_CellTemp_BMS_CellTemp_PT_CRC_BMS_CellTemp_BMS_CellTemp_PT(&tmp_BMS_CellTemp_PT_CRC_BMS_CellTemp_phy);
	cap_canApiMsg_BMS_CellTemp_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_CellTemp_BMS_CellTemp_PT_ALV_BMS_CellTemp_BMS_CellTemp_PT(&tmp_BMS_CellTemp_PT_ALV_BMS_CellTemp_phy);
	cap_canApiMsg_BMS_CellTemp_PT.msg_tout |= Rte_Read_RPort_BMS_MinCellTemp_BMS_CellTemp_PT_BMS_MinCellTemp_BMS_CellTemp_PT(&tmp_BMS_CellTemp_PT_BMS_MinCellTemp_phy);
	cap_canApiMsg_BMS_CellTemp_PT.msg_tout |= Rte_Read_RPort_BMS_PackTemp_BMS_CellTemp_PT_BMS_PackTemp_BMS_CellTemp_PT(&tmp_BMS_CellTemp_PT_BMS_PackTemp_phy);
	cap_canApiMsg_BMS_CellTemp_PT.msg_tout |= Rte_Read_RPort_BMS_MaxCellTemp_BMS_CellTemp_PT_BMS_MaxCellTemp_BMS_CellTemp_PT(&tmp_BMS_CellTemp_PT_BMS_MaxCellTemp_phy);
	cap_canApiMsg_BMS_CellTemp_PT.msg_tout |= Rte_Read_RPort_BMS_ProbeNumMaxCellTemp_BMS_CellTemp_PT_BMS_ProbeNumMaxCellTemp_BMS_CellTemp_PT(&tmp_BMS_CellTemp_PT_BMS_ProbeNumMaxCellTemp_phy);
	cap_canApiMsg_BMS_CellTemp_PT.msg_tout |= Rte_Read_RPort_BMS_ProbeNumMinCellTemp_BMS_CellTemp_PT_BMS_ProbeNumMinCellTemp_BMS_CellTemp_PT(&tmp_BMS_CellTemp_PT_BMS_ProbeNumMinCellTemp_phy);
	cap_canApiMsg_BMS_CellTemp_PT.msg_tout |= Rte_Read_RPort_BMS_MaxMinDiffCellTemp_BMS_CellTemp_PT_BMS_MaxMinDiffCellTemp_BMS_CellTemp_PT(&tmp_BMS_CellTemp_PT_BMS_MaxMinDiffCellTemp_phy);


	if(TRUE != cap_canApiMsg_BMS_CellTemp_PT.msg_tout){
		cap_canApiMsg_BMS_CellTemp_PT.CRC_BMS_CellTemp_phy = tmp_BMS_CellTemp_PT_CRC_BMS_CellTemp_phy;
		cap_canApiMsg_BMS_CellTemp_PT.ALV_BMS_CellTemp_phy = tmp_BMS_CellTemp_PT_ALV_BMS_CellTemp_phy;
		cap_canApiMsg_BMS_CellTemp_PT.BMS_MinCellTemp_phy = tmp_BMS_CellTemp_PT_BMS_MinCellTemp_phy;
		cap_canApiMsg_BMS_CellTemp_PT.BMS_PackTemp_phy = tmp_BMS_CellTemp_PT_BMS_PackTemp_phy;
		cap_canApiMsg_BMS_CellTemp_PT.BMS_MaxCellTemp_phy = tmp_BMS_CellTemp_PT_BMS_MaxCellTemp_phy;
		cap_canApiMsg_BMS_CellTemp_PT.BMS_ProbeNumMaxCellTemp_phy = tmp_BMS_CellTemp_PT_BMS_ProbeNumMaxCellTemp_phy;
		cap_canApiMsg_BMS_CellTemp_PT.BMS_ProbeNumMinCellTemp_phy = tmp_BMS_CellTemp_PT_BMS_ProbeNumMinCellTemp_phy;
		cap_canApiMsg_BMS_CellTemp_PT.BMS_MaxMinDiffCellTemp_phy = tmp_BMS_CellTemp_PT_BMS_MaxMinDiffCellTemp_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X394*/ /*size:64*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_CellTempMeas_PT(void){
	uint8 tmp_BMS_CellTempMeas_PT_CRC_BMS_CellTempMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CellTempMeas_PT_ALV_BMS_CellTempMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp1_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp2_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp3_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp4_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp5_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp6_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp7_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp8_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp9_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp10_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp11_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp12_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp13_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp14_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp15_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp16_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp17_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp18_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp19_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp20_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp21_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp22_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp23_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp24_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp25_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp26_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp27_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp28_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp29_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp30_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp31_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp32_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp33_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp34_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp35_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp36_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp37_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp38_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp39_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp40_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellTempMeas_PT_BMS_CellTemp41_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_CellTempMeas_BMS_CellTempMeas_PT_CRC_BMS_CellTempMeas_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_CRC_BMS_CellTempMeas_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_CellTempMeas_BMS_CellTempMeas_PT_ALV_BMS_CellTempMeas_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_ALV_BMS_CellTempMeas_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp1_BMS_CellTempMeas_PT_BMS_CellTemp1_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp1_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp2_BMS_CellTempMeas_PT_BMS_CellTemp2_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp2_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp3_BMS_CellTempMeas_PT_BMS_CellTemp3_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp3_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp4_BMS_CellTempMeas_PT_BMS_CellTemp4_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp4_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp5_BMS_CellTempMeas_PT_BMS_CellTemp5_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp5_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp6_BMS_CellTempMeas_PT_BMS_CellTemp6_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp6_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp7_BMS_CellTempMeas_PT_BMS_CellTemp7_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp7_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp8_BMS_CellTempMeas_PT_BMS_CellTemp8_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp8_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp9_BMS_CellTempMeas_PT_BMS_CellTemp9_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp9_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp10_BMS_CellTempMeas_PT_BMS_CellTemp10_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp10_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp11_BMS_CellTempMeas_PT_BMS_CellTemp11_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp11_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp12_BMS_CellTempMeas_PT_BMS_CellTemp12_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp12_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp13_BMS_CellTempMeas_PT_BMS_CellTemp13_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp13_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp14_BMS_CellTempMeas_PT_BMS_CellTemp14_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp14_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp15_BMS_CellTempMeas_PT_BMS_CellTemp15_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp15_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp16_BMS_CellTempMeas_PT_BMS_CellTemp16_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp16_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp17_BMS_CellTempMeas_PT_BMS_CellTemp17_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp17_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp18_BMS_CellTempMeas_PT_BMS_CellTemp18_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp18_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp19_BMS_CellTempMeas_PT_BMS_CellTemp19_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp19_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp20_BMS_CellTempMeas_PT_BMS_CellTemp20_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp20_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp21_BMS_CellTempMeas_PT_BMS_CellTemp21_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp21_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp22_BMS_CellTempMeas_PT_BMS_CellTemp22_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp22_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp23_BMS_CellTempMeas_PT_BMS_CellTemp23_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp23_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp24_BMS_CellTempMeas_PT_BMS_CellTemp24_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp24_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp25_BMS_CellTempMeas_PT_BMS_CellTemp25_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp25_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp26_BMS_CellTempMeas_PT_BMS_CellTemp26_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp26_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp27_BMS_CellTempMeas_PT_BMS_CellTemp27_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp27_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp28_BMS_CellTempMeas_PT_BMS_CellTemp28_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp28_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp29_BMS_CellTempMeas_PT_BMS_CellTemp29_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp29_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp30_BMS_CellTempMeas_PT_BMS_CellTemp30_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp30_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp31_BMS_CellTempMeas_PT_BMS_CellTemp31_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp31_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp32_BMS_CellTempMeas_PT_BMS_CellTemp32_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp32_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp33_BMS_CellTempMeas_PT_BMS_CellTemp33_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp33_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp34_BMS_CellTempMeas_PT_BMS_CellTemp34_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp34_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp35_BMS_CellTempMeas_PT_BMS_CellTemp35_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp35_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp36_BMS_CellTempMeas_PT_BMS_CellTemp36_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp36_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp37_BMS_CellTempMeas_PT_BMS_CellTemp37_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp37_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp38_BMS_CellTempMeas_PT_BMS_CellTemp38_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp38_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp39_BMS_CellTempMeas_PT_BMS_CellTemp39_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp39_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp40_BMS_CellTempMeas_PT_BMS_CellTemp40_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp40_phy);
	cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellTemp41_BMS_CellTempMeas_PT_BMS_CellTemp41_BMS_CellTempMeas_PT(&tmp_BMS_CellTempMeas_PT_BMS_CellTemp41_phy);


	if(TRUE != cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout){
		cap_canApiMsg_BMS_CellTempMeas_PT.CRC_BMS_CellTempMeas_phy = tmp_BMS_CellTempMeas_PT_CRC_BMS_CellTempMeas_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.ALV_BMS_CellTempMeas_phy = tmp_BMS_CellTempMeas_PT_ALV_BMS_CellTempMeas_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp1_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp1_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp2_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp2_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp3_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp3_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp4_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp4_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp5_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp5_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp6_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp6_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp7_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp7_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp8_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp8_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp9_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp9_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp10_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp10_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp11_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp11_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp12_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp12_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp13_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp13_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp14_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp14_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp15_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp15_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp16_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp16_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp17_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp17_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp18_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp18_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp19_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp19_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp20_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp20_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp21_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp21_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp22_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp22_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp23_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp23_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp24_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp24_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp25_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp25_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp26_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp26_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp27_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp27_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp28_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp28_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp29_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp29_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp30_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp30_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp31_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp31_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp32_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp32_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp33_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp33_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp34_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp34_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp35_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp35_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp36_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp36_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp37_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp37_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp38_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp38_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp39_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp39_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp40_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp40_phy;
		cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp41_phy = tmp_BMS_CellTempMeas_PT_BMS_CellTemp41_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X399*/ /*size:48*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_CellVolMeas1_PT(void){
	uint8 tmp_BMS_CellVolMeas1_PT_CRC_BMS_CellVolMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CellVolMeas1_PT_ALV_BMS_CellVolMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol1_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol2_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol3_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol4_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol5_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol6_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol7_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol8_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol9_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol10_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol11_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol12_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol13_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol14_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol15_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol16_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol17_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol18_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol19_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol20_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol21_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol22_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol23_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol24_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol25_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol26_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol27_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol28_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol29_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas1_PT_BMS_CellVol30_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_CellVolMeas_BMS_CellVolMeas1_PT_CRC_BMS_CellVolMeas_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_CRC_BMS_CellVolMeas_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_CellVolMeas_BMS_CellVolMeas1_PT_ALV_BMS_CellVolMeas_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_ALV_BMS_CellVolMeas_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol1_BMS_CellVolMeas1_PT_BMS_CellVol1_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol1_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol2_BMS_CellVolMeas1_PT_BMS_CellVol2_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol2_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol3_BMS_CellVolMeas1_PT_BMS_CellVol3_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol3_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol4_BMS_CellVolMeas1_PT_BMS_CellVol4_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol4_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol5_BMS_CellVolMeas1_PT_BMS_CellVol5_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol5_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol6_BMS_CellVolMeas1_PT_BMS_CellVol6_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol6_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol7_BMS_CellVolMeas1_PT_BMS_CellVol7_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol7_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol8_BMS_CellVolMeas1_PT_BMS_CellVol8_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol8_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol9_BMS_CellVolMeas1_PT_BMS_CellVol9_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol9_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol10_BMS_CellVolMeas1_PT_BMS_CellVol10_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol10_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol11_BMS_CellVolMeas1_PT_BMS_CellVol11_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol11_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol12_BMS_CellVolMeas1_PT_BMS_CellVol12_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol12_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol13_BMS_CellVolMeas1_PT_BMS_CellVol13_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol13_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol14_BMS_CellVolMeas1_PT_BMS_CellVol14_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol14_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol15_BMS_CellVolMeas1_PT_BMS_CellVol15_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol15_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol16_BMS_CellVolMeas1_PT_BMS_CellVol16_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol16_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol17_BMS_CellVolMeas1_PT_BMS_CellVol17_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol17_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol18_BMS_CellVolMeas1_PT_BMS_CellVol18_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol18_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol19_BMS_CellVolMeas1_PT_BMS_CellVol19_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol19_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol20_BMS_CellVolMeas1_PT_BMS_CellVol20_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol20_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol21_BMS_CellVolMeas1_PT_BMS_CellVol21_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol21_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol22_BMS_CellVolMeas1_PT_BMS_CellVol22_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol22_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol23_BMS_CellVolMeas1_PT_BMS_CellVol23_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol23_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol24_BMS_CellVolMeas1_PT_BMS_CellVol24_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol24_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol25_BMS_CellVolMeas1_PT_BMS_CellVol25_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol25_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol26_BMS_CellVolMeas1_PT_BMS_CellVol26_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol26_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol27_BMS_CellVolMeas1_PT_BMS_CellVol27_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol27_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol28_BMS_CellVolMeas1_PT_BMS_CellVol28_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol28_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol29_BMS_CellVolMeas1_PT_BMS_CellVol29_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol29_phy);
	cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol30_BMS_CellVolMeas1_PT_BMS_CellVol30_BMS_CellVolMeas1_PT(&tmp_BMS_CellVolMeas1_PT_BMS_CellVol30_phy);


	if(TRUE != cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout){
		cap_canApiMsg_BMS_CellVolMeas1_PT.CRC_BMS_CellVolMeas_phy = tmp_BMS_CellVolMeas1_PT_CRC_BMS_CellVolMeas_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.ALV_BMS_CellVolMeas_phy = tmp_BMS_CellVolMeas1_PT_ALV_BMS_CellVolMeas_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol1_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol1_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol2_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol2_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol3_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol3_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol4_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol4_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol5_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol5_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol6_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol6_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol7_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol7_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol8_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol8_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol9_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol9_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol10_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol10_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol11_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol11_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol12_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol12_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol13_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol13_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol14_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol14_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol15_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol15_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol16_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol16_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol17_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol17_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol18_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol18_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol19_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol19_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol20_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol20_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol21_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol21_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol22_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol22_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol23_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol23_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol24_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol24_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol25_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol25_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol26_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol26_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol27_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol27_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol28_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol28_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol29_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol29_phy;
		cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol30_phy = tmp_BMS_CellVolMeas1_PT_BMS_CellVol30_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X404*/ /*size:48*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_CellVolMeas2_PT(void){
	uint8 tmp_BMS_CellVolMeas2_PT_CRC_BMS_CellVolMeas2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CellVolMeas2_PT_ALV_BMS_CellVolMeas2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol31_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol32_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol33_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol34_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol35_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol36_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol37_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol38_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol39_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol40_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol41_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol42_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol43_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol44_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol45_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol46_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol47_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol48_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol49_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol50_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol51_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol52_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol53_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol54_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol55_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol56_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol57_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol58_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol59_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol60_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol61_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas2_PT_BMS_CellVol62_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_CellVolMeas2_BMS_CellVolMeas2_PT_CRC_BMS_CellVolMeas2_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_CRC_BMS_CellVolMeas2_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_CellVolMeas2_BMS_CellVolMeas2_PT_ALV_BMS_CellVolMeas2_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_ALV_BMS_CellVolMeas2_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol31_BMS_CellVolMeas2_PT_BMS_CellVol31_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol31_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol32_BMS_CellVolMeas2_PT_BMS_CellVol32_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol32_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol33_BMS_CellVolMeas2_PT_BMS_CellVol33_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol33_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol34_BMS_CellVolMeas2_PT_BMS_CellVol34_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol34_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol35_BMS_CellVolMeas2_PT_BMS_CellVol35_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol35_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol36_BMS_CellVolMeas2_PT_BMS_CellVol36_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol36_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol37_BMS_CellVolMeas2_PT_BMS_CellVol37_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol37_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol38_BMS_CellVolMeas2_PT_BMS_CellVol38_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol38_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol39_BMS_CellVolMeas2_PT_BMS_CellVol39_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol39_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol40_BMS_CellVolMeas2_PT_BMS_CellVol40_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol40_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol41_BMS_CellVolMeas2_PT_BMS_CellVol41_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol41_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol42_BMS_CellVolMeas2_PT_BMS_CellVol42_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol42_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol43_BMS_CellVolMeas2_PT_BMS_CellVol43_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol43_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol44_BMS_CellVolMeas2_PT_BMS_CellVol44_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol44_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol45_BMS_CellVolMeas2_PT_BMS_CellVol45_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol45_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol46_BMS_CellVolMeas2_PT_BMS_CellVol46_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol46_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol47_BMS_CellVolMeas2_PT_BMS_CellVol47_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol47_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol48_BMS_CellVolMeas2_PT_BMS_CellVol48_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol48_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol49_BMS_CellVolMeas2_PT_BMS_CellVol49_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol49_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol50_BMS_CellVolMeas2_PT_BMS_CellVol50_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol50_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol51_BMS_CellVolMeas2_PT_BMS_CellVol51_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol51_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol52_BMS_CellVolMeas2_PT_BMS_CellVol52_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol52_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol53_BMS_CellVolMeas2_PT_BMS_CellVol53_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol53_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol54_BMS_CellVolMeas2_PT_BMS_CellVol54_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol54_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol55_BMS_CellVolMeas2_PT_BMS_CellVol55_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol55_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol56_BMS_CellVolMeas2_PT_BMS_CellVol56_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol56_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol57_BMS_CellVolMeas2_PT_BMS_CellVol57_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol57_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol58_BMS_CellVolMeas2_PT_BMS_CellVol58_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol58_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol59_BMS_CellVolMeas2_PT_BMS_CellVol59_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol59_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol60_BMS_CellVolMeas2_PT_BMS_CellVol60_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol60_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol61_BMS_CellVolMeas2_PT_BMS_CellVol61_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol61_phy);
	cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol62_BMS_CellVolMeas2_PT_BMS_CellVol62_BMS_CellVolMeas2_PT(&tmp_BMS_CellVolMeas2_PT_BMS_CellVol62_phy);


	if(TRUE != cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout){
		cap_canApiMsg_BMS_CellVolMeas2_PT.CRC_BMS_CellVolMeas2_phy = tmp_BMS_CellVolMeas2_PT_CRC_BMS_CellVolMeas2_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.ALV_BMS_CellVolMeas2_phy = tmp_BMS_CellVolMeas2_PT_ALV_BMS_CellVolMeas2_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol31_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol31_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol32_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol32_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol33_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol33_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol34_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol34_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol35_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol35_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol36_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol36_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol37_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol37_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol38_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol38_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol39_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol39_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol40_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol40_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol41_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol41_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol42_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol42_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol43_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol43_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol44_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol44_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol45_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol45_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol46_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol46_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol47_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol47_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol48_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol48_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol49_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol49_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol50_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol50_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol51_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol51_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol52_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol52_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol53_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol53_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol54_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol54_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol55_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol55_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol56_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol56_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol57_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol57_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol58_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol58_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol59_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol59_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol60_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol60_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol61_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol61_phy;
		cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol62_phy = tmp_BMS_CellVolMeas2_PT_BMS_CellVol62_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X405*/ /*size:20*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_OBC_Status_PT(void){
	uint8 tmp_OBC_Status_PT_OBC_VCU_Status_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_OBC_Status_PT_OBC_Max_Current_Out_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_OBC_Status_PT_OBC_VCU_iAC_L1_phy = 0; /*f32 factor : 0.1 , offset : -102.3 , DBCtype: uint16*/ 
	uint16 tmp_OBC_Status_PT_OBC_VCU_vAC_L1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_OBC_Status_PT_OBC_VCU_iAC_L2_phy = 0; /*f32 factor : 0.1 , offset : -102.3 , DBCtype: uint16*/ 
	uint16 tmp_OBC_Status_PT_OBC_VCU_vAC_L2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_OBC_Status_PT_OBC_VCU_iAC_L3_phy = 0; /*f32 factor : 0.1 , offset : -102.3 , DBCtype: uint16*/ 
	uint16 tmp_OBC_Status_PT_OBC_VCU_vAC_L3_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_OBC_Status_PT_OBC_VCU_iDC_phy = 0; /*f32 factor : 0.1 , offset : -102.3 , DBCtype: uint16*/ 
	uint16 tmp_OBC_Status_PT_OBC_VCU_vDC_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_OBC_Status_PT.msg_tout = FALSE;
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_Status_OBC_Status_PT_OBC_VCU_Status_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_Status_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_Max_Current_Out_OBC_Status_PT_OBC_Max_Current_Out_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_Max_Current_Out_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_iAC_L1_OBC_Status_PT_OBC_VCU_iAC_L1_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_iAC_L1_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_vAC_L1_OBC_Status_PT_OBC_VCU_vAC_L1_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_vAC_L1_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_iAC_L2_OBC_Status_PT_OBC_VCU_iAC_L2_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_iAC_L2_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_vAC_L2_OBC_Status_PT_OBC_VCU_vAC_L2_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_vAC_L2_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_iAC_L3_OBC_Status_PT_OBC_VCU_iAC_L3_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_iAC_L3_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_vAC_L3_OBC_Status_PT_OBC_VCU_vAC_L3_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_vAC_L3_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_iDC_OBC_Status_PT_OBC_VCU_iDC_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_iDC_phy);
	cap_canApiMsg_OBC_Status_PT.msg_tout |= Rte_Read_RPort_OBC_VCU_vDC_OBC_Status_PT_OBC_VCU_vDC_OBC_Status_PT(&tmp_OBC_Status_PT_OBC_VCU_vDC_phy);


	if(TRUE != cap_canApiMsg_OBC_Status_PT.msg_tout){
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_Status_phy = tmp_OBC_Status_PT_OBC_VCU_Status_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_Max_Current_Out_phy = tmp_OBC_Status_PT_OBC_Max_Current_Out_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_iAC_L1_phy = tmp_OBC_Status_PT_OBC_VCU_iAC_L1_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_vAC_L1_phy = tmp_OBC_Status_PT_OBC_VCU_vAC_L1_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_iAC_L2_phy = tmp_OBC_Status_PT_OBC_VCU_iAC_L2_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_vAC_L2_phy = tmp_OBC_Status_PT_OBC_VCU_vAC_L2_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_iAC_L3_phy = tmp_OBC_Status_PT_OBC_VCU_iAC_L3_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_vAC_L3_phy = tmp_OBC_Status_PT_OBC_VCU_vAC_L3_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_iDC_phy = tmp_OBC_Status_PT_OBC_VCU_iDC_phy;
		cap_canApiMsg_OBC_Status_PT.OBC_VCU_vDC_phy = tmp_OBC_Status_PT_OBC_VCU_vDC_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X409*/ /*size:64*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_CellVolMeas3_PT(void){
	uint8 tmp_BMS_CellVolMeas3_PT_CRC_BMS_CellVolMeas3_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CellVolMeas3_PT_ALV_BMS_CellVolMeas3_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol63_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol64_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol65_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol66_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol67_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol68_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol69_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol70_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol71_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol72_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol73_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol74_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol75_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol76_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol77_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol78_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol79_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol80_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol81_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol82_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol83_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol84_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol85_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol86_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol87_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol88_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol89_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol90_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol91_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol92_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol93_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol94_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol95_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol96_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol97_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol98_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol99_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol100_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol101_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol102_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol103_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol104_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol105_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol106_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol107_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CellVolMeas3_PT_BMS_CellVol108_phy = 0; /*f32 factor : 0.005 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_CellVolMeas3_BMS_CellVolMeas3_PT_CRC_BMS_CellVolMeas3_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_CRC_BMS_CellVolMeas3_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_CellVolMeas3_BMS_CellVolMeas3_PT_ALV_BMS_CellVolMeas3_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_ALV_BMS_CellVolMeas3_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol63_BMS_CellVolMeas3_PT_BMS_CellVol63_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol63_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol64_BMS_CellVolMeas3_PT_BMS_CellVol64_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol64_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol65_BMS_CellVolMeas3_PT_BMS_CellVol65_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol65_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol66_BMS_CellVolMeas3_PT_BMS_CellVol66_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol66_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol67_BMS_CellVolMeas3_PT_BMS_CellVol67_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol67_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol68_BMS_CellVolMeas3_PT_BMS_CellVol68_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol68_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol69_BMS_CellVolMeas3_PT_BMS_CellVol69_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol69_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol70_BMS_CellVolMeas3_PT_BMS_CellVol70_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol70_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol71_BMS_CellVolMeas3_PT_BMS_CellVol71_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol71_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol72_BMS_CellVolMeas3_PT_BMS_CellVol72_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol72_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol73_BMS_CellVolMeas3_PT_BMS_CellVol73_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol73_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol74_BMS_CellVolMeas3_PT_BMS_CellVol74_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol74_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol75_BMS_CellVolMeas3_PT_BMS_CellVol75_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol75_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol76_BMS_CellVolMeas3_PT_BMS_CellVol76_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol76_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol77_BMS_CellVolMeas3_PT_BMS_CellVol77_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol77_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol78_BMS_CellVolMeas3_PT_BMS_CellVol78_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol78_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol79_BMS_CellVolMeas3_PT_BMS_CellVol79_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol79_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol80_BMS_CellVolMeas3_PT_BMS_CellVol80_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol80_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol81_BMS_CellVolMeas3_PT_BMS_CellVol81_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol81_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol82_BMS_CellVolMeas3_PT_BMS_CellVol82_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol82_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol83_BMS_CellVolMeas3_PT_BMS_CellVol83_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol83_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol84_BMS_CellVolMeas3_PT_BMS_CellVol84_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol84_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol85_BMS_CellVolMeas3_PT_BMS_CellVol85_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol85_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol86_BMS_CellVolMeas3_PT_BMS_CellVol86_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol86_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol87_BMS_CellVolMeas3_PT_BMS_CellVol87_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol87_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol88_BMS_CellVolMeas3_PT_BMS_CellVol88_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol88_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol89_BMS_CellVolMeas3_PT_BMS_CellVol89_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol89_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol90_BMS_CellVolMeas3_PT_BMS_CellVol90_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol90_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol91_BMS_CellVolMeas3_PT_BMS_CellVol91_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol91_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol92_BMS_CellVolMeas3_PT_BMS_CellVol92_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol92_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol93_BMS_CellVolMeas3_PT_BMS_CellVol93_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol93_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol94_BMS_CellVolMeas3_PT_BMS_CellVol94_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol94_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol95_BMS_CellVolMeas3_PT_BMS_CellVol95_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol95_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol96_BMS_CellVolMeas3_PT_BMS_CellVol96_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol96_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol97_BMS_CellVolMeas3_PT_BMS_CellVol97_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol97_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol98_BMS_CellVolMeas3_PT_BMS_CellVol98_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol98_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol99_BMS_CellVolMeas3_PT_BMS_CellVol99_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol99_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol100_BMS_CellVolMeas3_PT_BMS_CellVol100_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol100_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol101_BMS_CellVolMeas3_PT_BMS_CellVol101_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol101_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol102_BMS_CellVolMeas3_PT_BMS_CellVol102_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol102_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol103_BMS_CellVolMeas3_PT_BMS_CellVol103_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol103_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol104_BMS_CellVolMeas3_PT_BMS_CellVol104_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol104_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol105_BMS_CellVolMeas3_PT_BMS_CellVol105_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol105_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol106_BMS_CellVolMeas3_PT_BMS_CellVol106_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol106_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol107_BMS_CellVolMeas3_PT_BMS_CellVol107_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol107_phy);
	cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout |= Rte_Read_RPort_BMS_CellVol108_BMS_CellVolMeas3_PT_BMS_CellVol108_BMS_CellVolMeas3_PT(&tmp_BMS_CellVolMeas3_PT_BMS_CellVol108_phy);


	if(TRUE != cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout){
		cap_canApiMsg_BMS_CellVolMeas3_PT.CRC_BMS_CellVolMeas3_phy = tmp_BMS_CellVolMeas3_PT_CRC_BMS_CellVolMeas3_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.ALV_BMS_CellVolMeas3_phy = tmp_BMS_CellVolMeas3_PT_ALV_BMS_CellVolMeas3_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol63_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol63_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol64_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol64_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol65_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol65_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol66_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol66_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol67_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol67_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol68_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol68_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol69_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol69_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol70_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol70_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol71_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol71_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol72_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol72_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol73_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol73_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol74_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol74_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol75_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol75_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol76_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol76_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol77_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol77_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol78_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol78_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol79_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol79_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol80_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol80_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol81_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol81_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol82_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol82_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol83_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol83_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol84_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol84_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol85_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol85_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol86_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol86_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol87_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol87_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol88_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol88_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol89_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol89_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol90_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol90_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol91_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol91_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol92_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol92_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol93_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol93_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol94_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol94_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol95_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol95_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol96_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol96_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol97_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol97_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol98_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol98_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol99_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol99_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol100_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol100_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol101_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol101_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol102_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol102_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol103_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol103_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol104_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol104_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol105_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol105_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol106_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol106_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol107_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol107_phy;
		cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol108_phy = tmp_BMS_CellVolMeas3_PT_BMS_CellVol108_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X414*/ /*size:5*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_CoolantInletOutletTmp_PT(void){
	uint8 tmp_BMS_CoolantInletOutletTmp_PT_CRC_BMS_CoolantInletOutletTmp_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_CoolantInletOutletTmp_PT_ALV_BMS_CoolantInletOutletTmp_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_CoolantInletOutletTmp_PT_BMS_CoolantInletTemp_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_CoolantInletOutletTmp_PT_BMS_CoolantOutletTemp_phy = 0; /*f32 factor : 0.1 , offset : -40.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_CoolantInletOutletTmp_BMS_CoolantInletOutletTmp_PT_CRC_BMS_CoolantInletOutletTmp_BMS_CoolantInletOutletTmp_PT(&tmp_BMS_CoolantInletOutletTmp_PT_CRC_BMS_CoolantInletOutletTmp_phy);
	cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_CoolantInletOutletTmp_BMS_CoolantInletOutletTmp_PT_ALV_BMS_CoolantInletOutletTmp_BMS_CoolantInletOutletTmp_PT(&tmp_BMS_CoolantInletOutletTmp_PT_ALV_BMS_CoolantInletOutletTmp_phy);
	cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.msg_tout |= Rte_Read_RPort_BMS_CoolantInletTemp_BMS_CoolantInletOutletTmp_PT_BMS_CoolantInletTemp_BMS_CoolantInletOutletTmp_PT(&tmp_BMS_CoolantInletOutletTmp_PT_BMS_CoolantInletTemp_phy);
	cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.msg_tout |= Rte_Read_RPort_BMS_CoolantOutletTemp_BMS_CoolantInletOutletTmp_PT_BMS_CoolantOutletTemp_BMS_CoolantInletOutletTmp_PT(&tmp_BMS_CoolantInletOutletTmp_PT_BMS_CoolantOutletTemp_phy);


	if(TRUE != cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.msg_tout){
		cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.CRC_BMS_CoolantInletOutletTmp_phy = tmp_BMS_CoolantInletOutletTmp_PT_CRC_BMS_CoolantInletOutletTmp_phy;
		cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.ALV_BMS_CoolantInletOutletTmp_phy = tmp_BMS_CoolantInletOutletTmp_PT_ALV_BMS_CoolantInletOutletTmp_phy;
		cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.BMS_CoolantInletTemp_phy = tmp_BMS_CoolantInletOutletTmp_PT_BMS_CoolantInletTemp_phy;
		cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.BMS_CoolantOutletTemp_phy = tmp_BMS_CoolantInletOutletTmp_PT_BMS_CoolantOutletTemp_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X419*/ /*size:4*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_Insulation_PT(void){
	uint8 tmp_BMS_Insulation_PT_CRC_BMS_Insulation_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Insulation_PT_ALV_BMS_Insulation_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_Insulation_PT_BMS_VCU_InsulationMonSts_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint16 tmp_BMS_Insulation_PT_BMS_PackInsuRes_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_Insulation_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_Insulation_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_Insulation_BMS_Insulation_PT_CRC_BMS_Insulation_BMS_Insulation_PT(&tmp_BMS_Insulation_PT_CRC_BMS_Insulation_phy);
	cap_canApiMsg_BMS_Insulation_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_Insulation_BMS_Insulation_PT_ALV_BMS_Insulation_BMS_Insulation_PT(&tmp_BMS_Insulation_PT_ALV_BMS_Insulation_phy);
	cap_canApiMsg_BMS_Insulation_PT.msg_tout |= Rte_Read_RPort_BMS_VCU_InsulationMonSts_BMS_Insulation_PT_BMS_VCU_InsulationMonSts_BMS_Insulation_PT(&tmp_BMS_Insulation_PT_BMS_VCU_InsulationMonSts_phy);
	cap_canApiMsg_BMS_Insulation_PT.msg_tout |= Rte_Read_RPort_BMS_PackInsuRes_BMS_Insulation_PT_BMS_PackInsuRes_BMS_Insulation_PT(&tmp_BMS_Insulation_PT_BMS_PackInsuRes_phy);


	if(TRUE != cap_canApiMsg_BMS_Insulation_PT.msg_tout){
		cap_canApiMsg_BMS_Insulation_PT.CRC_BMS_Insulation_phy = tmp_BMS_Insulation_PT_CRC_BMS_Insulation_phy;
		cap_canApiMsg_BMS_Insulation_PT.ALV_BMS_Insulation_phy = tmp_BMS_Insulation_PT_ALV_BMS_Insulation_phy;
		cap_canApiMsg_BMS_Insulation_PT.BMS_VCU_InsulationMonSts_phy = tmp_BMS_Insulation_PT_BMS_VCU_InsulationMonSts_phy;
		cap_canApiMsg_BMS_Insulation_PT.BMS_PackInsuRes_phy = tmp_BMS_Insulation_PT_BMS_PackInsuRes_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X424*/ /*size:6*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_VCU_THMReq_PT(void){
	uint8 tmp_BMS_VCU_THMReq_PT_CRC_BMS_VCU_THMReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_VCU_THMReq_PT_ALV_BMS_VCU_THMReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_VCU_THMReq_PT_BMS_FlowRateReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_VCU_THMReq_PT_BMS_CoolPwrDemand_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_VCU_THMReq_PT_BMS_HeatPwrDemand_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint16*/ 
	uint8 tmp_BMS_VCU_THMReq_PT_BMS_VCU_CoolingOnOffReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 
	uint8 tmp_BMS_VCU_THMReq_PT_BMS_VCU_HeatingOnOffReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: boolean*/ 

	cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_VCU_THMReq_BMS_VCU_THMReq_PT_CRC_BMS_VCU_THMReq_BMS_VCU_THMReq_PT(&tmp_BMS_VCU_THMReq_PT_CRC_BMS_VCU_THMReq_phy);
	cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_VCU_THMReq_BMS_VCU_THMReq_PT_ALV_BMS_VCU_THMReq_BMS_VCU_THMReq_PT(&tmp_BMS_VCU_THMReq_PT_ALV_BMS_VCU_THMReq_phy);
	cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout |= Rte_Read_RPort_BMS_FlowRateReq_BMS_VCU_THMReq_PT_BMS_FlowRateReq_BMS_VCU_THMReq_PT(&tmp_BMS_VCU_THMReq_PT_BMS_FlowRateReq_phy);
	cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout |= Rte_Read_RPort_BMS_CoolPwrDemand_BMS_VCU_THMReq_PT_BMS_CoolPwrDemand_BMS_VCU_THMReq_PT(&tmp_BMS_VCU_THMReq_PT_BMS_CoolPwrDemand_phy);
	cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout |= Rte_Read_RPort_BMS_HeatPwrDemand_BMS_VCU_THMReq_PT_BMS_HeatPwrDemand_BMS_VCU_THMReq_PT(&tmp_BMS_VCU_THMReq_PT_BMS_HeatPwrDemand_phy);
	cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout |= Rte_Read_RPort_BMS_VCU_CoolingOnOffReq_BMS_VCU_THMReq_PT_BMS_VCU_CoolingOnOffReq_BMS_VCU_THMReq_PT(&tmp_BMS_VCU_THMReq_PT_BMS_VCU_CoolingOnOffReq_phy);
	cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout |= Rte_Read_RPort_BMS_VCU_HeatingOnOffReq_BMS_VCU_THMReq_PT_BMS_VCU_HeatingOnOffReq_BMS_VCU_THMReq_PT(&tmp_BMS_VCU_THMReq_PT_BMS_VCU_HeatingOnOffReq_phy);


	if(TRUE != cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout){
		cap_canApiMsg_BMS_VCU_THMReq_PT.CRC_BMS_VCU_THMReq_phy = tmp_BMS_VCU_THMReq_PT_CRC_BMS_VCU_THMReq_phy;
		cap_canApiMsg_BMS_VCU_THMReq_PT.ALV_BMS_VCU_THMReq_phy = tmp_BMS_VCU_THMReq_PT_ALV_BMS_VCU_THMReq_phy;
		cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_FlowRateReq_phy = tmp_BMS_VCU_THMReq_PT_BMS_FlowRateReq_phy;
		cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_CoolPwrDemand_phy = tmp_BMS_VCU_THMReq_PT_BMS_CoolPwrDemand_phy;
		cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_HeatPwrDemand_phy = tmp_BMS_VCU_THMReq_PT_BMS_HeatPwrDemand_phy;
		cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_VCU_CoolingOnOffReq_phy = tmp_BMS_VCU_THMReq_PT_BMS_VCU_CoolingOnOffReq_phy;
		cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_VCU_HeatingOnOffReq_phy = tmp_BMS_VCU_THMReq_PT_BMS_VCU_HeatingOnOffReq_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X429*/ /*size:12*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_VolMeas_PT(void){
	uint8 tmp_BMS_VolMeas_PT_CRC_BMS_VolMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_VolMeas_PT_ALV_BMS_VolMeas_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_VolMeas_PT_BMS_CellNumMinCellVol_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_VolMeas_PT_BMS_CellNumMaxCellVol_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_BMS_VolMeas_PT_BMS_MinCellVol_phy = 0; /*f32 factor : 0.001 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_VolMeas_PT_BMS_MaxCellVol_phy = 0; /*f32 factor : 0.001 , offset : 0.0 , DBCtype: uint16*/ 
	float32 tmp_BMS_VolMeas_PT_BMS_MaxMinDiffCellVol_phy = 0; /*f32 factor : 0.001 , offset : 0.0 , DBCtype: uint16*/ 

	cap_canApiMsg_BMS_VolMeas_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_VolMeas_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_VolMeas_BMS_VolMeas_PT_CRC_BMS_VolMeas_BMS_VolMeas_PT(&tmp_BMS_VolMeas_PT_CRC_BMS_VolMeas_phy);
	cap_canApiMsg_BMS_VolMeas_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_VolMeas_BMS_VolMeas_PT_ALV_BMS_VolMeas_BMS_VolMeas_PT(&tmp_BMS_VolMeas_PT_ALV_BMS_VolMeas_phy);
	cap_canApiMsg_BMS_VolMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellNumMinCellVol_BMS_VolMeas_PT_BMS_CellNumMinCellVol_BMS_VolMeas_PT(&tmp_BMS_VolMeas_PT_BMS_CellNumMinCellVol_phy);
	cap_canApiMsg_BMS_VolMeas_PT.msg_tout |= Rte_Read_RPort_BMS_CellNumMaxCellVol_BMS_VolMeas_PT_BMS_CellNumMaxCellVol_BMS_VolMeas_PT(&tmp_BMS_VolMeas_PT_BMS_CellNumMaxCellVol_phy);
	cap_canApiMsg_BMS_VolMeas_PT.msg_tout |= Rte_Read_RPort_BMS_MinCellVol_BMS_VolMeas_PT_BMS_MinCellVol_BMS_VolMeas_PT(&tmp_BMS_VolMeas_PT_BMS_MinCellVol_phy);
	cap_canApiMsg_BMS_VolMeas_PT.msg_tout |= Rte_Read_RPort_BMS_MaxCellVol_BMS_VolMeas_PT_BMS_MaxCellVol_BMS_VolMeas_PT(&tmp_BMS_VolMeas_PT_BMS_MaxCellVol_phy);
	cap_canApiMsg_BMS_VolMeas_PT.msg_tout |= Rte_Read_RPort_BMS_MaxMinDiffCellVol_BMS_VolMeas_PT_BMS_MaxMinDiffCellVol_BMS_VolMeas_PT(&tmp_BMS_VolMeas_PT_BMS_MaxMinDiffCellVol_phy);


	if(TRUE != cap_canApiMsg_BMS_VolMeas_PT.msg_tout){
		cap_canApiMsg_BMS_VolMeas_PT.CRC_BMS_VolMeas_phy = tmp_BMS_VolMeas_PT_CRC_BMS_VolMeas_phy;
		cap_canApiMsg_BMS_VolMeas_PT.ALV_BMS_VolMeas_phy = tmp_BMS_VolMeas_PT_ALV_BMS_VolMeas_phy;
		cap_canApiMsg_BMS_VolMeas_PT.BMS_CellNumMinCellVol_phy = tmp_BMS_VolMeas_PT_BMS_CellNumMinCellVol_phy;
		cap_canApiMsg_BMS_VolMeas_PT.BMS_CellNumMaxCellVol_phy = tmp_BMS_VolMeas_PT_BMS_CellNumMaxCellVol_phy;
		cap_canApiMsg_BMS_VolMeas_PT.BMS_MinCellVol_phy = tmp_BMS_VolMeas_PT_BMS_MinCellVol_phy;
		cap_canApiMsg_BMS_VolMeas_PT.BMS_MaxCellVol_phy = tmp_BMS_VolMeas_PT_BMS_MaxCellVol_phy;
		cap_canApiMsg_BMS_VolMeas_PT.BMS_MaxMinDiffCellVol_phy = tmp_BMS_VolMeas_PT_BMS_MaxMinDiffCellVol_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X450*/ /*size:7*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_DCDC_VCU_Temperature_Fbk_PT(void){
	float32 tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempA_phy = 0; /*f32 factor : 0.1 , offset : -100.0 , DBCtype: uint16*/ 
	float32 tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempB_phy = 0; /*f32 factor : 0.1 , offset : -100.0 , DBCtype: uint16*/ 
	float32 tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempC_phy = 0; /*f32 factor : 0.1 , offset : -100.0 , DBCtype: uint16*/ 
	float32 tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_CoolPwrDemand_phy = 0; /*f32 factor : 0.01 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_FlowRateReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.msg_tout = FALSE;
	cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_InternalTempA_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempA_DCDC_VCU_Temperature_Fbk_PT(&tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempA_phy);
	cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_InternalTempB_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempB_DCDC_VCU_Temperature_Fbk_PT(&tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempB_phy);
	cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_InternalTempC_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempC_DCDC_VCU_Temperature_Fbk_PT(&tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempC_phy);
	cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_CoolPwrDemand_DCDC_VCU_Temperature_Fbk_PT_DCDC_CoolPwrDemand_DCDC_VCU_Temperature_Fbk_PT(&tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_CoolPwrDemand_phy);
	cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.msg_tout |= Rte_Read_RPort_DCDC_FlowRateReq_DCDC_VCU_Temperature_Fbk_PT_DCDC_FlowRateReq_DCDC_VCU_Temperature_Fbk_PT(&tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_FlowRateReq_phy);


	if(TRUE != cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.msg_tout){
		cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_InternalTempA_phy = tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempA_phy;
		cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_InternalTempB_phy = tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempB_phy;
		cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_InternalTempC_phy = tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_InternalTempC_phy;
		cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_CoolPwrDemand_phy = tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_CoolPwrDemand_phy;
		cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_FlowRateReq_phy = tmp_DCDC_VCU_Temperature_Fbk_PT_DCDC_FlowRateReq_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X517*/ /*size:3*/ /*200ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_BMS_HistData_PT(void){
	uint8 tmp_BMS_HistData_PT_CRC_BMS_HistData_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_HistData_PT_ALV_BMS_HistData_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_BMS_HistData_PT_BMS_ContactorAging_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_BMS_HistData_PT.msg_tout = FALSE;
	cap_canApiMsg_BMS_HistData_PT.msg_tout |= Rte_Read_RPort_CRC_BMS_HistData_BMS_HistData_PT_CRC_BMS_HistData_BMS_HistData_PT(&tmp_BMS_HistData_PT_CRC_BMS_HistData_phy);
	cap_canApiMsg_BMS_HistData_PT.msg_tout |= Rte_Read_RPort_ALV_BMS_HistData_BMS_HistData_PT_ALV_BMS_HistData_BMS_HistData_PT(&tmp_BMS_HistData_PT_ALV_BMS_HistData_phy);
	cap_canApiMsg_BMS_HistData_PT.msg_tout |= Rte_Read_RPort_BMS_ContactorAging_BMS_HistData_PT_BMS_ContactorAging_BMS_HistData_PT(&tmp_BMS_HistData_PT_BMS_ContactorAging_phy);


	if(TRUE != cap_canApiMsg_BMS_HistData_PT.msg_tout){
		cap_canApiMsg_BMS_HistData_PT.CRC_BMS_HistData_phy = tmp_BMS_HistData_PT_CRC_BMS_HistData_phy;
		cap_canApiMsg_BMS_HistData_PT.ALV_BMS_HistData_phy = tmp_BMS_HistData_PT_ALV_BMS_HistData_phy;
		cap_canApiMsg_BMS_HistData_PT.BMS_ContactorAging_phy = tmp_BMS_HistData_PT_BMS_ContactorAging_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X645*/ /*size:4*/ /*500ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_OBC_Temperature_PT(void){
	float32 tmp_OBC_Temperature_PT_OBC_InternalTemp_phy = 0; /*f32 factor : 0.1 , offset : -50.0 , DBCtype: uint16*/ 
	uint8 tmp_OBC_Temperature_PT_OBC_FlowRateReq_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_OBC_Temperature_PT_OBC_CoolPwrDemand_phy = 0; /*f32 factor : 0.1 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_OBC_Temperature_PT.msg_tout = FALSE;
	cap_canApiMsg_OBC_Temperature_PT.msg_tout |= Rte_Read_RPort_OBC_InternalTemp_OBC_Temperature_PT_OBC_InternalTemp_OBC_Temperature_PT(&tmp_OBC_Temperature_PT_OBC_InternalTemp_phy);
	cap_canApiMsg_OBC_Temperature_PT.msg_tout |= Rte_Read_RPort_OBC_FlowRateReq_OBC_Temperature_PT_OBC_FlowRateReq_OBC_Temperature_PT(&tmp_OBC_Temperature_PT_OBC_FlowRateReq_phy);
	cap_canApiMsg_OBC_Temperature_PT.msg_tout |= Rte_Read_RPort_OBC_CoolPwrDemand_OBC_Temperature_PT_OBC_CoolPwrDemand_OBC_Temperature_PT(&tmp_OBC_Temperature_PT_OBC_CoolPwrDemand_phy);


	if(TRUE != cap_canApiMsg_OBC_Temperature_PT.msg_tout){
		cap_canApiMsg_OBC_Temperature_PT.OBC_InternalTemp_phy = tmp_OBC_Temperature_PT_OBC_InternalTemp_phy;
		cap_canApiMsg_OBC_Temperature_PT.OBC_FlowRateReq_phy = tmp_OBC_Temperature_PT_OBC_FlowRateReq_phy;
		cap_canApiMsg_OBC_Temperature_PT.OBC_CoolPwrDemand_phy = tmp_OBC_Temperature_PT_OBC_CoolPwrDemand_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X1107*/ /*size:4*/ /*200ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_HighVoltageStorage200msNo1_PT(void){
	uint8 tmp_HighVoltageStorage200msNo1_PT_StatusServiceDisconnectionPlug_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_HighVoltageStorage200msNo1_PT_StsDisconnectingSwtHighVoltStorg_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_HighVoltageStorage200msNo1_PT.msg_tout = FALSE;
	cap_canApiMsg_HighVoltageStorage200msNo1_PT.msg_tout |= Rte_Read_RPort_StatusServiceDisconnectionPlug_HighVoltageStorage200msNo1_PT_StatusServiceDisconnectionPlug_HighVoltageStorage200msNo1_PT(&tmp_HighVoltageStorage200msNo1_PT_StatusServiceDisconnectionPlug_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_PT.msg_tout |= Rte_Read_RPort_StsDisconnectingSwtHighVoltStorg_HighVoltageStorage200msNo1_PT_StsDisconnectingSwtHighVoltStorg_HighVoltageStorage200msNo1_PT(&tmp_HighVoltageStorage200msNo1_PT_StsDisconnectingSwtHighVoltStorg_phy);


	if(TRUE != cap_canApiMsg_HighVoltageStorage200msNo1_PT.msg_tout){
		cap_canApiMsg_HighVoltageStorage200msNo1_PT.StatusServiceDisconnectionPlug_phy = tmp_HighVoltageStorage200msNo1_PT_StatusServiceDisconnectionPlug_phy;
		cap_canApiMsg_HighVoltageStorage200msNo1_PT.StsDisconnectingSwtHighVoltStorg_phy = tmp_HighVoltageStorage200msNo1_PT_StsDisconnectingSwtHighVoltStorg_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X1237*/ /*size:8*/ /*1000ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_StatusCrashIdentETractSys1_PT(void){
	uint8 tmp_StatusCrashIdentETractSys1_PT_CRC_StatusCrashIdentETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_StatusCrashIdentETractSys1_PT_ALIV_StatusCrashIdentETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_StatusCrashIdentETractSys1_PT_CHL_StatusCrashIdentETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_StatusCrashIdentETractSys1_PT_StatusCrashShutDownETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_StatusCrashIdentETractSys1_PT_TempETractSys1DirectCurrentPlug_phy = 0; /*f32 factor : 0.5 , offset : -40.0 , DBCtype: uint16*/ 
	uint8 tmp_StatusCrashIdentETractSys1_PT_StsLimpHomeNotifETractSys1_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout = FALSE;
	cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout |= Rte_Read_RPort_CRC_StatusCrashIdentETractSys1_StatusCrashIdentETractSys1_PT_CRC_StatusCrashIdentETractSys1_StatusCrashIdentETractSys1_PT(&tmp_StatusCrashIdentETractSys1_PT_CRC_StatusCrashIdentETractSys1_phy);
	cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout |= Rte_Read_RPort_ALIV_StatusCrashIdentETractSys1_StatusCrashIdentETractSys1_PT_ALIV_StatusCrashIdentETractSys1_StatusCrashIdentETractSys1_PT(&tmp_StatusCrashIdentETractSys1_PT_ALIV_StatusCrashIdentETractSys1_phy);
	cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout |= Rte_Read_RPort_CHL_StatusCrashIdentETractSys1_StatusCrashIdentETractSys1_PT_CHL_StatusCrashIdentETractSys1_StatusCrashIdentETractSys1_PT(&tmp_StatusCrashIdentETractSys1_PT_CHL_StatusCrashIdentETractSys1_phy);
	cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout |= Rte_Read_RPort_StatusCrashShutDownETractSys1_StatusCrashIdentETractSys1_PT_StatusCrashShutDownETractSys1_StatusCrashIdentETractSys1_PT(&tmp_StatusCrashIdentETractSys1_PT_StatusCrashShutDownETractSys1_phy);
	cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout |= Rte_Read_RPort_TempETractSys1DirectCurrentPlug_StatusCrashIdentETractSys1_PT_TempETractSys1DirectCurrentPlug_StatusCrashIdentETractSys1_PT(&tmp_StatusCrashIdentETractSys1_PT_TempETractSys1DirectCurrentPlug_phy);
	cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout |= Rte_Read_RPort_StsLimpHomeNotifETractSys1_StatusCrashIdentETractSys1_PT_StsLimpHomeNotifETractSys1_StatusCrashIdentETractSys1_PT(&tmp_StatusCrashIdentETractSys1_PT_StsLimpHomeNotifETractSys1_phy);


	if(TRUE != cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout){
		cap_canApiMsg_StatusCrashIdentETractSys1_PT.CRC_StatusCrashIdentETractSys1_phy = tmp_StatusCrashIdentETractSys1_PT_CRC_StatusCrashIdentETractSys1_phy;
		cap_canApiMsg_StatusCrashIdentETractSys1_PT.ALIV_StatusCrashIdentETractSys1_phy = tmp_StatusCrashIdentETractSys1_PT_ALIV_StatusCrashIdentETractSys1_phy;
		cap_canApiMsg_StatusCrashIdentETractSys1_PT.CHL_StatusCrashIdentETractSys1_phy = tmp_StatusCrashIdentETractSys1_PT_CHL_StatusCrashIdentETractSys1_phy;
		cap_canApiMsg_StatusCrashIdentETractSys1_PT.StatusCrashShutDownETractSys1_phy = tmp_StatusCrashIdentETractSys1_PT_StatusCrashShutDownETractSys1_phy;
		cap_canApiMsg_StatusCrashIdentETractSys1_PT.TempETractSys1DirectCurrentPlug_phy = tmp_StatusCrashIdentETractSys1_PT_TempETractSys1DirectCurrentPlug_phy;
		cap_canApiMsg_StatusCrashIdentETractSys1_PT.StsLimpHomeNotifETractSys1_phy = tmp_StatusCrashIdentETractSys1_PT_StsLimpHomeNotifETractSys1_phy;

	}
	else{
		/*do nothing for now*/
	}
}

/*0X1239*/ /*size:8*/ /*1000ms*/ /*Cyclic*/ /*PT*/ /*ReceivedMsg */
void cap_getRxSignals_StatusCrashIdentETractSys2_PT(void){
	uint8 tmp_StatusCrashIdentETractSys2_PT_CRC_StatusCrashIdentETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_StatusCrashIdentETractSys2_PT_ALIV_StatusCrashIdentETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_StatusCrashIdentETractSys2_PT_CHL_StatusCrashIdentETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	uint8 tmp_StatusCrashIdentETractSys2_PT_StatusCrashShutDownETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 
	float32 tmp_StatusCrashIdentETractSys2_PT_TempETractSys2DirectCurrentPlug_phy = 0; /*f32 factor : 0.5 , offset : -40.0 , DBCtype: uint16*/ 
	uint8 tmp_StatusCrashIdentETractSys2_PT_StsLimpHomeNotifETractSys2_phy = 0; /*f32 factor : 1.0 , offset : 0.0 , DBCtype: uint8*/ 

	cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout = FALSE;
	cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout |= Rte_Read_RPort_CRC_StatusCrashIdentETractSys2_StatusCrashIdentETractSys2_PT_CRC_StatusCrashIdentETractSys2_StatusCrashIdentETractSys2_PT(&tmp_StatusCrashIdentETractSys2_PT_CRC_StatusCrashIdentETractSys2_phy);
	cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout |= Rte_Read_RPort_ALIV_StatusCrashIdentETractSys2_StatusCrashIdentETractSys2_PT_ALIV_StatusCrashIdentETractSys2_StatusCrashIdentETractSys2_PT(&tmp_StatusCrashIdentETractSys2_PT_ALIV_StatusCrashIdentETractSys2_phy);
	cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout |= Rte_Read_RPort_CHL_StatusCrashIdentETractSys2_StatusCrashIdentETractSys2_PT_CHL_StatusCrashIdentETractSys2_StatusCrashIdentETractSys2_PT(&tmp_StatusCrashIdentETractSys2_PT_CHL_StatusCrashIdentETractSys2_phy);
	cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout |= Rte_Read_RPort_StatusCrashShutDownETractSys2_StatusCrashIdentETractSys2_PT_StatusCrashShutDownETractSys2_StatusCrashIdentETractSys2_PT(&tmp_StatusCrashIdentETractSys2_PT_StatusCrashShutDownETractSys2_phy);
	cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout |= Rte_Read_RPort_TempETractSys2DirectCurrentPlug_StatusCrashIdentETractSys2_PT_TempETractSys2DirectCurrentPlug_StatusCrashIdentETractSys2_PT(&tmp_StatusCrashIdentETractSys2_PT_TempETractSys2DirectCurrentPlug_phy);
	cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout |= Rte_Read_RPort_StsLimpHomeNotifETractSys2_StatusCrashIdentETractSys2_PT_StsLimpHomeNotifETractSys2_StatusCrashIdentETractSys2_PT(&tmp_StatusCrashIdentETractSys2_PT_StsLimpHomeNotifETractSys2_phy);


	if(TRUE != cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout){
		cap_canApiMsg_StatusCrashIdentETractSys2_PT.CRC_StatusCrashIdentETractSys2_phy = tmp_StatusCrashIdentETractSys2_PT_CRC_StatusCrashIdentETractSys2_phy;
		cap_canApiMsg_StatusCrashIdentETractSys2_PT.ALIV_StatusCrashIdentETractSys2_phy = tmp_StatusCrashIdentETractSys2_PT_ALIV_StatusCrashIdentETractSys2_phy;
		cap_canApiMsg_StatusCrashIdentETractSys2_PT.CHL_StatusCrashIdentETractSys2_phy = tmp_StatusCrashIdentETractSys2_PT_CHL_StatusCrashIdentETractSys2_phy;
		cap_canApiMsg_StatusCrashIdentETractSys2_PT.StatusCrashShutDownETractSys2_phy = tmp_StatusCrashIdentETractSys2_PT_StatusCrashShutDownETractSys2_phy;
		cap_canApiMsg_StatusCrashIdentETractSys2_PT.TempETractSys2DirectCurrentPlug_phy = tmp_StatusCrashIdentETractSys2_PT_TempETractSys2DirectCurrentPlug_phy;
		cap_canApiMsg_StatusCrashIdentETractSys2_PT.StsLimpHomeNotifETractSys2_phy = tmp_StatusCrashIdentETractSys2_PT_StsLimpHomeNotifETractSys2_phy;

	}
	else{
		/*do nothing for now*/
	}
}



/***************************/

/****   Sent Messages   ****/

/*881*/ /*size:5*/ /*1000ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_VCU_WarnMsg_BCAN(void){
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_VCU_WarnMsg_VCU_WarnMsg_BCAN_CRC_VCU_WarnMsg_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.CRC_VCU_WarnMsg_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_ALV_VCU_WarnMsg_VCU_WarnMsg_BCAN_ALV_VCU_WarnMsg_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.ALV_VCU_WarnMsg_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_GearPAtStationaryOnly_VCU_WarnMsg_BCAN_VCU_GearPAtStationaryOnly_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_GearPAtStationaryOnly_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_GearPNotPossible_VCU_WarnMsg_BCAN_VCU_GearPNotPossible_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_GearPNotPossible_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_PressBreakToEngageGear_VCU_WarnMsg_BCAN_VCU_PressBreakToEngageGear_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_PressBreakToEngageGear_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_CantChangeGear_VCU_WarnMsg_BCAN_VCU_CantChangeGear_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_CantChangeGear_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_MotorCoolantPumpErr_VCU_WarnMsg_BCAN_VCU_MotorCoolantPumpErr_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_MotorCoolantPumpErr_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_EmergencyShutdown_VCU_WarnMsg_BCAN_VCU_EmergencyShutdown_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_EmergencyShutdown_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_HeatLoopTempSensorErr_VCU_WarnMsg_BCAN_VCU_HeatLoopTempSensorErr_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_HeatLoopTempSensorErr_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_GearMalfunc_VCU_WarnMsg_BCAN_VCU_GearMalfunc_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_GearMalfunc_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_CoolingTempExceedLimit_VCU_WarnMsg_BCAN_VCU_CoolingTempExceedLimit_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_CoolingTempExceedLimit_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_TransmissionMalfunction_VCU_WarnMsg_BCAN_VCU_TransmissionMalfunction_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_TransmissionMalfunction_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ParkLockNotEngaged_VCU_WarnMsg_BCAN_VCU_ParkLockNotEngaged_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_ParkLockNotEngaged_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_CoolantTempHigh_VCU_WarnMsg_BCAN_VCU_CoolantTempHigh_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_CoolantTempHigh_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_CheckDriveTrain_VCU_WarnMsg_BCAN_VCU_CheckDriveTrain_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_CheckDriveTrain_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_OBCTempHigh_VCU_WarnMsg_BCAN_VCU_OBCTempHigh_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_OBCTempHigh_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_DCDC_TempHigh_VCU_WarnMsg_BCAN_VCU_DCDC_TempHigh_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_DCDC_TempHigh_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ChargingInletTempHigh_VCU_WarnMsg_BCAN_VCU_ChargingInletTempHigh_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_ChargingInletTempHigh_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_HVILErr_VCU_WarnMsg_BCAN_VCU_HVILErr_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_HVILErr_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_Limphome_VCU_WarnMsg_BCAN_VCU_Limphome_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_Limphome_phy);
	cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_HVSystemReduced_VCU_WarnMsg_BCAN_VCU_HVSystemReduced_VCU_WarnMsg_BCAN(cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_HVSystemReduced_phy);

}


/*433*/ /*size:12*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_VCU_StatusDCDC_BCAN(void){
	cap_canApiMsg_VCU_StatusDCDC_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_VCU_StatusDCDC_VCU_StatusDCDC_BCAN_CRC_VCU_StatusDCDC_VCU_StatusDCDC_BCAN(cap_canApiMsg_VCU_StatusDCDC_BCAN.CRC_VCU_StatusDCDC_phy);
	cap_canApiMsg_VCU_StatusDCDC_BCAN.CanBUS_st |= Rte_Write_PPort_ALV_VCU_StatusDCDC_VCU_StatusDCDC_BCAN_ALV_VCU_StatusDCDC_VCU_StatusDCDC_BCAN(cap_canApiMsg_VCU_StatusDCDC_BCAN.ALV_VCU_StatusDCDC_phy);
	cap_canApiMsg_VCU_StatusDCDC_BCAN.CanBUS_st |= Rte_Write_PPort_DCDC_status_VCU_StatusDCDC_BCAN_DCDC_status_VCU_StatusDCDC_BCAN(cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_status_phy);
	cap_canApiMsg_VCU_StatusDCDC_BCAN.CanBUS_st |= Rte_Write_PPort_DCDC_maxCurrentOut_VCU_StatusDCDC_BCAN_DCDC_maxCurrentOut_VCU_StatusDCDC_BCAN(cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_maxCurrentOut_phy);
	cap_canApiMsg_VCU_StatusDCDC_BCAN.CanBUS_st |= Rte_Write_PPort_DCDC_iOutput_VCU_StatusDCDC_BCAN_DCDC_iOutput_VCU_StatusDCDC_BCAN(cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_iOutput_phy);
	cap_canApiMsg_VCU_StatusDCDC_BCAN.CanBUS_st |= Rte_Write_PPort_DCDC_vDCInput_VCU_StatusDCDC_BCAN_DCDC_vDCInput_VCU_StatusDCDC_BCAN(cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_vDCInput_phy);
	cap_canApiMsg_VCU_StatusDCDC_BCAN.CanBUS_st |= Rte_Write_PPort_DCDC_vOutput_VCU_StatusDCDC_BCAN_DCDC_vOutput_VCU_StatusDCDC_BCAN(cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_vOutput_phy);

}


/*498*/ /*size:7*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_VCU_MHU_info_BCAN(void){
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_VCU_MHU_info_VCU_MHU_info_BCAN_CRC_VCU_MHU_info_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.CRC_VCU_MHU_info_phy);
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_ALV_VCU_MHU_info_VCU_MHU_info_BCAN_ALV_VCU_MHU_info_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.ALV_VCU_MHU_info_phy);
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_CurPwrConsum_VCU_MHU_info_BCAN_VCU_CurPwrConsum_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.VCU_CurPwrConsum_phy);
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_RemainingRange_VCU_MHU_info_BCAN_VCU_RemainingRange_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.VCU_RemainingRange_phy);
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ChgGun_Status_VCU_MHU_info_BCAN_VCU_ChgGun_Status_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.VCU_ChgGun_Status_phy);
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_BattChargingStatus_VCU_MHU_info_BCAN_VCU_BattChargingStatus_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.VCU_BattChargingStatus_phy);
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_VehChg_STS_VCU_MHU_info_BCAN_VCU_VehChg_STS_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.VCU_VehChg_STS_phy);
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ChgGunConnStatus_VCU_MHU_info_BCAN_VCU_ChgGunConnStatus_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.VCU_ChgGunConnStatus_phy);
	cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_BattSOC_VCU_MHU_info_BCAN_VCU_BattSOC_VCU_MHU_info_BCAN(cap_canApiMsg_VCU_MHU_info_BCAN.VCU_BattSOC_phy);

}


/*151*/ /*size:6*/ /*20ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_VCU_HVsystem_status_BCAN(void){
	cap_canApiMsg_VCU_HVsystem_status_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_VCU_HVsystem_status_VCU_HVsystem_status_BCAN_CRC_VCU_HVsystem_status_VCU_HVsystem_status_BCAN(cap_canApiMsg_VCU_HVsystem_status_BCAN.CRC_VCU_HVsystem_status_phy);
	cap_canApiMsg_VCU_HVsystem_status_BCAN.CanBUS_st |= Rte_Write_PPort_ALIV_VCU_HVsystem_status_VCU_HVsystem_status_BCAN_ALIV_VCU_HVsystem_status_VCU_HVsystem_status_BCAN(cap_canApiMsg_VCU_HVsystem_status_BCAN.ALIV_VCU_HVsystem_status_phy);
	cap_canApiMsg_VCU_HVsystem_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_RunningRange_chrg_estSts_VCU_HVsystem_status_BCAN_VCU_RunningRange_chrg_estSts_VCU_HVsystem_status_BCAN(cap_canApiMsg_VCU_HVsystem_status_BCAN.VCU_RunningRange_chrg_estSts_phy);
	cap_canApiMsg_VCU_HVsystem_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_HVbatSoc_charged_estStatus_VCU_HVsystem_status_BCAN_VCU_HVbatSoc_charged_estStatus_VCU_HVsystem_status_BCAN(cap_canApiMsg_VCU_HVsystem_status_BCAN.VCU_HVbatSoc_charged_estStatus_phy);
	cap_canApiMsg_VCU_HVsystem_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_RunningRange_charged_VCU_HVsystem_status_BCAN_VCU_RunningRange_charged_VCU_HVsystem_status_BCAN(cap_canApiMsg_VCU_HVsystem_status_BCAN.VCU_RunningRange_charged_phy);
	cap_canApiMsg_VCU_HVsystem_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_HVbatSoc_charged_VCU_HVsystem_status_BCAN_VCU_HVbatSoc_charged_VCU_HVsystem_status_BCAN(cap_canApiMsg_VCU_HVsystem_status_BCAN.VCU_HVbatSoc_charged_phy);

}


/*273*/ /*size:6*/ /*40ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_VCU_HV_DrvSys_status_BCAN(void){
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_VCU_HV_DrvSys_status_VCU_HV_DrvSys_status_BCAN_CRC_VCU_HV_DrvSys_status_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CRC_VCU_HV_DrvSys_status_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_ALV_VCU_HV_DrvSys_bstatus_VCU_HV_DrvSys_status_BCAN_ALV_VCU_HV_DrvSys_bstatus_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.ALV_VCU_HV_DrvSys_bstatus_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_HV_SystemStatus_VCU_HV_DrvSys_status_BCAN_VCU_HV_SystemStatus_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_HV_SystemStatus_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_HV_DrvSystemStatus_VCU_HV_DrvSys_status_BCAN_VCU_HV_DrvSystemStatus_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_HV_DrvSystemStatus_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ACT_Gear_VCU_HV_DrvSys_status_BCAN_VCU_ACT_Gear_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACT_Gear_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ACT_GearValid_VCU_HV_DrvSys_status_BCAN_VCU_ACT_GearValid_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACT_GearValid_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ACPD_Percent_VCU_HV_DrvSys_status_BCAN_VCU_ACPD_Percent_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACPD_Percent_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ACPD_Percent_Valid_VCU_HV_DrvSys_status_BCAN_VCU_ACPD_Percent_Valid_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACPD_Percent_Valid_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ACT_DriveMode_VCU_HV_DrvSys_status_BCAN_VCU_ACT_DriveMode_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACT_DriveMode_phy);
	cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ACT_DriveModeValid_VCU_HV_DrvSys_status_BCAN_VCU_ACT_DriveModeValid_VCU_HV_DrvSys_status_BCAN(cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACT_DriveModeValid_phy);

}


/*277*/ /*size:5*/ /*50ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_VCU_ChargingConnection_BCAN(void){
	cap_canApiMsg_VCU_ChargingConnection_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_VCU_ChargingConnection_VCU_ChargingConnection_BCAN_CRC_VCU_ChargingConnection_VCU_ChargingConnection_BCAN(cap_canApiMsg_VCU_ChargingConnection_BCAN.CRC_VCU_ChargingConnection_phy);
	cap_canApiMsg_VCU_ChargingConnection_BCAN.CanBUS_st |= Rte_Write_PPort_ALV_VCU_ChargingConnection_VCU_ChargingConnection_BCAN_ALV_VCU_ChargingConnection_VCU_ChargingConnection_BCAN(cap_canApiMsg_VCU_ChargingConnection_BCAN.ALV_VCU_ChargingConnection_phy);
	cap_canApiMsg_VCU_ChargingConnection_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_DCChgGunIn_VCU_ChargingConnection_BCAN_VCU_DCChgGunIn_VCU_ChargingConnection_BCAN(cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_DCChgGunIn_phy);
	cap_canApiMsg_VCU_ChargingConnection_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_AcChgGunIn_VCU_ChargingConnection_BCAN_VCU_AcChgGunIn_VCU_ChargingConnection_BCAN(cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_AcChgGunIn_phy);
	cap_canApiMsg_VCU_ChargingConnection_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_CPValue_VCU_ChargingConnection_BCAN_VCU_CPValue_VCU_ChargingConnection_BCAN(cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_CPValue_phy);
	cap_canApiMsg_VCU_ChargingConnection_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_ACChargingVoltage_VCU_ChargingConnection_BCAN_VCU_ACChargingVoltage_VCU_ChargingConnection_BCAN(cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_ACChargingVoltage_phy);
	cap_canApiMsg_VCU_ChargingConnection_BCAN.CanBUS_st |= Rte_Write_PPort_VCU_MaxCurrentOfACCharging_VCU_ChargingConnection_BCAN_VCU_MaxCurrentOfACCharging_VCU_ChargingConnection_BCAN(cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_MaxCurrentOfACCharging_phy);

}


/*882*/ /*size:8*/ /*1000ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_VCU_Batt_WarnMsg_BCAN(void){
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_CHSKM_VCU_Batt_WarnMsg_VCU_Batt_WarnMsg_BCAN_CHSKM_VCU_Batt_WarnMsg_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CHSKM_VCU_Batt_WarnMsg_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_ALV_VCU_Batt_WarnMsg_VCU_Batt_WarnMsg_BCAN_ALV_VCU_Batt_WarnMsg_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.ALV_VCU_Batt_WarnMsg_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_PackTempSts_VCU_Batt_WarnMsg_BCAN_BMS_PackTempSts_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_PackTempSts_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_ThermalRunaway_VCU_Batt_WarnMsg_BCAN_BMS_ThermalRunaway_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_ThermalRunaway_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_CellTempErr_VCU_Batt_WarnMsg_BCAN_BMS_CellTempErr_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_CellTempErr_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_HVILErr_VCU_Batt_WarnMsg_BCAN_BMS_HVILErr_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_HVILErr_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_PackInsuErr_VCU_Batt_WarnMsg_BCAN_BMS_PackInsuErr_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_PackInsuErr_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_MalfunctionSts_VCU_Batt_WarnMsg_BCAN_BMS_MalfunctionSts_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_MalfunctionSts_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_LowBattery_VCU_Batt_WarnMsg_BCAN_BMS_LowBattery_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_LowBattery_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_FuseStatusErr_VCU_Batt_WarnMsg_BCAN_BMS_FuseStatusErr_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_FuseStatusErr_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_CellVoltErr_VCU_Batt_WarnMsg_BCAN_BMS_CellVoltErr_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_CellVoltErr_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_PackVolErr_VCU_Batt_WarnMsg_BCAN_BMS_PackVolErr_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_PackVolErr_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_PackOverCurrErr_VCU_Batt_WarnMsg_BCAN_BMS_PackOverCurrErr_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_PackOverCurrErr_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_Reserved_signal1_VCU_Batt_WarnMsg_BCAN_BMS_Reserved_signal1_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal1_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_Reserved_signal2_VCU_Batt_WarnMsg_BCAN_BMS_Reserved_signal2_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal2_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_Reserved_signal3_VCU_Batt_WarnMsg_BCAN_BMS_Reserved_signal3_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal3_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_Reserved_signal4_VCU_Batt_WarnMsg_BCAN_BMS_Reserved_signal4_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal4_phy);
	cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_Reserved_signal5_VCU_Batt_WarnMsg_BCAN_BMS_Reserved_signal5_VCU_Batt_WarnMsg_BCAN(cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal5_phy);

}


/*514*/ /*size:16*/ /*150ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_VCU_Batt_Info_BCAN(void){
	cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_VCU_Batt_Info_VCU_Batt_Info_BCAN_CRC_VCU_Batt_Info_VCU_Batt_Info_BCAN(cap_canApiMsg_VCU_Batt_Info_BCAN.CRC_VCU_Batt_Info_phy);
	cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st |= Rte_Write_PPort_ALV_VCU_Batt_Info_VCU_Batt_Info_BCAN_ALV_VCU_Batt_Info_VCU_Batt_Info_BCAN(cap_canApiMsg_VCU_Batt_Info_BCAN.ALV_VCU_Batt_Info_phy);
	cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_PackCur_VCU_Batt_Info_BCAN_BMS_PackCur_VCU_Batt_Info_BCAN(cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_PackCur_phy);
	cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_PackVoltage_VCU_Batt_Info_BCAN_BMS_PackVoltage_VCU_Batt_Info_BCAN(cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_PackVoltage_phy);
	cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_PackTemp_VCU_Batt_Info_BCAN_BMS_PackTemp_VCU_Batt_Info_BCAN(cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_PackTemp_phy);
	cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_RemainChargeTime_VCU_Batt_Info_BCAN_BMS_RemainChargeTime_VCU_Batt_Info_BCAN(cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_RemainChargeTime_phy);
	cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_ChargingVoltage_VCU_Batt_Info_BCAN_BMS_ChargingVoltage_VCU_Batt_Info_BCAN(cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_ChargingVoltage_phy);
	cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st |= Rte_Write_PPort_BMS_ChargingCurrent_VCU_Batt_Info_BCAN_BMS_ChargingCurrent_VCU_Batt_Info_BCAN(cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_ChargingCurrent_phy);

}


/*1107*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_HighVoltageStorage200msNo1_BCAN(void){
	cap_canApiMsg_HighVoltageStorage200msNo1_BCAN.CanBUS_st |= Rte_Write_PPort_StatusServiceDisconnectionPlug_HighVoltageStorage200msNo1_BCAN_StatusServiceDisconnectionPlug_HighVoltageStorage200msNo1_BCAN(cap_canApiMsg_HighVoltageStorage200msNo1_BCAN.StatusServiceDisconnectionPlug_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_BCAN.CanBUS_st |= Rte_Write_PPort_StsDisconnectingSwtHighVoltStorg_HighVoltageStorage200msNo1_BCAN_StsDisconnectingSwtHighVoltStorg_HighVoltageStorage200msNo1_BCAN(cap_canApiMsg_HighVoltageStorage200msNo1_BCAN.StsDisconnectingSwtHighVoltStorg_phy);

}


/*143*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_HighVoltageStorage10msNo2_BCAN(void){
	cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_HighVoltageStorage10msNo2_HighVoltageStorage10msNo2_BCAN_CRC_HighVoltageStorage10msNo2_HighVoltageStorage10msNo2_BCAN(cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.CRC_HighVoltageStorage10msNo2_phy);
	cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_ALIV_HighVoltageStorage10msNo2_HighVoltageStorage10msNo2_BCAN_ALIV_HighVoltageStorage10msNo2_HighVoltageStorage10msNo2_BCAN(cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.ALIV_HighVoltageStorage10msNo2_phy);
	cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_ActualValueVoltageLinkVerified_HighVoltageStorage10msNo2_BCAN_ActualValueVoltageLinkVerified_HighVoltageStorage10msNo2_BCAN(cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.ActualValueVoltageLinkVerified_phy);

}


/*1021*/ /*size:5*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_DT_DISP_GRDT_BCAN(void){
	cap_canApiMsg_DT_DISP_GRDT_BCAN.CanBUS_st |= Rte_Write_PPort_CRC_DT_DISP_GRDT_DT_DISP_GRDT_BCAN_CRC_DT_DISP_GRDT_DT_DISP_GRDT_BCAN(cap_canApiMsg_DT_DISP_GRDT_BCAN.CRC_DT_DISP_GRDT_phy);
	cap_canApiMsg_DT_DISP_GRDT_BCAN.CanBUS_st |= Rte_Write_PPort_ALIV_DT_DISP_GRDT_DT_DISP_GRDT_BCAN_ALIV_DT_DISP_GRDT_DT_DISP_GRDT_BCAN(cap_canApiMsg_DT_DISP_GRDT_BCAN.ALIV_DT_DISP_GRDT_phy);
	cap_canApiMsg_DT_DISP_GRDT_BCAN.CanBUS_st |= Rte_Write_PPort_DISP_PRG_GRB_DT_DISP_GRDT_BCAN_DISP_PRG_GRB_DT_DISP_GRDT_BCAN(cap_canApiMsg_DT_DISP_GRDT_BCAN.DISP_PRG_GRB_phy);
	cap_canApiMsg_DT_DISP_GRDT_BCAN.CanBUS_st |= Rte_Write_PPort_DISP_PO_IDC_GRB_DT_DISP_GRDT_BCAN_DISP_PO_IDC_GRB_DT_DISP_GRDT_BCAN(cap_canApiMsg_DT_DISP_GRDT_BCAN.DISP_PO_IDC_GRB_phy);
	cap_canApiMsg_DT_DISP_GRDT_BCAN.CanBUS_st |= Rte_Write_PPort_DISP_PO_GRB_DT_DISP_GRDT_BCAN_DISP_PO_GRB_DT_DISP_GRDT_BCAN(cap_canApiMsg_DT_DISP_GRDT_BCAN.DISP_PO_GRB_phy);

}


/*293*/ /*size:20*/ /*10ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_CombinedChargerUnit10msNo2_BCAN(void){
	cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_PowerETractSys2LimMotMax_CombinedChargerUnit10msNo2_BCAN_PowerETractSys2LimMotMax_CombinedChargerUnit10msNo2_BCAN(cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.PowerETractSys2LimMotMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_PowerETractSys1LimGenMax_CombinedChargerUnit10msNo2_BCAN_PowerETractSys1LimGenMax_CombinedChargerUnit10msNo2_BCAN(cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.PowerETractSys1LimGenMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_PowerETractSys2LimGenMax_CombinedChargerUnit10msNo2_BCAN_PowerETractSys2LimGenMax_CombinedChargerUnit10msNo2_BCAN(cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.PowerETractSys2LimGenMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_PowerETractSys1LimMotMax_CombinedChargerUnit10msNo2_BCAN_PowerETractSys1LimMotMax_CombinedChargerUnit10msNo2_BCAN(cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.PowerETractSys1LimMotMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_OperatingModeEANActualValue_CombinedChargerUnit10msNo2_BCAN_OperatingModeEANActualValue_CombinedChargerUnit10msNo2_BCAN(cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.OperatingModeEANActualValue_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_RequestExtraBoostETractSys1_CombinedChargerUnit10msNo2_BCAN_RequestExtraBoostETractSys1_CombinedChargerUnit10msNo2_BCAN(cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.RequestExtraBoostETractSys1_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.CanBUS_st |= Rte_Write_PPort_RequestExtraBoostETractSys2_CombinedChargerUnit10msNo2_BCAN_RequestExtraBoostETractSys2_CombinedChargerUnit10msNo2_BCAN(cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.RequestExtraBoostETractSys2_phy);

}


/*314*/ /*size:32*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_TracEMacElectc1Time100msNo1_BCAN(void){
	cap_canApiMsg_TracEMacElectc1Time100msNo1_BCAN.CanBUS_st |= Rte_Write_PPort_OpModETractSys1ActVal_TracEMacElectc1Time100msNo1_BCAN_OpModETractSys1ActVal_TracEMacElectc1Time100msNo1_BCAN(cap_canApiMsg_TracEMacElectc1Time100msNo1_BCAN.OpModETractSys1ActVal_phy);

}


/*326*/ /*size:32*/ /*100ms*/ /*Cyclic*/ /*BCAN*/ /*SentMsg */
void cap_setTxSignals_TracEMacElectc2Time100msNo1_BCAN(void){
	cap_canApiMsg_TracEMacElectc2Time100msNo1_BCAN.CanBUS_st |= Rte_Write_PPort_OpModETractSys2ActVal_TracEMacElectc2Time100msNo1_BCAN_OpModETractSys2ActVal_TracEMacElectc2Time100msNo1_BCAN(cap_canApiMsg_TracEMacElectc2Time100msNo1_BCAN.OpModETractSys2ActVal_phy);

}


/*170*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */
void cap_setTxSignals_VCU_TractionEMachine2_10ms_CHS1(void){
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_CRC_TractionEMachine2_10ms_VCU_TractionEMachine2_10ms_CHS1_CRC_TractionEMachine2_10ms_VCU_TractionEMachine2_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CRC_TractionEMachine2_10ms_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_ALIV_TractionEMachine2_10ms_VCU_TractionEMachine2_10ms_CHS1_ALIV_TractionEMachine2_10ms_VCU_TractionEMachine2_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.ALIV_TractionEMachine2_10ms_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_RpmEmETractSys2ActualValue_VCU_TractionEMachine2_10ms_CHS1_RpmEmETractSys2ActualValue_VCU_TractionEMachine2_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.RpmEmETractSys2ActualValue_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys2GeneratorDyn_VCU_TractionEMachine2_10ms_CHS1_TorqueEmETractSys2GeneratorDyn_VCU_TractionEMachine2_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.TorqueEmETractSys2GeneratorDyn_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys2MotorDyn_VCU_TractionEMachine2_10ms_CHS1_TorqueEmETractSys2MotorDyn_VCU_TractionEMachine2_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.TorqueEmETractSys2MotorDyn_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys2ActualValue_VCU_TractionEMachine2_10ms_CHS1_TorqueEmETractSys2ActualValue_VCU_TractionEMachine2_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.TorqueEmETractSys2ActualValue_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_QualifierRpmEmETractSys2ActVal_VCU_TractionEMachine2_10ms_CHS1_QualifierRpmEmETractSys2ActVal_VCU_TractionEMachine2_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.QualifierRpmEmETractSys2ActVal_phy);

}


/*145*/ /*size:16*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */
void cap_setTxSignals_VCU_TractionEMachine1_10ms_CHS1(void){
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_CRC_TractionEMachine1_10ms_VCU_TractionEMachine1_10ms_CHS1_CRC_TractionEMachine1_10ms_VCU_TractionEMachine1_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CRC_TractionEMachine1_10ms_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_ALIV_TractionEMachine1_10ms_VCU_TractionEMachine1_10ms_CHS1_ALIV_TractionEMachine1_10ms_VCU_TractionEMachine1_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.ALIV_TractionEMachine1_10ms_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_RpmEmETractSys1ActualValue_VCU_TractionEMachine1_10ms_CHS1_RpmEmETractSys1ActualValue_VCU_TractionEMachine1_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.RpmEmETractSys1ActualValue_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys1GeneratorDyn_VCU_TractionEMachine1_10ms_CHS1_TorqueEmETractSys1GeneratorDyn_VCU_TractionEMachine1_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.TorqueEmETractSys1GeneratorDyn_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys1MotorDyn_VCU_TractionEMachine1_10ms_CHS1_TorqueEmETractSys1MotorDyn_VCU_TractionEMachine1_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.TorqueEmETractSys1MotorDyn_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys1ActualValue_VCU_TractionEMachine1_10ms_CHS1_TorqueEmETractSys1ActualValue_VCU_TractionEMachine1_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.TorqueEmETractSys1ActualValue_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CanBUS_st |= Rte_Write_PPort_QualifierRpmEmETractSys1ActVal_VCU_TractionEMachine1_10ms_CHS1_QualifierRpmEmETractSys1ActVal_VCU_TractionEMachine1_10ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.QualifierRpmEmETractSys1ActVal_phy);

}


/*326*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */
void cap_setTxSignals_VCU_TractionEMachine2_100ms_CHS1(void){
	cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.CanBUS_st |= Rte_Write_PPort_CRC_TractionEMachine2_100ms_VCU_TractionEMachine2_100ms_CHS1_CRC_TractionEMachine2_100ms_VCU_TractionEMachine2_100ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.CRC_TractionEMachine2_100ms_phy);
	cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.CanBUS_st |= Rte_Write_PPort_ALIV_TractionEMachine2_100ms_VCU_TractionEMachine2_100ms_CHS1_ALIV_TractionEMachine2_100ms_VCU_TractionEMachine2_100ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.ALIV_TractionEMachine2_100ms_phy);
	cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.CanBUS_st |= Rte_Write_PPort_WheelRatioEAxlEtractSys2ActVal_VCU_TractionEMachine2_100ms_CHS1_WheelRatioEAxlEtractSys2ActVal_VCU_TractionEMachine2_100ms_CHS1(cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.WheelRatioEAxlEtractSys2ActVal_phy);

}


/*314*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */
void cap_setTxSignals_VCU_TractionEMachine1_100ms_CHS1(void){
	cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.CanBUS_st |= Rte_Write_PPort_CRC_TractionEMachine1_100ms_VCU_TractionEMachine1_100ms_CHS1_CRC_TractionEMachine1_100ms_VCU_TractionEMachine1_100ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.CRC_TractionEMachine1_100ms_phy);
	cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.CanBUS_st |= Rte_Write_PPort_ALIV_TractionEMachine1_100ms_VCU_TractionEMachine1_100ms_CHS1_ALIV_TractionEMachine1_100ms_VCU_TractionEMachine1_100ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.ALIV_TractionEMachine1_100ms_phy);
	cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.CanBUS_st |= Rte_Write_PPort_WheelRatioEAxlEtractSys1ActVal_VCU_TractionEMachine1_100ms_CHS1_WheelRatioEAxlEtractSys1ActVal_VCU_TractionEMachine1_100ms_CHS1(cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.WheelRatioEAxlEtractSys1ActVal_phy);

}


/*300*/ /*size:8*/ /*40ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */
void cap_setTxSignals_VCU_Status_CHS1(void){
	cap_canApiMsg_VCU_Status_CHS1.CanBUS_st |= Rte_Write_PPort_CRC_VCU_Status_VCU_Status_CHS1_CRC_VCU_Status_VCU_Status_CHS1(cap_canApiMsg_VCU_Status_CHS1.CRC_VCU_Status_phy);
	cap_canApiMsg_VCU_Status_CHS1.CanBUS_st |= Rte_Write_PPort_ALIV_VCU_Status_VCU_Status_CHS1_ALIV_VCU_Status_VCU_Status_CHS1(cap_canApiMsg_VCU_Status_CHS1.ALIV_VCU_Status_phy);
	cap_canApiMsg_VCU_Status_CHS1.CanBUS_st |= Rte_Write_PPort_VCU_ACPD_Percent_VCU_Status_CHS1_VCU_ACPD_Percent_VCU_Status_CHS1(cap_canApiMsg_VCU_Status_CHS1.VCU_ACPD_Percent_phy);
	cap_canApiMsg_VCU_Status_CHS1.CanBUS_st |= Rte_Write_PPort_VCU_ACPD_Percent_Valid_VCU_Status_CHS1_VCU_ACPD_Percent_Valid_VCU_Status_CHS1(cap_canApiMsg_VCU_Status_CHS1.VCU_ACPD_Percent_Valid_phy);
	cap_canApiMsg_VCU_Status_CHS1.CanBUS_st |= Rte_Write_PPort_VCU_ACT_Gear_VCU_Status_CHS1_VCU_ACT_Gear_VCU_Status_CHS1(cap_canApiMsg_VCU_Status_CHS1.VCU_ACT_Gear_phy);
	cap_canApiMsg_VCU_Status_CHS1.CanBUS_st |= Rte_Write_PPort_VCU_ACT_GearValid_VCU_Status_CHS1_VCU_ACT_GearValid_VCU_Status_CHS1(cap_canApiMsg_VCU_Status_CHS1.VCU_ACT_GearValid_phy);
	cap_canApiMsg_VCU_Status_CHS1.CanBUS_st |= Rte_Write_PPort_VCU_ACT_DriveMode_VCU_Status_CHS1_VCU_ACT_DriveMode_VCU_Status_CHS1(cap_canApiMsg_VCU_Status_CHS1.VCU_ACT_DriveMode_phy);
	cap_canApiMsg_VCU_Status_CHS1.CanBUS_st |= Rte_Write_PPort_VCU_ACT_DriveModeValid_VCU_Status_CHS1_VCU_ACT_DriveModeValid_VCU_Status_CHS1(cap_canApiMsg_VCU_Status_CHS1.VCU_ACT_DriveModeValid_phy);

}


/*275*/ /*size:2*/ /*40ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */
void cap_setTxSignals_VCU_HV_Status_CHS1(void){
	cap_canApiMsg_VCU_HV_Status_CHS1.CanBUS_st |= Rte_Write_PPort_CRC_VCU_HV_Status_VCU_HV_Status_CHS1_CRC_VCU_HV_Status_VCU_HV_Status_CHS1(cap_canApiMsg_VCU_HV_Status_CHS1.CRC_VCU_HV_Status_phy);
	cap_canApiMsg_VCU_HV_Status_CHS1.CanBUS_st |= Rte_Write_PPort_ALIV_VCU_HV_Status_VCU_HV_Status_CHS1_ALIV_VCU_HV_Status_VCU_HV_Status_CHS1(cap_canApiMsg_VCU_HV_Status_CHS1.ALIV_VCU_HV_Status_phy);
	cap_canApiMsg_VCU_HV_Status_CHS1.CanBUS_st |= Rte_Write_PPort_VCU_VehicleHVStatus_VCU_HV_Status_CHS1_VCU_VehicleHVStatus_VCU_HV_Status_CHS1(cap_canApiMsg_VCU_HV_Status_CHS1.VCU_VehicleHVStatus_phy);

}


/*138*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */
void cap_setTxSignals_VCU_CombinedChargerUnit_CHS1(void){
	cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.CanBUS_st |= Rte_Write_PPort_CRC_VCU_CombinedChargerUnit_VCU_CombinedChargerUnit_CHS1_CRC_VCU_CombinedChargerUnit_VCU_CombinedChargerUnit_CHS1(cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.CRC_VCU_CombinedChargerUnit_phy);
	cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.CanBUS_st |= Rte_Write_PPort_ALIV_VCU_CombinedChargerUnit_VCU_CombinedChargerUnit_CHS1_ALIV_VCU_CombinedChargerUnit_VCU_CombinedChargerUnit_CHS1(cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.ALIV_VCU_CombinedChargerUnit_phy);
	cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.CanBUS_st |= Rte_Write_PPort_TargetTorqueEmETractSys1_VCU_CombinedChargerUnit_CHS1_TargetTorqueEmETractSys1_VCU_CombinedChargerUnit_CHS1(cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.TargetTorqueEmETractSys1_phy);
	cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.CanBUS_st |= Rte_Write_PPort_TargetTorqueEmETractSys2_VCU_CombinedChargerUnit_CHS1_TargetTorqueEmETractSys2_VCU_CombinedChargerUnit_CHS1(cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.TargetTorqueEmETractSys2_phy);

}


/*1107*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*CHS1*/ /*SentMsg */
void cap_setTxSignals_HighVoltageStorage200msNo1_CHS1(void){
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.CanBUS_st |= Rte_Write_PPort_HV_ONOFF_status_HighVoltageStorage200msNo1_CHS1_HV_ONOFF_status_HighVoltageStorage200msNo1_CHS1(cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_ONOFF_status_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.CanBUS_st |= Rte_Write_PPort_HV_Positive_Path_Status_HighVoltageStorage200msNo1_CHS1_HV_Positive_Path_Status_HighVoltageStorage200msNo1_CHS1(cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_Positive_Path_Status_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.CanBUS_st |= Rte_Write_PPort_HV_Negative_Path_Status_HighVoltageStorage200msNo1_CHS1_HV_Negative_Path_Status_HighVoltageStorage200msNo1_CHS1(cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_Negative_Path_Status_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.CanBUS_st |= Rte_Write_PPort_HV_Last_Cont_Opening_Diagnosis_HighVoltageStorage200msNo1_CHS1_HV_Last_Cont_Opening_Diagnosis_HighVoltageStorage200msNo1_CHS1(cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_Last_Cont_Opening_Diagnosis_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.CanBUS_st |= Rte_Write_PPort_HV_ONOFF_Err_Status_HighVoltageStorage200msNo1_CHS1_HV_ONOFF_Err_Status_HighVoltageStorage200msNo1_CHS1(cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_ONOFF_Err_Status_phy);

}


/*497*/ /*size:3*/ /*100ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_CLAMP_STAT_CHS2(void){
	cap_canApiMsg_CLAMP_STAT_CHS2.CanBUS_st |= Rte_Write_PPort_CRC_CLAMP_STAT_CLAMP_STAT_CHS2_CRC_CLAMP_STAT_CLAMP_STAT_CHS2(cap_canApiMsg_CLAMP_STAT_CHS2.CRC_CLAMP_STAT_phy);
	cap_canApiMsg_CLAMP_STAT_CHS2.CanBUS_st |= Rte_Write_PPort_ALIV_CLAMP_STAT_CLAMP_STAT_CHS2_ALIV_CLAMP_STAT_CLAMP_STAT_CHS2(cap_canApiMsg_CLAMP_STAT_CHS2.ALIV_CLAMP_STAT_phy);
	cap_canApiMsg_CLAMP_STAT_CHS2.CanBUS_st |= Rte_Write_PPort_STAT_CL15_L_CLAMP_STAT_CHS2_STAT_CL15_L_CLAMP_STAT_CHS2(cap_canApiMsg_CLAMP_STAT_CHS2.STAT_CL15_L_phy);
	cap_canApiMsg_CLAMP_STAT_CHS2.CanBUS_st |= Rte_Write_PPort_STAT_CL30S_L_CLAMP_STAT_CHS2_STAT_CL30S_L_CLAMP_STAT_CHS2(cap_canApiMsg_CLAMP_STAT_CHS2.STAT_CL30S_L_phy);
	cap_canApiMsg_CLAMP_STAT_CHS2.CanBUS_st |= Rte_Write_PPort_STAT_CL30S_Light_CLAMP_STAT_CHS2_STAT_CL30S_Light_CLAMP_STAT_CHS2(cap_canApiMsg_CLAMP_STAT_CHS2.STAT_CL30S_Light_phy);
	cap_canApiMsg_CLAMP_STAT_CHS2.CanBUS_st |= Rte_Write_PPort_STAT_CL15_WUPL_CLAMP_STAT_CHS2_STAT_CL15_WUPL_CLAMP_STAT_CHS2(cap_canApiMsg_CLAMP_STAT_CHS2.STAT_CL15_WUPL_phy);

}


/*170*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_VCU_TractionEMachine2_10ms_CHS2(void){
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_CRC_TractionEMachine2_10ms_VCU_TractionEMachine2_10ms_CHS2_CRC_TractionEMachine2_10ms_VCU_TractionEMachine2_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CRC_TractionEMachine2_10ms_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_ALIV_TractionEMachine2_10ms_VCU_TractionEMachine2_10ms_CHS2_ALIV_TractionEMachine2_10ms_VCU_TractionEMachine2_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.ALIV_TractionEMachine2_10ms_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_RpmEmETractSys2ActualValue_VCU_TractionEMachine2_10ms_CHS2_RpmEmETractSys2ActualValue_VCU_TractionEMachine2_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.RpmEmETractSys2ActualValue_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys2GeneratorDyn_VCU_TractionEMachine2_10ms_CHS2_TorqueEmETractSys2GeneratorDyn_VCU_TractionEMachine2_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.TorqueEmETractSys2GeneratorDyn_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys2MotorDyn_VCU_TractionEMachine2_10ms_CHS2_TorqueEmETractSys2MotorDyn_VCU_TractionEMachine2_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.TorqueEmETractSys2MotorDyn_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys2ActualValue_VCU_TractionEMachine2_10ms_CHS2_TorqueEmETractSys2ActualValue_VCU_TractionEMachine2_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.TorqueEmETractSys2ActualValue_phy);
	cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_QualifierRpmEmETractSys2ActVal_VCU_TractionEMachine2_10ms_CHS2_QualifierRpmEmETractSys2ActVal_VCU_TractionEMachine2_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.QualifierRpmEmETractSys2ActVal_phy);

}


/*145*/ /*size:16*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_VCU_TractionEMachine1_10ms_CHS2(void){
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_CRC_TractionEMachine1_10ms_VCU_TractionEMachine1_10ms_CHS2_CRC_TractionEMachine1_10ms_VCU_TractionEMachine1_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CRC_TractionEMachine1_10ms_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_ALIV_TractionEMachine1_10ms_VCU_TractionEMachine1_10ms_CHS2_ALIV_TractionEMachine1_10ms_VCU_TractionEMachine1_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.ALIV_TractionEMachine1_10ms_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_RpmEmETractSys1ActualValue_VCU_TractionEMachine1_10ms_CHS2_RpmEmETractSys1ActualValue_VCU_TractionEMachine1_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.RpmEmETractSys1ActualValue_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys1GeneratorDyn_VCU_TractionEMachine1_10ms_CHS2_TorqueEmETractSys1GeneratorDyn_VCU_TractionEMachine1_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.TorqueEmETractSys1GeneratorDyn_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys1MotorDyn_VCU_TractionEMachine1_10ms_CHS2_TorqueEmETractSys1MotorDyn_VCU_TractionEMachine1_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.TorqueEmETractSys1MotorDyn_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_TorqueEmETractSys1ActualValue_VCU_TractionEMachine1_10ms_CHS2_TorqueEmETractSys1ActualValue_VCU_TractionEMachine1_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.TorqueEmETractSys1ActualValue_phy);
	cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CanBUS_st |= Rte_Write_PPort_QualifierRpmEmETractSys1ActVal_VCU_TractionEMachine1_10ms_CHS2_QualifierRpmEmETractSys1ActVal_VCU_TractionEMachine1_10ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.QualifierRpmEmETractSys1ActVal_phy);

}


/*326*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_VCU_TractionEMachine2_100ms_CHS2(void){
	cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.CanBUS_st |= Rte_Write_PPort_CRC_TractionEMachine2_100ms_VCU_TractionEMachine2_100ms_CHS2_CRC_TractionEMachine2_100ms_VCU_TractionEMachine2_100ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.CRC_TractionEMachine2_100ms_phy);
	cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.CanBUS_st |= Rte_Write_PPort_ALIV_TractionEMachine2_100ms_VCU_TractionEMachine2_100ms_CHS2_ALIV_TractionEMachine2_100ms_VCU_TractionEMachine2_100ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.ALIV_TractionEMachine2_100ms_phy);
	cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.CanBUS_st |= Rte_Write_PPort_WheelRatioEAxlEtractSys2ActVal_VCU_TractionEMachine2_100ms_CHS2_WheelRatioEAxlEtractSys2ActVal_VCU_TractionEMachine2_100ms_CHS2(cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.WheelRatioEAxlEtractSys2ActVal_phy);

}


/*314*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_VCU_TractionEMachine1_100ms_CHS2(void){
	cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.CanBUS_st |= Rte_Write_PPort_CRC_TractionEMachine1_100ms_VCU_TractionEMachine1_100ms_CHS2_CRC_TractionEMachine1_100ms_VCU_TractionEMachine1_100ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.CRC_TractionEMachine1_100ms_phy);
	cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.CanBUS_st |= Rte_Write_PPort_ALIV_TractionEMachine1_100ms_VCU_TractionEMachine1_100ms_CHS2_ALIV_TractionEMachine1_100ms_VCU_TractionEMachine1_100ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.ALIV_TractionEMachine1_100ms_phy);
	cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.CanBUS_st |= Rte_Write_PPort_WheelRatioEAxlEtractSys1ActVal_VCU_TractionEMachine1_100ms_CHS2_WheelRatioEAxlEtractSys1ActVal_VCU_TractionEMachine1_100ms_CHS2(cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.WheelRatioEAxlEtractSys1ActVal_phy);

}


/*300*/ /*size:8*/ /*40ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_VCU_Status_CHS2(void){
	cap_canApiMsg_VCU_Status_CHS2.CanBUS_st |= Rte_Write_PPort_CRC_VCU_Status_VCU_Status_CHS2_CRC_VCU_Status_VCU_Status_CHS2(cap_canApiMsg_VCU_Status_CHS2.CRC_VCU_Status_phy);
	cap_canApiMsg_VCU_Status_CHS2.CanBUS_st |= Rte_Write_PPort_ALIV_VCU_Status_VCU_Status_CHS2_ALIV_VCU_Status_VCU_Status_CHS2(cap_canApiMsg_VCU_Status_CHS2.ALIV_VCU_Status_phy);
	cap_canApiMsg_VCU_Status_CHS2.CanBUS_st |= Rte_Write_PPort_VCU_ACPD_Percent_VCU_Status_CHS2_VCU_ACPD_Percent_VCU_Status_CHS2(cap_canApiMsg_VCU_Status_CHS2.VCU_ACPD_Percent_phy);
	cap_canApiMsg_VCU_Status_CHS2.CanBUS_st |= Rte_Write_PPort_VCU_ACPD_Percent_Valid_VCU_Status_CHS2_VCU_ACPD_Percent_Valid_VCU_Status_CHS2(cap_canApiMsg_VCU_Status_CHS2.VCU_ACPD_Percent_Valid_phy);
	cap_canApiMsg_VCU_Status_CHS2.CanBUS_st |= Rte_Write_PPort_VCU_ACT_Gear_VCU_Status_CHS2_VCU_ACT_Gear_VCU_Status_CHS2(cap_canApiMsg_VCU_Status_CHS2.VCU_ACT_Gear_phy);
	cap_canApiMsg_VCU_Status_CHS2.CanBUS_st |= Rte_Write_PPort_VCU_ACT_GearValid_VCU_Status_CHS2_VCU_ACT_GearValid_VCU_Status_CHS2(cap_canApiMsg_VCU_Status_CHS2.VCU_ACT_GearValid_phy);
	cap_canApiMsg_VCU_Status_CHS2.CanBUS_st |= Rte_Write_PPort_VCU_ACT_DriveMode_VCU_Status_CHS2_VCU_ACT_DriveMode_VCU_Status_CHS2(cap_canApiMsg_VCU_Status_CHS2.VCU_ACT_DriveMode_phy);
	cap_canApiMsg_VCU_Status_CHS2.CanBUS_st |= Rte_Write_PPort_VCU_ACT_DriveModeValid_VCU_Status_CHS2_VCU_ACT_DriveModeValid_VCU_Status_CHS2(cap_canApiMsg_VCU_Status_CHS2.VCU_ACT_DriveModeValid_phy);

}


/*275*/ /*size:2*/ /*40ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_VCU_HV_Status_CHS2(void){
	cap_canApiMsg_VCU_HV_Status_CHS2.CanBUS_st |= Rte_Write_PPort_CRC_VCU_HV_Status_VCU_HV_Status_CHS2_CRC_VCU_HV_Status_VCU_HV_Status_CHS2(cap_canApiMsg_VCU_HV_Status_CHS2.CRC_VCU_HV_Status_phy);
	cap_canApiMsg_VCU_HV_Status_CHS2.CanBUS_st |= Rte_Write_PPort_ALIV_VCU_HV_Status_VCU_HV_Status_CHS2_ALIV_VCU_HV_Status_VCU_HV_Status_CHS2(cap_canApiMsg_VCU_HV_Status_CHS2.ALIV_VCU_HV_Status_phy);
	cap_canApiMsg_VCU_HV_Status_CHS2.CanBUS_st |= Rte_Write_PPort_VCU_VehicleHVStatus_VCU_HV_Status_CHS2_VCU_VehicleHVStatus_VCU_HV_Status_CHS2(cap_canApiMsg_VCU_HV_Status_CHS2.VCU_VehicleHVStatus_phy);

}


/*138*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_VCU_CombinedChargerUnit_CHS2(void){
	cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.CanBUS_st |= Rte_Write_PPort_CRC_VCU_CombinedChargerUnit_VCU_CombinedChargerUnit_CHS2_CRC_VCU_CombinedChargerUnit_VCU_CombinedChargerUnit_CHS2(cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.CRC_VCU_CombinedChargerUnit_phy);
	cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.CanBUS_st |= Rte_Write_PPort_ALIV_VCU_CombinedChargerUnit_VCU_CombinedChargerUnit_CHS2_ALIV_VCU_CombinedChargerUnit_VCU_CombinedChargerUnit_CHS2(cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.ALIV_VCU_CombinedChargerUnit_phy);
	cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.CanBUS_st |= Rte_Write_PPort_TargetTorqueEmETractSys1_VCU_CombinedChargerUnit_CHS2_TargetTorqueEmETractSys1_VCU_CombinedChargerUnit_CHS2(cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.TargetTorqueEmETractSys1_phy);
	cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.CanBUS_st |= Rte_Write_PPort_TargetTorqueEmETractSys2_VCU_CombinedChargerUnit_CHS2_TargetTorqueEmETractSys2_VCU_CombinedChargerUnit_CHS2(cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.TargetTorqueEmETractSys2_phy);

}


/*1107*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*CHS2*/ /*SentMsg */
void cap_setTxSignals_HighVoltageStorage200msNo1_CHS2(void){
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.CanBUS_st |= Rte_Write_PPort_HV_ONOFF_status_HighVoltageStorage200msNo1_CHS2_HV_ONOFF_status_HighVoltageStorage200msNo1_CHS2(cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_ONOFF_status_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.CanBUS_st |= Rte_Write_PPort_HV_Positive_Path_Status_HighVoltageStorage200msNo1_CHS2_HV_Positive_Path_Status_HighVoltageStorage200msNo1_CHS2(cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_Positive_Path_Status_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.CanBUS_st |= Rte_Write_PPort_HV_Negative_Path_Status_HighVoltageStorage200msNo1_CHS2_HV_Negative_Path_Status_HighVoltageStorage200msNo1_CHS2(cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_Negative_Path_Status_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.CanBUS_st |= Rte_Write_PPort_HV_Last_Cont_Opening_Diagnosis_HighVoltageStorage200msNo1_CHS2_HV_Last_Cont_Opening_Diagnosis_HighVoltageStorage200msNo1_CHS2(cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_Last_Cont_Opening_Diagnosis_phy);
	cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.CanBUS_st |= Rte_Write_PPort_HV_ONOFF_Err_Status_HighVoltageStorage200msNo1_CHS2_HV_ONOFF_Err_Status_HighVoltageStorage200msNo1_CHS2(cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_ONOFF_Err_Status_phy);

}


/*501*/ /*size:1*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_HV_DrvSys_status_PT(void){
	cap_canApiMsg_VCU_HV_DrvSys_status_PT.CanBUS_st |= Rte_Write_PPort_VCU_HV_SystemStatus_VCU_HV_DrvSys_status_PT_VCU_HV_SystemStatus_VCU_HV_DrvSys_status_PT(cap_canApiMsg_VCU_HV_DrvSys_status_PT.VCU_HV_SystemStatus_phy);

}


/*451*/ /*size:1*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_Thermal_Status_PT(void){
	cap_canApiMsg_VCU_Thermal_Status_PT.CanBUS_st |= Rte_Write_PPort_VCU_LTROutLetTemp_VCU_Thermal_Status_PT_VCU_LTROutLetTemp_VCU_Thermal_Status_PT(cap_canApiMsg_VCU_Thermal_Status_PT.VCU_LTROutLetTemp_phy);

}


/*497*/ /*size:3*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_CLAMP_STAT_PT(void){
	cap_canApiMsg_CLAMP_STAT_PT.CanBUS_st |= Rte_Write_PPort_CRC_CLAMP_STAT_CLAMP_STAT_PT_CRC_CLAMP_STAT_CLAMP_STAT_PT(cap_canApiMsg_CLAMP_STAT_PT.CRC_CLAMP_STAT_phy);
	cap_canApiMsg_CLAMP_STAT_PT.CanBUS_st |= Rte_Write_PPort_ALIV_CLAMP_STAT_CLAMP_STAT_PT_ALIV_CLAMP_STAT_CLAMP_STAT_PT(cap_canApiMsg_CLAMP_STAT_PT.ALIV_CLAMP_STAT_phy);
	cap_canApiMsg_CLAMP_STAT_PT.CanBUS_st |= Rte_Write_PPort_STAT_CL15_L_CLAMP_STAT_PT_STAT_CL15_L_CLAMP_STAT_PT(cap_canApiMsg_CLAMP_STAT_PT.STAT_CL15_L_phy);
	cap_canApiMsg_CLAMP_STAT_PT.CanBUS_st |= Rte_Write_PPort_STAT_CL30S_L_CLAMP_STAT_PT_STAT_CL30S_L_CLAMP_STAT_PT(cap_canApiMsg_CLAMP_STAT_PT.STAT_CL30S_L_phy);
	cap_canApiMsg_CLAMP_STAT_PT.CanBUS_st |= Rte_Write_PPort_STAT_CL30S_Light_CLAMP_STAT_PT_STAT_CL30S_Light_CLAMP_STAT_PT(cap_canApiMsg_CLAMP_STAT_PT.STAT_CL30S_Light_phy);
	cap_canApiMsg_CLAMP_STAT_PT.CanBUS_st |= Rte_Write_PPort_STAT_CL15_WUPL_CLAMP_STAT_PT_STAT_CL15_WUPL_CLAMP_STAT_PT(cap_canApiMsg_CLAMP_STAT_PT.STAT_CL15_WUPL_phy);

}


/*60*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_CON_VEH_PT(void){
	cap_canApiMsg_CON_VEH_PT.CanBUS_st |= Rte_Write_PPort_CRC_CON_VEH_CON_VEH_PT_CRC_CON_VEH_CON_VEH_PT(cap_canApiMsg_CON_VEH_PT.CRC_CON_VEH_phy);
	cap_canApiMsg_CON_VEH_PT.CanBUS_st |= Rte_Write_PPort_ALIV_CON_VEH_CON_VEH_PT_ALIV_CON_VEH_CON_VEH_PT(cap_canApiMsg_CON_VEH_PT.ALIV_CON_VEH_phy);
	cap_canApiMsg_CON_VEH_PT.CanBUS_st |= Rte_Write_PPort_CTR_BS_PRTNT_CON_VEH_PT_CTR_BS_PRTNT_CON_VEH_PT(cap_canApiMsg_CON_VEH_PT.CTR_BS_PRTNT_phy);
	cap_canApiMsg_CON_VEH_PT.CanBUS_st |= Rte_Write_PPort_CTR_FKTN_PRTNT_CON_VEH_PT_CTR_FKTN_PRTNT_CON_VEH_PT(cap_canApiMsg_CON_VEH_PT.CTR_FKTN_PRTNT_phy);
	cap_canApiMsg_CON_VEH_PT.CanBUS_st |= Rte_Write_PPort_ST_CON_VEH_CON_VEH_PT_ST_CON_VEH_CON_VEH_PT(cap_canApiMsg_CON_VEH_PT.ST_CON_VEH_phy);
	cap_canApiMsg_CON_VEH_PT.CanBUS_st |= Rte_Write_PPort_QU_ST_CON_VEH_CON_VEH_PT_QU_ST_CON_VEH_CON_VEH_PT(cap_canApiMsg_CON_VEH_PT.QU_ST_CON_VEH_phy);

}


/*130*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_ST_CR_PT(void){
	cap_canApiMsg_ST_CR_PT.CanBUS_st |= Rte_Write_PPort_CRC_ST_CR_ST_CR_PT_CRC_ST_CR_ST_CR_PT(cap_canApiMsg_ST_CR_PT.CRC_ST_CR_phy);
	cap_canApiMsg_ST_CR_PT.CanBUS_st |= Rte_Write_PPort_ALIV_ST_CR_ST_CR_PT_ALIV_ST_CR_ST_CR_PT(cap_canApiMsg_ST_CR_PT.ALIV_ST_CR_phy);
	cap_canApiMsg_ST_CR_PT.CanBUS_st |= Rte_Write_PPort_ST_CRSE_FRT_ST_CR_PT_ST_CRSE_FRT_ST_CR_PT(cap_canApiMsg_ST_CR_PT.ST_CRSE_FRT_phy);
	cap_canApiMsg_ST_CR_PT.CanBUS_st |= Rte_Write_PPort_ST_CRSE_SIDE_RH_ST_CR_PT_ST_CRSE_SIDE_RH_ST_CR_PT(cap_canApiMsg_ST_CR_PT.ST_CRSE_SIDE_RH_phy);
	cap_canApiMsg_ST_CR_PT.CanBUS_st |= Rte_Write_PPort_ST_CRSE_SIDE_LH_ST_CR_PT_ST_CRSE_SIDE_LH_ST_CR_PT(cap_canApiMsg_ST_CR_PT.ST_CRSE_SIDE_LH_phy);
	cap_canApiMsg_ST_CR_PT.CanBUS_st |= Rte_Write_PPort_ST_CRSE_REAR_ST_CR_PT_ST_CRSE_REAR_ST_CR_PT(cap_canApiMsg_ST_CR_PT.ST_CRSE_REAR_phy);
	cap_canApiMsg_ST_CR_PT.CanBUS_st |= Rte_Write_PPort_ST_CRSE_ROV_ST_CR_PT_ST_CRSE_ROV_ST_CR_PT(cap_canApiMsg_ST_CR_PT.ST_CRSE_ROV_phy);

}


/*131*/ /*size:12*/ /*5ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_AVL_RPM_WHL_PT(void){
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_CRC_AVL_RPM_WHL_AVL_RPM_WHL_PT_CRC_AVL_RPM_WHL_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.CRC_AVL_RPM_WHL_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_ALIV_AVL_RPM_WHL_AVL_RPM_WHL_PT_ALIV_AVL_RPM_WHL_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.ALIV_AVL_RPM_WHL_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_AVL_RPM_WHL_RLH_AVL_RPM_WHL_PT_AVL_RPM_WHL_RLH_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.AVL_RPM_WHL_RLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_AVL_RPM_WHL_RRH_AVL_RPM_WHL_PT_AVL_RPM_WHL_RRH_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.AVL_RPM_WHL_RRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_AVL_RPM_WHL_FLH_AVL_RPM_WHL_PT_AVL_RPM_WHL_FLH_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.AVL_RPM_WHL_FLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_AVL_RPM_WHL_FRH_AVL_RPM_WHL_PT_AVL_RPM_WHL_FRH_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.AVL_RPM_WHL_FRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_QU_AVL_RPM_WHL_RLH_AVL_RPM_WHL_PT_QU_AVL_RPM_WHL_RLH_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.QU_AVL_RPM_WHL_RLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_QU_AVL_RPM_WHL_RRH_AVL_RPM_WHL_PT_QU_AVL_RPM_WHL_RRH_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.QU_AVL_RPM_WHL_RRH_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_QU_AVL_RPM_WHL_FLH_AVL_RPM_WHL_PT_QU_AVL_RPM_WHL_FLH_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.QU_AVL_RPM_WHL_FLH_phy);
	cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st |= Rte_Write_PPort_QU_AVL_RPM_WHL_FRH_AVL_RPM_WHL_PT_QU_AVL_RPM_WHL_FRH_AVL_RPM_WHL_PT(cap_canApiMsg_AVL_RPM_WHL_PT.QU_AVL_RPM_WHL_FRH_phy);

}


/*138*/ /*size:12*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_CombinedChargerUnit10msNo3_PT(void){
	cap_canApiMsg_CombinedChargerUnit10msNo3_PT.CanBUS_st |= Rte_Write_PPort_CRC_CombinedChargerUnit10msNo3_CombinedChargerUnit10msNo3_PT_CRC_CombinedChargerUnit10msNo3_CombinedChargerUnit10msNo3_PT(cap_canApiMsg_CombinedChargerUnit10msNo3_PT.CRC_CombinedChargerUnit10msNo3_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo3_PT.CanBUS_st |= Rte_Write_PPort_ALIV_CombinedChargerUnit10msNo3_CombinedChargerUnit10msNo3_PT_ALIV_CombinedChargerUnit10msNo3_CombinedChargerUnit10msNo3_PT(cap_canApiMsg_CombinedChargerUnit10msNo3_PT.ALIV_CombinedChargerUnit10msNo3_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo3_PT.CanBUS_st |= Rte_Write_PPort_OperatingModeETract1Target_CombinedChargerUnit10msNo3_PT_OperatingModeETract1Target_CombinedChargerUnit10msNo3_PT(cap_canApiMsg_CombinedChargerUnit10msNo3_PT.OperatingModeETract1Target_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo3_PT.CanBUS_st |= Rte_Write_PPort_OperatingModeETract2Target_CombinedChargerUnit10msNo3_PT_OperatingModeETract2Target_CombinedChargerUnit10msNo3_PT(cap_canApiMsg_CombinedChargerUnit10msNo3_PT.OperatingModeETract2Target_phy);

}


/*141*/ /*size:32*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_CombinedChargerUnit10msNo1_PT(void){
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CRC_CombinedChargerUnit10msNo1_CombinedChargerUnit10msNo1_PT_CRC_CombinedChargerUnit10msNo1_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CRC_CombinedChargerUnit10msNo1_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_ALIV_CombinedChargerUnit10msNo1_CombinedChargerUnit10msNo1_PT_ALIV_CombinedChargerUnit10msNo1_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.ALIV_CombinedChargerUnit10msNo1_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TargetTorqueEmETractSys1_CombinedChargerUnit10msNo1_PT_TargetTorqueEmETractSys1_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TargetTorqueEmETractSys1_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TargetTorqueEmETractSys2_CombinedChargerUnit10msNo1_PT_TargetTorqueEmETractSys2_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TargetTorqueEmETractSys2_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TorqBoundaryETractSys1EmNCtrlMax_CombinedChargerUnit10msNo1_PT_TorqBoundaryETractSys1EmNCtrlMax_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TorqBoundaryETractSys1EmNCtrlMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TorqBoundaryETractSys1EmNCtrlMin_CombinedChargerUnit10msNo1_PT_TorqBoundaryETractSys1EmNCtrlMin_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TorqBoundaryETractSys1EmNCtrlMin_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TorqBoundaryETractSys2EmNCtrlMax_CombinedChargerUnit10msNo1_PT_TorqBoundaryETractSys2EmNCtrlMax_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TorqBoundaryETractSys2EmNCtrlMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TorqBoundaryETractSys2EmNCtrlMin_CombinedChargerUnit10msNo1_PT_TorqBoundaryETractSys2EmNCtrlMin_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TorqBoundaryETractSys2EmNCtrlMin_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_StatusDampingVibration_CombinedChargerUnit10msNo1_PT_StatusDampingVibration_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.StatusDampingVibration_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_SecOcDtP2CmbdChrgUnit10msNo1_1_CombinedChargerUnit10msNo1_PT_SecOcDtP2CmbdChrgUnit10msNo1_1_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.SecOcDtP2CmbdChrgUnit10msNo1_1_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TargetEMRpmETractSys1_CombinedChargerUnit10msNo1_PT_TargetEMRpmETractSys1_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TargetEMRpmETractSys1_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TargetEMRpmETractSys2_CombinedChargerUnit10msNo1_PT_TargetEMRpmETractSys2_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TargetEMRpmETractSys2_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_SecOcDtP2CmbdChrgUnit10msNo1_2_CombinedChargerUnit10msNo1_PT_SecOcDtP2CmbdChrgUnit10msNo1_2_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.SecOcDtP2CmbdChrgUnit10msNo1_2_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_StatusReleaseTorqueVerified_CombinedChargerUnit10msNo1_PT_StatusReleaseTorqueVerified_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.StatusReleaseTorqueVerified_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_SecOcDtP2CmbdChrgUnit10msNo1_0_CombinedChargerUnit10msNo1_PT_SecOcDtP2CmbdChrgUnit10msNo1_0_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.SecOcDtP2CmbdChrgUnit10msNo1_0_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st |= Rte_Write_PPort_SecOcDtP2CmbdChrgUnit10msNo1_3_CombinedChargerUnit10msNo1_PT_SecOcDtP2CmbdChrgUnit10msNo1_3_CombinedChargerUnit10msNo1_PT(cap_canApiMsg_CombinedChargerUnit10msNo1_PT.SecOcDtP2CmbdChrgUnit10msNo1_3_phy);

}


/*146*/ /*size:2*/ /*5000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_ERRM_BN_U_PT(void){
	cap_canApiMsg_ERRM_BN_U_PT.CanBUS_st |= Rte_Write_PPort_CTR_ERRM_BN_U_ERRM_BN_U_PT_CTR_ERRM_BN_U_ERRM_BN_U_PT(cap_canApiMsg_ERRM_BN_U_PT.CTR_ERRM_BN_U_phy);

}


/*166*/ /*size:48*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_WMOM_DRV_9_PT(void){
	cap_canApiMsg_WMOM_DRV_9_PT.CanBUS_st |= Rte_Write_PPort_TAR_WMOM_PT_SUM_COOTD_WMOM_DRV_9_PT_TAR_WMOM_PT_SUM_COOTD_WMOM_DRV_9_PT(cap_canApiMsg_WMOM_DRV_9_PT.TAR_WMOM_PT_SUM_COOTD_phy);

}


/*213*/ /*size:8*/ /*50ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_ST_STAB_DSC_PT(void){
	cap_canApiMsg_ST_STAB_DSC_PT.CanBUS_st |= Rte_Write_PPort_CRC_ST_STAB_DSC_ST_STAB_DSC_PT_CRC_ST_STAB_DSC_ST_STAB_DSC_PT(cap_canApiMsg_ST_STAB_DSC_PT.CRC_ST_STAB_DSC_phy);
	cap_canApiMsg_ST_STAB_DSC_PT.CanBUS_st |= Rte_Write_PPort_ALIV_ST_STAB_DSC_ST_STAB_DSC_PT_ALIV_ST_STAB_DSC_ST_STAB_DSC_PT(cap_canApiMsg_ST_STAB_DSC_PT.ALIV_ST_STAB_DSC_phy);
	cap_canApiMsg_ST_STAB_DSC_PT.CanBUS_st |= Rte_Write_PPort_QU_FN_FDR_ST_STAB_DSC_PT_QU_FN_FDR_ST_STAB_DSC_PT(cap_canApiMsg_ST_STAB_DSC_PT.QU_FN_FDR_phy);
	cap_canApiMsg_ST_STAB_DSC_PT.CanBUS_st |= Rte_Write_PPort_QU_FN_ABS_ST_STAB_DSC_PT_QU_FN_ABS_ST_STAB_DSC_PT(cap_canApiMsg_ST_STAB_DSC_PT.QU_FN_ABS_phy);
	cap_canApiMsg_ST_STAB_DSC_PT.CanBUS_st |= Rte_Write_PPort_QU_FN_ASC_ST_STAB_DSC_PT_QU_FN_ASC_ST_STAB_DSC_PT(cap_canApiMsg_ST_STAB_DSC_PT.QU_FN_ASC_phy);
	cap_canApiMsg_ST_STAB_DSC_PT.CanBUS_st |= Rte_Write_PPort_ST_BRG_DV_ST_STAB_DSC_PT_ST_BRG_DV_ST_STAB_DSC_PT(cap_canApiMsg_ST_STAB_DSC_PT.ST_BRG_DV_phy);

}


/*214*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_ST_STAB_DSC_2_PT(void){
	cap_canApiMsg_ST_STAB_DSC_2_PT.CanBUS_st |= Rte_Write_PPort_ST_SLIP_THO_ST_STAB_DSC_2_PT_ST_SLIP_THO_ST_STAB_DSC_2_PT(cap_canApiMsg_ST_STAB_DSC_2_PT.ST_SLIP_THO_phy);

}


/*217*/ /*size:16*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_WMOM_PT_AVL_PT(void){
	cap_canApiMsg_WMOM_PT_AVL_PT.CanBUS_st |= Rte_Write_PPort_AVL_WMOM_PT_SUM_WMOM_PT_AVL_PT_AVL_WMOM_PT_SUM_WMOM_PT_AVL_PT(cap_canApiMsg_WMOM_PT_AVL_PT.AVL_WMOM_PT_SUM_phy);
	cap_canApiMsg_WMOM_PT_AVL_PT.CanBUS_st |= Rte_Write_PPort_QU_AVL_WMOM_PT_SUM_WMOM_PT_AVL_PT_QU_AVL_WMOM_PT_SUM_WMOM_PT_AVL_PT(cap_canApiMsg_WMOM_PT_AVL_PT.QU_AVL_WMOM_PT_SUM_phy);

}


/*272*/ /*size:2*/ /*50ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_ChargingConnectionSts_PT(void){
	cap_canApiMsg_VCU_ChargingConnectionSts_PT.CanBUS_st |= Rte_Write_PPort_CRC_VCU_ChargingConnectionSts_VCU_ChargingConnectionSts_PT_CRC_VCU_ChargingConnectionSts_VCU_ChargingConnectionSts_PT(cap_canApiMsg_VCU_ChargingConnectionSts_PT.CRC_VCU_ChargingConnectionSts_phy);
	cap_canApiMsg_VCU_ChargingConnectionSts_PT.CanBUS_st |= Rte_Write_PPort_ALV_VCU_ChargingConnectionSts_VCU_ChargingConnectionSts_PT_ALV_VCU_ChargingConnectionSts_VCU_ChargingConnectionSts_PT(cap_canApiMsg_VCU_ChargingConnectionSts_PT.ALV_VCU_ChargingConnectionSts_phy);
	cap_canApiMsg_VCU_ChargingConnectionSts_PT.CanBUS_st |= Rte_Write_PPort_VCU_AcChgGunIn_VCU_ChargingConnectionSts_PT_VCU_AcChgGunIn_VCU_ChargingConnectionSts_PT(cap_canApiMsg_VCU_ChargingConnectionSts_PT.VCU_AcChgGunIn_phy);
	cap_canApiMsg_VCU_ChargingConnectionSts_PT.CanBUS_st |= Rte_Write_PPort_VCU_DCChgGunIn_VCU_ChargingConnectionSts_PT_VCU_DCChgGunIn_VCU_ChargingConnectionSts_PT(cap_canApiMsg_VCU_ChargingConnectionSts_PT.VCU_DCChgGunIn_phy);

}


/*289*/ /*size:32*/ /*20ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_BundleEAFlexrayToCANFD20msNo1_PT(void){
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.CanBUS_st |= Rte_Write_PPort_CRC_V_VEH_BundleEAFlexrayToCANFD20msNo1_PT_CRC_V_VEH_BundleEAFlexrayToCANFD20msNo1_PT(cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.CRC_V_VEH_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.CanBUS_st |= Rte_Write_PPort_ALIV_V_VEH_BundleEAFlexrayToCANFD20msNo1_PT_ALIV_V_VEH_BundleEAFlexrayToCANFD20msNo1_PT(cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.ALIV_V_VEH_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.CanBUS_st |= Rte_Write_PPort_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_PT_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_PT(cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.V_VEH_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.CanBUS_st |= Rte_Write_PPort_QU_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_PT_QU_V_VEH_COG_BundleEAFlexrayToCANFD20msNo1_PT(cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.QU_V_VEH_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.CanBUS_st |= Rte_Write_PPort_SecOcDataP2V_VEH_BundleEAFlexrayToCANFD20msNo1_PT_SecOcDataP2V_VEH_BundleEAFlexrayToCANFD20msNo1_PT(cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.SecOcDataP2V_VEH_phy);

}


/*293*/ /*size:20*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_CombinedChargerUnit10msNo2_PT(void){
	cap_canApiMsg_CombinedChargerUnit10msNo2_PT.CanBUS_st |= Rte_Write_PPort_PowerETractSys2LimGenMax_CombinedChargerUnit10msNo2_PT_PowerETractSys2LimGenMax_CombinedChargerUnit10msNo2_PT(cap_canApiMsg_CombinedChargerUnit10msNo2_PT.PowerETractSys2LimGenMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_PT.CanBUS_st |= Rte_Write_PPort_PowerETractSys2LimMotMax_CombinedChargerUnit10msNo2_PT_PowerETractSys2LimMotMax_CombinedChargerUnit10msNo2_PT(cap_canApiMsg_CombinedChargerUnit10msNo2_PT.PowerETractSys2LimMotMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_PT.CanBUS_st |= Rte_Write_PPort_PowerETractSys1LimGenMax_CombinedChargerUnit10msNo2_PT_PowerETractSys1LimGenMax_CombinedChargerUnit10msNo2_PT(cap_canApiMsg_CombinedChargerUnit10msNo2_PT.PowerETractSys1LimGenMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_PT.CanBUS_st |= Rte_Write_PPort_PowerETractSys1LimMotMax_CombinedChargerUnit10msNo2_PT_PowerETractSys1LimMotMax_CombinedChargerUnit10msNo2_PT(cap_canApiMsg_CombinedChargerUnit10msNo2_PT.PowerETractSys1LimMotMax_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_PT.CanBUS_st |= Rte_Write_PPort_OperatingModeEANActualValue_CombinedChargerUnit10msNo2_PT_OperatingModeEANActualValue_CombinedChargerUnit10msNo2_PT(cap_canApiMsg_CombinedChargerUnit10msNo2_PT.OperatingModeEANActualValue_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_PT.CanBUS_st |= Rte_Write_PPort_RequestExtraBoostETractSys1_CombinedChargerUnit10msNo2_PT_RequestExtraBoostETractSys1_CombinedChargerUnit10msNo2_PT(cap_canApiMsg_CombinedChargerUnit10msNo2_PT.RequestExtraBoostETractSys1_phy);
	cap_canApiMsg_CombinedChargerUnit10msNo2_PT.CanBUS_st |= Rte_Write_PPort_RequestExtraBoostETractSys2_CombinedChargerUnit10msNo2_PT_RequestExtraBoostETractSys2_CombinedChargerUnit10msNo2_PT(cap_canApiMsg_CombinedChargerUnit10msNo2_PT.RequestExtraBoostETractSys2_phy);

}


/*296*/ /*size:64*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_BundleEAFlexrayToAECANFD10msNo1_PT(void){
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CRC_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_PT_CRC_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CRC_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_ALIV_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_PT_ALIV_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ALIV_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CHL_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_PT_CHL_EXTS_ARB_INTF_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CHL_EXTS_ARB_INTF_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_AVL_BRTORQ_WHL_RS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_PT_AVL_BRTORQ_WHL_RS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.AVL_BRTORQ_WHL_RS_LH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_AVL_BRTORQ_WHL_RS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_PT_AVL_BRTORQ_WHL_RS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.AVL_BRTORQ_WHL_RS_RH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_AVL_BRTORQ_WHL_FS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_PT_AVL_BRTORQ_WHL_FS_LH_EXT_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.AVL_BRTORQ_WHL_FS_LH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_AVL_BRTORQ_WHL_FS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_PT_AVL_BRTORQ_WHL_FS_RH_EXT_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.AVL_BRTORQ_WHL_FS_RH_EXT_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CRC_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_PT_CRC_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CRC_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_ALIV_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_PT_ALIV_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ALIV_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CHL_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_PT_CHL_RQ_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CHL_RQ_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TAR_RPM_MAX_BAX_BundleEAFlexrayToAECANFD10msNo1_PT_TAR_RPM_MAX_BAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_RPM_MAX_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TAR_RPM_MIN_BAX_BundleEAFlexrayToAECANFD10msNo1_PT_TAR_RPM_MIN_BAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_RPM_MIN_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_ST_TAR_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_PT_ST_TAR_RPM_BAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ST_TAR_RPM_BAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TAR_STIF_SPCO_BundleEAFlexrayToAECANFD10msNo1_PT_TAR_STIF_SPCO_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_STIF_SPCO_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CRC_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT_CRC_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CRC_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_ALIV_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT_ALIV_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ALIV_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CHL_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT_CHL_RQ_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CHL_RQ_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TAR_RPM_MAX_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT_TAR_RPM_MAX_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_RPM_MAX_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_TAR_RPM_MIN_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT_TAR_RPM_MIN_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_RPM_MIN_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_ST_TAR_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT_ST_TAR_RPM_FTAX_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ST_TAR_RPM_FTAX_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CRC_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_PT_CRC_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CRC_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_ALIV_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_PT_ALIV_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ALIV_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_CHL_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_PT_CHL_StatusSlipThresholds_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CHL_StatusSlipThresholds_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_StatusSlipThresholdsFrontAxle_BundleEAFlexrayToAECANFD10msNo1_PT_StatusSlipThresholdsFrontAxle_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.StatusSlipThresholdsFrontAxle_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st |= Rte_Write_PPort_StatusSlipThresholdsRearAxle_BundleEAFlexrayToAECANFD10msNo1_PT_StatusSlipThresholdsRearAxle_BundleEAFlexrayToAECANFD10msNo1_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.StatusSlipThresholdsRearAxle_phy);

}


/*297*/ /*size:20*/ /*20ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_BundleEAFlexrayToAECANFD20msNo2_PT(void){
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st |= Rte_Write_PPort_CRC_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_PT_CRC_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CRC_ACLNX_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st |= Rte_Write_PPort_ALIV_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_PT_ALIV_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.ALIV_ACLNX_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st |= Rte_Write_PPort_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_PT_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.ACLNX_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st |= Rte_Write_PPort_QU_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_PT_QU_ACLNX_COG_BundleEAFlexrayToAECANFD20msNo2_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.QU_ACLNX_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st |= Rte_Write_PPort_CRC_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_PT_CRC_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CRC_ACLNY_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st |= Rte_Write_PPort_ALIV_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_PT_ALIV_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.ALIV_ACLNY_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st |= Rte_Write_PPort_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_PT_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.ACLNY_COG_phy);
	cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st |= Rte_Write_PPort_QU_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_PT_QU_ACLNY_COG_BundleEAFlexrayToAECANFD20msNo2_PT(cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.QU_ACLNY_COG_phy);

}


/*385*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_BMS_ThermalStatus_PT(void){
	cap_canApiMsg_VCU_BMS_ThermalStatus_PT.CanBUS_st |= Rte_Write_PPort_CRC_VCU_BMS_ThermalStatus_VCU_BMS_ThermalStatus_PT_CRC_VCU_BMS_ThermalStatus_VCU_BMS_ThermalStatus_PT(cap_canApiMsg_VCU_BMS_ThermalStatus_PT.CRC_VCU_BMS_ThermalStatus_phy);
	cap_canApiMsg_VCU_BMS_ThermalStatus_PT.CanBUS_st |= Rte_Write_PPort_ALV_VCU_BMS_ThermalStatus_VCU_BMS_ThermalStatus_PT_ALV_VCU_BMS_ThermalStatus_VCU_BMS_ThermalStatus_PT(cap_canApiMsg_VCU_BMS_ThermalStatus_PT.ALV_VCU_BMS_ThermalStatus_phy);
	cap_canApiMsg_VCU_BMS_ThermalStatus_PT.CanBUS_st |= Rte_Write_PPort_VCU_BMS_ActCoolingSts_VCU_BMS_ThermalStatus_PT_VCU_BMS_ActCoolingSts_VCU_BMS_ThermalStatus_PT(cap_canApiMsg_VCU_BMS_ThermalStatus_PT.VCU_BMS_ActCoolingSts_phy);
	cap_canApiMsg_VCU_BMS_ThermalStatus_PT.CanBUS_st |= Rte_Write_PPort_VCU_BMS_HeatingSts_VCU_BMS_ThermalStatus_PT_VCU_BMS_HeatingSts_VCU_BMS_ThermalStatus_PT(cap_canApiMsg_VCU_BMS_ThermalStatus_PT.VCU_BMS_HeatingSts_phy);

}


/*193*/ /*size:6*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_OBC_Req_PT(void){
	cap_canApiMsg_VCU_OBC_Req_PT.CanBUS_st |= Rte_Write_PPort_VCU_OBC_iLineLimit_VCU_OBC_Req_PT_VCU_OBC_iLineLimit_VCU_OBC_Req_PT(cap_canApiMsg_VCU_OBC_Req_PT.VCU_OBC_iLineLimit_phy);
	cap_canApiMsg_VCU_OBC_Req_PT.CanBUS_st |= Rte_Write_PPort_VCU_OBC_Enable_VCU_OBC_Req_PT_VCU_OBC_Enable_VCU_OBC_Req_PT(cap_canApiMsg_VCU_OBC_Req_PT.VCU_OBC_Enable_phy);
	cap_canApiMsg_VCU_OBC_Req_PT.CanBUS_st |= Rte_Write_PPort_VCU_ChgDirType_VCU_OBC_Req_PT_VCU_ChgDirType_VCU_OBC_Req_PT(cap_canApiMsg_VCU_OBC_Req_PT.VCU_ChgDirType_phy);
	cap_canApiMsg_VCU_OBC_Req_PT.CanBUS_st |= Rte_Write_PPort_VCU_OBC_vOBC_Request_VCU_OBC_Req_PT_VCU_OBC_vOBC_Request_VCU_OBC_Req_PT(cap_canApiMsg_VCU_OBC_Req_PT.VCU_OBC_vOBC_Request_phy);
	cap_canApiMsg_VCU_OBC_Req_PT.CanBUS_st |= Rte_Write_PPort_VCU_OBC_iOBC_Request_VCU_OBC_Req_PT_VCU_OBC_iOBC_Request_VCU_OBC_Req_PT(cap_canApiMsg_VCU_OBC_Req_PT.VCU_OBC_iOBC_Request_phy);

}


/*418*/ /*size:4*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_BMS_ChargingParams_PT(void){
	cap_canApiMsg_VCU_BMS_ChargingParams_PT.CanBUS_st |= Rte_Write_PPort_CRC_VCU_BMS_ChargingParams_VCU_BMS_ChargingParams_PT_CRC_VCU_BMS_ChargingParams_VCU_BMS_ChargingParams_PT(cap_canApiMsg_VCU_BMS_ChargingParams_PT.CRC_VCU_BMS_ChargingParams_phy);
	cap_canApiMsg_VCU_BMS_ChargingParams_PT.CanBUS_st |= Rte_Write_PPort_ALV_VCU_BMS_ChargingParams_VCU_BMS_ChargingParams_PT_ALV_VCU_BMS_ChargingParams_VCU_BMS_ChargingParams_PT(cap_canApiMsg_VCU_BMS_ChargingParams_PT.ALV_VCU_BMS_ChargingParams_phy);
	cap_canApiMsg_VCU_BMS_ChargingParams_PT.CanBUS_st |= Rte_Write_PPort_VCU_TargetASOC_VCU_BMS_ChargingParams_PT_VCU_TargetASOC_VCU_BMS_ChargingParams_PT(cap_canApiMsg_VCU_BMS_ChargingParams_PT.VCU_TargetASOC_phy);

}


/*420*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_BMS_ChargingControl_PT(void){
	cap_canApiMsg_VCU_BMS_ChargingControl_PT.CanBUS_st |= Rte_Write_PPort_CRC_VCU_BMS_ChargingControl_VCU_BMS_ChargingControl_PT_CRC_VCU_BMS_ChargingControl_VCU_BMS_ChargingControl_PT(cap_canApiMsg_VCU_BMS_ChargingControl_PT.CRC_VCU_BMS_ChargingControl_phy);
	cap_canApiMsg_VCU_BMS_ChargingControl_PT.CanBUS_st |= Rte_Write_PPort_ALV_VCU_BMS_ChargingControl_VCU_BMS_ChargingControl_PT_ALV_VCU_BMS_ChargingControl_VCU_BMS_ChargingControl_PT(cap_canApiMsg_VCU_BMS_ChargingControl_PT.ALV_VCU_BMS_ChargingControl_phy);
	cap_canApiMsg_VCU_BMS_ChargingControl_PT.CanBUS_st |= Rte_Write_PPort_VCU_BMS_InsulationMonReq_VCU_BMS_ChargingControl_PT_VCU_BMS_InsulationMonReq_VCU_BMS_ChargingControl_PT(cap_canApiMsg_VCU_BMS_ChargingControl_PT.VCU_BMS_InsulationMonReq_phy);
	cap_canApiMsg_VCU_BMS_ChargingControl_PT.CanBUS_st |= Rte_Write_PPort_VCU_BMS_ChargeAllow_VCU_BMS_ChargingControl_PT_VCU_BMS_ChargeAllow_VCU_BMS_ChargingControl_PT(cap_canApiMsg_VCU_BMS_ChargingControl_PT.VCU_BMS_ChargeAllow_phy);

}


/*433*/ /*size:2*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_BMS_HVCoordination_PT(void){
	cap_canApiMsg_VCU_BMS_HVCoordination_PT.CanBUS_st |= Rte_Write_PPort_CRC_VCU_BMS_HVCoordination_VCU_BMS_HVCoordination_PT_CRC_VCU_BMS_HVCoordination_VCU_BMS_HVCoordination_PT(cap_canApiMsg_VCU_BMS_HVCoordination_PT.CRC_VCU_BMS_HVCoordination_phy);
	cap_canApiMsg_VCU_BMS_HVCoordination_PT.CanBUS_st |= Rte_Write_PPort_ALV_VCU_BMS_HVCoordination_VCU_BMS_HVCoordination_PT_ALV_VCU_BMS_HVCoordination_VCU_BMS_HVCoordination_PT(cap_canApiMsg_VCU_BMS_HVCoordination_PT.ALV_VCU_BMS_HVCoordination_phy);
	cap_canApiMsg_VCU_BMS_HVCoordination_PT.CanBUS_st |= Rte_Write_PPort_VCU_BMS_HVOnOffReq_VCU_BMS_HVCoordination_PT_VCU_BMS_HVOnOffReq_VCU_BMS_HVCoordination_PT(cap_canApiMsg_VCU_BMS_HVCoordination_PT.VCU_BMS_HVOnOffReq_phy);

}


/*490*/ /*size:8*/ /*300ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_Kilometerstand_2_PT(void){
	cap_canApiMsg_Kilometerstand_2_PT.CanBUS_st |= Rte_Write_PPort_MILE_KM_TOT_Kilometerstand_2_PT_MILE_KM_TOT_Kilometerstand_2_PT(cap_canApiMsg_Kilometerstand_2_PT.MILE_KM_TOT_phy);

}


/*197*/ /*size:8*/ /*10ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_VCU_DCDC_Req_PT(void){
	cap_canApiMsg_VCU_DCDC_Req_PT.CanBUS_st |= Rte_Write_PPort_VCU_EnableDCDC_VCU_DCDC_Req_PT_VCU_EnableDCDC_VCU_DCDC_Req_PT(cap_canApiMsg_VCU_DCDC_Req_PT.VCU_EnableDCDC_phy);
	cap_canApiMsg_VCU_DCDC_Req_PT.CanBUS_st |= Rte_Write_PPort_VCU_OutVltgReq_VCU_DCDC_Req_PT_VCU_OutVltgReq_VCU_DCDC_Req_PT(cap_canApiMsg_VCU_DCDC_Req_PT.VCU_OutVltgReq_phy);
	cap_canApiMsg_VCU_DCDC_Req_PT.CanBUS_st |= Rte_Write_PPort_VCU_OutCurReq_VCU_DCDC_Req_PT_VCU_OutCurReq_VCU_DCDC_Req_PT(cap_canApiMsg_VCU_DCDC_Req_PT.VCU_OutCurReq_phy);

}


/*532*/ /*size:8*/ /*50ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_ParkByWire50msNo1_PT(void){
	cap_canApiMsg_ParkByWire50msNo1_PT.CanBUS_st |= Rte_Write_PPort_CRC_ParkByWire50msNo1_ParkByWire50msNo1_PT_CRC_ParkByWire50msNo1_ParkByWire50msNo1_PT(cap_canApiMsg_ParkByWire50msNo1_PT.CRC_ParkByWire50msNo1_phy);
	cap_canApiMsg_ParkByWire50msNo1_PT.CanBUS_st |= Rte_Write_PPort_ALIV_ParkByWire50msNo1_ParkByWire50msNo1_PT_ALIV_ParkByWire50msNo1_ParkByWire50msNo1_PT(cap_canApiMsg_ParkByWire50msNo1_PT.ALIV_ParkByWire50msNo1_phy);
	cap_canApiMsg_ParkByWire50msNo1_PT.CanBUS_st |= Rte_Write_PPort_CHL_ParkByWire50msNo1_ParkByWire50msNo1_PT_CHL_ParkByWire50msNo1_ParkByWire50msNo1_PT(cap_canApiMsg_ParkByWire50msNo1_PT.CHL_ParkByWire50msNo1_phy);
	cap_canApiMsg_ParkByWire50msNo1_PT.CanBUS_st |= Rte_Write_PPort_RequestParkByWireHeat_ParkByWire50msNo1_PT_RequestParkByWireHeat_ParkByWire50msNo1_PT(cap_canApiMsg_ParkByWire50msNo1_PT.RequestParkByWireHeat_phy);

}


/*630*/ /*size:8*/ /*5000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_FZZSTD_PT(void){
	cap_canApiMsg_FZZSTD_PT.CanBUS_st |= Rte_Write_PPort_ST_ENERG_FZM_FZZSTD_PT_ST_ENERG_FZM_FZZSTD_PT(cap_canApiMsg_FZZSTD_PT.ST_ENERG_FZM_phy);
	cap_canApiMsg_FZZSTD_PT.CanBUS_st |= Rte_Write_PPort_ST_ILK_ERRM_FZM_FZZSTD_PT_ST_ILK_ERRM_FZM_FZZSTD_PT(cap_canApiMsg_FZZSTD_PT.ST_ILK_ERRM_FZM_phy);

}


/*632*/ /*size:8*/ /*5000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_STAT_ANHAENGER_PT(void){
	cap_canApiMsg_STAT_ANHAENGER_PT.CanBUS_st |= Rte_Write_PPort_ST_TRAI_STAT_ANHAENGER_PT_ST_TRAI_STAT_ANHAENGER_PT(cap_canApiMsg_STAT_ANHAENGER_PT.ST_TRAI_phy);

}


/*749*/ /*size:2*/ /*1000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_A_TEMP_PT(void){
	cap_canApiMsg_A_TEMP_PT.CanBUS_st |= Rte_Write_PPort_TEMP_EX_A_TEMP_PT_TEMP_EX_A_TEMP_PT(cap_canApiMsg_A_TEMP_PT.TEMP_EX_phy);

}


/*811*/ /*size:24*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_DMEBK100_PT(void){
	cap_canApiMsg_DMEBK100_PT.CanBUS_st |= Rte_Write_PPort_ActValVolFlowCoolantETractSys2_DMEBK100_PT_ActValVolFlowCoolantETractSys2_DMEBK100_PT(cap_canApiMsg_DMEBK100_PT.ActValVolFlowCoolantETractSys2_phy);
	cap_canApiMsg_DMEBK100_PT.CanBUS_st |= Rte_Write_PPort_ActValVolFlowCoolantETractSys1_DMEBK100_PT_ActValVolFlowCoolantETractSys1_DMEBK100_PT(cap_canApiMsg_DMEBK100_PT.ActValVolFlowCoolantETractSys1_phy);

}


/*832*/ /*size:12*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_CombinedChargerUnit100msNo1_PT(void){
	cap_canApiMsg_CombinedChargerUnit100msNo1_PT.CanBUS_st |= Rte_Write_PPort_CRC_CombinedChargerUnit100msNo1_CombinedChargerUnit100msNo1_PT_CRC_CombinedChargerUnit100msNo1_CombinedChargerUnit100msNo1_PT(cap_canApiMsg_CombinedChargerUnit100msNo1_PT.CRC_CombinedChargerUnit100msNo1_phy);
	cap_canApiMsg_CombinedChargerUnit100msNo1_PT.CanBUS_st |= Rte_Write_PPort_ALIV_CombinedChargerUnit100msNo1_CombinedChargerUnit100msNo1_PT_ALIV_CombinedChargerUnit100msNo1_CombinedChargerUnit100msNo1_PT(cap_canApiMsg_CombinedChargerUnit100msNo1_PT.ALIV_CombinedChargerUnit100msNo1_phy);
	cap_canApiMsg_CombinedChargerUnit100msNo1_PT.CanBUS_st |= Rte_Write_PPort_RequestPowerETractSys1Loss_CombinedChargerUnit100msNo1_PT_RequestPowerETractSys1Loss_CombinedChargerUnit100msNo1_PT(cap_canApiMsg_CombinedChargerUnit100msNo1_PT.RequestPowerETractSys1Loss_phy);
	cap_canApiMsg_CombinedChargerUnit100msNo1_PT.CanBUS_st |= Rte_Write_PPort_RequestPowerETractSys2Loss_CombinedChargerUnit100msNo1_PT_RequestPowerETractSys2Loss_CombinedChargerUnit100msNo1_PT(cap_canApiMsg_CombinedChargerUnit100msNo1_PT.RequestPowerETractSys2Loss_phy);

}


/*896*/ /*size:7*/ /*0ms*/ /*NoMsgSendType*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_FAHRGESTELLNUMMER_PT(void){
	cap_canApiMsg_FAHRGESTELLNUMMER_PT.CanBUS_st |= Rte_Write_PPort_NO_VECH_1_FAHRGESTELLNUMMER_PT_NO_VECH_1_FAHRGESTELLNUMMER_PT(cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_1_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_PT.CanBUS_st |= Rte_Write_PPort_NO_VECH_2_FAHRGESTELLNUMMER_PT_NO_VECH_2_FAHRGESTELLNUMMER_PT(cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_2_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_PT.CanBUS_st |= Rte_Write_PPort_NO_VECH_3_FAHRGESTELLNUMMER_PT_NO_VECH_3_FAHRGESTELLNUMMER_PT(cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_3_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_PT.CanBUS_st |= Rte_Write_PPort_NO_VECH_4_FAHRGESTELLNUMMER_PT_NO_VECH_4_FAHRGESTELLNUMMER_PT(cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_4_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_PT.CanBUS_st |= Rte_Write_PPort_NO_VECH_5_FAHRGESTELLNUMMER_PT_NO_VECH_5_FAHRGESTELLNUMMER_PT(cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_5_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_PT.CanBUS_st |= Rte_Write_PPort_NO_VECH_6_FAHRGESTELLNUMMER_PT_NO_VECH_6_FAHRGESTELLNUMMER_PT(cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_6_phy);
	cap_canApiMsg_FAHRGESTELLNUMMER_PT.CanBUS_st |= Rte_Write_PPort_NO_VECH_7_FAHRGESTELLNUMMER_PT_NO_VECH_7_FAHRGESTELLNUMMER_PT(cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_7_phy);

}


/*911*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_TLT_RW_PT(void){
	cap_canApiMsg_TLT_RW_PT.CanBUS_st |= Rte_Write_PPort_CRC_TLT_RW_TLT_RW_PT_CRC_TLT_RW_TLT_RW_PT(cap_canApiMsg_TLT_RW_PT.CRC_TLT_RW_phy);
	cap_canApiMsg_TLT_RW_PT.CanBUS_st |= Rte_Write_PPort_ALIV_TLT_RW_TLT_RW_PT_ALIV_TLT_RW_TLT_RW_PT(cap_canApiMsg_TLT_RW_PT.ALIV_TLT_RW_phy);
	cap_canApiMsg_TLT_RW_PT.CanBUS_st |= Rte_Write_PPort_AVL_LOGR_RW_TLT_RW_PT_AVL_LOGR_RW_TLT_RW_PT(cap_canApiMsg_TLT_RW_PT.AVL_LOGR_RW_phy);
	cap_canApiMsg_TLT_RW_PT.CanBUS_st |= Rte_Write_PPort_QU_AVL_LOGR_RW_TLT_RW_PT_QU_AVL_LOGR_RW_TLT_RW_PT(cap_canApiMsg_TLT_RW_PT.QU_AVL_LOGR_RW_phy);

}


/*1052*/ /*size:8*/ /*10000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_KILOMETERSTAND_PT(void){
	cap_canApiMsg_KILOMETERSTAND_PT.CanBUS_st |= Rte_Write_PPort_MILE_KM_KILOMETERSTAND_PT_MILE_KM_KILOMETERSTAND_PT(cap_canApiMsg_KILOMETERSTAND_PT.MILE_KM_phy);

}


/*1090*/ /*size:6*/ /*1000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_RELATIVZEIT_PT(void){
	cap_canApiMsg_RELATIVZEIT_PT.CanBUS_st |= Rte_Write_PPort_T_SEC_COU_REL_RELATIVZEIT_PT_T_SEC_COU_REL_RELATIVZEIT_PT(cap_canApiMsg_RELATIVZEIT_PT.T_SEC_COU_REL_phy);

}


/*1120*/ /*size:8*/ /*200ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_EnergyStorageMeasurementValues_PT(void){
	cap_canApiMsg_EnergyStorageMeasurementValues_PT.CanBUS_st |= Rte_Write_PPort_EnergyStorageClamp30VoltageValue_EnergyStorageMeasurementValues_PT_EnergyStorageClamp30VoltageValue_EnergyStorageMeasurementValues_PT(cap_canApiMsg_EnergyStorageMeasurementValues_PT.EnergyStorageClamp30VoltageValue_phy);

}


/*1272*/ /*size:24*/ /*1000ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_CombinedChargerUnit1000msNo1_PT(void){
	cap_canApiMsg_CombinedChargerUnit1000msNo1_PT.CanBUS_st |= Rte_Write_PPort_TemperatureCoolantOutput_CombinedChargerUnit1000msNo1_PT_TemperatureCoolantOutput_CombinedChargerUnit1000msNo1_PT(cap_canApiMsg_CombinedChargerUnit1000msNo1_PT.TemperatureCoolantOutput_phy);

}


/*1296*/ /*size:8*/ /*100ms*/ /*Cyclic*/ /*PT*/ /*SentMsg */
void cap_setTxSignals_Networkmanagement3_PT(void){
	cap_canApiMsg_Networkmanagement3_PT.CanBUS_st |= Rte_Write_PPort_NM3ControlBitVector_Networkmanagement3_PT_NM3ControlBitVector_Networkmanagement3_PT(cap_canApiMsg_Networkmanagement3_PT.NM3ControlBitVector_phy);
	cap_canApiMsg_Networkmanagement3_PT.CanBUS_st |= Rte_Write_PPort_NM3SenderECUId_Networkmanagement3_PT_NM3SenderECUId_Networkmanagement3_PT(cap_canApiMsg_Networkmanagement3_PT.NM3SenderECUId_phy);
	cap_canApiMsg_Networkmanagement3_PT.CanBUS_st |= Rte_Write_PPort_NM3BasePartialNetworks_Networkmanagement3_PT_NM3BasePartialNetworks_Networkmanagement3_PT(cap_canApiMsg_Networkmanagement3_PT.NM3BasePartialNetworks_phy);
	cap_canApiMsg_Networkmanagement3_PT.CanBUS_st |= Rte_Write_PPort_NM3FunctionalPartialNetworks_Networkmanagement3_PT_NM3FunctionalPartialNetworks_Networkmanagement3_PT(cap_canApiMsg_Networkmanagement3_PT.NM3FunctionalPartialNetworks_phy);

}

void cap_canApi_Init(){
	(void)Rte_Switch_PPort_NetworkRequest_RequestMode(RTE_MODE_Com_Request_FULL_COM);
/*881*//*SentMsg*/
cap_canApiMsg_VCU_WarnMsg_BCAN.CanBUS_st = 0; 
cap_canApiMsg_VCU_WarnMsg_BCAN.raw_data[5];
cap_canApiMsg_VCU_WarnMsg_BCAN.CRC_VCU_WarnMsg_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.ALV_VCU_WarnMsg_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_GearPAtStationaryOnly_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_GearPNotPossible_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_PressBreakToEngageGear_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_CantChangeGear_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_MotorCoolantPumpErr_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_EmergencyShutdown_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_HeatLoopTempSensorErr_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_GearMalfunc_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_CoolingTempExceedLimit_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_TransmissionMalfunction_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_ParkLockNotEngaged_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_CoolantTempHigh_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_CheckDriveTrain_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_OBCTempHigh_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_DCDC_TempHigh_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_ChargingInletTempHigh_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_HVILErr_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_Limphome_phy = 0x00;
cap_canApiMsg_VCU_WarnMsg_BCAN.VCU_HVSystemReduced_phy = 0x00;

/*433*//*SentMsg*/
cap_canApiMsg_VCU_StatusDCDC_BCAN.CanBUS_st = 0; 
cap_canApiMsg_VCU_StatusDCDC_BCAN.raw_data[12];
cap_canApiMsg_VCU_StatusDCDC_BCAN.CRC_VCU_StatusDCDC_phy = 0x00;
cap_canApiMsg_VCU_StatusDCDC_BCAN.ALV_VCU_StatusDCDC_phy = 0x00;
cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_status_phy = 0x00;
cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_maxCurrentOut_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_iOutput_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_vDCInput_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_VCU_StatusDCDC_BCAN.DCDC_vOutput_phy = 0x00; /*fact:0.0625//offset:0.0*/

/*498*//*SentMsg*/
cap_canApiMsg_VCU_MHU_info_BCAN.CanBUS_st = 0; 
cap_canApiMsg_VCU_MHU_info_BCAN.raw_data[7];
cap_canApiMsg_VCU_MHU_info_BCAN.CRC_VCU_MHU_info_phy = 0x00;
cap_canApiMsg_VCU_MHU_info_BCAN.ALV_VCU_MHU_info_phy = 0x00;
cap_canApiMsg_VCU_MHU_info_BCAN.VCU_CurPwrConsum_phy = 0x00;
cap_canApiMsg_VCU_MHU_info_BCAN.VCU_RemainingRange_phy = 0x00; /*fact:0.5//offset:0.0*/
cap_canApiMsg_VCU_MHU_info_BCAN.VCU_ChgGun_Status_phy = 0x00;
cap_canApiMsg_VCU_MHU_info_BCAN.VCU_BattChargingStatus_phy = 0x00;
cap_canApiMsg_VCU_MHU_info_BCAN.VCU_VehChg_STS_phy = 0x00;
cap_canApiMsg_VCU_MHU_info_BCAN.VCU_ChgGunConnStatus_phy = 0x00;
cap_canApiMsg_VCU_MHU_info_BCAN.VCU_BattSOC_phy = 0x00; /*fact:0.1//offset:0.0*/

/*151*//*SentMsg*/
cap_canApiMsg_VCU_HVsystem_status_BCAN.CanBUS_st = 0; 
cap_canApiMsg_VCU_HVsystem_status_BCAN.raw_data[6];
cap_canApiMsg_VCU_HVsystem_status_BCAN.CRC_VCU_HVsystem_status_phy = 0x00;
cap_canApiMsg_VCU_HVsystem_status_BCAN.ALIV_VCU_HVsystem_status_phy = 0x00;
cap_canApiMsg_VCU_HVsystem_status_BCAN.VCU_RunningRange_chrg_estSts_phy = 0x00;
cap_canApiMsg_VCU_HVsystem_status_BCAN.VCU_HVbatSoc_charged_estStatus_phy = 0x00;
cap_canApiMsg_VCU_HVsystem_status_BCAN.VCU_RunningRange_charged_phy = 0x00; /*fact:0.5//offset:0.0*/
cap_canApiMsg_VCU_HVsystem_status_BCAN.VCU_HVbatSoc_charged_phy = 0x00; /*fact:0.1//offset:0.0*/

/*273*//*SentMsg*/
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CanBUS_st = 0; 
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.raw_data[6];
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.CRC_VCU_HV_DrvSys_status_phy = 0x00;
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.ALV_VCU_HV_DrvSys_bstatus_phy = 0x00;
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_HV_SystemStatus_phy = 0x00;
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_HV_DrvSystemStatus_phy = 0x00;
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACT_Gear_phy = 0x00;
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACT_GearValid_phy = 0x00;
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACPD_Percent_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACPD_Percent_Valid_phy = 0x00;
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACT_DriveMode_phy = 0x00;
cap_canApiMsg_VCU_HV_DrvSys_status_BCAN.VCU_ACT_DriveModeValid_phy = 0x00;

/*277*//*SentMsg*/
cap_canApiMsg_VCU_ChargingConnection_BCAN.CanBUS_st = 0; 
cap_canApiMsg_VCU_ChargingConnection_BCAN.raw_data[5];
cap_canApiMsg_VCU_ChargingConnection_BCAN.CRC_VCU_ChargingConnection_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnection_BCAN.ALV_VCU_ChargingConnection_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_DCChgGunIn_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_AcChgGunIn_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_CPValue_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_ACChargingVoltage_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnection_BCAN.VCU_MaxCurrentOfACCharging_phy = 0x00;

/*882*//*SentMsg*/
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CanBUS_st = 0; 
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.raw_data[8];
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.CHSKM_VCU_Batt_WarnMsg_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.ALV_VCU_Batt_WarnMsg_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_PackTempSts_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_ThermalRunaway_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_CellTempErr_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_HVILErr_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_PackInsuErr_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_MalfunctionSts_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_LowBattery_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_FuseStatusErr_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_CellVoltErr_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_PackVolErr_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_PackOverCurrErr_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal1_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal2_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal3_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal4_phy = 0x00;
cap_canApiMsg_VCU_Batt_WarnMsg_BCAN.BMS_Reserved_signal5_phy = 0x00;

/*514*//*SentMsg*/
cap_canApiMsg_VCU_Batt_Info_BCAN.CanBUS_st = 0; 
cap_canApiMsg_VCU_Batt_Info_BCAN.raw_data[16];
cap_canApiMsg_VCU_Batt_Info_BCAN.CRC_VCU_Batt_Info_phy = 0x00;
cap_canApiMsg_VCU_Batt_Info_BCAN.ALV_VCU_Batt_Info_phy = 0x00;
cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_PackCur_phy = 0x00; /*fact:0.1//offset:-1500.0*/
cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_PackVoltage_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_PackTemp_phy = 0x00; /*fact:1.0//offset:-40.0*/
cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_RemainChargeTime_phy = 0x00;
cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_ChargingVoltage_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_VCU_Batt_Info_BCAN.BMS_ChargingCurrent_phy = 0x00; /*fact:0.1//offset:0.0*/

/*632*//*ReceivedMsg */
cap_canApiMsg_STAT_ANHAENGER_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_STAT_ANHAENGER_BCAN.msg_tout = 0; 
cap_canApiMsg_STAT_ANHAENGER_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_STAT_ANHAENGER_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_STAT_ANHAENGER_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_STAT_ANHAENGER_BCAN.raw_data[8];
cap_canApiMsg_STAT_ANHAENGER_BCAN.ST_TRAI_phy = 0x00;

/*407*//*ReceivedMsg */
cap_canApiMsg_ST_GWS_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_ST_GWS_BCAN.msg_tout = 0; 
cap_canApiMsg_ST_GWS_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_ST_GWS_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_ST_GWS_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_ST_GWS_BCAN.raw_data[4];
cap_canApiMsg_ST_GWS_BCAN.CRC_ST_GWS_phy = 0x00;
cap_canApiMsg_ST_GWS_BCAN.ALIV_ST_GWS_phy = 0x00;
cap_canApiMsg_ST_GWS_BCAN.OP_GWS_phy = 0x00;
cap_canApiMsg_ST_GWS_BCAN.OP_GWS_PUBU_PKG_phy = 0x00;

/*1090*//*ReceivedMsg */
cap_canApiMsg_RELATIVZEIT_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_RELATIVZEIT_BCAN.msg_tout = 0; 
cap_canApiMsg_RELATIVZEIT_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_RELATIVZEIT_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_RELATIVZEIT_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_RELATIVZEIT_BCAN.raw_data[4];
cap_canApiMsg_RELATIVZEIT_BCAN.T_SEC_COU_REL_phy = 0x00;

/*816*//*ReceivedMsg */
cap_canApiMsg_KILOMETERSTAND_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_KILOMETERSTAND_BCAN.msg_tout = 0; 
cap_canApiMsg_KILOMETERSTAND_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_KILOMETERSTAND_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_KILOMETERSTAND_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_KILOMETERSTAND_BCAN.raw_data[8];
cap_canApiMsg_KILOMETERSTAND_BCAN.MILE_KM_phy = 0x00;

/*1107*//*SentMsg*/
cap_canApiMsg_HighVoltageStorage200msNo1_BCAN.CanBUS_st = 0; 
cap_canApiMsg_HighVoltageStorage200msNo1_BCAN.raw_data[8];
cap_canApiMsg_HighVoltageStorage200msNo1_BCAN.StatusServiceDisconnectionPlug_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_BCAN.StsDisconnectingSwtHighVoltStorg_phy = 0x00;

/*143*//*SentMsg*/
cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.CanBUS_st = 0; 
cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.raw_data[48];
cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.CRC_HighVoltageStorage10msNo2_phy = 0x00;
cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.ALIV_HighVoltageStorage10msNo2_phy = 0x00;
cap_canApiMsg_HighVoltageStorage10msNo2_BCAN.ActualValueVoltageLinkVerified_phy = 0x00; /*fact:0.25//offset:0.0*/

/*630*//*ReceivedMsg */
cap_canApiMsg_FZZSTD_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_FZZSTD_BCAN.msg_tout = 0; 
cap_canApiMsg_FZZSTD_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_FZZSTD_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_FZZSTD_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_FZZSTD_BCAN.raw_data[8];
cap_canApiMsg_FZZSTD_BCAN.ST_ENERG_FZM_phy = 0x00;
cap_canApiMsg_FZZSTD_BCAN.ST_ILK_ERRM_FZM_phy = 0x00;

/*451*//*ReceivedMsg */
cap_canApiMsg_FZU_ChargingControl_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_FZU_ChargingControl_BCAN.msg_tout = 0; 
cap_canApiMsg_FZU_ChargingControl_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_FZU_ChargingControl_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_FZU_ChargingControl_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_FZU_ChargingControl_BCAN.raw_data[1];
cap_canApiMsg_FZU_ChargingControl_BCAN.FZU_ChargingStopReq_phy = 0x00;

/*896*//*ReceivedMsg */
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.msg_tout = 0; 
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.raw_data[7];
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_1_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_2_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_3_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_4_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_5_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_6_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_BCAN.NO_VECH_7_phy = 0x00;

/*146*//*ReceivedMsg */
cap_canApiMsg_ERRM_BN_U_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_ERRM_BN_U_BCAN.msg_tout = 0; 
cap_canApiMsg_ERRM_BN_U_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_ERRM_BN_U_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_ERRM_BN_U_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_ERRM_BN_U_BCAN.raw_data[2];
cap_canApiMsg_ERRM_BN_U_BCAN.CTR_ERRM_BN_U_phy = 0x00;

/*1021*//*SentMsg*/
cap_canApiMsg_DT_DISP_GRDT_BCAN.CanBUS_st = 0; 
cap_canApiMsg_DT_DISP_GRDT_BCAN.raw_data[5];
cap_canApiMsg_DT_DISP_GRDT_BCAN.CRC_DT_DISP_GRDT_phy = 0x00;
cap_canApiMsg_DT_DISP_GRDT_BCAN.ALIV_DT_DISP_GRDT_phy = 0x00;
cap_canApiMsg_DT_DISP_GRDT_BCAN.DISP_PRG_GRB_phy = 0x00;
cap_canApiMsg_DT_DISP_GRDT_BCAN.DISP_PO_IDC_GRB_phy = 0x00;
cap_canApiMsg_DT_DISP_GRDT_BCAN.DISP_PO_GRB_phy = 0x00;

/*60*//*ReceivedMsg */
cap_canApiMsg_CON_VEH_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_CON_VEH_BCAN.msg_tout = 0; 
cap_canApiMsg_CON_VEH_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_CON_VEH_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_CON_VEH_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_CON_VEH_BCAN.raw_data[8];
cap_canApiMsg_CON_VEH_BCAN.CRC_CON_VEH_phy = 0x00;
cap_canApiMsg_CON_VEH_BCAN.ALIV_CON_VEH_phy = 0x00;
cap_canApiMsg_CON_VEH_BCAN.CTR_BS_PRTNT_phy = 0x00;
cap_canApiMsg_CON_VEH_BCAN.CTR_FKTN_PRTNT_phy = 0x00;
cap_canApiMsg_CON_VEH_BCAN.ST_CON_VEH_phy = 0x00;
cap_canApiMsg_CON_VEH_BCAN.QU_ST_CON_VEH_phy = 0x00;

/*293*//*SentMsg*/
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.CanBUS_st = 0; 
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.raw_data[20];
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.PowerETractSys2LimMotMax_phy = 0x00; /*fact:50.0//offset:-1638300.0*/
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.PowerETractSys1LimGenMax_phy = 0x00; /*fact:50.0//offset:-1638300.0*/
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.PowerETractSys2LimGenMax_phy = 0x00; /*fact:50.0//offset:-1638300.0*/
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.PowerETractSys1LimMotMax_phy = 0x00; /*fact:50.0//offset:-1638300.0*/
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.OperatingModeEANActualValue_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.RequestExtraBoostETractSys1_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN.RequestExtraBoostETractSys2_phy = 0x00;

/*749*//*ReceivedMsg */
cap_canApiMsg_A_TEMP_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_A_TEMP_BCAN.msg_tout = 0; 
cap_canApiMsg_A_TEMP_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_A_TEMP_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_A_TEMP_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_A_TEMP_BCAN.raw_data[2];
cap_canApiMsg_A_TEMP_BCAN.TEMP_EX_phy = 0x00; /*fact:0.5//offset:-40.0*/

/*490*//*ReceivedMsg */
cap_canApiMsg_Kilometerstand_2_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_Kilometerstand_2_BCAN.msg_tout = 0; 
cap_canApiMsg_Kilometerstand_2_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_Kilometerstand_2_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_Kilometerstand_2_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_Kilometerstand_2_BCAN.raw_data[8];
cap_canApiMsg_Kilometerstand_2_BCAN.MILE_KM_TOT_phy = 0x00; /*fact:0.001//offset:0.0*/

/*314*//*SentMsg*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_BCAN.CanBUS_st = 0; 
cap_canApiMsg_TracEMacElectc1Time100msNo1_BCAN.raw_data[32];
cap_canApiMsg_TracEMacElectc1Time100msNo1_BCAN.OpModETractSys1ActVal_phy = 0x00;

/*326*//*SentMsg*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_BCAN.CanBUS_st = 0; 
cap_canApiMsg_TracEMacElectc2Time100msNo1_BCAN.raw_data[32];
cap_canApiMsg_TracEMacElectc2Time100msNo1_BCAN.OpModETractSys2ActVal_phy = 0x00;

/*497*//*ReceivedMsg */
cap_canApiMsg_CLAMP_STAT_BCAN.bRxDataRdyFlg = 0;
cap_canApiMsg_CLAMP_STAT_BCAN.msg_tout = 0; 
cap_canApiMsg_CLAMP_STAT_BCAN.Rxcounter_err = 0; 
cap_canApiMsg_CLAMP_STAT_BCAN.Rxcrc_err = 0; 
cap_canApiMsg_CLAMP_STAT_BCAN.RxNever_received = TRUE; 
cap_canApiMsg_CLAMP_STAT_BCAN.raw_data[3];
cap_canApiMsg_CLAMP_STAT_BCAN.CRC_CLAMP_STAT_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_BCAN.ALIV_CLAMP_STAT_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_BCAN.STAT_CL15_L_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_BCAN.STAT_CL30S_L_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_BCAN.STAT_CL30S_Light_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_BCAN.STAT_CL15_WUPL_phy = 0x00;

/*497*//*ReceivedMsg */
cap_canApiMsg_CLAMP_STAT_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_CLAMP_STAT_CHS1.msg_tout = 0; 
cap_canApiMsg_CLAMP_STAT_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_CLAMP_STAT_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_CLAMP_STAT_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_CLAMP_STAT_CHS1.raw_data[3];
cap_canApiMsg_CLAMP_STAT_CHS1.CRC_CLAMP_STAT_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS1.ALIV_CLAMP_STAT_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS1.STAT_CL15_L_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS1.STAT_CL30S_L_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS1.STAT_CL30S_Light_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS1.STAT_CL15_WUPL_phy = 0x00;

/*200*//*ReceivedMsg */
cap_canApiMsg_ESC_A_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_ESC_A_CHS1.msg_tout = 0; 
cap_canApiMsg_ESC_A_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_ESC_A_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_ESC_A_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_ESC_A_CHS1.raw_data[4];
cap_canApiMsg_ESC_A_CHS1.AD3_PrsrVal_Fl_phy = 0x00;
cap_canApiMsg_ESC_A_CHS1.AD3_PrsrVal_Fr_phy = 0x00;
cap_canApiMsg_ESC_A_CHS1.AD3_PrsrVal_Rl_phy = 0x00;
cap_canApiMsg_ESC_A_CHS1.AD3_PrsrVal_Rr_phy = 0x00;

/*170*//*SentMsg*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CanBUS_st = 0; 
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.raw_data[12];
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.CRC_TractionEMachine2_10ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.ALIV_TractionEMachine2_10ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.RpmEmETractSys2ActualValue_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.TorqueEmETractSys2GeneratorDyn_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.TorqueEmETractSys2MotorDyn_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.TorqueEmETractSys2ActualValue_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1.QualifierRpmEmETractSys2ActVal_phy = 0x00;

/*145*//*SentMsg*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CanBUS_st = 0; 
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.raw_data[16];
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.CRC_TractionEMachine1_10ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.ALIV_TractionEMachine1_10ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.RpmEmETractSys1ActualValue_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.TorqueEmETractSys1GeneratorDyn_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.TorqueEmETractSys1MotorDyn_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.TorqueEmETractSys1ActualValue_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1.QualifierRpmEmETractSys1ActVal_phy = 0x00;

/*326*//*SentMsg*/
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.CanBUS_st = 0; 
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.raw_data[8];
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.CRC_TractionEMachine2_100ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.ALIV_TractionEMachine2_100ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1.WheelRatioEAxlEtractSys2ActVal_phy = 0x00; /*fact:0.001//offset:0.0*/

/*314*//*SentMsg*/
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.CanBUS_st = 0; 
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.raw_data[8];
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.CRC_TractionEMachine1_100ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.ALIV_TractionEMachine1_100ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1.WheelRatioEAxlEtractSys1ActVal_phy = 0x00; /*fact:0.001//offset:0.0*/

/*300*//*SentMsg*/
cap_canApiMsg_VCU_Status_CHS1.CanBUS_st = 0; 
cap_canApiMsg_VCU_Status_CHS1.raw_data[8];
cap_canApiMsg_VCU_Status_CHS1.CRC_VCU_Status_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS1.ALIV_VCU_Status_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS1.VCU_ACPD_Percent_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_VCU_Status_CHS1.VCU_ACPD_Percent_Valid_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS1.VCU_ACT_Gear_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS1.VCU_ACT_GearValid_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS1.VCU_ACT_DriveMode_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS1.VCU_ACT_DriveModeValid_phy = 0x00;

/*275*//*SentMsg*/
cap_canApiMsg_VCU_HV_Status_CHS1.CanBUS_st = 0; 
cap_canApiMsg_VCU_HV_Status_CHS1.raw_data[2];
cap_canApiMsg_VCU_HV_Status_CHS1.CRC_VCU_HV_Status_phy = 0x00;
cap_canApiMsg_VCU_HV_Status_CHS1.ALIV_VCU_HV_Status_phy = 0x00;
cap_canApiMsg_VCU_HV_Status_CHS1.VCU_VehicleHVStatus_phy = 0x00;

/*138*//*SentMsg*/
cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.CanBUS_st = 0; 
cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.raw_data[8];
cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.CRC_VCU_CombinedChargerUnit_phy = 0x00;
cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.ALIV_VCU_CombinedChargerUnit_phy = 0x00;
cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.TargetTorqueEmETractSys1_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_CombinedChargerUnit_CHS1.TargetTorqueEmETractSys2_phy = 0x00; /*fact:0.5//offset:-1023.0*/

/*180*//*ReceivedMsg */
cap_canApiMsg_ABS_ESC_01_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_ABS_ESC_01_CHS1.msg_tout = 0; 
cap_canApiMsg_ABS_ESC_01_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_ABS_ESC_01_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_ABS_ESC_01_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_ABS_ESC_01_CHS1.raw_data[1];
cap_canApiMsg_ABS_ESC_01_CHS1.ABS_ACTIVE_phy = 0x00;

/*210*//*ReceivedMsg */
cap_canApiMsg_IEB_01_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_IEB_01_CHS1.msg_tout = 0; 
cap_canApiMsg_IEB_01_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_IEB_01_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_IEB_01_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_IEB_01_CHS1.raw_data[2];
cap_canApiMsg_IEB_01_CHS1.WEstTot_Nm_phy = 0x00;

/*140*//*ReceivedMsg */
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.msg_tout = 0; 
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.raw_data[5];
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.CRC_EBCM_ACC_LONG_LAT_YAW_phy = 0x00;
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.ALIV_EBCM_ACC_LONG_LAT_YAW_phy = 0x00;
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.VYAW_VEH_phy = 0x00; /*fact:0.005//offset:-163.84*/
cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1.QU_VYAW_VEH_phy = 0x00;

/*150*//*ReceivedMsg */
cap_canApiMsg_EBCM_STATUS_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_EBCM_STATUS_CHS1.msg_tout = 0; 
cap_canApiMsg_EBCM_STATUS_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_EBCM_STATUS_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_EBCM_STATUS_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_EBCM_STATUS_CHS1.raw_data[7];
cap_canApiMsg_EBCM_STATUS_CHS1.CRC_EBCM_STATUS_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.ALIV_EBCM_STATUS_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.MCPressure_phy = 0x00; /*fact:1.0//offset:-42.5*/
cap_canApiMsg_EBCM_STATUS_CHS1.BreakPedalPercent_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_EBCM_STATUS_CHS1.EPBStatus_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.HillholderStatus_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.TCSAvailable_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.TCSActive_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.BreakPedalPercentValid_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.MCPressureSts_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.HillholderFault_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.EPBFault_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS1.EBCM_BrkPedlSts_phy = 0x00;

/*911*//*ReceivedMsg */
cap_canApiMsg_TLT_RW_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_TLT_RW_CHS1.msg_tout = 0; 
cap_canApiMsg_TLT_RW_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_TLT_RW_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_TLT_RW_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_TLT_RW_CHS1.raw_data[8];
cap_canApiMsg_TLT_RW_CHS1.CRC_TLT_RW_phy = 0x00;
cap_canApiMsg_TLT_RW_CHS1.ALIV_TLT_RW_phy = 0x00;
cap_canApiMsg_TLT_RW_CHS1.AVL_LOGR_RW_phy = 0x00; /*fact:0.05//offset:-64.0*/
cap_canApiMsg_TLT_RW_CHS1.QU_AVL_LOGR_RW_phy = 0x00;

/*214*//*ReceivedMsg */
cap_canApiMsg_ST_STAB_DSC_2_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_ST_STAB_DSC_2_CHS1.msg_tout = 0; 
cap_canApiMsg_ST_STAB_DSC_2_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_ST_STAB_DSC_2_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_ST_STAB_DSC_2_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_ST_STAB_DSC_2_CHS1.raw_data[8];
cap_canApiMsg_ST_STAB_DSC_2_CHS1.ST_SLIP_THO_phy = 0x00;

/*213*//*ReceivedMsg */
cap_canApiMsg_ST_STAB_DSC_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_ST_STAB_DSC_CHS1.msg_tout = 0; 
cap_canApiMsg_ST_STAB_DSC_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_ST_STAB_DSC_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_ST_STAB_DSC_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_ST_STAB_DSC_CHS1.raw_data[8];
cap_canApiMsg_ST_STAB_DSC_CHS1.CRC_ST_STAB_DSC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS1.ALIV_ST_STAB_DSC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS1.QU_FN_FDR_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS1.QU_FN_ABS_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS1.QU_FN_ASC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS1.ST_BRG_DV_phy = 0x00;

/*297*//*ReceivedMsg */
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.msg_tout = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.raw_data[20];
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.CRC_ACLNX_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.ALIV_ACLNX_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.ACLNX_COG_phy = 0x00; /*fact:0.002//offset:-65.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.QU_ACLNX_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.CRC_ACLNY_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.ALIV_ACLNY_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.ACLNY_COG_phy = 0x00; /*fact:0.002//offset:-65.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1.QU_ACLNY_COG_phy = 0x00;

/*296*//*ReceivedMsg */
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.msg_tout = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.raw_data[64];
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CRC_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ALIV_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CHL_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.AVL_BRTORQ_WHL_RS_LH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.AVL_BRTORQ_WHL_RS_RH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.AVL_BRTORQ_WHL_FS_LH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.AVL_BRTORQ_WHL_FS_RH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CRC_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ALIV_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CHL_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_RPM_MAX_BAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_RPM_MIN_BAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ST_TAR_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_STIF_SPCO_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CRC_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ALIV_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CHL_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_RPM_MAX_FTAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.TAR_RPM_MIN_FTAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ST_TAR_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CRC_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.ALIV_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.CHL_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.StatusSlipThresholdsFrontAxle_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1.StatusSlipThresholdsRearAxle_phy = 0x00;

/*131*//*ReceivedMsg */
cap_canApiMsg_AVL_RPM_WHL_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_AVL_RPM_WHL_CHS1.msg_tout = 0; 
cap_canApiMsg_AVL_RPM_WHL_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_AVL_RPM_WHL_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_AVL_RPM_WHL_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_AVL_RPM_WHL_CHS1.raw_data[12];
cap_canApiMsg_AVL_RPM_WHL_CHS1.CRC_AVL_RPM_WHL_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS1.ALIV_AVL_RPM_WHL_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS1.AVL_RPM_WHL_RLH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_CHS1.AVL_RPM_WHL_RRH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_CHS1.AVL_RPM_WHL_FLH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_CHS1.AVL_RPM_WHL_FRH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_CHS1.QU_AVL_RPM_WHL_RLH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS1.QU_AVL_RPM_WHL_RRH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS1.QU_AVL_RPM_WHL_FLH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS1.QU_AVL_RPM_WHL_FRH_phy = 0x00;

/*1107*//*SentMsg*/
cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.CanBUS_st = 0; 
cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.raw_data[8];
cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_ONOFF_status_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_Positive_Path_Status_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_Negative_Path_Status_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_Last_Cont_Opening_Diagnosis_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_CHS1.HV_ONOFF_Err_Status_phy = 0x00;

/*289*//*ReceivedMsg */
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.msg_tout = 0; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.raw_data[32];
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.CRC_V_VEH_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.ALIV_V_VEH_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.V_VEH_COG_phy = 0x00; /*fact:0.015625//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.QU_V_VEH_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1.SecOcDataP2V_VEH_phy = 0x00;

/*88*//*ReceivedMsg */
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.bRxDataRdyFlg = 0;
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.msg_tout = 0; 
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.Rxcounter_err = 0; 
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.Rxcrc_err = 0; 
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.RxNever_received = TRUE; 
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.raw_data[8];
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.CRC_SFA_SteerWheel_Info_phy = 0x00;
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.ALIV_SFA_SteerWheel_Info_phy = 0x00;
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_SteerWheelTorque_phy = 0x00; /*fact:0.02//offset:0.0*/
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_SteerWheelAngleSpeed_phy = 0x00; /*fact:4.0//offset:0.0*/
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_SteerWheelAngle_phy = 0x00; /*fact:0.02//offset:0.0*/
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_WarningLamp_phy = 0x00;
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_EmergencyRequest_phy = 0x00;
cap_canApiMsg_SFA_SteerWheel_Info_CHS1.SFA_CenteringStatus_phy = 0x00;

/*497*//*SentMsg*/
cap_canApiMsg_CLAMP_STAT_CHS2.CanBUS_st = 0; 
cap_canApiMsg_CLAMP_STAT_CHS2.raw_data[3];
cap_canApiMsg_CLAMP_STAT_CHS2.CRC_CLAMP_STAT_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS2.ALIV_CLAMP_STAT_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS2.STAT_CL15_L_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS2.STAT_CL30S_L_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS2.STAT_CL30S_Light_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_CHS2.STAT_CL15_WUPL_phy = 0x00;

/*200*//*ReceivedMsg */
cap_canApiMsg_ESC_A_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_ESC_A_CHS2.msg_tout = 0; 
cap_canApiMsg_ESC_A_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_ESC_A_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_ESC_A_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_ESC_A_CHS2.raw_data[4];
cap_canApiMsg_ESC_A_CHS2.AD3_PrsrVal_Fl_phy = 0x00;
cap_canApiMsg_ESC_A_CHS2.AD3_PrsrVal_Fr_phy = 0x00;
cap_canApiMsg_ESC_A_CHS2.AD3_PrsrVal_Rl_phy = 0x00;
cap_canApiMsg_ESC_A_CHS2.AD3_PrsrVal_Rr_phy = 0x00;

/*170*//*SentMsg*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CanBUS_st = 0; 
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.raw_data[12];
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.CRC_TractionEMachine2_10ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.ALIV_TractionEMachine2_10ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.RpmEmETractSys2ActualValue_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.TorqueEmETractSys2GeneratorDyn_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.TorqueEmETractSys2MotorDyn_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.TorqueEmETractSys2ActualValue_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2.QualifierRpmEmETractSys2ActVal_phy = 0x00;

/*145*//*SentMsg*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CanBUS_st = 0; 
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.raw_data[16];
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.CRC_TractionEMachine1_10ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.ALIV_TractionEMachine1_10ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.RpmEmETractSys1ActualValue_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.TorqueEmETractSys1GeneratorDyn_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.TorqueEmETractSys1MotorDyn_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.TorqueEmETractSys1ActualValue_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2.QualifierRpmEmETractSys1ActVal_phy = 0x00;

/*326*//*SentMsg*/
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.CanBUS_st = 0; 
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.raw_data[8];
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.CRC_TractionEMachine2_100ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.ALIV_TractionEMachine2_100ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2.WheelRatioEAxlEtractSys2ActVal_phy = 0x00; /*fact:0.001//offset:0.0*/

/*314*//*SentMsg*/
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.CanBUS_st = 0; 
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.raw_data[8];
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.CRC_TractionEMachine1_100ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.ALIV_TractionEMachine1_100ms_phy = 0x00;
cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2.WheelRatioEAxlEtractSys1ActVal_phy = 0x00; /*fact:0.001//offset:0.0*/

/*300*//*SentMsg*/
cap_canApiMsg_VCU_Status_CHS2.CanBUS_st = 0; 
cap_canApiMsg_VCU_Status_CHS2.raw_data[8];
cap_canApiMsg_VCU_Status_CHS2.CRC_VCU_Status_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS2.ALIV_VCU_Status_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS2.VCU_ACPD_Percent_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_VCU_Status_CHS2.VCU_ACPD_Percent_Valid_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS2.VCU_ACT_Gear_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS2.VCU_ACT_GearValid_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS2.VCU_ACT_DriveMode_phy = 0x00;
cap_canApiMsg_VCU_Status_CHS2.VCU_ACT_DriveModeValid_phy = 0x00;

/*275*//*SentMsg*/
cap_canApiMsg_VCU_HV_Status_CHS2.CanBUS_st = 0; 
cap_canApiMsg_VCU_HV_Status_CHS2.raw_data[2];
cap_canApiMsg_VCU_HV_Status_CHS2.CRC_VCU_HV_Status_phy = 0x00;
cap_canApiMsg_VCU_HV_Status_CHS2.ALIV_VCU_HV_Status_phy = 0x00;
cap_canApiMsg_VCU_HV_Status_CHS2.VCU_VehicleHVStatus_phy = 0x00;

/*138*//*SentMsg*/
cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.CanBUS_st = 0; 
cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.raw_data[8];
cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.CRC_VCU_CombinedChargerUnit_phy = 0x00;
cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.ALIV_VCU_CombinedChargerUnit_phy = 0x00;
cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.TargetTorqueEmETractSys1_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_VCU_CombinedChargerUnit_CHS2.TargetTorqueEmETractSys2_phy = 0x00; /*fact:0.5//offset:-1023.0*/

/*180*//*ReceivedMsg */
cap_canApiMsg_ABS_ESC_01_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_ABS_ESC_01_CHS2.msg_tout = 0; 
cap_canApiMsg_ABS_ESC_01_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_ABS_ESC_01_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_ABS_ESC_01_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_ABS_ESC_01_CHS2.raw_data[1];
cap_canApiMsg_ABS_ESC_01_CHS2.ABS_ACTIVE_phy = 0x00;

/*210*//*ReceivedMsg */
cap_canApiMsg_IEB_01_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_IEB_01_CHS2.msg_tout = 0; 
cap_canApiMsg_IEB_01_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_IEB_01_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_IEB_01_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_IEB_01_CHS2.raw_data[2];
cap_canApiMsg_IEB_01_CHS2.WEstTot_Nm_phy = 0x00;

/*150*//*ReceivedMsg */
cap_canApiMsg_EBCM_STATUS_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_EBCM_STATUS_CHS2.msg_tout = 0; 
cap_canApiMsg_EBCM_STATUS_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_EBCM_STATUS_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_EBCM_STATUS_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_EBCM_STATUS_CHS2.raw_data[7];
cap_canApiMsg_EBCM_STATUS_CHS2.CRC_EBCM_STATUS_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.ALIV_EBCM_STATUS_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.MCPressure_phy = 0x00; /*fact:1.0//offset:-42.5*/
cap_canApiMsg_EBCM_STATUS_CHS2.BreakPedalPercent_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_EBCM_STATUS_CHS2.EPBStatus_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.HillholderStatus_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.TCSAvailable_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.TCSActive_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.BreakPedalPercentValid_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.MCPressureSts_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.HillholderFault_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.EPBFault_phy = 0x00;
cap_canApiMsg_EBCM_STATUS_CHS2.EBCM_BrkPedlSts_phy = 0x00;

/*214*//*ReceivedMsg */
cap_canApiMsg_ST_STAB_DSC_2_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_ST_STAB_DSC_2_CHS2.msg_tout = 0; 
cap_canApiMsg_ST_STAB_DSC_2_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_ST_STAB_DSC_2_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_ST_STAB_DSC_2_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_ST_STAB_DSC_2_CHS2.raw_data[8];
cap_canApiMsg_ST_STAB_DSC_2_CHS2.ST_SLIP_THO_phy = 0x00;

/*213*//*ReceivedMsg */
cap_canApiMsg_ST_STAB_DSC_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_ST_STAB_DSC_CHS2.msg_tout = 0; 
cap_canApiMsg_ST_STAB_DSC_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_ST_STAB_DSC_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_ST_STAB_DSC_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_ST_STAB_DSC_CHS2.raw_data[8];
cap_canApiMsg_ST_STAB_DSC_CHS2.CRC_ST_STAB_DSC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS2.ALIV_ST_STAB_DSC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS2.QU_FN_FDR_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS2.QU_FN_ABS_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS2.QU_FN_ASC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_CHS2.ST_BRG_DV_phy = 0x00;

/*296*//*ReceivedMsg */
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.msg_tout = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.raw_data[64];
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CRC_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ALIV_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CHL_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.AVL_BRTORQ_WHL_RS_LH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.AVL_BRTORQ_WHL_RS_RH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.AVL_BRTORQ_WHL_FS_LH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.AVL_BRTORQ_WHL_FS_RH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CRC_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ALIV_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CHL_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_RPM_MAX_BAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_RPM_MIN_BAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ST_TAR_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_STIF_SPCO_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CRC_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ALIV_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CHL_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_RPM_MAX_FTAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.TAR_RPM_MIN_FTAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ST_TAR_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CRC_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.ALIV_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.CHL_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.StatusSlipThresholdsFrontAxle_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2.StatusSlipThresholdsRearAxle_phy = 0x00;

/*131*//*ReceivedMsg */
cap_canApiMsg_AVL_RPM_WHL_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_AVL_RPM_WHL_CHS2.msg_tout = 0; 
cap_canApiMsg_AVL_RPM_WHL_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_AVL_RPM_WHL_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_AVL_RPM_WHL_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_AVL_RPM_WHL_CHS2.raw_data[12];
cap_canApiMsg_AVL_RPM_WHL_CHS2.CRC_AVL_RPM_WHL_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS2.ALIV_AVL_RPM_WHL_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS2.AVL_RPM_WHL_RLH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_CHS2.AVL_RPM_WHL_RRH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_CHS2.AVL_RPM_WHL_FLH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_CHS2.AVL_RPM_WHL_FRH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_CHS2.QU_AVL_RPM_WHL_RLH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS2.QU_AVL_RPM_WHL_RRH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS2.QU_AVL_RPM_WHL_FLH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_CHS2.QU_AVL_RPM_WHL_FRH_phy = 0x00;

/*1107*//*SentMsg*/
cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.CanBUS_st = 0; 
cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.raw_data[8];
cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_ONOFF_status_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_Positive_Path_Status_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_Negative_Path_Status_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_Last_Cont_Opening_Diagnosis_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_CHS2.HV_ONOFF_Err_Status_phy = 0x00;

/*289*//*ReceivedMsg */
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.msg_tout = 0; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.raw_data[32];
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.CRC_V_VEH_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.ALIV_V_VEH_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.V_VEH_COG_phy = 0x00; /*fact:0.015625//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.QU_V_VEH_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2.SecOcDataP2V_VEH_phy = 0x00;

/*88*//*ReceivedMsg */
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.bRxDataRdyFlg = 0;
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.msg_tout = 0; 
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.Rxcounter_err = 0; 
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.Rxcrc_err = 0; 
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.RxNever_received = TRUE; 
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.raw_data[8];
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.CRC_SFA_SteerWheel_Info_phy = 0x00;
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.ALIV_SFA_SteerWheel_Info_phy = 0x00;
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_SteerWheelTorque_phy = 0x00; /*fact:0.02//offset:0.0*/
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_SteerWheelAngleSpeed_phy = 0x00; /*fact:4.0//offset:0.0*/
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_SteerWheelAngle_phy = 0x00; /*fact:0.02//offset:0.0*/
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_WarningLamp_phy = 0x00;
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_EmergencyRequest_phy = 0x00;
cap_canApiMsg_SFA_SteerWheel_Info_CHS2.SFA_CenteringStatus_phy = 0x00;

/*501*//*SentMsg*/
cap_canApiMsg_VCU_HV_DrvSys_status_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_HV_DrvSys_status_PT.raw_data[1];
cap_canApiMsg_VCU_HV_DrvSys_status_PT.VCU_HV_SystemStatus_phy = 0x00;

/*451*//*SentMsg*/
cap_canApiMsg_VCU_Thermal_Status_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_Thermal_Status_PT.raw_data[1];
cap_canApiMsg_VCU_Thermal_Status_PT.VCU_LTROutLetTemp_phy = 0x00; /*fact:1.0//offset:-50.0*/

/*411*//*ReceivedMsg */
cap_canApiMsg_OBC_01_100ms_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_OBC_01_100ms_PT.msg_tout = 0; 
cap_canApiMsg_OBC_01_100ms_PT.Rxcounter_err = 0; 
cap_canApiMsg_OBC_01_100ms_PT.Rxcrc_err = 0; 
cap_canApiMsg_OBC_01_100ms_PT.RxNever_received = TRUE; 
cap_canApiMsg_OBC_01_100ms_PT.raw_data[2];
cap_canApiMsg_OBC_01_100ms_PT.OBC_HvIntlkStatus_phy = 0x00;
cap_canApiMsg_OBC_01_100ms_PT.OBC_SeqSta_phy = 0x00;

/*634*//*ReceivedMsg */
cap_canApiMsg_DCDC_01_100ms_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_DCDC_01_100ms_PT.msg_tout = 0; 
cap_canApiMsg_DCDC_01_100ms_PT.Rxcounter_err = 0; 
cap_canApiMsg_DCDC_01_100ms_PT.Rxcrc_err = 0; 
cap_canApiMsg_DCDC_01_100ms_PT.RxNever_received = TRUE; 
cap_canApiMsg_DCDC_01_100ms_PT.raw_data[2];
cap_canApiMsg_DCDC_01_100ms_PT.DCDC_HvIntlkStatus_phy = 0x00;
cap_canApiMsg_DCDC_01_100ms_PT.DCDC_SysOpSta_phy = 0x00;

/*395*//*ReceivedMsg */
cap_canApiMsg_BMS_CellTempMeas2_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_CellTempMeas2_PT.msg_tout = 0; 
cap_canApiMsg_BMS_CellTempMeas2_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_CellTempMeas2_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_CellTempMeas2_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_CellTempMeas2_PT.raw_data[12];
cap_canApiMsg_BMS_CellTempMeas2_PT.CRC_BMS_CellTempMeas2_phy = 0x00;
cap_canApiMsg_BMS_CellTempMeas2_PT.ALV_BMS_CellTempMeas2_phy = 0x00;
cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp42_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp43_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp44_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp45_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp46_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp47_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas2_PT.BMS_CellTemp48_phy = 0x00; /*fact:0.1//offset:-40.0*/

/*497*//*SentMsg*/
cap_canApiMsg_CLAMP_STAT_PT.CanBUS_st = 0; 
cap_canApiMsg_CLAMP_STAT_PT.raw_data[3];
cap_canApiMsg_CLAMP_STAT_PT.CRC_CLAMP_STAT_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_PT.ALIV_CLAMP_STAT_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_PT.STAT_CL15_L_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_PT.STAT_CL30S_L_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_PT.STAT_CL30S_Light_phy = 0x00;
cap_canApiMsg_CLAMP_STAT_PT.STAT_CL15_WUPL_phy = 0x00;

/*60*//*SentMsg*/
cap_canApiMsg_CON_VEH_PT.CanBUS_st = 0; 
cap_canApiMsg_CON_VEH_PT.raw_data[8];
cap_canApiMsg_CON_VEH_PT.CRC_CON_VEH_phy = 0x00;
cap_canApiMsg_CON_VEH_PT.ALIV_CON_VEH_phy = 0x00;
cap_canApiMsg_CON_VEH_PT.CTR_BS_PRTNT_phy = 0x00;
cap_canApiMsg_CON_VEH_PT.CTR_FKTN_PRTNT_phy = 0x00;
cap_canApiMsg_CON_VEH_PT.ST_CON_VEH_phy = 0x00;
cap_canApiMsg_CON_VEH_PT.QU_ST_CON_VEH_phy = 0x00;

/*130*//*SentMsg*/
cap_canApiMsg_ST_CR_PT.CanBUS_st = 0; 
cap_canApiMsg_ST_CR_PT.raw_data[8];
cap_canApiMsg_ST_CR_PT.CRC_ST_CR_phy = 0x00;
cap_canApiMsg_ST_CR_PT.ALIV_ST_CR_phy = 0x00;
cap_canApiMsg_ST_CR_PT.ST_CRSE_FRT_phy = 0x00;
cap_canApiMsg_ST_CR_PT.ST_CRSE_SIDE_RH_phy = 0x00;
cap_canApiMsg_ST_CR_PT.ST_CRSE_SIDE_LH_phy = 0x00;
cap_canApiMsg_ST_CR_PT.ST_CRSE_REAR_phy = 0x00;
cap_canApiMsg_ST_CR_PT.ST_CRSE_ROV_phy = 0x00;

/*131*//*SentMsg*/
cap_canApiMsg_AVL_RPM_WHL_PT.CanBUS_st = 0; 
cap_canApiMsg_AVL_RPM_WHL_PT.raw_data[12];
cap_canApiMsg_AVL_RPM_WHL_PT.CRC_AVL_RPM_WHL_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_PT.ALIV_AVL_RPM_WHL_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_PT.AVL_RPM_WHL_RLH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_PT.AVL_RPM_WHL_RRH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_PT.AVL_RPM_WHL_FLH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_PT.AVL_RPM_WHL_FRH_phy = 0x00; /*fact:0.015625//offset:-511.984375*/
cap_canApiMsg_AVL_RPM_WHL_PT.QU_AVL_RPM_WHL_RLH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_PT.QU_AVL_RPM_WHL_RRH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_PT.QU_AVL_RPM_WHL_FLH_phy = 0x00;
cap_canApiMsg_AVL_RPM_WHL_PT.QU_AVL_RPM_WHL_FRH_phy = 0x00;

/*132*//*ReceivedMsg */
cap_canApiMsg_BMS_ChgParamReq_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_ChgParamReq_PT.msg_tout = 0; 
cap_canApiMsg_BMS_ChgParamReq_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_ChgParamReq_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_ChgParamReq_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_ChgParamReq_PT.raw_data[32];
cap_canApiMsg_BMS_ChgParamReq_PT.CRC_BMS_ChgParamReq_phy = 0x00;
cap_canApiMsg_BMS_ChgParamReq_PT.ALV_BMS_ChgParamReq_phy = 0x00;
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_ChargeStopReq_phy = 0x00;
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_ChgVoltageReq_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_ChgCurrentReq_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_RemainChargeTime_phy = 0x00;
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrentLim_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrentLimPeak_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrent2s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrent10s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgCurrent30s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwrLim_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwrLimPeak_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwr2s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwr10s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_ChgParamReq_PT.BMS_MaxChgPwr30s_phy = 0x00; /*fact:0.1//offset:0.0*/

/*137*//*ReceivedMsg */
cap_canApiMsg_BMS_CurMeas_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_CurMeas_PT.msg_tout = 0; 
cap_canApiMsg_BMS_CurMeas_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_CurMeas_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_CurMeas_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_CurMeas_PT.raw_data[4];
cap_canApiMsg_BMS_CurMeas_PT.CRC_BMS_CurMeas_phy = 0x00;
cap_canApiMsg_BMS_CurMeas_PT.ALV_BMS_CurMeas_phy = 0x00;
cap_canApiMsg_BMS_CurMeas_PT.BMS_StartOfMeasument_STS_phy = 0x00;
cap_canApiMsg_BMS_CurMeas_PT.BMS_PackCurMeas_phy = 0x00; /*fact:0.1//offset:-1500.0*/

/*138*//*SentMsg*/
cap_canApiMsg_CombinedChargerUnit10msNo3_PT.CanBUS_st = 0; 
cap_canApiMsg_CombinedChargerUnit10msNo3_PT.raw_data[12];
cap_canApiMsg_CombinedChargerUnit10msNo3_PT.CRC_CombinedChargerUnit10msNo3_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo3_PT.ALIV_CombinedChargerUnit10msNo3_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo3_PT.OperatingModeETract1Target_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo3_PT.OperatingModeETract2Target_phy = 0x00;

/*141*//*SentMsg*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CanBUS_st = 0; 
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.raw_data[32];
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.CRC_CombinedChargerUnit10msNo1_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.ALIV_CombinedChargerUnit10msNo1_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TargetTorqueEmETractSys1_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TargetTorqueEmETractSys2_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TorqBoundaryETractSys1EmNCtrlMax_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TorqBoundaryETractSys1EmNCtrlMin_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TorqBoundaryETractSys2EmNCtrlMax_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TorqBoundaryETractSys2EmNCtrlMin_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.StatusDampingVibration_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.SecOcDtP2CmbdChrgUnit10msNo1_1_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TargetEMRpmETractSys1_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.TargetEMRpmETractSys2_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.SecOcDtP2CmbdChrgUnit10msNo1_2_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.StatusReleaseTorqueVerified_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.SecOcDtP2CmbdChrgUnit10msNo1_0_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo1_PT.SecOcDtP2CmbdChrgUnit10msNo1_3_phy = 0x00;

/*143*//*ReceivedMsg */
cap_canApiMsg_HighVoltageStorage10msNo2_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_HighVoltageStorage10msNo2_PT.msg_tout = 0; 
cap_canApiMsg_HighVoltageStorage10msNo2_PT.Rxcounter_err = 0; 
cap_canApiMsg_HighVoltageStorage10msNo2_PT.Rxcrc_err = 0; 
cap_canApiMsg_HighVoltageStorage10msNo2_PT.RxNever_received = TRUE; 
cap_canApiMsg_HighVoltageStorage10msNo2_PT.raw_data[48];
cap_canApiMsg_HighVoltageStorage10msNo2_PT.CRC_HighVoltageStorage10msNo2_phy = 0x00;
cap_canApiMsg_HighVoltageStorage10msNo2_PT.ALIV_HighVoltageStorage10msNo2_phy = 0x00;
cap_canApiMsg_HighVoltageStorage10msNo2_PT.ActualValueVoltageLinkVerified_phy = 0x00; /*fact:0.25//offset:0.0*/

/*145*//*ReceivedMsg */
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.msg_tout = 0; 
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.Rxcounter_err = 0; 
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.Rxcrc_err = 0; 
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.RxNever_received = TRUE; 
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.raw_data[48];
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.CRC_TracEMacElectc1Time10msNo1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.ALIV_TracEMacElectc1Time10msNo1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.CurrDrctCurrETractSys1ActVal_phy = 0x00; /*fact:0.1//offset:-1400.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.VolDrctCurrETractSys1ActVal_phy = 0x00; /*fact:0.5//offset:0.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.RpmEmETractSys1MaximumLimit_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.RpmEmETractSys1MinimumLimit_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TqEmETractSys1VibrationDampSusp_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.RpmEmETractSys1ActualValue_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TqEmETractSys1GeneratorStatic_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TqEmETractSys1GeneratorDynamic_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TorqueEmETractSys1MotorStatic_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TorqueEmETractSys1MotorDynamic_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TorqueEmETractSys1ActualValue_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.StatusLockPositionPbWETractSys1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TqEmETractSys1MotorSumLimTarget_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.DirOfRotETractSys1ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.OVCUrrenceStatorPWMETractSys1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.StatusPbWETractSys1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.QualifierTqEmETractSys1ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.QualifierRpmEmETractSys1ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.Qu_CurrDrctCurrETractSys1ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.StatusArbRpmETractSys1Limit_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.SumWhlTqIntvETractSys1_phy = 0x00; /*fact:10.0//offset:0.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.StETractSys1Asd_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.PowerETractSys1LossActualValue_phy = 0x00; /*fact:50.0//offset:0.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.TarTqETractSys1NControlStatic_phy = 0x00; /*fact:1.0//offset:-510.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.PwrLossPrednETractSys1Mot_phy = 0x00; /*fact:50.0//offset:0.0*/
cap_canApiMsg_TracEMacElectc1Time10msNo1_PT.PwrLossPrednETractSys1Genr_phy = 0x00; /*fact:50.0//offset:0.0*/

/*146*//*SentMsg*/
cap_canApiMsg_ERRM_BN_U_PT.CanBUS_st = 0; 
cap_canApiMsg_ERRM_BN_U_PT.raw_data[2];
cap_canApiMsg_ERRM_BN_U_PT.CTR_ERRM_BN_U_phy = 0x00;

/*162*//*ReceivedMsg */
cap_canApiMsg_BMS_Error_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_Error_PT.msg_tout = 0; 
cap_canApiMsg_BMS_Error_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_Error_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_Error_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_Error_PT.raw_data[5];
cap_canApiMsg_BMS_Error_PT.CRC_BMS_Error_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.ALV_BMS_Error_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_CellLowVolErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_HVILErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_PackInsuErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_CellVoltDiffErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_ProbeTempDiffErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_PackHighVolErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_PackLowVolErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_CellHighVolErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_ProbeHighTempErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_FuseStatusErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_PackOverCurrErr_phy = 0x00;
cap_canApiMsg_BMS_Error_PT.BMS_ProbeLowTempErr_phy = 0x00;

/*166*//*SentMsg*/
cap_canApiMsg_WMOM_DRV_9_PT.CanBUS_st = 0; 
cap_canApiMsg_WMOM_DRV_9_PT.raw_data[48];
cap_canApiMsg_WMOM_DRV_9_PT.TAR_WMOM_PT_SUM_COOTD_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_WMOM_DRV_9_PT.CRC_WMOM_DRV_9_phy = 0x00;
cap_canApiMsg_WMOM_DRV_9_PT.ALIV_WMOM_DRV_9_phy = 0x00;
cap_canApiMsg_WMOM_DRV_9_PT.CHL_WMOM_DRV_9_phy = 0x00;

/*168*//*ReceivedMsg */
cap_canApiMsg_BMS_HVMeas_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_HVMeas_PT.msg_tout = 0; 
cap_canApiMsg_BMS_HVMeas_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_HVMeas_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_HVMeas_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_HVMeas_PT.raw_data[12];
cap_canApiMsg_BMS_HVMeas_PT.CRC_BMS_HVMeas_phy = 0x00;
cap_canApiMsg_BMS_HVMeas_PT.ALV_BMS_HVMeas_phy = 0x00;
cap_canApiMsg_BMS_HVMeas_PT.BMS_HVPackVol_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_HVMeas_PT.BMS_HVLinkVol_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_HVMeas_PT.BMS_HVBusVol_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_HVMeas_PT.BMS_HVFuseVol_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_HVMeas_PT.BMS_DCPlugVol_phy = 0x00; /*fact:0.1//offset:0.0*/

/*170*//*ReceivedMsg */
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.msg_tout = 0; 
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.Rxcounter_err = 0; 
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.Rxcrc_err = 0; 
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.RxNever_received = TRUE; 
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.raw_data[48];
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.CRC_TracEMacElectc2Time10msNo1_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.ALIV_TracEMacElectc2Time10msNo1_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.CurrDrctCurrETractSys2ActVal_phy = 0x00; /*fact:0.1//offset:-1400.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.VolDrctCurrETractSys2ActVal_phy = 0x00; /*fact:0.5//offset:0.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.RpmEmETractSys2MaximumLimit_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.RpmEmETractSys2MinimumLimit_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TqEmETractSys2VibrationDampSusp_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.RpmEmETractSys2ActualValue_phy = 0x00; /*fact:1.0//offset:-32768.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TqEmETractSys2GeneratorStatic_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TqEmETractSys2GeneratorDynamic_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TorqueEmETractSys2MotorStatic_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TorqueEmETractSys2MotorDynamic_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TorqueEmETractSys2ActualValue_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.StatusLockPositionPbWETractSys2_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TqEmETractSys2MotorSumLimTarget_phy = 0x00; /*fact:0.5//offset:-1023.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.DirOfRotETractSys2ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.OVCUrrenceStatorPWMETractSys2_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.StatusPbWETractSys2_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.QualifierTqEmETractSys2ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.QualifierRpmEmETractSys2ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.Qu_CurrDrctCurrETractSys2ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.StatusArbRpmETractSys2Limit_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.SumWhlTqIntvETractSys2_phy = 0x00; /*fact:10.0//offset:0.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.StETractSys2Asd_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.PowerETractSys2LossActualValue_phy = 0x00; /*fact:50.0//offset:0.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.TarTqETractSys2NControlStatic_phy = 0x00; /*fact:1.0//offset:-510.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.PwrLossPrednETractSys2Mot_phy = 0x00; /*fact:50.0//offset:0.0*/
cap_canApiMsg_TracEMacElectc2Time10msNo1_PT.PwrLossPrednETractSys2Genr_phy = 0x00; /*fact:50.0//offset:0.0*/

/*172*//*ReceivedMsg */
cap_canApiMsg_BMS_PowerCont_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_PowerCont_PT.msg_tout = 0; 
cap_canApiMsg_BMS_PowerCont_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_PowerCont_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_PowerCont_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_PowerCont_PT.raw_data[24];
cap_canApiMsg_BMS_PowerCont_PT.CRC_BMS_PowerCont_phy = 0x00;
cap_canApiMsg_BMS_PowerCont_PT.ALV_BMS_PowerCont_phy = 0x00;
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrentLim_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrentLimPeak_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrent2s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrent10s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgCurrent30s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwrLim_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwrLimPeak_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwr2s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwr10s_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_PowerCont_PT.BMS_MaxDischgPwr30s_phy = 0x00; /*fact:0.1//offset:0.0*/

/*177*//*ReceivedMsg */
cap_canApiMsg_BMS_RelayStatus_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_RelayStatus_PT.msg_tout = 0; 
cap_canApiMsg_BMS_RelayStatus_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_RelayStatus_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_RelayStatus_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_RelayStatus_PT.raw_data[4];
cap_canApiMsg_BMS_RelayStatus_PT.CRC_BMS_RelayStatus_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.ALV_BMS_RelayStatus_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_MainPosRelayStatus_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_PreChgRelayStatus_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_TotalNegRelayStatus_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_MainPosRelayErr_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_TotalNegRelayErr_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_PreChgRelayErr_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_DCFCPosRelayStatus_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_DCFCNegRelayStatus_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_DCFCPosRelayErr_phy = 0x00;
cap_canApiMsg_BMS_RelayStatus_PT.BMS_DCFCNegRelayErr_phy = 0x00;

/*182*//*ReceivedMsg */
cap_canApiMsg_BMS_Sts_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_Sts_PT.msg_tout = 0; 
cap_canApiMsg_BMS_Sts_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_Sts_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_Sts_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_Sts_PT.raw_data[12];
cap_canApiMsg_BMS_Sts_PT.CRC_BMS_Sts_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.ALV_BMS_Sts_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_HVOnOffSts_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_HVILSts_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_ErrLev_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_SysSts_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_SocActualEst_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_Sts_PT.BMS_HWCrashSts_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_BatBalanceErr_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_BalanceSts_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_IGNSts_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_SocRelativeEst_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_Sts_PT.BMS_SOH_phy = 0x00; /*fact:0.5//offset:0.0*/
cap_canApiMsg_BMS_Sts_PT.BMS_SOE_phy = 0x00; /*fact:0.5//offset:0.0*/
cap_canApiMsg_BMS_Sts_PT.BMS_DisconnectRequestRsn_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_EmergencyDisconnectRsn_phy = 0x00;
cap_canApiMsg_BMS_Sts_PT.BMS_LimpHomeRsn_phy = 0x00;

/*187*//*ReceivedMsg */
cap_canApiMsg_BMS_WarnMsg_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_WarnMsg_PT.msg_tout = 0; 
cap_canApiMsg_BMS_WarnMsg_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_WarnMsg_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_WarnMsg_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_WarnMsg_PT.raw_data[8];
cap_canApiMsg_BMS_WarnMsg_PT.CHSKM_BMS_WarnMsg_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.ALV_BMS_WarnMsg_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_PackTempSts_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_ThermalRunaway_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_BatteryReplacement_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_5_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_6_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_7_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_8_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Warning_Flag_9_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_MalfunctionSts_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_LowBattery_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal1_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal2_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal3_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal4_phy = 0x00;
cap_canApiMsg_BMS_WarnMsg_PT.BMS_Reserved_signal5_phy = 0x00;

/*213*//*SentMsg*/
cap_canApiMsg_ST_STAB_DSC_PT.CanBUS_st = 0; 
cap_canApiMsg_ST_STAB_DSC_PT.raw_data[8];
cap_canApiMsg_ST_STAB_DSC_PT.CRC_ST_STAB_DSC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_PT.ALIV_ST_STAB_DSC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_PT.QU_FN_FDR_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_PT.QU_FN_ABS_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_PT.QU_FN_ASC_phy = 0x00;
cap_canApiMsg_ST_STAB_DSC_PT.ST_BRG_DV_phy = 0x00;

/*214*//*SentMsg*/
cap_canApiMsg_ST_STAB_DSC_2_PT.CanBUS_st = 0; 
cap_canApiMsg_ST_STAB_DSC_2_PT.raw_data[8];
cap_canApiMsg_ST_STAB_DSC_2_PT.ST_SLIP_THO_phy = 0x00;

/*217*//*SentMsg*/
cap_canApiMsg_WMOM_PT_AVL_PT.CanBUS_st = 0; 
cap_canApiMsg_WMOM_PT_AVL_PT.raw_data[16];
cap_canApiMsg_WMOM_PT_AVL_PT.CRC_WMOM_PT_AVL_phy = 0x00;
cap_canApiMsg_WMOM_PT_AVL_PT.ALIV_WMOM_PT_AVL_phy = 0x00;
cap_canApiMsg_WMOM_PT_AVL_PT.CHL_WMOM_PT_AVL_phy = 0x00;
cap_canApiMsg_WMOM_PT_AVL_PT.AVL_WMOM_PT_SUM_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_WMOM_PT_AVL_PT.QU_AVL_WMOM_PT_SUM_phy = 0x00;

/*249*//*ReceivedMsg */
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.msg_tout = 0; 
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.Rxcounter_err = 0; 
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.Rxcrc_err = 0; 
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.RxNever_received = TRUE; 
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.raw_data[8];
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.DCDC_MeasVs_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.DCDC_MeasOutCurr_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.DCDC_MeasInVltg_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT.DCDC_MeasInCurrent_phy = 0x00; /*fact:0.1//offset:0.0*/

/*254*//*ReceivedMsg */
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.msg_tout = 0; 
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.Rxcounter_err = 0; 
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.Rxcrc_err = 0; 
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.RxNever_received = TRUE; 
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.raw_data[7];
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_EnableDCDCFbk_phy = 0x00;
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_Status_phy = 0x00;
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_OutVltgReqFbk_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_OutCurrReqFbk_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_DCDC_VCU_Req_Fbk_PT.DCDC_MaxCurrentOut_phy = 0x00; /*fact:0.1//offset:0.0*/

/*272*//*SentMsg*/
cap_canApiMsg_VCU_ChargingConnectionSts_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_ChargingConnectionSts_PT.raw_data[2];
cap_canApiMsg_VCU_ChargingConnectionSts_PT.CRC_VCU_ChargingConnectionSts_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnectionSts_PT.ALV_VCU_ChargingConnectionSts_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnectionSts_PT.VCU_AcChgGunIn_phy = 0x00;
cap_canApiMsg_VCU_ChargingConnectionSts_PT.VCU_DCChgGunIn_phy = 0x00;

/*289*//*SentMsg*/
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.CanBUS_st = 0; 
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.raw_data[32];
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.CRC_V_VEH_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.ALIV_V_VEH_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.V_VEH_COG_phy = 0x00; /*fact:0.015625//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.QU_V_VEH_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT.SecOcDataP2V_VEH_phy = 0x00;

/*293*//*SentMsg*/
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.CanBUS_st = 0; 
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.raw_data[20];
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.PowerETractSys2LimGenMax_phy = 0x00; /*fact:50.0//offset:-1638300.0*/
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.PowerETractSys2LimMotMax_phy = 0x00; /*fact:50.0//offset:-1638300.0*/
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.PowerETractSys1LimGenMax_phy = 0x00; /*fact:50.0//offset:-1638300.0*/
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.PowerETractSys1LimMotMax_phy = 0x00; /*fact:50.0//offset:-1638300.0*/
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.OperatingModeEANActualValue_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.RequestExtraBoostETractSys1_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit10msNo2_PT.RequestExtraBoostETractSys2_phy = 0x00;

/*296*//*SentMsg*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CanBUS_st = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.raw_data[64];
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CRC_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ALIV_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CHL_EXTS_ARB_INTF_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.AVL_BRTORQ_WHL_RS_LH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.AVL_BRTORQ_WHL_RS_RH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.AVL_BRTORQ_WHL_FS_LH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.AVL_BRTORQ_WHL_FS_RH_EXT_phy = 0x00; /*fact:1.0//offset:-32000.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CRC_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ALIV_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CHL_RQ_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_RPM_MAX_BAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_RPM_MIN_BAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ST_TAR_RPM_BAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_STIF_SPCO_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CRC_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ALIV_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CHL_RQ_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_RPM_MAX_FTAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.TAR_RPM_MIN_FTAX_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ST_TAR_RPM_FTAX_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CRC_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.ALIV_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.CHL_StatusSlipThresholds_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.StatusSlipThresholdsFrontAxle_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT.StatusSlipThresholdsRearAxle_phy = 0x00;

/*297*//*SentMsg*/
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CanBUS_st = 0; 
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.raw_data[20];
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CRC_ACLNX_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.ALIV_ACLNX_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.ACLNX_COG_phy = 0x00; /*fact:0.002//offset:-65.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.QU_ACLNX_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.CRC_ACLNY_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.ALIV_ACLNY_COG_phy = 0x00;
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.ACLNY_COG_phy = 0x00; /*fact:0.002//offset:-65.0*/
cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT.QU_ACLNY_COG_phy = 0x00;

/*314*//*ReceivedMsg */
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.msg_tout = 0; 
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.Rxcounter_err = 0; 
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.Rxcrc_err = 0; 
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.RxNever_received = TRUE; 
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.raw_data[32];
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.CRC_TracEMacElectc1Time100msNo1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.ALIV_TracEMacElectc1Time100msNo1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusETractSys1Error_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusETractSys1Degradation_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.ActStatMeclLossesGbxETractSys1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1CoolantWaterInpActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusETractSys1CoolingActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.OpModETractSys1ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusETractSys1LossActive_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.PowerETractSys1MaximumLossActive_phy = 0x00; /*fact:50.0//offset:0.0*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.WhlRatElAxlEtractSys1ActVal_phy = 0x00; /*fact:0.001//offset:0.0*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.PercentUsedExtraBoostETractSys1_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.StatusExtraBoostETractSys1_phy = 0x00;
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1EmRotorActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.ThermalStressLevelETractSys1_phy = 0x00; /*fact:0.5//offset:0.0*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1EmStatorActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1InverterActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/
cap_canApiMsg_TracEMacElectc1Time100msNo1_PT.TETractSys1GbxOilActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/

/*326*//*ReceivedMsg */
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.msg_tout = 0; 
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.Rxcounter_err = 0; 
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.Rxcrc_err = 0; 
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.RxNever_received = TRUE; 
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.raw_data[32];
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.CRC_TracEMacElectc2Time100msNo1_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.ALIV_TracEMacElectc2Time100msNo1_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusETractSys2Error_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusETractSys2Degradation_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.ActStatMeclLossesGbxETractSys2_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2CoolantWaterInpActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusETractSys2CoolingActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.OpModETractSys2ActVal_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusETractSys2LossActive_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.PowerETractSys2MaximumLossActive_phy = 0x00; /*fact:50.0//offset:0.0*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.WhlRatElAxlEtractSys2ActVal_phy = 0x00; /*fact:0.001//offset:0.0*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.PercentUsedExtraBoostETractSys2_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.StatusExtraBoostETractSys2_phy = 0x00;
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2EmRotorActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.ThermalStressLevelETractSys2_phy = 0x00; /*fact:0.5//offset:0.0*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2EmStatorActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2InverterActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/
cap_canApiMsg_TracEMacElectc2Time100msNo1_PT.TETractSys2GbxOilActVal_phy = 0x00; /*fact:1.0//offset:-48.0*/

/*385*//*SentMsg*/
cap_canApiMsg_VCU_BMS_ThermalStatus_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_BMS_ThermalStatus_PT.raw_data[2];
cap_canApiMsg_VCU_BMS_ThermalStatus_PT.CRC_VCU_BMS_ThermalStatus_phy = 0x00;
cap_canApiMsg_VCU_BMS_ThermalStatus_PT.ALV_VCU_BMS_ThermalStatus_phy = 0x00;
cap_canApiMsg_VCU_BMS_ThermalStatus_PT.VCU_BMS_ActCoolingSts_phy = 0x00;
cap_canApiMsg_VCU_BMS_ThermalStatus_PT.VCU_BMS_HeatingSts_phy = 0x00;

/*389*//*ReceivedMsg */
cap_canApiMsg_BMS_CellTemp_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_CellTemp_PT.msg_tout = 0; 
cap_canApiMsg_BMS_CellTemp_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_CellTemp_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_CellTemp_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_CellTemp_PT.raw_data[8];
cap_canApiMsg_BMS_CellTemp_PT.CRC_BMS_CellTemp_phy = 0x00;
cap_canApiMsg_BMS_CellTemp_PT.ALV_BMS_CellTemp_phy = 0x00;
cap_canApiMsg_BMS_CellTemp_PT.BMS_MinCellTemp_phy = 0x00; /*fact:1.0//offset:-40.0*/
cap_canApiMsg_BMS_CellTemp_PT.BMS_PackTemp_phy = 0x00; /*fact:1.0//offset:-40.0*/
cap_canApiMsg_BMS_CellTemp_PT.BMS_MaxCellTemp_phy = 0x00; /*fact:1.0//offset:-40.0*/
cap_canApiMsg_BMS_CellTemp_PT.BMS_ProbeNumMaxCellTemp_phy = 0x00;
cap_canApiMsg_BMS_CellTemp_PT.BMS_ProbeNumMinCellTemp_phy = 0x00;
cap_canApiMsg_BMS_CellTemp_PT.BMS_MaxMinDiffCellTemp_phy = 0x00; /*fact:1.0//offset:-40.0*/

/*394*//*ReceivedMsg */
cap_canApiMsg_BMS_CellTempMeas_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_CellTempMeas_PT.msg_tout = 0; 
cap_canApiMsg_BMS_CellTempMeas_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_CellTempMeas_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_CellTempMeas_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_CellTempMeas_PT.raw_data[64];
cap_canApiMsg_BMS_CellTempMeas_PT.CRC_BMS_CellTempMeas_phy = 0x00;
cap_canApiMsg_BMS_CellTempMeas_PT.ALV_BMS_CellTempMeas_phy = 0x00;
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp1_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp2_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp3_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp4_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp5_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp6_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp7_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp8_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp9_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp10_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp11_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp12_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp13_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp14_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp15_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp16_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp17_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp18_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp19_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp20_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp21_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp22_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp23_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp24_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp25_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp26_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp27_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp28_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp29_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp30_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp31_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp32_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp33_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp34_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp35_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp36_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp37_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp38_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp39_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp40_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CellTempMeas_PT.BMS_CellTemp41_phy = 0x00; /*fact:0.1//offset:-40.0*/

/*399*//*ReceivedMsg */
cap_canApiMsg_BMS_CellVolMeas1_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_CellVolMeas1_PT.msg_tout = 0; 
cap_canApiMsg_BMS_CellVolMeas1_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_CellVolMeas1_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_CellVolMeas1_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_CellVolMeas1_PT.raw_data[48];
cap_canApiMsg_BMS_CellVolMeas1_PT.CRC_BMS_CellVolMeas_phy = 0x00;
cap_canApiMsg_BMS_CellVolMeas1_PT.ALV_BMS_CellVolMeas_phy = 0x00;
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol1_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol2_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol3_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol4_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol5_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol6_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol7_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol8_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol9_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol10_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol11_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol12_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol13_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol14_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol15_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol16_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol17_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol18_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol19_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol20_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol21_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol22_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol23_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol24_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol25_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol26_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol27_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol28_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol29_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas1_PT.BMS_CellVol30_phy = 0x00; /*fact:0.005//offset:0.0*/

/*404*//*ReceivedMsg */
cap_canApiMsg_BMS_CellVolMeas2_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_CellVolMeas2_PT.msg_tout = 0; 
cap_canApiMsg_BMS_CellVolMeas2_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_CellVolMeas2_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_CellVolMeas2_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_CellVolMeas2_PT.raw_data[48];
cap_canApiMsg_BMS_CellVolMeas2_PT.CRC_BMS_CellVolMeas2_phy = 0x00;
cap_canApiMsg_BMS_CellVolMeas2_PT.ALV_BMS_CellVolMeas2_phy = 0x00;
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol31_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol32_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol33_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol34_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol35_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol36_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol37_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol38_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol39_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol40_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol41_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol42_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol43_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol44_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol45_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol46_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol47_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol48_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol49_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol50_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol51_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol52_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol53_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol54_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol55_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol56_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol57_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol58_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol59_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol60_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol61_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas2_PT.BMS_CellVol62_phy = 0x00; /*fact:0.005//offset:0.0*/

/*405*//*ReceivedMsg */
cap_canApiMsg_OBC_Status_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_OBC_Status_PT.msg_tout = 0; 
cap_canApiMsg_OBC_Status_PT.Rxcounter_err = 0; 
cap_canApiMsg_OBC_Status_PT.Rxcrc_err = 0; 
cap_canApiMsg_OBC_Status_PT.RxNever_received = TRUE; 
cap_canApiMsg_OBC_Status_PT.raw_data[20];
cap_canApiMsg_OBC_Status_PT.OBC_VCU_Status_phy = 0x00;
cap_canApiMsg_OBC_Status_PT.OBC_Max_Current_Out_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_OBC_Status_PT.OBC_VCU_iAC_L1_phy = 0x00; /*fact:0.1//offset:-102.3*/
cap_canApiMsg_OBC_Status_PT.OBC_VCU_vAC_L1_phy = 0x00;
cap_canApiMsg_OBC_Status_PT.OBC_VCU_iAC_L2_phy = 0x00; /*fact:0.1//offset:-102.3*/
cap_canApiMsg_OBC_Status_PT.OBC_VCU_vAC_L2_phy = 0x00;
cap_canApiMsg_OBC_Status_PT.OBC_VCU_iAC_L3_phy = 0x00; /*fact:0.1//offset:-102.3*/
cap_canApiMsg_OBC_Status_PT.OBC_VCU_vAC_L3_phy = 0x00;
cap_canApiMsg_OBC_Status_PT.OBC_VCU_iDC_phy = 0x00; /*fact:0.1//offset:-102.3*/
cap_canApiMsg_OBC_Status_PT.OBC_VCU_vDC_phy = 0x00;

/*409*//*ReceivedMsg */
cap_canApiMsg_BMS_CellVolMeas3_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_CellVolMeas3_PT.msg_tout = 0; 
cap_canApiMsg_BMS_CellVolMeas3_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_CellVolMeas3_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_CellVolMeas3_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_CellVolMeas3_PT.raw_data[64];
cap_canApiMsg_BMS_CellVolMeas3_PT.CRC_BMS_CellVolMeas3_phy = 0x00;
cap_canApiMsg_BMS_CellVolMeas3_PT.ALV_BMS_CellVolMeas3_phy = 0x00;
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol63_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol64_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol65_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol66_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol67_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol68_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol69_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol70_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol71_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol72_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol73_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol74_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol75_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol76_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol77_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol78_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol79_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol80_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol81_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol82_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol83_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol84_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol85_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol86_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol87_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol88_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol89_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol90_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol91_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol92_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol93_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol94_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol95_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol96_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol97_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol98_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol99_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol100_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol101_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol102_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol103_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol104_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol105_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol106_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol107_phy = 0x00; /*fact:0.005//offset:0.0*/
cap_canApiMsg_BMS_CellVolMeas3_PT.BMS_CellVol108_phy = 0x00; /*fact:0.005//offset:0.0*/

/*193*//*SentMsg*/
cap_canApiMsg_VCU_OBC_Req_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_OBC_Req_PT.raw_data[6];
cap_canApiMsg_VCU_OBC_Req_PT.VCU_OBC_iLineLimit_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_VCU_OBC_Req_PT.VCU_OBC_Enable_phy = 0x00;
cap_canApiMsg_VCU_OBC_Req_PT.VCU_ChgDirType_phy = 0x00;
cap_canApiMsg_VCU_OBC_Req_PT.VCU_OBC_vOBC_Request_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_VCU_OBC_Req_PT.VCU_OBC_iOBC_Request_phy = 0x00; /*fact:0.0625//offset:0.0*/

/*414*//*ReceivedMsg */
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.msg_tout = 0; 
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.raw_data[5];
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.CRC_BMS_CoolantInletOutletTmp_phy = 0x00;
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.ALV_BMS_CoolantInletOutletTmp_phy = 0x00;
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.BMS_CoolantInletTemp_phy = 0x00; /*fact:0.1//offset:-40.0*/
cap_canApiMsg_BMS_CoolantInletOutletTmp_PT.BMS_CoolantOutletTemp_phy = 0x00; /*fact:0.1//offset:-40.0*/

/*418*//*SentMsg*/
cap_canApiMsg_VCU_BMS_ChargingParams_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_BMS_ChargingParams_PT.raw_data[4];
cap_canApiMsg_VCU_BMS_ChargingParams_PT.CRC_VCU_BMS_ChargingParams_phy = 0x00;
cap_canApiMsg_VCU_BMS_ChargingParams_PT.ALV_VCU_BMS_ChargingParams_phy = 0x00;
cap_canApiMsg_VCU_BMS_ChargingParams_PT.VCU_TargetASOC_phy = 0x00; /*fact:0.1//offset:0.0*/

/*419*//*ReceivedMsg */
cap_canApiMsg_BMS_Insulation_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_Insulation_PT.msg_tout = 0; 
cap_canApiMsg_BMS_Insulation_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_Insulation_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_Insulation_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_Insulation_PT.raw_data[4];
cap_canApiMsg_BMS_Insulation_PT.CRC_BMS_Insulation_phy = 0x00;
cap_canApiMsg_BMS_Insulation_PT.ALV_BMS_Insulation_phy = 0x00;
cap_canApiMsg_BMS_Insulation_PT.BMS_VCU_InsulationMonSts_phy = 0x00;
cap_canApiMsg_BMS_Insulation_PT.BMS_PackInsuRes_phy = 0x00;

/*420*//*SentMsg*/
cap_canApiMsg_VCU_BMS_ChargingControl_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_BMS_ChargingControl_PT.raw_data[2];
cap_canApiMsg_VCU_BMS_ChargingControl_PT.CRC_VCU_BMS_ChargingControl_phy = 0x00;
cap_canApiMsg_VCU_BMS_ChargingControl_PT.ALV_VCU_BMS_ChargingControl_phy = 0x00;
cap_canApiMsg_VCU_BMS_ChargingControl_PT.VCU_BMS_InsulationMonReq_phy = 0x00;
cap_canApiMsg_VCU_BMS_ChargingControl_PT.VCU_BMS_ChargeAllow_phy = 0x00;

/*424*//*ReceivedMsg */
cap_canApiMsg_BMS_VCU_THMReq_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_VCU_THMReq_PT.msg_tout = 0; 
cap_canApiMsg_BMS_VCU_THMReq_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_VCU_THMReq_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_VCU_THMReq_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_VCU_THMReq_PT.raw_data[6];
cap_canApiMsg_BMS_VCU_THMReq_PT.CRC_BMS_VCU_THMReq_phy = 0x00;
cap_canApiMsg_BMS_VCU_THMReq_PT.ALV_BMS_VCU_THMReq_phy = 0x00;
cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_FlowRateReq_phy = 0x00;
cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_CoolPwrDemand_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_HeatPwrDemand_phy = 0x00; /*fact:0.1//offset:0.0*/
cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_VCU_CoolingOnOffReq_phy = 0x00;
cap_canApiMsg_BMS_VCU_THMReq_PT.BMS_VCU_HeatingOnOffReq_phy = 0x00;

/*429*//*ReceivedMsg */
cap_canApiMsg_BMS_VolMeas_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_VolMeas_PT.msg_tout = 0; 
cap_canApiMsg_BMS_VolMeas_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_VolMeas_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_VolMeas_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_VolMeas_PT.raw_data[12];
cap_canApiMsg_BMS_VolMeas_PT.CRC_BMS_VolMeas_phy = 0x00;
cap_canApiMsg_BMS_VolMeas_PT.ALV_BMS_VolMeas_phy = 0x00;
cap_canApiMsg_BMS_VolMeas_PT.BMS_CellNumMinCellVol_phy = 0x00;
cap_canApiMsg_BMS_VolMeas_PT.BMS_CellNumMaxCellVol_phy = 0x00;
cap_canApiMsg_BMS_VolMeas_PT.BMS_MinCellVol_phy = 0x00; /*fact:0.001//offset:0.0*/
cap_canApiMsg_BMS_VolMeas_PT.BMS_MaxCellVol_phy = 0x00; /*fact:0.001//offset:0.0*/
cap_canApiMsg_BMS_VolMeas_PT.BMS_MaxMinDiffCellVol_phy = 0x00; /*fact:0.001//offset:0.0*/

/*433*//*SentMsg*/
cap_canApiMsg_VCU_BMS_HVCoordination_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_BMS_HVCoordination_PT.raw_data[2];
cap_canApiMsg_VCU_BMS_HVCoordination_PT.CRC_VCU_BMS_HVCoordination_phy = 0x00;
cap_canApiMsg_VCU_BMS_HVCoordination_PT.ALV_VCU_BMS_HVCoordination_phy = 0x00;
cap_canApiMsg_VCU_BMS_HVCoordination_PT.VCU_BMS_HVOnOffReq_phy = 0x00;

/*450*//*ReceivedMsg */
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.msg_tout = 0; 
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.Rxcounter_err = 0; 
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.Rxcrc_err = 0; 
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.RxNever_received = TRUE; 
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.raw_data[7];
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_InternalTempA_phy = 0x00; /*fact:0.1//offset:-100.0*/
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_InternalTempB_phy = 0x00; /*fact:0.1//offset:-100.0*/
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_InternalTempC_phy = 0x00; /*fact:0.1//offset:-100.0*/
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_CoolPwrDemand_phy = 0x00; /*fact:0.01//offset:0.0*/
cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT.DCDC_FlowRateReq_phy = 0x00;

/*490*//*SentMsg*/
cap_canApiMsg_Kilometerstand_2_PT.CanBUS_st = 0; 
cap_canApiMsg_Kilometerstand_2_PT.raw_data[8];
cap_canApiMsg_Kilometerstand_2_PT.MILE_KM_TOT_phy = 0x00; /*fact:0.001//offset:0.0*/

/*197*//*SentMsg*/
cap_canApiMsg_VCU_DCDC_Req_PT.CanBUS_st = 0; 
cap_canApiMsg_VCU_DCDC_Req_PT.raw_data[8];
cap_canApiMsg_VCU_DCDC_Req_PT.VCU_EnableDCDC_phy = 0x00;
cap_canApiMsg_VCU_DCDC_Req_PT.VCU_OutVltgReq_phy = 0x00; /*fact:0.0625//offset:0.0*/
cap_canApiMsg_VCU_DCDC_Req_PT.VCU_OutCurReq_phy = 0x00; /*fact:0.1//offset:0.0*/

/*517*//*ReceivedMsg */
cap_canApiMsg_BMS_HistData_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_BMS_HistData_PT.msg_tout = 0; 
cap_canApiMsg_BMS_HistData_PT.Rxcounter_err = 0; 
cap_canApiMsg_BMS_HistData_PT.Rxcrc_err = 0; 
cap_canApiMsg_BMS_HistData_PT.RxNever_received = TRUE; 
cap_canApiMsg_BMS_HistData_PT.raw_data[3];
cap_canApiMsg_BMS_HistData_PT.CRC_BMS_HistData_phy = 0x00;
cap_canApiMsg_BMS_HistData_PT.ALV_BMS_HistData_phy = 0x00;
cap_canApiMsg_BMS_HistData_PT.BMS_ContactorAging_phy = 0x00;

/*532*//*SentMsg*/
cap_canApiMsg_ParkByWire50msNo1_PT.CanBUS_st = 0; 
cap_canApiMsg_ParkByWire50msNo1_PT.raw_data[8];
cap_canApiMsg_ParkByWire50msNo1_PT.CRC_ParkByWire50msNo1_phy = 0x00;
cap_canApiMsg_ParkByWire50msNo1_PT.ALIV_ParkByWire50msNo1_phy = 0x00;
cap_canApiMsg_ParkByWire50msNo1_PT.CHL_ParkByWire50msNo1_phy = 0x00;
cap_canApiMsg_ParkByWire50msNo1_PT.RequestParkByWireHeat_phy = 0x00;

/*630*//*SentMsg*/
cap_canApiMsg_FZZSTD_PT.CanBUS_st = 0; 
cap_canApiMsg_FZZSTD_PT.raw_data[8];
cap_canApiMsg_FZZSTD_PT.ST_ENERG_FZM_phy = 0x00;
cap_canApiMsg_FZZSTD_PT.ST_ILK_ERRM_FZM_phy = 0x00;

/*632*//*SentMsg*/
cap_canApiMsg_STAT_ANHAENGER_PT.CanBUS_st = 0; 
cap_canApiMsg_STAT_ANHAENGER_PT.raw_data[8];
cap_canApiMsg_STAT_ANHAENGER_PT.ST_TRAI_phy = 0x00;

/*645*//*ReceivedMsg */
cap_canApiMsg_OBC_Temperature_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_OBC_Temperature_PT.msg_tout = 0; 
cap_canApiMsg_OBC_Temperature_PT.Rxcounter_err = 0; 
cap_canApiMsg_OBC_Temperature_PT.Rxcrc_err = 0; 
cap_canApiMsg_OBC_Temperature_PT.RxNever_received = TRUE; 
cap_canApiMsg_OBC_Temperature_PT.raw_data[4];
cap_canApiMsg_OBC_Temperature_PT.OBC_InternalTemp_phy = 0x00; /*fact:0.1//offset:-50.0*/
cap_canApiMsg_OBC_Temperature_PT.OBC_FlowRateReq_phy = 0x00;
cap_canApiMsg_OBC_Temperature_PT.OBC_CoolPwrDemand_phy = 0x00; /*fact:0.1//offset:0.0*/

/*749*//*SentMsg*/
cap_canApiMsg_A_TEMP_PT.CanBUS_st = 0; 
cap_canApiMsg_A_TEMP_PT.raw_data[2];
cap_canApiMsg_A_TEMP_PT.TEMP_EX_phy = 0x00; /*fact:0.5//offset:-40.0*/

/*811*//*SentMsg*/
cap_canApiMsg_DMEBK100_PT.CanBUS_st = 0; 
cap_canApiMsg_DMEBK100_PT.raw_data[24];
cap_canApiMsg_DMEBK100_PT.ActValVolFlowCoolantETractSys2_phy = 0x00; /*fact:20.0//offset:0.0*/
cap_canApiMsg_DMEBK100_PT.ActValVolFlowCoolantETractSys1_phy = 0x00; /*fact:20.0//offset:0.0*/

/*832*//*SentMsg*/
cap_canApiMsg_CombinedChargerUnit100msNo1_PT.CanBUS_st = 0; 
cap_canApiMsg_CombinedChargerUnit100msNo1_PT.raw_data[12];
cap_canApiMsg_CombinedChargerUnit100msNo1_PT.CRC_CombinedChargerUnit100msNo1_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit100msNo1_PT.ALIV_CombinedChargerUnit100msNo1_phy = 0x00;
cap_canApiMsg_CombinedChargerUnit100msNo1_PT.RequestPowerETractSys1Loss_phy = 0x00; /*fact:50.0//offset:0.0*/
cap_canApiMsg_CombinedChargerUnit100msNo1_PT.RequestPowerETractSys2Loss_phy = 0x00; /*fact:50.0//offset:0.0*/

/*896*//*SentMsg*/
cap_canApiMsg_FAHRGESTELLNUMMER_PT.CanBUS_st = 0; 
cap_canApiMsg_FAHRGESTELLNUMMER_PT.raw_data[7];
cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_1_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_2_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_3_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_4_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_5_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_6_phy = 0x00;
cap_canApiMsg_FAHRGESTELLNUMMER_PT.NO_VECH_7_phy = 0x00;

/*911*//*SentMsg*/
cap_canApiMsg_TLT_RW_PT.CanBUS_st = 0; 
cap_canApiMsg_TLT_RW_PT.raw_data[8];
cap_canApiMsg_TLT_RW_PT.CRC_TLT_RW_phy = 0x00;
cap_canApiMsg_TLT_RW_PT.ALIV_TLT_RW_phy = 0x00;
cap_canApiMsg_TLT_RW_PT.AVL_LOGR_RW_phy = 0x00; /*fact:0.05//offset:-64.0*/
cap_canApiMsg_TLT_RW_PT.QU_AVL_LOGR_RW_phy = 0x00;

/*1052*//*SentMsg*/
cap_canApiMsg_KILOMETERSTAND_PT.CanBUS_st = 0; 
cap_canApiMsg_KILOMETERSTAND_PT.raw_data[8];
cap_canApiMsg_KILOMETERSTAND_PT.MILE_KM_phy = 0x00;

/*1090*//*SentMsg*/
cap_canApiMsg_RELATIVZEIT_PT.CanBUS_st = 0; 
cap_canApiMsg_RELATIVZEIT_PT.raw_data[6];
cap_canApiMsg_RELATIVZEIT_PT.T_SEC_COU_REL_phy = 0x00;

/*1107*//*ReceivedMsg */
cap_canApiMsg_HighVoltageStorage200msNo1_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_HighVoltageStorage200msNo1_PT.msg_tout = 0; 
cap_canApiMsg_HighVoltageStorage200msNo1_PT.Rxcounter_err = 0; 
cap_canApiMsg_HighVoltageStorage200msNo1_PT.Rxcrc_err = 0; 
cap_canApiMsg_HighVoltageStorage200msNo1_PT.RxNever_received = TRUE; 
cap_canApiMsg_HighVoltageStorage200msNo1_PT.raw_data[4];
cap_canApiMsg_HighVoltageStorage200msNo1_PT.StatusServiceDisconnectionPlug_phy = 0x00;
cap_canApiMsg_HighVoltageStorage200msNo1_PT.StsDisconnectingSwtHighVoltStorg_phy = 0x00;

/*1120*//*SentMsg*/
cap_canApiMsg_EnergyStorageMeasurementValues_PT.CanBUS_st = 0; 
cap_canApiMsg_EnergyStorageMeasurementValues_PT.raw_data[8];
cap_canApiMsg_EnergyStorageMeasurementValues_PT.EnergyStorageClamp30VoltageValue_phy = 0x00; /*fact:0.001//offset:0.0*/

/*1237*//*ReceivedMsg */
cap_canApiMsg_StatusCrashIdentETractSys1_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_StatusCrashIdentETractSys1_PT.msg_tout = 0; 
cap_canApiMsg_StatusCrashIdentETractSys1_PT.Rxcounter_err = 0; 
cap_canApiMsg_StatusCrashIdentETractSys1_PT.Rxcrc_err = 0; 
cap_canApiMsg_StatusCrashIdentETractSys1_PT.RxNever_received = TRUE; 
cap_canApiMsg_StatusCrashIdentETractSys1_PT.raw_data[8];
cap_canApiMsg_StatusCrashIdentETractSys1_PT.CRC_StatusCrashIdentETractSys1_phy = 0x00;
cap_canApiMsg_StatusCrashIdentETractSys1_PT.ALIV_StatusCrashIdentETractSys1_phy = 0x00;
cap_canApiMsg_StatusCrashIdentETractSys1_PT.CHL_StatusCrashIdentETractSys1_phy = 0x00;
cap_canApiMsg_StatusCrashIdentETractSys1_PT.StatusCrashShutDownETractSys1_phy = 0x00;
cap_canApiMsg_StatusCrashIdentETractSys1_PT.TempETractSys1DirectCurrentPlug_phy = 0x00; /*fact:0.5//offset:-40.0*/
cap_canApiMsg_StatusCrashIdentETractSys1_PT.StsLimpHomeNotifETractSys1_phy = 0x00;

/*1239*//*ReceivedMsg */
cap_canApiMsg_StatusCrashIdentETractSys2_PT.bRxDataRdyFlg = 0;
cap_canApiMsg_StatusCrashIdentETractSys2_PT.msg_tout = 0; 
cap_canApiMsg_StatusCrashIdentETractSys2_PT.Rxcounter_err = 0; 
cap_canApiMsg_StatusCrashIdentETractSys2_PT.Rxcrc_err = 0; 
cap_canApiMsg_StatusCrashIdentETractSys2_PT.RxNever_received = TRUE; 
cap_canApiMsg_StatusCrashIdentETractSys2_PT.raw_data[8];
cap_canApiMsg_StatusCrashIdentETractSys2_PT.CRC_StatusCrashIdentETractSys2_phy = 0x00;
cap_canApiMsg_StatusCrashIdentETractSys2_PT.ALIV_StatusCrashIdentETractSys2_phy = 0x00;
cap_canApiMsg_StatusCrashIdentETractSys2_PT.CHL_StatusCrashIdentETractSys2_phy = 0x00;
cap_canApiMsg_StatusCrashIdentETractSys2_PT.StatusCrashShutDownETractSys2_phy = 0x00;
cap_canApiMsg_StatusCrashIdentETractSys2_PT.TempETractSys2DirectCurrentPlug_phy = 0x00; /*fact:0.5//offset:-40.0*/
cap_canApiMsg_StatusCrashIdentETractSys2_PT.StsLimpHomeNotifETractSys2_phy = 0x00;

/*1272*//*SentMsg*/
cap_canApiMsg_CombinedChargerUnit1000msNo1_PT.CanBUS_st = 0; 
cap_canApiMsg_CombinedChargerUnit1000msNo1_PT.raw_data[24];
cap_canApiMsg_CombinedChargerUnit1000msNo1_PT.TemperatureCoolantOutput_phy = 0x00; /*fact:0.1//offset:-40.0*/

/*1296*//*SentMsg*/
cap_canApiMsg_Networkmanagement3_PT.CanBUS_st = 0; 
cap_canApiMsg_Networkmanagement3_PT.raw_data[8];
cap_canApiMsg_Networkmanagement3_PT.NM3ControlBitVector_phy = 0x00;
cap_canApiMsg_Networkmanagement3_PT.NM3SenderECUId_phy = 0x00;
cap_canApiMsg_Networkmanagement3_PT.NM3BasePartialNetworks_phy = 0x00;
cap_canApiMsg_Networkmanagement3_PT.NM3FunctionalPartialNetworks_phy = 0x00;

}


/***************************/
#define CPU1_STOP_SEC_CODE 
#include "MemMap.h"

 

/*
 * Function implementation
 */
