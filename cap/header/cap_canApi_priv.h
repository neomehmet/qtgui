#ifndef CAP_CANAPI_PRIV_DEFINED  
#define CAP_CANAPI_PRIV_DEFINED
/**
 * @file cap_canApi_priv.h
 * 
 * Project: Tamkin (e-VCU)
 * \file    cap_canApi.h
 * \author  Sonuzun C., Culhacioglu F.
 * \brief   Module for CAN Api functions
 * \details	This file declares a set of CAN Api functions.
 *          
 *
 * \copyright Copyright (c) 2023 FEV GmbH, Turkiye.
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

#include "Rte_ASW_SWC.h"
#include "ASW_CAN_SWC.h"

/*
 * Defines
 */

#define CAP_MIN_MAX_SATURATION(phy,min,max)  (phy>max ? phy = max : (phy < min? min:phy))
#define CAP_CALC_PHY(raw,factor,offset) (float32)((float32)raw*factor + offset)
#define CAP_CALC_RAW(phy,factor,offset) ((phy-(float32)offset)/(float32)factor)  

/*
 * Type definitions
 */

 

/*
 * Data declarations
 */

void cap_getRxSignals_STAT_ANHAENGER_BCAN(void);
void cap_getRxSignals_Networkmanagement3_Status_BCAN(void);
void cap_getRxSignals_Networkmanagement3_Status_CHS1(void);
void cap_getRxSignals_ST_GWS_BCAN(void);


void cap_getRxSignals_RELATIVZEIT_BCAN(void);


void cap_getRxSignals_KILOMETERSTAND_BCAN(void);


void cap_getRxSignals_FZZSTD_BCAN(void);


void cap_getRxSignals_FZU_ChargingControl_BCAN(void);


void cap_getRxSignals_FAHRGESTELLNUMMER_BCAN(void);


void cap_getRxSignals_ERRM_BN_U_BCAN(void);


void cap_getRxSignals_CON_VEH_BCAN(void);


void cap_getRxSignals_A_TEMP_BCAN(void);


void cap_getRxSignals_Kilometerstand_2_BCAN(void);


void cap_getRxSignals_CLAMP_STAT_BCAN(void);


void cap_getRxSignals_CLAMP_STAT_CHS1(void);


void cap_getRxSignals_ESC_A_CHS1(void);


void cap_getRxSignals_ABS_ESC_01_CHS1(void);


void cap_getRxSignals_IEB_01_CHS1(void);


void cap_getRxSignals_EBCM_ACC_LONG_LAT_YAW_CHS1(void);


void cap_getRxSignals_EBCM_STATUS_CHS1(void);


void cap_getRxSignals_TLT_RW_CHS1(void);


void cap_getRxSignals_ST_STAB_DSC_2_CHS1(void);


void cap_getRxSignals_ST_STAB_DSC_CHS1(void);


void cap_getRxSignals_BundleEAFlexrayToAECANFD20msNo2_CHS1(void);


void cap_getRxSignals_BundleEAFlexrayToAECANFD10msNo1_CHS1(void);


void cap_getRxSignals_AVL_RPM_WHL_CHS1(void);


void cap_getRxSignals_BundleEAFlexrayToCANFD20msNo1_CHS1(void);


void cap_getRxSignals_SFA_SteerWheel_Info_CHS1(void);


void cap_getRxSignals_ESC_A_CHS2(void);


void cap_getRxSignals_ABS_ESC_01_CHS2(void);


void cap_getRxSignals_IEB_01_CHS2(void);


void cap_getRxSignals_EBCM_STATUS_CHS2(void);


void cap_getRxSignals_ST_STAB_DSC_2_CHS2(void);


void cap_getRxSignals_ST_STAB_DSC_CHS2(void);


void cap_getRxSignals_BundleEAFlexrayToAECANFD10msNo1_CHS2(void);


void cap_getRxSignals_AVL_RPM_WHL_CHS2(void);


void cap_getRxSignals_BundleEAFlexrayToCANFD20msNo1_CHS2(void);


