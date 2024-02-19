
#ifndef FEV_VCU_DATA_H
#define FEV_VCU_DATA_H
#include <stdint.h>  //Include for UINT32 type



//get macros

void getIntelSignal(uint64_t* dest, uint64_t* source, uint8_t sigStart, uint8_t sigLen){
	uint64_t mask = ( (1ULL << sigLen) - 1) << sigStart ;
	*dest &= ~(mask);
	*dest |= (mask && (*source));
}

get_CAN_CLAMP_STAT(uint64_t * dataPtr){
	getIntelSignal(&CAN_CLAMP_STAT->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_CLAMP_STAT->MsgData.rawData, dataPtr, 8, 4);
	getIntelSignal(&CAN_CLAMP_STAT->MsgData.rawData, dataPtr, 12, 2);
	getIntelSignal(&CAN_CLAMP_STAT->MsgData.rawData, dataPtr, 14, 2);
	getIntelSignal(&CAN_CLAMP_STAT->MsgData.rawData, dataPtr, 16, 2);
	getIntelSignal(&CAN_CLAMP_STAT->MsgData.rawData, dataPtr, 18, 2);
}

get_CAN_BundleEAFlexrayToCANFD20msNo1(uint64_t * dataPtr){
	getIntelSignal(&CAN_BundleEAFlexrayToCANFD20msNo1->MsgData.rawData, dataPtr, 128, 8);
	getIntelSignal(&CAN_BundleEAFlexrayToCANFD20msNo1->MsgData.rawData, dataPtr, 136, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToCANFD20msNo1->MsgData.rawData, dataPtr, 143, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToCANFD20msNo1->MsgData.rawData, dataPtr, 160, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToCANFD20msNo1->MsgData.rawData, dataPtr, 168, 64);
}

get_CAN_AVL_RPM_WHL(uint64_t * dataPtr){
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 8, 4);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 16, 16);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 32, 16);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 48, 16);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 64, 16);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 80, 4);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 84, 4);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 88, 4);
	getIntelSignal(&CAN_AVL_RPM_WHL->MsgData.rawData, dataPtr, 92, 4);
}

get_CAN_BundleEAFlexrayToAECANFD10msNo1(uint64_t * dataPtr){
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 128, 8);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 136, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 140, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 144, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 160, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 176, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 192, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 256, 8);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 264, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 268, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 272, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 288, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 304, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 308, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 320, 8);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 328, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 332, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 336, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 352, 16);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 368, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 372, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 456, 8);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 464, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 468, 4);
	getIntelSignal(&CAN_BundleEAFlexrayToAECANFD10msNo1->MsgData.rawData, dataPtr, 472, 4);
}

get_CAN_ST_STAB_DSC(uint64_t * dataPtr){
	getIntelSignal(&CAN_ST_STAB_DSC->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_ST_STAB_DSC->MsgData.rawData, dataPtr, 8, 4);
	getIntelSignal(&CAN_ST_STAB_DSC->MsgData.rawData, dataPtr, 16, 12);
	getIntelSignal(&CAN_ST_STAB_DSC->MsgData.rawData, dataPtr, 28, 12);
	getIntelSignal(&CAN_ST_STAB_DSC->MsgData.rawData, dataPtr, 40, 12);
	getIntelSignal(&CAN_ST_STAB_DSC->MsgData.rawData, dataPtr, 56, 6);
}

get_CAN_ST_STAB_DSC_2(uint64_t * dataPtr){
	getIntelSignal(&CAN_ST_STAB_DSC_2->MsgData.rawData, dataPtr, 44, 4);
}

get_CAN_EBCM_STATUS(uint64_t * dataPtr){
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 8, 4);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 12, 12);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 24, 12);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 36, 4);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 40, 4);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 44, 1);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 45, 1);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 46, 1);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 47, 1);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 48, 1);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 49, 1);
	getIntelSignal(&CAN_EBCM_STATUS->MsgData.rawData, dataPtr, 50, 2);
}

get_CAN_Kilometerstand_2(uint64_t * dataPtr){
	getIntelSignal(&CAN_Kilometerstand_2->MsgData.rawData, dataPtr, 0, 32);
}

get_CAN_ESC_A(uint64_t * dataPtr){
	getIntelSignal(&CAN_ESC_A->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_ESC_A->MsgData.rawData, dataPtr, 8, 8);
	getIntelSignal(&CAN_ESC_A->MsgData.rawData, dataPtr, 16, 8);
	getIntelSignal(&CAN_ESC_A->MsgData.rawData, dataPtr, 24, 8);
}

get_CAN_IEB_01(uint64_t * dataPtr){
	getIntelSignal(&CAN_IEB_01->MsgData.rawData, dataPtr, 0, 16);
}

get_CAN_ABS_ESC_01(uint64_t * dataPtr){
	getIntelSignal(&CAN_ABS_ESC_01->MsgData.rawData, dataPtr, 0, 2);
}

get_CAN_A_TEMP(uint64_t * dataPtr){
	getIntelSignal(&CAN_A_TEMP->MsgData.rawData, dataPtr, 0, 8);
}

get_CAN_CON_VEH(uint64_t * dataPtr){
	getIntelSignal(&CAN_CON_VEH->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_CON_VEH->MsgData.rawData, dataPtr, 8, 4);
	getIntelSignal(&CAN_CON_VEH->MsgData.rawData, dataPtr, 12, 4);
	getIntelSignal(&CAN_CON_VEH->MsgData.rawData, dataPtr, 16, 32);
	getIntelSignal(&CAN_CON_VEH->MsgData.rawData, dataPtr, 48, 4);
	getIntelSignal(&CAN_CON_VEH->MsgData.rawData, dataPtr, 52, 4);
}

get_CAN_ERRM_BN_U(uint64_t * dataPtr){
	getIntelSignal(&CAN_ERRM_BN_U->MsgData.rawData, dataPtr, 0, 6);
}

get_CAN_FAHRGESTELLNUMMER(uint64_t * dataPtr){
	getIntelSignal(&CAN_FAHRGESTELLNUMMER->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_FAHRGESTELLNUMMER->MsgData.rawData, dataPtr, 8, 8);
	getIntelSignal(&CAN_FAHRGESTELLNUMMER->MsgData.rawData, dataPtr, 16, 8);
	getIntelSignal(&CAN_FAHRGESTELLNUMMER->MsgData.rawData, dataPtr, 24, 8);
	getIntelSignal(&CAN_FAHRGESTELLNUMMER->MsgData.rawData, dataPtr, 32, 8);
	getIntelSignal(&CAN_FAHRGESTELLNUMMER->MsgData.rawData, dataPtr, 40, 8);
	getIntelSignal(&CAN_FAHRGESTELLNUMMER->MsgData.rawData, dataPtr, 48, 8);
}

get_CAN_FZU_ChargingControl(uint64_t * dataPtr){
	getIntelSignal(&CAN_FZU_ChargingControl->MsgData.rawData, dataPtr, 0, 2);
}

