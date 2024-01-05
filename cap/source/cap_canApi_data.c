/**
 * @file cap_canApi_data.c
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

#define CPU1_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"
	uint32 tempAswIn_SecOcDataP2V_VEH1;
	uint32 tempAswIn_SecOcDataP2V_VEH2;
	uint32 tempAswOut_SecOcDataP2V_VEH1;
	uint32 tempAswOut_SecOcDataP2V_VEH2;
	uint64 Ret_SecOcDataP2V_VEH_phy_C;
	const volatile uint64 SecOcDataP2V_VEH_phy_C = 18446744073709551615;
cap_canApiMsg_VCU_WarnMsg_BCAN_t cap_canApiMsg_VCU_WarnMsg_BCAN; 



cap_canApiMsg_VCU_StatusDCDC_BCAN_t cap_canApiMsg_VCU_StatusDCDC_BCAN; 



cap_canApiMsg_VCU_MHU_info_BCAN_t cap_canApiMsg_VCU_MHU_info_BCAN; 



cap_canApiMsg_VCU_HVsystem_status_BCAN_t cap_canApiMsg_VCU_HVsystem_status_BCAN; 



cap_canApiMsg_VCU_HV_DrvSys_status_BCAN_t cap_canApiMsg_VCU_HV_DrvSys_status_BCAN; 



cap_canApiMsg_VCU_ChargingConnection_BCAN_t cap_canApiMsg_VCU_ChargingConnection_BCAN; 



cap_canApiMsg_VCU_Batt_WarnMsg_BCAN_t cap_canApiMsg_VCU_Batt_WarnMsg_BCAN; 



cap_canApiMsg_VCU_Batt_Info_BCAN_t cap_canApiMsg_VCU_Batt_Info_BCAN; 



cap_canApiMsg_STAT_ANHAENGER_BCAN_t cap_canApiMsg_STAT_ANHAENGER_BCAN; 



cap_canApiMsg_ST_GWS_BCAN_t cap_canApiMsg_ST_GWS_BCAN; 



cap_canApiMsg_RELATIVZEIT_BCAN_t cap_canApiMsg_RELATIVZEIT_BCAN; 



cap_canApiMsg_KILOMETERSTAND_BCAN_t cap_canApiMsg_KILOMETERSTAND_BCAN; 



cap_canApiMsg_HighVoltageStorage200msNo1_BCAN_t cap_canApiMsg_HighVoltageStorage200msNo1_BCAN; 



cap_canApiMsg_HighVoltageStorage10msNo2_BCAN_t cap_canApiMsg_HighVoltageStorage10msNo2_BCAN; 



cap_canApiMsg_FZZSTD_BCAN_t cap_canApiMsg_FZZSTD_BCAN; 



cap_canApiMsg_FZU_ChargingControl_BCAN_t cap_canApiMsg_FZU_ChargingControl_BCAN; 



cap_canApiMsg_FAHRGESTELLNUMMER_BCAN_t cap_canApiMsg_FAHRGESTELLNUMMER_BCAN; 



cap_canApiMsg_ERRM_BN_U_BCAN_t cap_canApiMsg_ERRM_BN_U_BCAN; 



cap_canApiMsg_DT_DISP_GRDT_BCAN_t cap_canApiMsg_DT_DISP_GRDT_BCAN; 



cap_canApiMsg_CON_VEH_BCAN_t cap_canApiMsg_CON_VEH_BCAN; 



cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN_t cap_canApiMsg_CombinedChargerUnit10msNo2_BCAN; 



cap_canApiMsg_A_TEMP_BCAN_t cap_canApiMsg_A_TEMP_BCAN; 



cap_canApiMsg_Kilometerstand_2_BCAN_t cap_canApiMsg_Kilometerstand_2_BCAN; 



cap_canApiMsg_TracEMacElectc1Time100msNo1_BCAN_t cap_canApiMsg_TracEMacElectc1Time100msNo1_BCAN; 



cap_canApiMsg_TracEMacElectc2Time100msNo1_BCAN_t cap_canApiMsg_TracEMacElectc2Time100msNo1_BCAN; 



cap_canApiMsg_CLAMP_STAT_BCAN_t cap_canApiMsg_CLAMP_STAT_BCAN; 



cap_canApiMsg_CLAMP_STAT_CHS1_t cap_canApiMsg_CLAMP_STAT_CHS1; 



cap_canApiMsg_ESC_A_CHS1_t cap_canApiMsg_ESC_A_CHS1; 



cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1_t cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS1; 



cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1_t cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS1; 



cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1_t cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS1; 



cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1_t cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS1; 



cap_canApiMsg_VCU_Status_CHS1_t cap_canApiMsg_VCU_Status_CHS1; 



cap_canApiMsg_VCU_HV_Status_CHS1_t cap_canApiMsg_VCU_HV_Status_CHS1; 



cap_canApiMsg_VCU_CombinedChargerUnit_CHS1_t cap_canApiMsg_VCU_CombinedChargerUnit_CHS1; 



cap_canApiMsg_ABS_ESC_01_CHS1_t cap_canApiMsg_ABS_ESC_01_CHS1; 



cap_canApiMsg_IEB_01_CHS1_t cap_canApiMsg_IEB_01_CHS1; 



cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1_t cap_canApiMsg_EBCM_ACC_LONG_LAT_YAW_CHS1; 



cap_canApiMsg_EBCM_STATUS_CHS1_t cap_canApiMsg_EBCM_STATUS_CHS1; 



cap_canApiMsg_TLT_RW_CHS1_t cap_canApiMsg_TLT_RW_CHS1; 



cap_canApiMsg_ST_STAB_DSC_2_CHS1_t cap_canApiMsg_ST_STAB_DSC_2_CHS1; 



cap_canApiMsg_ST_STAB_DSC_CHS1_t cap_canApiMsg_ST_STAB_DSC_CHS1; 



cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1_t cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_CHS1; 



cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1_t cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS1; 



cap_canApiMsg_AVL_RPM_WHL_CHS1_t cap_canApiMsg_AVL_RPM_WHL_CHS1; 



cap_canApiMsg_HighVoltageStorage200msNo1_CHS1_t cap_canApiMsg_HighVoltageStorage200msNo1_CHS1; 



cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1_t cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS1; 



cap_canApiMsg_SFA_SteerWheel_Info_CHS1_t cap_canApiMsg_SFA_SteerWheel_Info_CHS1; 



cap_canApiMsg_CLAMP_STAT_CHS2_t cap_canApiMsg_CLAMP_STAT_CHS2; 



cap_canApiMsg_ESC_A_CHS2_t cap_canApiMsg_ESC_A_CHS2; 



cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2_t cap_canApiMsg_VCU_TractionEMachine2_10ms_CHS2; 



cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2_t cap_canApiMsg_VCU_TractionEMachine1_10ms_CHS2; 



cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2_t cap_canApiMsg_VCU_TractionEMachine2_100ms_CHS2; 



cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2_t cap_canApiMsg_VCU_TractionEMachine1_100ms_CHS2; 



cap_canApiMsg_VCU_Status_CHS2_t cap_canApiMsg_VCU_Status_CHS2; 



cap_canApiMsg_VCU_HV_Status_CHS2_t cap_canApiMsg_VCU_HV_Status_CHS2; 



cap_canApiMsg_VCU_CombinedChargerUnit_CHS2_t cap_canApiMsg_VCU_CombinedChargerUnit_CHS2; 



cap_canApiMsg_ABS_ESC_01_CHS2_t cap_canApiMsg_ABS_ESC_01_CHS2; 



cap_canApiMsg_IEB_01_CHS2_t cap_canApiMsg_IEB_01_CHS2; 



cap_canApiMsg_EBCM_STATUS_CHS2_t cap_canApiMsg_EBCM_STATUS_CHS2; 



cap_canApiMsg_ST_STAB_DSC_2_CHS2_t cap_canApiMsg_ST_STAB_DSC_2_CHS2; 



cap_canApiMsg_ST_STAB_DSC_CHS2_t cap_canApiMsg_ST_STAB_DSC_CHS2; 



cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2_t cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_CHS2; 



cap_canApiMsg_AVL_RPM_WHL_CHS2_t cap_canApiMsg_AVL_RPM_WHL_CHS2; 



cap_canApiMsg_HighVoltageStorage200msNo1_CHS2_t cap_canApiMsg_HighVoltageStorage200msNo1_CHS2; 



cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2_t cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_CHS2; 



cap_canApiMsg_SFA_SteerWheel_Info_CHS2_t cap_canApiMsg_SFA_SteerWheel_Info_CHS2; 



cap_canApiMsg_VCU_HV_DrvSys_status_PT_t cap_canApiMsg_VCU_HV_DrvSys_status_PT; 



cap_canApiMsg_VCU_Thermal_Status_PT_t cap_canApiMsg_VCU_Thermal_Status_PT; 



cap_canApiMsg_OBC_01_100ms_PT_t cap_canApiMsg_OBC_01_100ms_PT; 



cap_canApiMsg_DCDC_01_100ms_PT_t cap_canApiMsg_DCDC_01_100ms_PT; 



cap_canApiMsg_BMS_CellTempMeas2_PT_t cap_canApiMsg_BMS_CellTempMeas2_PT; 



cap_canApiMsg_CLAMP_STAT_PT_t cap_canApiMsg_CLAMP_STAT_PT; 



cap_canApiMsg_CON_VEH_PT_t cap_canApiMsg_CON_VEH_PT; 



cap_canApiMsg_ST_CR_PT_t cap_canApiMsg_ST_CR_PT; 



cap_canApiMsg_AVL_RPM_WHL_PT_t cap_canApiMsg_AVL_RPM_WHL_PT; 



cap_canApiMsg_BMS_ChgParamReq_PT_t cap_canApiMsg_BMS_ChgParamReq_PT; 



cap_canApiMsg_BMS_CurMeas_PT_t cap_canApiMsg_BMS_CurMeas_PT; 



cap_canApiMsg_CombinedChargerUnit10msNo3_PT_t cap_canApiMsg_CombinedChargerUnit10msNo3_PT; 



cap_canApiMsg_CombinedChargerUnit10msNo1_PT_t cap_canApiMsg_CombinedChargerUnit10msNo1_PT; 



cap_canApiMsg_HighVoltageStorage10msNo2_PT_t cap_canApiMsg_HighVoltageStorage10msNo2_PT; 



cap_canApiMsg_TracEMacElectc1Time10msNo1_PT_t cap_canApiMsg_TracEMacElectc1Time10msNo1_PT; 



cap_canApiMsg_ERRM_BN_U_PT_t cap_canApiMsg_ERRM_BN_U_PT; 



cap_canApiMsg_BMS_Error_PT_t cap_canApiMsg_BMS_Error_PT; 



cap_canApiMsg_WMOM_DRV_9_PT_t cap_canApiMsg_WMOM_DRV_9_PT; 



cap_canApiMsg_BMS_HVMeas_PT_t cap_canApiMsg_BMS_HVMeas_PT; 



cap_canApiMsg_TracEMacElectc2Time10msNo1_PT_t cap_canApiMsg_TracEMacElectc2Time10msNo1_PT; 



cap_canApiMsg_BMS_PowerCont_PT_t cap_canApiMsg_BMS_PowerCont_PT; 



cap_canApiMsg_BMS_RelayStatus_PT_t cap_canApiMsg_BMS_RelayStatus_PT; 



cap_canApiMsg_BMS_Sts_PT_t cap_canApiMsg_BMS_Sts_PT; 



cap_canApiMsg_BMS_WarnMsg_PT_t cap_canApiMsg_BMS_WarnMsg_PT; 



cap_canApiMsg_ST_STAB_DSC_PT_t cap_canApiMsg_ST_STAB_DSC_PT; 



cap_canApiMsg_ST_STAB_DSC_2_PT_t cap_canApiMsg_ST_STAB_DSC_2_PT; 



cap_canApiMsg_WMOM_PT_AVL_PT_t cap_canApiMsg_WMOM_PT_AVL_PT; 



cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT_t cap_canApiMsg_DCDC_VCU_Measure_Fbk_PT; 



cap_canApiMsg_DCDC_VCU_Req_Fbk_PT_t cap_canApiMsg_DCDC_VCU_Req_Fbk_PT; 



cap_canApiMsg_VCU_ChargingConnectionSts_PT_t cap_canApiMsg_VCU_ChargingConnectionSts_PT; 



cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT_t cap_canApiMsg_BundleEAFlexrayToCANFD20msNo1_PT; 



cap_canApiMsg_CombinedChargerUnit10msNo2_PT_t cap_canApiMsg_CombinedChargerUnit10msNo2_PT; 



cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT_t cap_canApiMsg_BundleEAFlexrayToAECANFD10msNo1_PT; 



cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT_t cap_canApiMsg_BundleEAFlexrayToAECANFD20msNo2_PT; 



cap_canApiMsg_TracEMacElectc1Time100msNo1_PT_t cap_canApiMsg_TracEMacElectc1Time100msNo1_PT; 



cap_canApiMsg_TracEMacElectc2Time100msNo1_PT_t cap_canApiMsg_TracEMacElectc2Time100msNo1_PT; 



cap_canApiMsg_VCU_BMS_ThermalStatus_PT_t cap_canApiMsg_VCU_BMS_ThermalStatus_PT; 



cap_canApiMsg_BMS_CellTemp_PT_t cap_canApiMsg_BMS_CellTemp_PT; 



cap_canApiMsg_BMS_CellTempMeas_PT_t cap_canApiMsg_BMS_CellTempMeas_PT; 



cap_canApiMsg_BMS_CellVolMeas1_PT_t cap_canApiMsg_BMS_CellVolMeas1_PT; 



cap_canApiMsg_BMS_CellVolMeas2_PT_t cap_canApiMsg_BMS_CellVolMeas2_PT; 



cap_canApiMsg_OBC_Status_PT_t cap_canApiMsg_OBC_Status_PT; 



cap_canApiMsg_BMS_CellVolMeas3_PT_t cap_canApiMsg_BMS_CellVolMeas3_PT; 



cap_canApiMsg_VCU_OBC_Req_PT_t cap_canApiMsg_VCU_OBC_Req_PT; 



cap_canApiMsg_BMS_CoolantInletOutletTmp_PT_t cap_canApiMsg_BMS_CoolantInletOutletTmp_PT; 



cap_canApiMsg_VCU_BMS_ChargingParams_PT_t cap_canApiMsg_VCU_BMS_ChargingParams_PT; 



cap_canApiMsg_BMS_Insulation_PT_t cap_canApiMsg_BMS_Insulation_PT; 



cap_canApiMsg_VCU_BMS_ChargingControl_PT_t cap_canApiMsg_VCU_BMS_ChargingControl_PT; 



cap_canApiMsg_BMS_VCU_THMReq_PT_t cap_canApiMsg_BMS_VCU_THMReq_PT; 



cap_canApiMsg_BMS_VolMeas_PT_t cap_canApiMsg_BMS_VolMeas_PT; 



cap_canApiMsg_VCU_BMS_HVCoordination_PT_t cap_canApiMsg_VCU_BMS_HVCoordination_PT; 



cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT_t cap_canApiMsg_DCDC_VCU_Temperature_Fbk_PT; 



cap_canApiMsg_Kilometerstand_2_PT_t cap_canApiMsg_Kilometerstand_2_PT; 



cap_canApiMsg_VCU_DCDC_Req_PT_t cap_canApiMsg_VCU_DCDC_Req_PT; 



cap_canApiMsg_BMS_HistData_PT_t cap_canApiMsg_BMS_HistData_PT; 



cap_canApiMsg_ParkByWire50msNo1_PT_t cap_canApiMsg_ParkByWire50msNo1_PT; 



cap_canApiMsg_FZZSTD_PT_t cap_canApiMsg_FZZSTD_PT; 



cap_canApiMsg_STAT_ANHAENGER_PT_t cap_canApiMsg_STAT_ANHAENGER_PT; 



cap_canApiMsg_OBC_Temperature_PT_t cap_canApiMsg_OBC_Temperature_PT; 



cap_canApiMsg_A_TEMP_PT_t cap_canApiMsg_A_TEMP_PT; 



cap_canApiMsg_DMEBK100_PT_t cap_canApiMsg_DMEBK100_PT; 



cap_canApiMsg_CombinedChargerUnit100msNo1_PT_t cap_canApiMsg_CombinedChargerUnit100msNo1_PT; 



cap_canApiMsg_FAHRGESTELLNUMMER_PT_t cap_canApiMsg_FAHRGESTELLNUMMER_PT; 



cap_canApiMsg_TLT_RW_PT_t cap_canApiMsg_TLT_RW_PT; 



cap_canApiMsg_KILOMETERSTAND_PT_t cap_canApiMsg_KILOMETERSTAND_PT; 



cap_canApiMsg_RELATIVZEIT_PT_t cap_canApiMsg_RELATIVZEIT_PT; 



cap_canApiMsg_HighVoltageStorage200msNo1_PT_t cap_canApiMsg_HighVoltageStorage200msNo1_PT; 



cap_canApiMsg_EnergyStorageMeasurementValues_PT_t cap_canApiMsg_EnergyStorageMeasurementValues_PT; 



cap_canApiMsg_StatusCrashIdentETractSys1_PT_t cap_canApiMsg_StatusCrashIdentETractSys1_PT; 



cap_canApiMsg_StatusCrashIdentETractSys2_PT_t cap_canApiMsg_StatusCrashIdentETractSys2_PT; 



cap_canApiMsg_CombinedChargerUnit1000msNo1_PT_t cap_canApiMsg_CombinedChargerUnit1000msNo1_PT; 



cap_canApiMsg_Networkmanagement3_PT_t cap_canApiMsg_Networkmanagement3_PT; 




#define CPU1_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"

#define CPU1_START_SEC_CONST_32
#include "MemMap.h"
const volatile float32 cap_VCU_StatusDCDC_DCDC_maxCurrentOut_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_StatusDCDC_DCDC_maxCurrentOut_BCAN_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_VCU_StatusDCDC_DCDC_iOutput_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_StatusDCDC_DCDC_iOutput_BCAN_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_VCU_StatusDCDC_DCDC_vDCInput_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_StatusDCDC_DCDC_vDCInput_BCAN_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_VCU_StatusDCDC_DCDC_vOutput_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_StatusDCDC_DCDC_vOutput_BCAN_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_VCU_MHU_info_VCU_RemainingRange_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_MHU_info_VCU_RemainingRange_BCAN_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_MHU_info_VCU_BattSOC_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_MHU_info_VCU_BattSOC_BCAN_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_VCU_HVsystem_status_VCU_RunningRange_charged_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_HVsystem_status_VCU_RunningRange_charged_BCAN_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_HVsystem_status_VCU_HVbatSoc_charged_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_HVsystem_status_VCU_HVbatSoc_charged_BCAN_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_VCU_HV_DrvSys_status_VCU_ACPD_Percent_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_HV_DrvSys_status_VCU_ACPD_Percent_BCAN_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_VCU_Batt_Info_BMS_PackCur_BCAN_Offset_C = 0.0f; /*DBC: -1500.0 */
const volatile float32 cap_VCU_Batt_Info_BMS_PackCur_BCAN_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_VCU_Batt_Info_BMS_PackVoltage_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_Batt_Info_BMS_PackVoltage_BCAN_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_VCU_Batt_Info_BMS_PackTemp_BCAN_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_VCU_Batt_Info_BMS_PackTemp_BCAN_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_VCU_Batt_Info_BMS_ChargingVoltage_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_Batt_Info_BMS_ChargingVoltage_BCAN_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_VCU_Batt_Info_BMS_ChargingCurrent_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_Batt_Info_BMS_ChargingCurrent_BCAN_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_HighVoltageStorage10msNo2_ActualValueVoltageLinkVerified_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_HighVoltageStorage10msNo2_ActualValueVoltageLinkVerified_BCAN_Factor_C = 1.0f;/*DBC: 0.25 */