void cap_getRxSignals_SFA_SteerWheel_Info_CHS2(void);


void cap_getRxSignals_OBC_01_100ms_PT(void);


void cap_getRxSignals_DCDC_01_100ms_PT(void);


void cap_getRxSignals_BMS_CellTempMeas2_PT(void);


void cap_getRxSignals_BMS_ChgParamReq_PT(void);


void cap_getRxSignals_BMS_CurMeas_PT(void);


void cap_getRxSignals_HighVoltageStorage10msNo2_PT(void);


void cap_getRxSignals_TracEMacElectc1Time10msNo1_PT(void);


void cap_getRxSignals_BMS_Error_PT(void);


void cap_getRxSignals_BMS_HVMeas_PT(void);


void cap_getRxSignals_TracEMacElectc2Time10msNo1_PT(void);


void cap_getRxSignals_BMS_PowerCont_PT(void);


void cap_getRxSignals_BMS_RelayStatus_PT(void);


void cap_getRxSignals_BMS_Sts_PT(void);


void cap_getRxSignals_BMS_WarnMsg_PT(void);


void cap_getRxSignals_DCDC_VCU_Measure_Fbk_PT(void);


void cap_getRxSignals_DCDC_VCU_Req_Fbk_PT(void);


void cap_getRxSignals_TracEMacElectc1Time100msNo1_PT(void);


void cap_getRxSignals_TracEMacElectc2Time100msNo1_PT(void);


void cap_getRxSignals_BMS_CellTemp_PT(void);


void cap_getRxSignals_BMS_CellTempMeas_PT(void);


void cap_getRxSignals_BMS_CellVolMeas1_PT(void);


void cap_getRxSignals_BMS_CellVolMeas2_PT(void);


void cap_getRxSignals_OBC_Status_PT(void);


void cap_getRxSignals_BMS_CellVolMeas3_PT(void);


void cap_getRxSignals_BMS_CoolantInletOutletTmp_PT(void);


void cap_getRxSignals_BMS_Insulation_PT(void);


void cap_getRxSignals_BMS_VCU_THMReq_PT(void);


void cap_getRxSignals_BMS_VolMeas_PT(void);


void cap_getRxSignals_DCDC_VCU_Temperature_Fbk_PT(void);


void cap_getRxSignals_BMS_HistData_PT(void);


void cap_getRxSignals_OBC_Temperature_PT(void);


void cap_getRxSignals_HighVoltageStorage200msNo1_PT(void);


void cap_getRxSignals_StatusCrashIdentETractSys1_PT(void);


void cap_getRxSignals_StatusCrashIdentETractSys2_PT(void);


void cap_setTxSignals_VCU_WarnMsg_BCAN(void);


void cap_setTxSignals_VCU_StatusDCDC_BCAN(void);


void cap_setTxSignals_VCU_MHU_info_BCAN(void);


void cap_setTxSignals_VCU_HVsystem_status_BCAN(void);


void cap_setTxSignals_VCU_HV_DrvSys_status_BCAN(void);


void cap_setTxSignals_VCU_ChargingConnection_BCAN(void);


void cap_setTxSignals_VCU_Batt_WarnMsg_BCAN(void);


void cap_setTxSignals_VCU_Batt_Info_BCAN(void);


void cap_setTxSignals_HighVoltageStorage200msNo1_BCAN(void);


void cap_setTxSignals_HighVoltageStorage10msNo2_BCAN(void);


void cap_setTxSignals_DT_DISP_GRDT_BCAN(void);


void cap_setTxSignals_CombinedChargerUnit10msNo2_BCAN(void);


void cap_setTxSignals_TracEMacElectc1Time100msNo1_BCAN(void);


void cap_setTxSignals_TracEMacElectc2Time100msNo1_BCAN(void);


void cap_setTxSignals_VCU_TractionEMachine2_10ms_CHS1(void);


void cap_setTxSignals_VCU_TractionEMachine1_10ms_CHS1(void);


void cap_setTxSignals_VCU_TractionEMachine2_100ms_CHS1(void);


void cap_setTxSignals_VCU_TractionEMachine1_100ms_CHS1(void);