get_CAN_FZZSTD(uint64_t * dataPtr){
	getIntelSignal(&CAN_FZZSTD->MsgData.rawData, dataPtr, 16, 4);
	getIntelSignal(&CAN_FZZSTD->MsgData.rawData, dataPtr, 56, 2);
}

get_CAN_KILOMETERSTAND(uint64_t * dataPtr){
	getIntelSignal(&CAN_KILOMETERSTAND->MsgData.rawData, dataPtr, 0, 24);
}

get_CAN_Networkmanagement3_Status(uint64_t * dataPtr){
	getIntelSignal(&CAN_Networkmanagement3_Status->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_Networkmanagement3_Status->MsgData.rawData, dataPtr, 8, 8);
	getIntelSignal(&CAN_Networkmanagement3_Status->MsgData.rawData, dataPtr, 16, 16);
	getIntelSignal(&CAN_Networkmanagement3_Status->MsgData.rawData, dataPtr, 32, 32);
}

get_CAN_RELATIVZEIT(uint64_t * dataPtr){
	getIntelSignal(&CAN_RELATIVZEIT->MsgData.rawData, dataPtr, 0, 32);
}

get_CAN_SFA_SteerWheel_Info(uint64_t * dataPtr){
	getIntelSignal(&CAN_SFA_SteerWheel_Info->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_SFA_SteerWheel_Info->MsgData.rawData, dataPtr, 8, 4);
	getIntelSignal(&CAN_SFA_SteerWheel_Info->MsgData.rawData, dataPtr, 16, 12);
	getIntelSignal(&CAN_SFA_SteerWheel_Info->MsgData.rawData, dataPtr, 32, 8);
	getIntelSignal(&CAN_SFA_SteerWheel_Info->MsgData.rawData, dataPtr, 40, 16);
	getIntelSignal(&CAN_SFA_SteerWheel_Info->MsgData.rawData, dataPtr, 56, 3);
	getIntelSignal(&CAN_SFA_SteerWheel_Info->MsgData.rawData, dataPtr, 59, 2);
	getIntelSignal(&CAN_SFA_SteerWheel_Info->MsgData.rawData, dataPtr, 61, 3);
}

get_CAN_ST_GWS(uint64_t * dataPtr){
	getIntelSignal(&CAN_ST_GWS->MsgData.rawData, dataPtr, 0, 8);
	getIntelSignal(&CAN_ST_GWS->MsgData.rawData, dataPtr, 8, 4);
	getIntelSignal(&CAN_ST_GWS->MsgData.rawData, dataPtr, 12, 4);
	getIntelSignal(&CAN_ST_GWS->MsgData.rawData, dataPtr, 24, 2);
}

get_CAN_STAT_ANHAENGER(uint64_t * dataPtr){
	getIntelSignal(&CAN_STAT_ANHAENGER->MsgData.rawData, dataPtr, 0, 2);
}


//set func define
///mask is consist 1 as size as signal size 
///then mask is shifted to signals start 
///then data and mask is done with AND 
///so it is going to write to destination via OR operation
void setIntelSignal(uint64_t* data, uint64_t* dest, uint8_t sigStart, uint8_t sigLen){
	uint64_t mask = ((1ULL << sigLen) - 1) << sigStart ;
	*dest &= ~(mask);
	*dest |= (mask && (*data));
}


set_CAN_TracEMacElectc2Time100msNo1(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_TracEMacElectc2Time100msNo1->MsgData.rawData, 116, 8);
}

set_CAN_TracEMacElectc1Time100msNo1(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_TracEMacElectc1Time100msNo1->MsgData.rawData, 116, 8);
}

set_CAN_CombinedChargerUnit10msNo2(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_CombinedChargerUnit10msNo2->MsgData.rawData, 0, 16);
	setIntelMsg( dataPtr, &CAN_CombinedChargerUnit10msNo2->MsgData.rawData, 16, 16);
	setIntelMsg( dataPtr, &CAN_CombinedChargerUnit10msNo2->MsgData.rawData, 32, 16);
	setIntelMsg( dataPtr, &CAN_CombinedChargerUnit10msNo2->MsgData.rawData, 48, 16);
	setIntelMsg( dataPtr, &CAN_CombinedChargerUnit10msNo2->MsgData.rawData, 64, 8);
	setIntelMsg( dataPtr, &CAN_CombinedChargerUnit10msNo2->MsgData.rawData, 72, 2);
	setIntelMsg( dataPtr, &CAN_CombinedChargerUnit10msNo2->MsgData.rawData, 80, 2);
}

set_CAN_DT_DISP_GRDT(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_DT_DISP_GRDT->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_DT_DISP_GRDT->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_DT_DISP_GRDT->MsgData.rawData, 16, 3);
	setIntelMsg( dataPtr, &CAN_DT_DISP_GRDT->MsgData.rawData, 19, 2);
	setIntelMsg( dataPtr, &CAN_DT_DISP_GRDT->MsgData.rawData, 21, 3);
}

set_CAN_HighVoltageStorage10msNo2(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_HighVoltageStorage10msNo2->MsgData.rawData, 256, 16);
	setIntelMsg( dataPtr, &CAN_HighVoltageStorage10msNo2->MsgData.rawData, 272, 8);
	setIntelMsg( dataPtr, &CAN_HighVoltageStorage10msNo2->MsgData.rawData, 296, 12);
}

set_CAN_HighVoltageStorage200msNo1(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_HighVoltageStorage200msNo1->MsgData.rawData, 24, 2);
	setIntelMsg( dataPtr, &CAN_HighVoltageStorage200msNo1->MsgData.rawData, 26, 6);
}

set_CAN_VCU_Batt_Info(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_VCU_Batt_Info->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_Info->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_Info->MsgData.rawData, 16, 16);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_Info->MsgData.rawData, 32, 16);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_Info->MsgData.rawData, 48, 8);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_Info->MsgData.rawData, 56, 12);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_Info->MsgData.rawData, 72, 16);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_Info->MsgData.rawData, 88, 16);
}

set_CAN_VCU_Batt_WarnMsg(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 12, 2);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 14, 1);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 16, 2);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 18, 1);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 19, 1);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 20, 1);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 21, 2);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 23, 1);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 24, 2);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 26, 2);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 28, 1);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 29, 3);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 32, 8);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 40, 8);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 48, 8);
	setIntelMsg( dataPtr, &CAN_VCU_Batt_WarnMsg->MsgData.rawData, 56, 8);
}

set_CAN_VCU_ChargingConnection(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_VCU_ChargingConnection->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_VCU_ChargingConnection->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_VCU_ChargingConnection->MsgData.rawData, 12, 1);
	setIntelMsg( dataPtr, &CAN_VCU_ChargingConnection->MsgData.rawData, 13, 1);
	setIntelMsg( dataPtr, &CAN_VCU_ChargingConnection->MsgData.rawData, 16, 7);
	setIntelMsg( dataPtr, &CAN_VCU_ChargingConnection->MsgData.rawData, 24, 8);
	setIntelMsg( dataPtr, &CAN_VCU_ChargingConnection->MsgData.rawData, 32, 6);
}