const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys2LimMotMax_BCAN_Offset_C = 0.0f; /*DBC: -1638300.0 */
const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys2LimMotMax_BCAN_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys1LimGenMax_BCAN_Offset_C = 0.0f; /*DBC: -1638300.0 */
const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys1LimGenMax_BCAN_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys2LimGenMax_BCAN_Offset_C = 0.0f; /*DBC: -1638300.0 */
const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys2LimGenMax_BCAN_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys1LimMotMax_BCAN_Offset_C = 0.0f; /*DBC: -1638300.0 */
const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys1LimMotMax_BCAN_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_A_TEMP_TEMP_EX_BCAN_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_A_TEMP_TEMP_EX_BCAN_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_Kilometerstand_2_MILE_KM_TOT_BCAN_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_Kilometerstand_2_MILE_KM_TOT_BCAN_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_VCU_TractionEMachine2_10ms_RpmEmETractSys2ActualValue_CHS1_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_VCU_TractionEMachine2_10ms_RpmEmETractSys2ActualValue_CHS1_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2GeneratorDyn_CHS1_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2GeneratorDyn_CHS1_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2MotorDyn_CHS1_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2MotorDyn_CHS1_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2ActualValue_CHS1_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2ActualValue_CHS1_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine1_10ms_RpmEmETractSys1ActualValue_CHS1_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_VCU_TractionEMachine1_10ms_RpmEmETractSys1ActualValue_CHS1_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1GeneratorDyn_CHS1_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1GeneratorDyn_CHS1_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1MotorDyn_CHS1_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1MotorDyn_CHS1_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1ActualValue_CHS1_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1ActualValue_CHS1_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine2_100ms_WheelRatioEAxlEtractSys2ActVal_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_TractionEMachine2_100ms_WheelRatioEAxlEtractSys2ActVal_CHS1_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_VCU_TractionEMachine1_100ms_WheelRatioEAxlEtractSys1ActVal_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_TractionEMachine1_100ms_WheelRatioEAxlEtractSys1ActVal_CHS1_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_VCU_Status_VCU_ACPD_Percent_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_Status_VCU_ACPD_Percent_CHS1_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_VCU_CombinedChargerUnit_TargetTorqueEmETractSys1_CHS1_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_CombinedChargerUnit_TargetTorqueEmETractSys1_CHS1_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_CombinedChargerUnit_TargetTorqueEmETractSys2_CHS1_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_CombinedChargerUnit_TargetTorqueEmETractSys2_CHS1_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_EBCM_ACC_LONG_LAT_YAW_VYAW_VEH_CHS1_Offset_C = 0.0f; /*DBC: -163.84 */
const volatile float32 cap_EBCM_ACC_LONG_LAT_YAW_VYAW_VEH_CHS1_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_EBCM_STATUS_MCPressure_CHS1_Offset_C = 0.0f; /*DBC: -42.5 */
const volatile float32 cap_EBCM_STATUS_MCPressure_CHS1_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_EBCM_STATUS_BreakPedalPercent_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_EBCM_STATUS_BreakPedalPercent_CHS1_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_TLT_RW_AVL_LOGR_RW_CHS1_Offset_C = 0.0f; /*DBC: -64.0 */
const volatile float32 cap_TLT_RW_AVL_LOGR_RW_CHS1_Factor_C = 1.0f;/*DBC: 0.05 */