void cap_setTxSignals_VCU_Status_CHS1(void);


void cap_setTxSignals_VCU_HV_Status_CHS1(void);


void cap_setTxSignals_VCU_CombinedChargerUnit_CHS1(void);


void cap_setTxSignals_HighVoltageStorage200msNo1_CHS1(void);


void cap_setTxSignals_CLAMP_STAT_CHS2(void);


void cap_setTxSignals_VCU_TractionEMachine2_10ms_CHS2(void);


void cap_setTxSignals_VCU_TractionEMachine1_10ms_CHS2(void);


void cap_setTxSignals_VCU_TractionEMachine2_100ms_CHS2(void);


void cap_setTxSignals_VCU_TractionEMachine1_100ms_CHS2(void);


void cap_setTxSignals_VCU_Status_CHS2(void);


void cap_setTxSignals_VCU_HV_Status_CHS2(void);


void cap_setTxSignals_VCU_CombinedChargerUnit_CHS2(void);


void cap_setTxSignals_HighVoltageStorage200msNo1_CHS2(void);


void cap_setTxSignals_VCU_HV_DrvSys_status_PT(void);


void cap_setTxSignals_VCU_Thermal_Status_PT(void);


void cap_setTxSignals_CLAMP_STAT_PT(void);


void cap_setTxSignals_CON_VEH_PT(void);


void cap_setTxSignals_ST_CR_PT(void);


void cap_setTxSignals_AVL_RPM_WHL_PT(void);


void cap_setTxSignals_CombinedChargerUnit10msNo3_PT(void);


void cap_setTxSignals_CombinedChargerUnit10msNo1_PT(void);


void cap_setTxSignals_ERRM_BN_U_PT(void);


void cap_setTxSignals_WMOM_DRV_9_PT(void);


void cap_setTxSignals_ST_STAB_DSC_PT(void);


void cap_setTxSignals_ST_STAB_DSC_2_PT(void);


void cap_setTxSignals_WMOM_PT_AVL_PT(void);


void cap_setTxSignals_VCU_ChargingConnectionSts_PT(void);


void cap_setTxSignals_BundleEAFlexrayToCANFD20msNo1_PT(void);


void cap_setTxSignals_CombinedChargerUnit10msNo2_PT(void);


void cap_setTxSignals_BundleEAFlexrayToAECANFD10msNo1_PT(void);


void cap_setTxSignals_BundleEAFlexrayToAECANFD20msNo2_PT(void);


void cap_setTxSignals_VCU_BMS_ThermalStatus_PT(void);


void cap_setTxSignals_VCU_OBC_Req_PT(void);


void cap_setTxSignals_VCU_BMS_ChargingParams_PT(void);


void cap_setTxSignals_VCU_BMS_ChargingControl_PT(void);


void cap_setTxSignals_VCU_BMS_HVCoordination_PT(void);


void cap_setTxSignals_Kilometerstand_2_PT(void);


void cap_setTxSignals_VCU_DCDC_Req_PT(void);


void cap_setTxSignals_ParkByWire50msNo1_PT(void);


void cap_setTxSignals_FZZSTD_PT(void);


void cap_setTxSignals_STAT_ANHAENGER_PT(void);


void cap_setTxSignals_A_TEMP_PT(void);


void cap_setTxSignals_DMEBK100_PT(void);


void cap_setTxSignals_CombinedChargerUnit100msNo1_PT(void);


void cap_setTxSignals_FAHRGESTELLNUMMER_PT(void);


void cap_setTxSignals_TLT_RW_PT(void);


void cap_setTxSignals_KILOMETERSTAND_PT(void);


void cap_setTxSignals_RELATIVZEIT_PT(void);

void cap_setTxSignals_EnergyStorageMeasurementValues_PT(void);
void cap_setTxSignals_CombinedChargerUnit1000msNo1_PT(void);


void cap_setTxSignals_Networkmanagement3_PT(void);

 

/*
 * Function declarations
 */

#endif // !defined(CAP_CANAPI_PRIV_DEFINED)