set_CAN_VCU_HV_DrvSys_status(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 12, 3);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 16, 3);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 20, 3);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 23, 1);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 24, 12);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 36, 1);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 40, 3);
	setIntelMsg( dataPtr, &CAN_VCU_HV_DrvSys_status->MsgData.rawData, 43, 1);
}

set_CAN_VCU_HVsystem_status(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_VCU_HVsystem_status->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_VCU_HVsystem_status->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_VCU_HVsystem_status->MsgData.rawData, 12, 2);
	setIntelMsg( dataPtr, &CAN_VCU_HVsystem_status->MsgData.rawData, 14, 2);
	setIntelMsg( dataPtr, &CAN_VCU_HVsystem_status->MsgData.rawData, 16, 12);
	setIntelMsg( dataPtr, &CAN_VCU_HVsystem_status->MsgData.rawData, 32, 10);
}

set_CAN_VCU_MHU_info(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 12, 4);
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 16, 12);
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 28, 3);
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 31, 1);
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 32, 3);
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 35, 1);
	setIntelMsg( dataPtr, &CAN_VCU_MHU_info->MsgData.rawData, 40, 10);
}

set_CAN_VCU_StatusDCDC(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_VCU_StatusDCDC->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_VCU_StatusDCDC->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_VCU_StatusDCDC->MsgData.rawData, 12, 3);
	setIntelMsg( dataPtr, &CAN_VCU_StatusDCDC->MsgData.rawData, 16, 16);
	setIntelMsg( dataPtr, &CAN_VCU_StatusDCDC->MsgData.rawData, 32, 16);
	setIntelMsg( dataPtr, &CAN_VCU_StatusDCDC->MsgData.rawData, 48, 16);
	setIntelMsg( dataPtr, &CAN_VCU_StatusDCDC->MsgData.rawData, 64, 16);
}

set_CAN_VCU_WarnMsg(uint64_t * dataPtr){
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 0, 8);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 8, 4);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 12, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 13, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 14, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 15, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 16, 3);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 19, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 20, 3);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 23, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 24, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 25, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 26, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 27, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 28, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 29, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 30, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 31, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 32, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 33, 1);
	setIntelMsg( dataPtr, &CAN_VCU_WarnMsg->MsgData.rawData, 34, 1);
}

// ID and DLC defines //
#define CLAMP_STAT_DLC 3
#define CLAMP_STAT_ID 497
#define BundleEAFlexrayToCANFD20msNo1_DLC 32
#define BundleEAFlexrayToCANFD20msNo1_ID 289
#define AVL_RPM_WHL_DLC 12
#define AVL_RPM_WHL_ID 131
#define BundleEAFlexrayToAECANFD10msNo1_DLC 64
#define BundleEAFlexrayToAECANFD10msNo1_ID 296
#define TracEMacElectc2Time100msNo1_DLC 32
#define TracEMacElectc2Time100msNo1_ID 326
#define TracEMacElectc1Time100msNo1_DLC 32
#define TracEMacElectc1Time100msNo1_ID 314
#define ST_STAB_DSC_DLC 8
#define ST_STAB_DSC_ID 213
#define ST_STAB_DSC_2_DLC 8
#define ST_STAB_DSC_2_ID 214
#define EBCM_STATUS_DLC 7
#define EBCM_STATUS_ID 150
#define Kilometerstand_2_DLC 8
#define Kilometerstand_2_ID 490
#define ESC_A_DLC 4
#define ESC_A_ID 200
#define IEB_01_DLC 2
#define IEB_01_ID 210
#define ABS_ESC_01_DLC 1
#define ABS_ESC_01_ID 180
#define A_TEMP_DLC 2
#define A_TEMP_ID 749
#define CombinedChargerUnit10msNo2_DLC 20
#define CombinedChargerUnit10msNo2_ID 293
#define CON_VEH_DLC 8
#define CON_VEH_ID 60
#define DT_DISP_GRDT_DLC 5
#define DT_DISP_GRDT_ID 1021
#define ERRM_BN_U_DLC 2
#define ERRM_BN_U_ID 146
#define FAHRGESTELLNUMMER_DLC 7
#define FAHRGESTELLNUMMER_ID 896
#define FZU_ChargingControl_DLC 1
#define FZU_ChargingControl_ID 451
#define FZZSTD_DLC 8
#define FZZSTD_ID 630
#define HighVoltageStorage10msNo2_DLC 48
#define HighVoltageStorage10msNo2_ID 143
#define HighVoltageStorage200msNo1_DLC 8
#define HighVoltageStorage200msNo1_ID 1107
#define KILOMETERSTAND_DLC 8
#define KILOMETERSTAND_ID 816
#define Networkmanagement3_Status_DLC 8
#define Networkmanagement3_Status_ID 1296
#define RELATIVZEIT_DLC 4
#define RELATIVZEIT_ID 1090
#define SFA_SteerWheel_Info_DLC 8
#define SFA_SteerWheel_Info_ID 88
#define ST_GWS_DLC 4
#define ST_GWS_ID 407
#define STAT_ANHAENGER_DLC 8
#define STAT_ANHAENGER_ID 632
#define VCU_Batt_Info_DLC 16
#define VCU_Batt_Info_ID 514
#define VCU_Batt_WarnMsg_DLC 8
#define VCU_Batt_WarnMsg_ID 882
#define VCU_ChargingConnection_DLC 5
#define VCU_ChargingConnection_ID 277
#define VCU_HV_DrvSys_status_DLC 6
#define VCU_HV_DrvSys_status_ID 273
#define VCU_HVsystem_status_DLC 6
#define VCU_HVsystem_status_ID 151
#define VCU_MHU_info_DLC 7
#define VCU_MHU_info_ID 498
#define VCU_StatusDCDC_DLC 12
#define VCU_StatusDCDC_ID 433
#define VCU_WarnMsg_DLC 5
#define VCU_WarnMsg_ID 881

// messages as union created below
typedef union{
	uint8 raw_data[3];
	typedef struct{
		uint64 CRC_CLAMP_STAT_phy : 8;
		uint64 ALIV_CLAMP_STAT_phy : 4;
		uint64 STAT_CL15_L_phy : 2;
		uint64 STAT_CL30S_L_phy : 2;
		uint64 STAT_CL30S_Light_phy : 2;
		uint64 STAT_CL15_WUPL_phy : 2;
	}signals;
}CAN_CLAMP_STAT_DATA_t;