const volatile float32 cap_BundleEAFlexrayToAECANFD20msNo2_ACLNX_COG_CHS1_Offset_C = 0.0f; /*DBC: -65.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD20msNo2_ACLNX_COG_CHS1_Factor_C = 1.0f;/*DBC: 0.002 */

const volatile float32 cap_BundleEAFlexrayToAECANFD20msNo2_ACLNY_COG_CHS1_Offset_C = 0.0f; /*DBC: -65.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD20msNo2_ACLNY_COG_CHS1_Factor_C = 1.0f;/*DBC: 0.002 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_LH_EXT_CHS1_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_LH_EXT_CHS1_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_RH_EXT_CHS1_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_RH_EXT_CHS1_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_LH_EXT_CHS1_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_LH_EXT_CHS1_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_RH_EXT_CHS1_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_RH_EXT_CHS1_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_BAX_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_BAX_CHS1_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_BAX_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_BAX_CHS1_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_FTAX_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_FTAX_CHS1_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_FTAX_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_FTAX_CHS1_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RLH_CHS1_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RLH_CHS1_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RRH_CHS1_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RRH_CHS1_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FLH_CHS1_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FLH_CHS1_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FRH_CHS1_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FRH_CHS1_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_BundleEAFlexrayToCANFD20msNo1_V_VEH_COG_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToCANFD20msNo1_V_VEH_COG_CHS1_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelTorque_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelTorque_CHS1_Factor_C = 1.0f;/*DBC: 0.02 */