typedef union{
	uint8 raw_data[32];
	typedef struct{
		uint64 CRC_V_VEH_phy : 8;
		uint64 ALIV_V_VEH_phy : 4;
		uint64 NoUsedBits1_phy : 3;
		uint64 V_VEH_COG_phy : 16;
		uint64 NoUsedBits2_phy : 1;
		uint64 QU_V_VEH_COG_phy : 4;
		uint64 NoUsedBits3_phy : 4;
		uint64 SecOcDataP2V_VEH_phy : 64;
	}signals;
}CAN_BundleEAFlexrayToCANFD20msNo1_DATA_t;

typedef union{
	uint8 raw_data[12];
	typedef struct{
		uint64 CRC_AVL_RPM_WHL_phy : 8;
		uint64 ALIV_AVL_RPM_WHL_phy : 4;
		uint64 NoUsedBits1_phy : 4;
		uint64 AVL_RPM_WHL_RLH_phy : 16;
		uint64 AVL_RPM_WHL_RRH_phy : 16;
		uint64 AVL_RPM_WHL_FLH_phy : 16;
		uint64 AVL_RPM_WHL_FRH_phy : 16;
		uint64 QU_AVL_RPM_WHL_RLH_phy : 4;
		uint64 QU_AVL_RPM_WHL_RRH_phy : 4;
		uint64 QU_AVL_RPM_WHL_FLH_phy : 4;
		uint64 QU_AVL_RPM_WHL_FRH_phy : 4;
	}signals;
}CAN_AVL_RPM_WHL_DATA_t;

typedef union{
	uint8 raw_data[64];
	typedef struct{
		uint64 CRC_EXTS_ARB_INTF_phy : 8;
		uint64 ALIV_EXTS_ARB_INTF_phy : 4;
		uint64 CHL_EXTS_ARB_INTF_phy : 4;
		uint64 AVL_BRTORQ_WHL_RS_LH_EXT_phy : 16;
		uint64 AVL_BRTORQ_WHL_RS_RH_EXT_phy : 16;
		uint64 AVL_BRTORQ_WHL_FS_LH_EXT_phy : 16;
		uint64 AVL_BRTORQ_WHL_FS_RH_EXT_phy : 16;
		uint64 NoUsedBits1_phy : 48;
		uint64 CRC_RQ_RPM_BAX_phy : 8;
		uint64 ALIV_RQ_RPM_BAX_phy : 4;
		uint64 CHL_RQ_RPM_BAX_phy : 4;
		uint64 TAR_RPM_MAX_BAX_phy : 16;
		uint64 TAR_RPM_MIN_BAX_phy : 16;
		uint64 ST_TAR_RPM_BAX_phy : 4;
		uint64 TAR_STIF_SPCO_phy : 4;
		uint64 NoUsedBits2_phy : 8;
		uint64 CRC_RQ_RPM_FTAX_phy : 8;
		uint64 ALIV_RQ_RPM_FTAX_phy : 4;
		uint64 CHL_RQ_RPM_FTAX_phy : 4;
		uint64 TAR_RPM_MAX_FTAX_phy : 16;
		uint64 TAR_RPM_MIN_FTAX_phy : 16;
		uint64 ST_TAR_RPM_FTAX_phy : 4;
		uint64 StatusSlipThresholdsRearAxle_phy : 4;
		uint64 NoUsedBits3_phy : 80;
		uint64 CRC_StatusSlipThresholds_phy : 8;
		uint64 ALIV_StatusSlipThresholds_phy : 4;
		uint64 CHL_StatusSlipThresholds_phy : 4;
		uint64 StatusSlipThresholdsFrontAxle_phy : 4;
	}signals;
}CAN_BundleEAFlexrayToAECANFD10msNo1_DATA_t;

typedef union{
	uint8 raw_data[32];
	typedef struct{
		uint64 OpModETractSys2ActVal_phy : 8;
	}signals;
}CAN_TracEMacElectc2Time100msNo1_DATA_t;

typedef union{
	uint8 raw_data[32];
	typedef struct{
		uint64 OpModETractSys1ActVal_phy : 8;
	}signals;
}CAN_TracEMacElectc1Time100msNo1_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 CRC_ST_STAB_DSC_phy : 8;
		uint64 ALIV_ST_STAB_DSC_phy : 4;
		uint64 NoUsedBits1_phy : 4;
		uint64 QU_FN_FDR_phy : 12;
		uint64 QU_FN_ABS_phy : 12;
		uint64 QU_FN_ASC_phy : 12;
		uint64 NoUsedBits2_phy : 4;
		uint64 ST_BRG_DV_phy : 6;
	}signals;
}CAN_ST_STAB_DSC_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 ST_SLIP_THO_phy : 4;
	}signals;
}CAN_ST_STAB_DSC_2_DATA_t;

typedef union{
	uint8 raw_data[7];
	typedef struct{
		uint64 CRC_EBCM_STATUS_phy : 8;
		uint64 ALIV_EBCM_STATUS_phy : 4;
		uint64 MCPressure_phy : 12;
		uint64 BreakPedalPercent_phy : 12;
		uint64 EPBStatus_phy : 4;
		uint64 HillholderStatus_phy : 4;
		uint64 TCSAvailable_phy : 1;
		uint64 TCSActive_phy : 1;
		uint64 BreakPedalPercentValid_phy : 1;
		uint64 MCPressureSts_phy : 1;
		uint64 HillholderFault_phy : 1;
		uint64 EPBFault_phy : 1;
		uint64 EBCM_BrkPedlSts_phy : 2;
	}signals;
}CAN_EBCM_STATUS_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 MILE_KM_TOT_phy : 32;
	}signals;
}CAN_Kilometerstand_2_DATA_t;

typedef union{
	uint8 raw_data[4];
	typedef struct{
		uint64 AD3_PrsrVal_Fl_phy : 8;
		uint64 AD3_PrsrVal_Fr_phy : 8;
		uint64 AD3_PrsrVal_Rl_phy : 8;
		uint64 AD3_PrsrVal_Rr_phy : 8;
	}signals;
}CAN_ESC_A_DATA_t;

typedef union{
	uint8 raw_data[2];
	typedef struct{
		uint64 WEstTot_Nm_phy : 16;
	}signals;
}CAN_IEB_01_DATA_t;

typedef union{
	uint8 raw_data[1];
	typedef struct{
		uint64 ABS_ACTIVE_phy : 2;
	}signals;
}CAN_ABS_ESC_01_DATA_t;

typedef union{
	uint8 raw_data[2];
	typedef struct{
		uint64 TEMP_EX_phy : 8;
	}signals;
}CAN_A_TEMP_DATA_t;

typedef union{
	uint8 raw_data[20];
	typedef struct{
		uint64 PowerETractSys2LimMotMax_phy : 16;
		uint64 PowerETractSys1LimGenMax_phy : 16;
		uint64 PowerETractSys2LimGenMax_phy : 16;
		uint64 PowerETractSys1LimMotMax_phy : 16;
		uint64 OperatingModeEANActualValue_phy : 8;
		uint64 RequestExtraBoostETractSys1_phy : 2;
		uint64 NoUsedBits1_phy : 6;
		uint64 RequestExtraBoostETractSys2_phy : 2;
	}signals;
}CAN_CombinedChargerUnit10msNo2_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 CRC_CON_VEH_phy : 8;
		uint64 ALIV_CON_VEH_phy : 4;
		uint64 CTR_BS_PRTNT_phy : 4;
		uint64 CTR_FKTN_PRTNT_phy : 32;
		uint64 ST_CON_VEH_phy : 4;
		uint64 QU_ST_CON_VEH_phy : 4;
	}signals;
}CAN_CON_VEH_DATA_t;

typedef union{
	uint8 raw_data[5];
	typedef struct{
		uint64 CRC_DT_DISP_GRDT_phy : 8;
		uint64 ALIV_DT_DISP_GRDT_phy : 4;
		uint64 NoUsedBits1_phy : 4;
		uint64 DISP_PRG_GRB_phy : 3;
		uint64 DISP_PO_IDC_GRB_phy : 2;
		uint64 DISP_PO_GRB_phy : 3;
	}signals;
}CAN_DT_DISP_GRDT_DATA_t;

typedef union{
	uint8 raw_data[2];
	typedef struct{
		uint64 CTR_ERRM_BN_U_phy : 6;
	}signals;
}CAN_ERRM_BN_U_DATA_t;

typedef union{
	uint8 raw_data[7];
	typedef struct{
		uint64 NO_VECH_1_phy : 8;
		uint64 NO_VECH_2_phy : 8;
		uint64 NO_VECH_3_phy : 8;
		uint64 NO_VECH_4_phy : 8;
		uint64 NO_VECH_5_phy : 8;
		uint64 NO_VECH_6_phy : 8;
		uint64 NO_VECH_7_phy : 8;
	}signals;
}CAN_FAHRGESTELLNUMMER_DATA_t;

typedef union{
	uint8 raw_data[1];
	typedef struct{
		uint64 FZU_ChargingStopReq_phy : 2;
	}signals;
}CAN_FZU_ChargingControl_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 ST_ENERG_FZM_phy : 4;
		uint64 NoUsedBits1_phy : 36;
		uint64 ST_ILK_ERRM_FZM_phy : 2;
	}signals;
}CAN_FZZSTD_DATA_t;

typedef union{
	uint8 raw_data[48];
	typedef struct{
		uint64 CRC_HighVoltageStorage10msNo2_phy : 16;
		uint64 ALIV_HighVoltageStorage10msNo2_phy : 8;
		uint64 NoUsedBits1_phy : 16;
		uint64 ActualValueVoltageLinkVerified_phy : 12;
	}signals;
}CAN_HighVoltageStorage10msNo2_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 StatusServiceDisconnectionPlug_phy : 2;
		uint64 StsDisconnectingSwtHighVoltStorg_phy : 6;
	}signals;
}CAN_HighVoltageStorage200msNo1_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 MILE_KM_phy : 24;
	}signals;
}CAN_KILOMETERSTAND_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 NM3ControlBitVector_phy : 8;
		uint64 NM3SenderECUId_phy : 8;
		uint64 NM3BasePartialNetworks_phy : 16;
		uint64 NM3FunctionalPartialNetworks_phy : 32;
	}signals;
}CAN_Networkmanagement3_Status_DATA_t;

typedef union{
	uint8 raw_data[4];
	typedef struct{
		uint64 T_SEC_COU_REL_phy : 32;
	}signals;
}CAN_RELATIVZEIT_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 CRC_SFA_SteerWheel_Info_phy : 8;
		uint64 ALIV_SFA_SteerWheel_Info_phy : 4;
		uint64 NoUsedBits1_phy : 4;
		uint64 SFA_SteerWheelTorque_phy : 12;
		uint64 NoUsedBits2_phy : 4;
		uint64 SFA_SteerWheelAngleSpeed_phy : 8;
		uint64 SFA_SteerWheelAngle_phy : 16;
		uint64 SFA_WarningLamp_phy : 3;
		uint64 SFA_EmergencyRequest_phy : 2;
		uint64 SFA_CenteringStatus_phy : 3;
	}signals;
}CAN_SFA_SteerWheel_Info_DATA_t;

typedef union{
	uint8 raw_data[4];
	typedef struct{
		uint64 CRC_ST_GWS_phy : 8;
		uint64 ALIV_ST_GWS_phy : 4;
		uint64 OP_GWS_phy : 4;
		uint64 NoUsedBits1_phy : 8;
		uint64 OP_GWS_PUBU_PKG_phy : 2;
	}signals;
}CAN_ST_GWS_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 ST_TRAI_phy : 2;
	}signals;
}CAN_STAT_ANHAENGER_DATA_t;

typedef union{
	uint8 raw_data[16];
	typedef struct{
		uint64 CRC_VCU_Batt_Info_phy : 8;
		uint64 ALV_VCU_Batt_Info_phy : 4;
		uint64 NoUsedBits1_phy : 4;
		uint64 BMS_PackCur_phy : 16;
		uint64 BMS_PackVoltage_phy : 16;
		uint64 BMS_PackTemp_phy : 8;
		uint64 BMS_RemainChargeTime_phy : 12;
		uint64 NoUsedBits2_phy : 4;
		uint64 BMS_ChargingVoltage_phy : 16;
		uint64 BMS_ChargingCurrent_phy : 16;
	}signals;
}CAN_VCU_Batt_Info_DATA_t;

typedef union{
	uint8 raw_data[8];
	typedef struct{
		uint64 CHSKM_VCU_Batt_WarnMsg_phy : 8;
		uint64 ALV_VCU_Batt_WarnMsg_phy : 4;
		uint64 BMS_PackTempSts_phy : 2;
		uint64 BMS_ThermalRunaway_phy : 1;
		uint64 NoUsedBits1_phy : 1;
		uint64 BMS_CellTempErr_phy : 2;
		uint64 BMS_HVILErr_phy : 1;
		uint64 BMS_PackInsuErr_phy : 1;
		uint64 BMS_MalfunctionSts_phy : 1;
		uint64 BMS_LowBattery_phy : 2;
		uint64 BMS_FuseStatusErr_phy : 1;
		uint64 BMS_CellVoltErr_phy : 2;
		uint64 BMS_PackVolErr_phy : 2;
		uint64 BMS_PackOverCurrErr_phy : 1;
		uint64 BMS_Reserved_signal1_phy : 3;
		uint64 BMS_Reserved_signal2_phy : 8;
		uint64 BMS_Reserved_signal3_phy : 8;
		uint64 BMS_Reserved_signal4_phy : 8;
		uint64 BMS_Reserved_signal5_phy : 8;
	}signals;
}CAN_VCU_Batt_WarnMsg_DATA_t;