const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelAngleSpeed_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelAngleSpeed_CHS1_Factor_C = 1.0f;/*DBC: 4.0 */

const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelAngle_CHS1_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelAngle_CHS1_Factor_C = 1.0f;/*DBC: 0.02 */

const volatile float32 cap_VCU_TractionEMachine2_10ms_RpmEmETractSys2ActualValue_CHS2_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_VCU_TractionEMachine2_10ms_RpmEmETractSys2ActualValue_CHS2_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2GeneratorDyn_CHS2_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2GeneratorDyn_CHS2_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2MotorDyn_CHS2_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2MotorDyn_CHS2_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2ActualValue_CHS2_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine2_10ms_TorqueEmETractSys2ActualValue_CHS2_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine1_10ms_RpmEmETractSys1ActualValue_CHS2_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_VCU_TractionEMachine1_10ms_RpmEmETractSys1ActualValue_CHS2_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1GeneratorDyn_CHS2_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1GeneratorDyn_CHS2_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1MotorDyn_CHS2_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1MotorDyn_CHS2_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1ActualValue_CHS2_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_TractionEMachine1_10ms_TorqueEmETractSys1ActualValue_CHS2_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_TractionEMachine2_100ms_WheelRatioEAxlEtractSys2ActVal_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_TractionEMachine2_100ms_WheelRatioEAxlEtractSys2ActVal_CHS2_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_VCU_TractionEMachine1_100ms_WheelRatioEAxlEtractSys1ActVal_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_TractionEMachine1_100ms_WheelRatioEAxlEtractSys1ActVal_CHS2_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_VCU_Status_VCU_ACPD_Percent_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_Status_VCU_ACPD_Percent_CHS2_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_VCU_CombinedChargerUnit_TargetTorqueEmETractSys1_CHS2_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_CombinedChargerUnit_TargetTorqueEmETractSys1_CHS2_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_VCU_CombinedChargerUnit_TargetTorqueEmETractSys2_CHS2_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_VCU_CombinedChargerUnit_TargetTorqueEmETractSys2_CHS2_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_EBCM_STATUS_MCPressure_CHS2_Offset_C = 0.0f; /*DBC: -42.5 */
const volatile float32 cap_EBCM_STATUS_MCPressure_CHS2_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_EBCM_STATUS_BreakPedalPercent_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_EBCM_STATUS_BreakPedalPercent_CHS2_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_LH_EXT_CHS2_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_LH_EXT_CHS2_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_RH_EXT_CHS2_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_RH_EXT_CHS2_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_LH_EXT_CHS2_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_LH_EXT_CHS2_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_RH_EXT_CHS2_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_RH_EXT_CHS2_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_BAX_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_BAX_CHS2_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_BAX_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_BAX_CHS2_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_FTAX_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_FTAX_CHS2_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_FTAX_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_FTAX_CHS2_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RLH_CHS2_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RLH_CHS2_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RRH_CHS2_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RRH_CHS2_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FLH_CHS2_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FLH_CHS2_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FRH_CHS2_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FRH_CHS2_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_BundleEAFlexrayToCANFD20msNo1_V_VEH_COG_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToCANFD20msNo1_V_VEH_COG_CHS2_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelTorque_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelTorque_CHS2_Factor_C = 1.0f;/*DBC: 0.02 */

const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelAngleSpeed_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelAngleSpeed_CHS2_Factor_C = 1.0f;/*DBC: 4.0 */

const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelAngle_CHS2_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_SFA_SteerWheel_Info_SFA_SteerWheelAngle_CHS2_Factor_C = 1.0f;/*DBC: 0.02 */

const volatile float32 cap_VCU_Thermal_Status_VCU_LTROutLetTemp_PT_Offset_C = 0.0f; /*DBC: -50.0 */
const volatile float32 cap_VCU_Thermal_Status_VCU_LTROutLetTemp_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp42_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp42_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp43_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp43_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp44_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp44_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp45_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp45_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp46_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp46_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp47_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp47_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp48_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas2_BMS_CellTemp48_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RLH_PT_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RLH_PT_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RRH_PT_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_RRH_PT_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FLH_PT_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FLH_PT_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FRH_PT_Offset_C = 0.0f; /*DBC: -511.984375 */
const volatile float32 cap_AVL_RPM_WHL_AVL_RPM_WHL_FRH_PT_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_BMS_ChgParamReq_BMS_ChgVoltageReq_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_ChgVoltageReq_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_ChgCurrentReq_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_ChgCurrentReq_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrentLim_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrentLim_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrentLimPeak_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrentLimPeak_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrent2s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrent2s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrent10s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrent10s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrent30s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgCurrent30s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwrLim_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwrLim_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwrLimPeak_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwrLimPeak_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwr2s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwr2s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwr10s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwr10s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwr30s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_ChgParamReq_BMS_MaxChgPwr30s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CurMeas_BMS_PackCurMeas_PT_Offset_C = 0.0f; /*DBC: -1500.0 */
const volatile float32 cap_BMS_CurMeas_BMS_PackCurMeas_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_CombinedChargerUnit10msNo1_TargetTorqueEmETractSys1_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_CombinedChargerUnit10msNo1_TargetTorqueEmETractSys1_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_CombinedChargerUnit10msNo1_TargetTorqueEmETractSys2_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_CombinedChargerUnit10msNo1_TargetTorqueEmETractSys2_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_CombinedChargerUnit10msNo1_TorqBoundaryETractSys1EmNCtrlMax_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_CombinedChargerUnit10msNo1_TorqBoundaryETractSys1EmNCtrlMax_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_CombinedChargerUnit10msNo1_TorqBoundaryETractSys1EmNCtrlMin_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_CombinedChargerUnit10msNo1_TorqBoundaryETractSys1EmNCtrlMin_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_CombinedChargerUnit10msNo1_TorqBoundaryETractSys2EmNCtrlMax_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_CombinedChargerUnit10msNo1_TorqBoundaryETractSys2EmNCtrlMax_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_CombinedChargerUnit10msNo1_TorqBoundaryETractSys2EmNCtrlMin_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_CombinedChargerUnit10msNo1_TorqBoundaryETractSys2EmNCtrlMin_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_CombinedChargerUnit10msNo1_TargetEMRpmETractSys1_PT_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_CombinedChargerUnit10msNo1_TargetEMRpmETractSys1_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_CombinedChargerUnit10msNo1_TargetEMRpmETractSys2_PT_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_CombinedChargerUnit10msNo1_TargetEMRpmETractSys2_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_HighVoltageStorage10msNo2_ActualValueVoltageLinkVerified_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_HighVoltageStorage10msNo2_ActualValueVoltageLinkVerified_PT_Factor_C = 1.0f;/*DBC: 0.25 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_CurrDrctCurrETractSys1ActVal_PT_Offset_C = 0.0f; /*DBC: -1400.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_CurrDrctCurrETractSys1ActVal_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_VolDrctCurrETractSys1ActVal_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_VolDrctCurrETractSys1ActVal_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_RpmEmETractSys1MaximumLimit_PT_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_RpmEmETractSys1MaximumLimit_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_RpmEmETractSys1MinimumLimit_PT_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_RpmEmETractSys1MinimumLimit_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_TqEmETractSys1VibrationDampSusp_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_TqEmETractSys1VibrationDampSusp_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_RpmEmETractSys1ActualValue_PT_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_RpmEmETractSys1ActualValue_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_TqEmETractSys1GeneratorStatic_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_TqEmETractSys1GeneratorStatic_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_TqEmETractSys1GeneratorDynamic_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_TqEmETractSys1GeneratorDynamic_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_TorqueEmETractSys1MotorStatic_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_TorqueEmETractSys1MotorStatic_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_TorqueEmETractSys1MotorDynamic_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_TorqueEmETractSys1MotorDynamic_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_TorqueEmETractSys1ActualValue_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_TorqueEmETractSys1ActualValue_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_TqEmETractSys1MotorSumLimTarget_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_TqEmETractSys1MotorSumLimTarget_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_SumWhlTqIntvETractSys1_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_SumWhlTqIntvETractSys1_PT_Factor_C = 1.0f;/*DBC: 10.0 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_PowerETractSys1LossActualValue_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_PowerETractSys1LossActualValue_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_TarTqETractSys1NControlStatic_PT_Offset_C = 0.0f; /*DBC: -510.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_TarTqETractSys1NControlStatic_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_PwrLossPrednETractSys1Mot_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_PwrLossPrednETractSys1Mot_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_TracEMacElectc1Time10msNo1_PwrLossPrednETractSys1Genr_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time10msNo1_PwrLossPrednETractSys1Genr_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_WMOM_DRV_9_TAR_WMOM_PT_SUM_COOTD_PT_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_WMOM_DRV_9_TAR_WMOM_PT_SUM_COOTD_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BMS_HVMeas_BMS_HVPackVol_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_HVMeas_BMS_HVPackVol_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_HVMeas_BMS_HVLinkVol_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_HVMeas_BMS_HVLinkVol_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_HVMeas_BMS_HVBusVol_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_HVMeas_BMS_HVBusVol_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_HVMeas_BMS_HVFuseVol_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_HVMeas_BMS_HVFuseVol_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_HVMeas_BMS_DCPlugVol_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_HVMeas_BMS_DCPlugVol_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_CurrDrctCurrETractSys2ActVal_PT_Offset_C = 0.0f; /*DBC: -1400.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_CurrDrctCurrETractSys2ActVal_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_VolDrctCurrETractSys2ActVal_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_VolDrctCurrETractSys2ActVal_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_RpmEmETractSys2MaximumLimit_PT_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_RpmEmETractSys2MaximumLimit_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_RpmEmETractSys2MinimumLimit_PT_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_RpmEmETractSys2MinimumLimit_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_TqEmETractSys2VibrationDampSusp_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_TqEmETractSys2VibrationDampSusp_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_RpmEmETractSys2ActualValue_PT_Offset_C = 0.0f; /*DBC: -32768.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_RpmEmETractSys2ActualValue_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_TqEmETractSys2GeneratorStatic_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_TqEmETractSys2GeneratorStatic_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_TqEmETractSys2GeneratorDynamic_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_TqEmETractSys2GeneratorDynamic_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_TorqueEmETractSys2MotorStatic_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_TorqueEmETractSys2MotorStatic_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_TorqueEmETractSys2MotorDynamic_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_TorqueEmETractSys2MotorDynamic_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_TorqueEmETractSys2ActualValue_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_TorqueEmETractSys2ActualValue_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_TqEmETractSys2MotorSumLimTarget_PT_Offset_C = 0.0f; /*DBC: -1023.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_TqEmETractSys2MotorSumLimTarget_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_SumWhlTqIntvETractSys2_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_SumWhlTqIntvETractSys2_PT_Factor_C = 1.0f;/*DBC: 10.0 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_PowerETractSys2LossActualValue_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_PowerETractSys2LossActualValue_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_TarTqETractSys2NControlStatic_PT_Offset_C = 0.0f; /*DBC: -510.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_TarTqETractSys2NControlStatic_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_PwrLossPrednETractSys2Mot_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_PwrLossPrednETractSys2Mot_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_TracEMacElectc2Time10msNo1_PwrLossPrednETractSys2Genr_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time10msNo1_PwrLossPrednETractSys2Genr_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrentLim_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrentLim_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrentLimPeak_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrentLimPeak_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrent2s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrent2s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrent10s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrent10s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrent30s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgCurrent30s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwrLim_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwrLim_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwrLimPeak_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwrLimPeak_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwr2s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwr2s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwr10s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwr10s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwr30s_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_PowerCont_BMS_MaxDischgPwr30s_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_Sts_BMS_SocActualEst_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_Sts_BMS_SocActualEst_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_Sts_BMS_SocRelativeEst_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_Sts_BMS_SocRelativeEst_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_Sts_BMS_SOH_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_Sts_BMS_SOH_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_BMS_Sts_BMS_SOE_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_Sts_BMS_SOE_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_WMOM_PT_AVL_AVL_WMOM_PT_SUM_PT_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_WMOM_PT_AVL_AVL_WMOM_PT_SUM_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_DCDC_VCU_Measure_Fbk_DCDC_MeasVs_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DCDC_VCU_Measure_Fbk_DCDC_MeasVs_PT_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_DCDC_VCU_Measure_Fbk_DCDC_MeasOutCurr_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DCDC_VCU_Measure_Fbk_DCDC_MeasOutCurr_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_DCDC_VCU_Measure_Fbk_DCDC_MeasInVltg_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DCDC_VCU_Measure_Fbk_DCDC_MeasInVltg_PT_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_DCDC_VCU_Measure_Fbk_DCDC_MeasInCurrent_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DCDC_VCU_Measure_Fbk_DCDC_MeasInCurrent_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_DCDC_VCU_Req_Fbk_DCDC_OutVltgReqFbk_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DCDC_VCU_Req_Fbk_DCDC_OutVltgReqFbk_PT_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_DCDC_VCU_Req_Fbk_DCDC_OutCurrReqFbk_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DCDC_VCU_Req_Fbk_DCDC_OutCurrReqFbk_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_DCDC_VCU_Req_Fbk_DCDC_MaxCurrentOut_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DCDC_VCU_Req_Fbk_DCDC_MaxCurrentOut_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BundleEAFlexrayToCANFD20msNo1_V_VEH_COG_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToCANFD20msNo1_V_VEH_COG_PT_Factor_C = 1.0f;/*DBC: 0.015625 */