typedef union{
	uint8 raw_data[5];
	typedef struct{
		uint64 CRC_VCU_ChargingConnection_phy : 8;
		uint64 ALV_VCU_ChargingConnection_phy : 4;
		uint64 VCU_DCChgGunIn_phy : 1;
		uint64 VCU_AcChgGunIn_phy : 1;
		uint64 NoUsedBits1_phy : 2;
		uint64 VCU_CPValue_phy : 7;
		uint64 NoUsedBits2_phy : 1;
		uint64 VCU_ACChargingVoltage_phy : 8;
		uint64 VCU_MaxCurrentOfACCharging_phy : 6;
	}signals;
}CAN_VCU_ChargingConnection_DATA_t;

typedef union{
	uint8 raw_data[6];
	typedef struct{
		uint64 CRC_VCU_HV_DrvSys_status_phy : 8;
		uint64 ALV_VCU_HV_DrvSys_bstatus_phy : 4;
		uint64 VCU_HV_SystemStatus_phy : 3;
		uint64 NoUsedBits1_phy : 1;
		uint64 VCU_HV_DrvSystemStatus_phy : 3;
		uint64 NoUsedBits2_phy : 1;
		uint64 VCU_ACT_Gear_phy : 3;
		uint64 VCU_ACT_GearValid_phy : 1;
		uint64 VCU_ACPD_Percent_phy : 12;
		uint64 VCU_ACPD_Percent_Valid_phy : 1;
		uint64 NoUsedBits3_phy : 3;
		uint64 VCU_ACT_DriveMode_phy : 3;
		uint64 VCU_ACT_DriveModeValid_phy : 1;
	}signals;
}CAN_VCU_HV_DrvSys_status_DATA_t;

typedef union{
	uint8 raw_data[6];
	typedef struct{
		uint64 CRC_VCU_HVsystem_status_phy : 8;
		uint64 ALIV_VCU_HVsystem_status_phy : 4;
		uint64 VCU_RunningRange_chrg_estSts_phy : 2;
		uint64 VCU_HVbatSoc_charged_estStatus_phy : 2;
		uint64 VCU_RunningRange_charged_phy : 12;
		uint64 NoUsedBits1_phy : 4;
		uint64 VCU_HVbatSoc_charged_phy : 10;
	}signals;
}CAN_VCU_HVsystem_status_DATA_t;

typedef union{
	uint8 raw_data[7];
	typedef struct{
		uint64 CRC_VCU_MHU_info_phy : 8;
		uint64 ALV_VCU_MHU_info_phy : 4;
		uint64 VCU_CurPwrConsum_phy : 4;
		uint64 VCU_RemainingRange_phy : 12;
		uint64 VCU_ChgGun_Status_phy : 3;
		uint64 VCU_BattChargingStatus_phy : 1;
		uint64 VCU_VehChg_STS_phy : 3;
		uint64 VCU_ChgGunConnStatus_phy : 1;
		uint64 NoUsedBits1_phy : 4;
		uint64 VCU_BattSOC_phy : 10;
	}signals;
}CAN_VCU_MHU_info_DATA_t;

typedef union{
	uint8 raw_data[12];
	typedef struct{
		uint64 CRC_VCU_StatusDCDC_phy : 8;
		uint64 ALV_VCU_StatusDCDC_phy : 4;
		uint64 DCDC_status_phy : 3;
		uint64 NoUsedBits1_phy : 1;
		uint64 DCDC_maxCurrentOut_phy : 16;
		uint64 DCDC_iOutput_phy : 16;
		uint64 DCDC_vDCInput_phy : 16;
		uint64 DCDC_vOutput_phy : 16;
	}signals;
}CAN_VCU_StatusDCDC_DATA_t;

typedef union{
	uint8 raw_data[5];
	typedef struct{
		uint64 CRC_VCU_WarnMsg_phy : 8;
		uint64 ALV_VCU_WarnMsg_phy : 4;
		uint64 VCU_GearPAtStationaryOnly_phy : 1;
		uint64 VCU_GearPNotPossible_phy : 1;
		uint64 VCU_PressBreakToEngageGear_phy : 1;
		uint64 VCU_CantChangeGear_phy : 1;
		uint64 VCU_MotorCoolantPumpErr_phy : 3;
		uint64 VCU_EmergencyShutdown_phy : 1;
		uint64 VCU_HeatLoopTempSensorErr_phy : 3;
		uint64 VCU_GearMalfunc_phy : 1;
		uint64 VCU_CoolingTempExceedLimit_phy : 1;
		uint64 VCU_TransmissionMalfunction_phy : 1;
		uint64 VCU_ParkLockNotEngaged_phy : 1;
		uint64 VCU_CoolantTempHigh_phy : 1;
		uint64 VCU_CheckDriveTrain_phy : 1;
		uint64 VCU_OBCTempHigh_phy : 1;
		uint64 VCU_DCDC_TempHigh_phy : 1;
		uint64 VCU_ChargingInletTempHigh_phy : 1;
		uint64 VCU_HVILErr_phy : 1;
		uint64 VCU_Limphome_phy : 1;
		uint64 VCU_HVSystemReduced_phy : 1;
	}signals;
}CAN_VCU_WarnMsg_DATA_t;


typedef struct{
	uint8 CLAMP_STAT_DLC = CLAMP_STAT_DLC;
	uint16 CLAMP_STAT_ID = CLAMP_STAT_ID;
	CAN_CLAMP_STAT_DATA_t  MsgData; 
} CAN_CLAMP_STAT_t;

typedef struct{
	uint8 BundleEAFlexrayToCANFD20msNo1_DLC = BundleEAFlexrayToCANFD20msNo1_DLC;
	uint16 BundleEAFlexrayToCANFD20msNo1_ID = BundleEAFlexrayToCANFD20msNo1_ID;
	CAN_BundleEAFlexrayToCANFD20msNo1_DATA_t  MsgData; 
} CAN_BundleEAFlexrayToCANFD20msNo1_t;

typedef struct{
	uint8 AVL_RPM_WHL_DLC = AVL_RPM_WHL_DLC;
	uint16 AVL_RPM_WHL_ID = AVL_RPM_WHL_ID;
	CAN_AVL_RPM_WHL_DATA_t  MsgData; 
} CAN_AVL_RPM_WHL_t;

typedef struct{
	uint8 BundleEAFlexrayToAECANFD10msNo1_DLC = BundleEAFlexrayToAECANFD10msNo1_DLC;
	uint16 BundleEAFlexrayToAECANFD10msNo1_ID = BundleEAFlexrayToAECANFD10msNo1_ID;
	CAN_BundleEAFlexrayToAECANFD10msNo1_DATA_t  MsgData; 
} CAN_BundleEAFlexrayToAECANFD10msNo1_t;

typedef struct{
	uint8 TracEMacElectc2Time100msNo1_DLC = TracEMacElectc2Time100msNo1_DLC;
	uint16 TracEMacElectc2Time100msNo1_ID = TracEMacElectc2Time100msNo1_ID;
	CAN_TracEMacElectc2Time100msNo1_DATA_t  MsgData; 
} CAN_TracEMacElectc2Time100msNo1_t;

typedef struct{
	uint8 TracEMacElectc1Time100msNo1_DLC = TracEMacElectc1Time100msNo1_DLC;
	uint16 TracEMacElectc1Time100msNo1_ID = TracEMacElectc1Time100msNo1_ID;
	CAN_TracEMacElectc1Time100msNo1_DATA_t  MsgData; 
} CAN_TracEMacElectc1Time100msNo1_t;

typedef struct{
	uint8 ST_STAB_DSC_DLC = ST_STAB_DSC_DLC;
	uint16 ST_STAB_DSC_ID = ST_STAB_DSC_ID;
	CAN_ST_STAB_DSC_DATA_t  MsgData; 
} CAN_ST_STAB_DSC_t;

typedef struct{
	uint8 ST_STAB_DSC_2_DLC = ST_STAB_DSC_2_DLC;
	uint16 ST_STAB_DSC_2_ID = ST_STAB_DSC_2_ID;
	CAN_ST_STAB_DSC_2_DATA_t  MsgData; 
} CAN_ST_STAB_DSC_2_t;

typedef struct{
	uint8 EBCM_STATUS_DLC = EBCM_STATUS_DLC;
	uint16 EBCM_STATUS_ID = EBCM_STATUS_ID;
	CAN_EBCM_STATUS_DATA_t  MsgData; 
} CAN_EBCM_STATUS_t;

typedef struct{
	uint8 Kilometerstand_2_DLC = Kilometerstand_2_DLC;
	uint16 Kilometerstand_2_ID = Kilometerstand_2_ID;
	CAN_Kilometerstand_2_DATA_t  MsgData; 
} CAN_Kilometerstand_2_t;

typedef struct{
	uint8 ESC_A_DLC = ESC_A_DLC;
	uint16 ESC_A_ID = ESC_A_ID;
	CAN_ESC_A_DATA_t  MsgData; 
} CAN_ESC_A_t;

typedef struct{
	uint8 IEB_01_DLC = IEB_01_DLC;
	uint16 IEB_01_ID = IEB_01_ID;
	CAN_IEB_01_DATA_t  MsgData; 
} CAN_IEB_01_t;

typedef struct{
	uint8 ABS_ESC_01_DLC = ABS_ESC_01_DLC;
	uint16 ABS_ESC_01_ID = ABS_ESC_01_ID;
	CAN_ABS_ESC_01_DATA_t  MsgData; 
} CAN_ABS_ESC_01_t;

typedef struct{
	uint8 A_TEMP_DLC = A_TEMP_DLC;
	uint16 A_TEMP_ID = A_TEMP_ID;
	CAN_A_TEMP_DATA_t  MsgData; 
} CAN_A_TEMP_t;

typedef struct{
	uint8 CombinedChargerUnit10msNo2_DLC = CombinedChargerUnit10msNo2_DLC;
	uint16 CombinedChargerUnit10msNo2_ID = CombinedChargerUnit10msNo2_ID;
	CAN_CombinedChargerUnit10msNo2_DATA_t  MsgData; 
} CAN_CombinedChargerUnit10msNo2_t;

typedef struct{
	uint8 CON_VEH_DLC = CON_VEH_DLC;
	uint16 CON_VEH_ID = CON_VEH_ID;
	CAN_CON_VEH_DATA_t  MsgData; 
} CAN_CON_VEH_t;

typedef struct{
	uint8 DT_DISP_GRDT_DLC = DT_DISP_GRDT_DLC;
	uint16 DT_DISP_GRDT_ID = DT_DISP_GRDT_ID;
	CAN_DT_DISP_GRDT_DATA_t  MsgData; 
} CAN_DT_DISP_GRDT_t;

typedef struct{
	uint8 ERRM_BN_U_DLC = ERRM_BN_U_DLC;
	uint16 ERRM_BN_U_ID = ERRM_BN_U_ID;
	CAN_ERRM_BN_U_DATA_t  MsgData; 
} CAN_ERRM_BN_U_t;

typedef struct{
	uint8 FAHRGESTELLNUMMER_DLC = FAHRGESTELLNUMMER_DLC;
	uint16 FAHRGESTELLNUMMER_ID = FAHRGESTELLNUMMER_ID;
	CAN_FAHRGESTELLNUMMER_DATA_t  MsgData; 
} CAN_FAHRGESTELLNUMMER_t;

typedef struct{
	uint8 FZU_ChargingControl_DLC = FZU_ChargingControl_DLC;
	uint16 FZU_ChargingControl_ID = FZU_ChargingControl_ID;
	CAN_FZU_ChargingControl_DATA_t  MsgData; 
} CAN_FZU_ChargingControl_t;

typedef struct{
	uint8 FZZSTD_DLC = FZZSTD_DLC;
	uint16 FZZSTD_ID = FZZSTD_ID;
	CAN_FZZSTD_DATA_t  MsgData; 
} CAN_FZZSTD_t;

typedef struct{
	uint8 HighVoltageStorage10msNo2_DLC = HighVoltageStorage10msNo2_DLC;
	uint16 HighVoltageStorage10msNo2_ID = HighVoltageStorage10msNo2_ID;
	CAN_HighVoltageStorage10msNo2_DATA_t  MsgData; 
} CAN_HighVoltageStorage10msNo2_t;

typedef struct{
	uint8 HighVoltageStorage200msNo1_DLC = HighVoltageStorage200msNo1_DLC;
	uint16 HighVoltageStorage200msNo1_ID = HighVoltageStorage200msNo1_ID;
	CAN_HighVoltageStorage200msNo1_DATA_t  MsgData; 
} CAN_HighVoltageStorage200msNo1_t;

typedef struct{
	uint8 KILOMETERSTAND_DLC = KILOMETERSTAND_DLC;
	uint16 KILOMETERSTAND_ID = KILOMETERSTAND_ID;
	CAN_KILOMETERSTAND_DATA_t  MsgData; 
} CAN_KILOMETERSTAND_t;

typedef struct{
	uint8 Networkmanagement3_Status_DLC = Networkmanagement3_Status_DLC;
	uint16 Networkmanagement3_Status_ID = Networkmanagement3_Status_ID;
	CAN_Networkmanagement3_Status_DATA_t  MsgData; 
} CAN_Networkmanagement3_Status_t;

typedef struct{
	uint8 RELATIVZEIT_DLC = RELATIVZEIT_DLC;
	uint16 RELATIVZEIT_ID = RELATIVZEIT_ID;
	CAN_RELATIVZEIT_DATA_t  MsgData; 
} CAN_RELATIVZEIT_t;