const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys2LimGenMax_PT_Offset_C = 0.0f; /*DBC: -1638300.0 */
const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys2LimGenMax_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys2LimMotMax_PT_Offset_C = 0.0f; /*DBC: -1638300.0 */
const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys2LimMotMax_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys1LimGenMax_PT_Offset_C = 0.0f; /*DBC: -1638300.0 */
const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys1LimGenMax_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys1LimMotMax_PT_Offset_C = 0.0f; /*DBC: -1638300.0 */
const volatile float32 cap_CombinedChargerUnit10msNo2_PowerETractSys1LimMotMax_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_LH_EXT_PT_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_LH_EXT_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_RH_EXT_PT_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_RS_RH_EXT_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_LH_EXT_PT_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_LH_EXT_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_RH_EXT_PT_Offset_C = 0.0f; /*DBC: -32000.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_AVL_BRTORQ_WHL_FS_RH_EXT_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_BAX_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_BAX_PT_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_BAX_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_BAX_PT_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_FTAX_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MAX_FTAX_PT_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_FTAX_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD10msNo1_TAR_RPM_MIN_FTAX_PT_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_BundleEAFlexrayToAECANFD20msNo2_ACLNX_COG_PT_Offset_C = 0.0f; /*DBC: -65.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD20msNo2_ACLNX_COG_PT_Factor_C = 1.0f;/*DBC: 0.002 */