typedef struct{
	uint8 SFA_SteerWheel_Info_DLC = SFA_SteerWheel_Info_DLC;
	uint16 SFA_SteerWheel_Info_ID = SFA_SteerWheel_Info_ID;
	CAN_SFA_SteerWheel_Info_DATA_t  MsgData; 
} CAN_SFA_SteerWheel_Info_t;

typedef struct{
	uint8 ST_GWS_DLC = ST_GWS_DLC;
	uint16 ST_GWS_ID = ST_GWS_ID;
	CAN_ST_GWS_DATA_t  MsgData; 
} CAN_ST_GWS_t;

typedef struct{
	uint8 STAT_ANHAENGER_DLC = STAT_ANHAENGER_DLC;
	uint16 STAT_ANHAENGER_ID = STAT_ANHAENGER_ID;
	CAN_STAT_ANHAENGER_DATA_t  MsgData; 
} CAN_STAT_ANHAENGER_t;

typedef struct{
	uint8 VCU_Batt_Info_DLC = VCU_Batt_Info_DLC;
	uint16 VCU_Batt_Info_ID = VCU_Batt_Info_ID;
	CAN_VCU_Batt_Info_DATA_t  MsgData; 
} CAN_VCU_Batt_Info_t;

typedef struct{
	uint8 VCU_Batt_WarnMsg_DLC = VCU_Batt_WarnMsg_DLC;
	uint16 VCU_Batt_WarnMsg_ID = VCU_Batt_WarnMsg_ID;
	CAN_VCU_Batt_WarnMsg_DATA_t  MsgData; 
} CAN_VCU_Batt_WarnMsg_t;

typedef struct{
	uint8 VCU_ChargingConnection_DLC = VCU_ChargingConnection_DLC;
	uint16 VCU_ChargingConnection_ID = VCU_ChargingConnection_ID;
	CAN_VCU_ChargingConnection_DATA_t  MsgData; 
} CAN_VCU_ChargingConnection_t;

typedef struct{
	uint8 VCU_HV_DrvSys_status_DLC = VCU_HV_DrvSys_status_DLC;
	uint16 VCU_HV_DrvSys_status_ID = VCU_HV_DrvSys_status_ID;
	CAN_VCU_HV_DrvSys_status_DATA_t  MsgData; 
} CAN_VCU_HV_DrvSys_status_t;

typedef struct{
	uint8 VCU_HVsystem_status_DLC = VCU_HVsystem_status_DLC;
	uint16 VCU_HVsystem_status_ID = VCU_HVsystem_status_ID;
	CAN_VCU_HVsystem_status_DATA_t  MsgData; 
} CAN_VCU_HVsystem_status_t;

typedef struct{
	uint8 VCU_MHU_info_DLC = VCU_MHU_info_DLC;
	uint16 VCU_MHU_info_ID = VCU_MHU_info_ID;
	CAN_VCU_MHU_info_DATA_t  MsgData; 
} CAN_VCU_MHU_info_t;

typedef struct{
	uint8 VCU_StatusDCDC_DLC = VCU_StatusDCDC_DLC;
	uint16 VCU_StatusDCDC_ID = VCU_StatusDCDC_ID;
	CAN_VCU_StatusDCDC_DATA_t  MsgData; 
} CAN_VCU_StatusDCDC_t;

typedef struct{
	uint8 VCU_WarnMsg_DLC = VCU_WarnMsg_DLC;
	uint16 VCU_WarnMsg_ID = VCU_WarnMsg_ID;
	CAN_VCU_WarnMsg_DATA_t  MsgData; 
} CAN_VCU_WarnMsg_t;

// variables define below ##
CAN_CLAMP_STAT_t CAN_CLAMP_STAT;
CAN_BundleEAFlexrayToCANFD20msNo1_t CAN_BUNDLEEAFLEXRAYTOCANFD20MSNO1;
CAN_AVL_RPM_WHL_t CAN_AVL_RPM_WHL;
CAN_BundleEAFlexrayToAECANFD10msNo1_t CAN_BUNDLEEAFLEXRAYTOAECANFD10MSNO1;
CAN_TracEMacElectc2Time100msNo1_t CAN_TRACEMACELECTC2TIME100MSNO1;
CAN_TracEMacElectc1Time100msNo1_t CAN_TRACEMACELECTC1TIME100MSNO1;
CAN_ST_STAB_DSC_t CAN_ST_STAB_DSC;
CAN_ST_STAB_DSC_2_t CAN_ST_STAB_DSC_2;
CAN_EBCM_STATUS_t CAN_EBCM_STATUS;
CAN_Kilometerstand_2_t CAN_KILOMETERSTAND_2;
CAN_ESC_A_t CAN_ESC_A;
CAN_IEB_01_t CAN_IEB_01;
CAN_ABS_ESC_01_t CAN_ABS_ESC_01;
CAN_A_TEMP_t CAN_A_TEMP;
CAN_CombinedChargerUnit10msNo2_t CAN_COMBINEDCHARGERUNIT10MSNO2;
CAN_CON_VEH_t CAN_CON_VEH;
CAN_DT_DISP_GRDT_t CAN_DT_DISP_GRDT;
CAN_ERRM_BN_U_t CAN_ERRM_BN_U;
CAN_FAHRGESTELLNUMMER_t CAN_FAHRGESTELLNUMMER;
CAN_FZU_ChargingControl_t CAN_FZU_CHARGINGCONTROL;
CAN_FZZSTD_t CAN_FZZSTD;
CAN_HighVoltageStorage10msNo2_t CAN_HIGHVOLTAGESTORAGE10MSNO2;
CAN_HighVoltageStorage200msNo1_t CAN_HIGHVOLTAGESTORAGE200MSNO1;
CAN_KILOMETERSTAND_t CAN_KILOMETERSTAND;
CAN_Networkmanagement3_Status_t CAN_NETWORKMANAGEMENT3_STATUS;
CAN_RELATIVZEIT_t CAN_RELATIVZEIT;
CAN_SFA_SteerWheel_Info_t CAN_SFA_STEERWHEEL_INFO;
CAN_ST_GWS_t CAN_ST_GWS;
CAN_STAT_ANHAENGER_t CAN_STAT_ANHAENGER;
CAN_VCU_Batt_Info_t CAN_VCU_BATT_INFO;
CAN_VCU_Batt_WarnMsg_t CAN_VCU_BATT_WARNMSG;
CAN_VCU_ChargingConnection_t CAN_VCU_CHARGINGCONNECTION;
CAN_VCU_HV_DrvSys_status_t CAN_VCU_HV_DRVSYS_STATUS;
CAN_VCU_HVsystem_status_t CAN_VCU_HVSYSTEM_STATUS;
CAN_VCU_MHU_info_t CAN_VCU_MHU_INFO;
CAN_VCU_StatusDCDC_t CAN_VCU_STATUSDCDC;
CAN_VCU_WarnMsg_t CAN_VCU_WARNMSG;

#endif  // FEV_VCU_DATA_H