const volatile float32 cap_BundleEAFlexrayToAECANFD20msNo2_ACLNY_COG_PT_Offset_C = 0.0f; /*DBC: -65.0 */
const volatile float32 cap_BundleEAFlexrayToAECANFD20msNo2_ACLNY_COG_PT_Factor_C = 1.0f;/*DBC: 0.002 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1CoolantWaterInpActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1CoolantWaterInpActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_PowerETractSys1MaximumLossActive_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_PowerETractSys1MaximumLossActive_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_WhlRatElAxlEtractSys1ActVal_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_WhlRatElAxlEtractSys1ActVal_PT_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_PercentUsedExtraBoostETractSys1_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_PercentUsedExtraBoostETractSys1_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1EmRotorActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1EmRotorActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_ThermalStressLevelETractSys1_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_ThermalStressLevelETractSys1_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1EmStatorActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1EmStatorActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1InverterActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1InverterActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1GbxOilActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc1Time100msNo1_TETractSys1GbxOilActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2CoolantWaterInpActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2CoolantWaterInpActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_PowerETractSys2MaximumLossActive_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_PowerETractSys2MaximumLossActive_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_WhlRatElAxlEtractSys2ActVal_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_WhlRatElAxlEtractSys2ActVal_PT_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_PercentUsedExtraBoostETractSys2_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_PercentUsedExtraBoostETractSys2_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2EmRotorActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2EmRotorActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_ThermalStressLevelETractSys2_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_ThermalStressLevelETractSys2_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2EmStatorActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2EmStatorActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2InverterActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2InverterActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2GbxOilActVal_PT_Offset_C = 0.0f; /*DBC: -48.0 */
const volatile float32 cap_TracEMacElectc2Time100msNo1_TETractSys2GbxOilActVal_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BMS_CellTemp_BMS_MinCellTemp_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTemp_BMS_MinCellTemp_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BMS_CellTemp_BMS_PackTemp_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTemp_BMS_PackTemp_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BMS_CellTemp_BMS_MaxCellTemp_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTemp_BMS_MaxCellTemp_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BMS_CellTemp_BMS_MaxMinDiffCellTemp_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTemp_BMS_MaxMinDiffCellTemp_PT_Factor_C = 1.0f;/*DBC: 1.0 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp1_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp1_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp2_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp2_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp3_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp3_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp4_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp4_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp5_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp5_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp6_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp6_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp7_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp7_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp8_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp8_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp9_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp9_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp10_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp10_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp11_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp11_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp12_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp12_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp13_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp13_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp14_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp14_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp15_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp15_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp16_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp16_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp17_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp17_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp18_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp18_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp19_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp19_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp20_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp20_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp21_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp21_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp22_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp22_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp23_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp23_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp24_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp24_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp25_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp25_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp26_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp26_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp27_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp27_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp28_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp28_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp29_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp29_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp30_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp30_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp31_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp31_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp32_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp32_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp33_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp33_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp34_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp34_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp35_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp35_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp36_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp36_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp37_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp37_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp38_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp38_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp39_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp39_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp40_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp40_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp41_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CellTempMeas_BMS_CellTemp41_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol1_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol1_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol2_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol2_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol3_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol3_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol4_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol4_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol5_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol5_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol6_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol6_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol7_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol7_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol8_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol8_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol9_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol9_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol10_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol10_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol11_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol11_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol12_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol12_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol13_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol13_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol14_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol14_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol15_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol15_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol16_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol16_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol17_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol17_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol18_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol18_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol19_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol19_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol20_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol20_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol21_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol21_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol22_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol22_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol23_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol23_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol24_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol24_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol25_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol25_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol26_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol26_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol27_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol27_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol28_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol28_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol29_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol29_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol30_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas1_BMS_CellVol30_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol31_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol31_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol32_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol32_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol33_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol33_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol34_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol34_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol35_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol35_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol36_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol36_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol37_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol37_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol38_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol38_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol39_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol39_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol40_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol40_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol41_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol41_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol42_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol42_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol43_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol43_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol44_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol44_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol45_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol45_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol46_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol46_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol47_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol47_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol48_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol48_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol49_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol49_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol50_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol50_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol51_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol51_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol52_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol52_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol53_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol53_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol54_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol54_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol55_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol55_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol56_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol56_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol57_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol57_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol58_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol58_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol59_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol59_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol60_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol60_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol61_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol61_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol62_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas2_BMS_CellVol62_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_OBC_Status_OBC_Max_Current_Out_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_OBC_Status_OBC_Max_Current_Out_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_OBC_Status_OBC_VCU_iAC_L1_PT_Offset_C = 0.0f; /*DBC: -102.3 */
const volatile float32 cap_OBC_Status_OBC_VCU_iAC_L1_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_OBC_Status_OBC_VCU_iAC_L2_PT_Offset_C = 0.0f; /*DBC: -102.3 */
const volatile float32 cap_OBC_Status_OBC_VCU_iAC_L2_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_OBC_Status_OBC_VCU_iAC_L3_PT_Offset_C = 0.0f; /*DBC: -102.3 */
const volatile float32 cap_OBC_Status_OBC_VCU_iAC_L3_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_OBC_Status_OBC_VCU_iDC_PT_Offset_C = 0.0f; /*DBC: -102.3 */
const volatile float32 cap_OBC_Status_OBC_VCU_iDC_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol63_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol63_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol64_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol64_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol65_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol65_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol66_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol66_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol67_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol67_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol68_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol68_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol69_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol69_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol70_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol70_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol71_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol71_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol72_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol72_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol73_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol73_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol74_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol74_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol75_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol75_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol76_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol76_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol77_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol77_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol78_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol78_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol79_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol79_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol80_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol80_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol81_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol81_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol82_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol82_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol83_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol83_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol84_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol84_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol85_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol85_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol86_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol86_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol87_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol87_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol88_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol88_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol89_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol89_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol90_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol90_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol91_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol91_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol92_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol92_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol93_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol93_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol94_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol94_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol95_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol95_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol96_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol96_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol97_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol97_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol98_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol98_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol99_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol99_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol100_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol100_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol101_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol101_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol102_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol102_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol103_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol103_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol104_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol104_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol105_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol105_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol106_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol106_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol107_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol107_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol108_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_CellVolMeas3_BMS_CellVol108_PT_Factor_C = 1.0f;/*DBC: 0.005 */

const volatile float32 cap_VCU_OBC_Req_VCU_OBC_iLineLimit_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_OBC_Req_VCU_OBC_iLineLimit_PT_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_VCU_OBC_Req_VCU_OBC_vOBC_Request_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_OBC_Req_VCU_OBC_vOBC_Request_PT_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_VCU_OBC_Req_VCU_OBC_iOBC_Request_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_OBC_Req_VCU_OBC_iOBC_Request_PT_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_BMS_CoolantInletOutletTmp_BMS_CoolantInletTemp_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CoolantInletOutletTmp_BMS_CoolantInletTemp_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_CoolantInletOutletTmp_BMS_CoolantOutletTemp_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_BMS_CoolantInletOutletTmp_BMS_CoolantOutletTemp_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_VCU_BMS_ChargingParams_VCU_TargetASOC_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_BMS_ChargingParams_VCU_TargetASOC_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_VCU_THMReq_BMS_CoolPwrDemand_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_VCU_THMReq_BMS_CoolPwrDemand_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_VCU_THMReq_BMS_HeatPwrDemand_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_VCU_THMReq_BMS_HeatPwrDemand_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_BMS_VolMeas_BMS_MinCellVol_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_VolMeas_BMS_MinCellVol_PT_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_BMS_VolMeas_BMS_MaxCellVol_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_VolMeas_BMS_MaxCellVol_PT_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_BMS_VolMeas_BMS_MaxMinDiffCellVol_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_BMS_VolMeas_BMS_MaxMinDiffCellVol_PT_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_DCDC_VCU_Temperature_Fbk_DCDC_InternalTempA_PT_Offset_C = 0.0f; /*DBC: -100.0 */
const volatile float32 cap_DCDC_VCU_Temperature_Fbk_DCDC_InternalTempA_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_DCDC_VCU_Temperature_Fbk_DCDC_InternalTempB_PT_Offset_C = 0.0f; /*DBC: -100.0 */
const volatile float32 cap_DCDC_VCU_Temperature_Fbk_DCDC_InternalTempB_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_DCDC_VCU_Temperature_Fbk_DCDC_InternalTempC_PT_Offset_C = 0.0f; /*DBC: -100.0 */
const volatile float32 cap_DCDC_VCU_Temperature_Fbk_DCDC_InternalTempC_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_DCDC_VCU_Temperature_Fbk_DCDC_CoolPwrDemand_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DCDC_VCU_Temperature_Fbk_DCDC_CoolPwrDemand_PT_Factor_C = 1.0f;/*DBC: 0.01 */

const volatile float32 cap_Kilometerstand_2_MILE_KM_TOT_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_Kilometerstand_2_MILE_KM_TOT_PT_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_VCU_DCDC_Req_VCU_OutVltgReq_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_DCDC_Req_VCU_OutVltgReq_PT_Factor_C = 1.0f;/*DBC: 0.0625 */

const volatile float32 cap_VCU_DCDC_Req_VCU_OutCurReq_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_VCU_DCDC_Req_VCU_OutCurReq_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_OBC_Temperature_OBC_InternalTemp_PT_Offset_C = 0.0f; /*DBC: -50.0 */
const volatile float32 cap_OBC_Temperature_OBC_InternalTemp_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_OBC_Temperature_OBC_CoolPwrDemand_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_OBC_Temperature_OBC_CoolPwrDemand_PT_Factor_C = 1.0f;/*DBC: 0.1 */

const volatile float32 cap_A_TEMP_TEMP_EX_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_A_TEMP_TEMP_EX_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_DMEBK100_ActValVolFlowCoolantETractSys2_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DMEBK100_ActValVolFlowCoolantETractSys2_PT_Factor_C = 1.0f;/*DBC: 20.0 */

const volatile float32 cap_DMEBK100_ActValVolFlowCoolantETractSys1_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_DMEBK100_ActValVolFlowCoolantETractSys1_PT_Factor_C = 1.0f;/*DBC: 20.0 */

const volatile float32 cap_CombinedChargerUnit100msNo1_RequestPowerETractSys1Loss_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_CombinedChargerUnit100msNo1_RequestPowerETractSys1Loss_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_CombinedChargerUnit100msNo1_RequestPowerETractSys2Loss_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_CombinedChargerUnit100msNo1_RequestPowerETractSys2Loss_PT_Factor_C = 1.0f;/*DBC: 50.0 */

const volatile float32 cap_TLT_RW_AVL_LOGR_RW_PT_Offset_C = 0.0f; /*DBC: -64.0 */
const volatile float32 cap_TLT_RW_AVL_LOGR_RW_PT_Factor_C = 1.0f;/*DBC: 0.05 */

const volatile float32 cap_EnergyStorageMeasurementValues_EnergyStorageClamp30VoltageValue_PT_Offset_C = 0.0f; /*DBC: 0.0 */
const volatile float32 cap_EnergyStorageMeasurementValues_EnergyStorageClamp30VoltageValue_PT_Factor_C = 1.0f;/*DBC: 0.001 */

const volatile float32 cap_StatusCrashIdentETractSys1_TempETractSys1DirectCurrentPlug_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_StatusCrashIdentETractSys1_TempETractSys1DirectCurrentPlug_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_StatusCrashIdentETractSys2_TempETractSys2DirectCurrentPlug_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_StatusCrashIdentETractSys2_TempETractSys2DirectCurrentPlug_PT_Factor_C = 1.0f;/*DBC: 0.5 */

const volatile float32 cap_CombinedChargerUnit1000msNo1_TemperatureCoolantOutput_PT_Offset_C = 0.0f; /*DBC: -40.0 */
const volatile float32 cap_CombinedChargerUnit1000msNo1_TemperatureCoolantOutput_PT_Factor_C = 1.0f;/*DBC: 0.1 */


#define CPU1_STOP_SEC_CONST_32
#include "MemMap.h" 

/*
 * Function implementation
 */
