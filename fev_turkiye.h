#ifndef FEV_VCU_DATA_H 
#define FEV_VCU_DATA_H 
#include <stdint.h>  // Include for UINT32 type


typedef struct {
	UINT32 CRC_VCU_WarnMsg_0_7 : 8 ;
	UINT32 ALV_VCU_WarnMsg_8_11 : 4 ;
	UINT32 VCU_GearPAtStationaryOnly_12_12 : 1 ;
	UINT32 VCU_GearPNotPossible_13_13 : 1 ;
	UINT32 VCU_PressBreakToEngageGear_14_14 : 1 ;
	UINT32 VCU_CantChangeGear_15_15 : 1 ;
	UINT32 VCU_GearMalfunc_23_23 : 1 ;
	UINT32 VCU_EmergencyShutdown_19_19 : 1 ;
	UINT32 VCU_MotorCoolantPumpErr_16_18 : 3 ;
	UINT32 VCU_HeatLoopTempSensorErr_20_22 : 3 ;
	UINT32 VCU_CoolingTempExceedLimit_24_24 : 1 ;
	UINT32 VCU_TransmissionMalfunction_25_25 : 1 ;
	UINT32 VCU_ParkLockNotEngaged_26_26 : 1 ;
	UINT32 VCU_CoolantTempHigh_27_27 : 1 ;
	UINT32 VCU_CheckDriveTrain_28_28 : 1 ;
	UINT32 VCU_OBCTempHigh_29_29 : 1 ;
	UINT32 VCU_DCDC_TempHigh_30_30 : 1 ;
	UINT32 VCU_ChargingInletTempHigh_31_31 : 1 ;
	UINT32 VCU_HVILErr_32_32 : 1 ;
	UINT32 VCU_Limphome_33_33 : 1 ;
	UINT32 VCU_HVSystemReduced_34_34 : 1 ;
} _VCU_WarnMsg ;

typedef struct {
	UINT32 CRC_VCU_StatusDCDC_0_7 : 8 ;
	UINT32 ALV_VCU_StatusDCDC_8_11 : 4 ;
	UINT32 DCDC_status_12_14 : 3 ;
	UINT32 DCDC_maxCurrentOut_16_31 : 16 ;
	UINT32 DCDC_vDCInput_48_63 : 16 ;
	UINT32 DCDC_iOutput_32_47 : 16 ;
	UINT32 DCDC_vOutput_64_79 : 16 ;
} _VCU_StatusDCDC ;

typedef struct {
	UINT32 CRC_VCU_MHU_info_0_7 : 8 ;
	UINT32 ALV_VCU_MHU_info_8_11 : 4 ;
	UINT32 VCU_RemainingRange_16_27 : 12 ;
	UINT32 VCU_CurPwrConsum_12_15 : 4 ;
	UINT32 VCU_BattChargingStatus_31_31 : 1 ;
	UINT32 VCU_BattSOC_40_49 : 10 ;
	UINT32 VCU_ChgGunConnStatus_35_35 : 1 ;
	UINT32 VCU_VehChg_STS_32_34 : 3 ;
	UINT32 VCU_ChgGun_Status_28_30 : 3 ;
} _VCU_MHU_info ;

typedef struct {
	UINT32 CRC_VCU_HVsystem_status_0_7 : 8 ;
	UINT32 ALIV_VCU_HVsystem_status_8_11 : 4 ;
	UINT32 VCU_RunningRange_chrg_estSts_12_13 : 2 ;
	UINT32 VCU_RunningRange_charged_16_27 : 12 ;
	UINT32 VCU_HVbatSoc_charged_32_41 : 10 ;
	UINT32 VCU_HVbatSoc_charged_estStatus_14_15 : 2 ;
} _VCU_HVsystem_status ;

typedef struct {
	UINT32 CRC_VCU_HV_DrvSys_status_0_7 : 8 ;
	UINT32 ALV_VCU_HV_DrvSys_bstatus_8_11 : 4 ;
	UINT32 VCU_HV_SystemStatus_12_14 : 3 ;
	UINT32 VCU_HV_DrvSystemStatus_16_18 : 3 ;
	UINT32 VCU_ACT_Gear_20_22 : 3 ;
	UINT32 VCU_ACT_GearValid_23_23 : 1 ;
	UINT32 VCU_ACT_DriveMode_40_42 : 3 ;
	UINT32 VCU_ACT_DriveModeValid_43_43 : 1 ;
	UINT32 VCU_ACPD_Percent_24_35 : 12 ;
	UINT32 VCU_ACPD_Percent_Valid_36_36 : 1 ;
} _VCU_HV_DrvSys_status ;

typedef struct {
	UINT32 CRC_VCU_ChargingConnection_0_7 : 8 ;
	UINT32 ALV_VCU_ChargingConnection_8_11 : 4 ;
	UINT32 VCU_DCChgGunIn_12_12 : 1 ;
	UINT32 VCU_AcChgGunIn_13_13 : 1 ;
	UINT32 VCU_CPValue_16_22 : 7 ;
	UINT32 VCU_ACChargingVoltage_24_31 : 8 ;
	UINT32 VCU_MaxCurrentOfACCharging_32_37 : 6 ;
} _VCU_ChargingConnection ;

typedef struct {
	UINT32 CHSKM_VCU_Batt_WarnMsg_0_7 : 8 ;
	UINT32 ALV_VCU_Batt_WarnMsg_8_11 : 4 ;
	UINT32 BMS_PackTempSts_12_13 : 2 ;
	UINT32 BMS_ThermalRunaway_14_14 : 1 ;
	UINT32 BMS_CellTempErr_16_17 : 2 ;
	UINT32 BMS_HVILErr_18_18 : 1 ;
	UINT32 BMS_PackInsuErr_19_19 : 1 ;
	UINT32 BMS_MalfunctionSts_20_20 : 1 ;
	UINT32 BMS_LowBattery_21_22 : 2 ;
	UINT32 BMS_Reserved_signal5_56_63 : 8 ;
	UINT32 BMS_PackOverCurrErr_28_28 : 1 ;
	UINT32 BMS_CellVoltErr_24_25 : 2 ;
	UINT32 BMS_PackVolErr_26_27 : 2 ;
	UINT32 BMS_Reserved_signal1_29_31 : 3 ;
	UINT32 BMS_Reserved_signal2_32_39 : 8 ;
	UINT32 BMS_Reserved_signal3_40_47 : 8 ;
	UINT32 BMS_Reserved_signal4_48_55 : 8 ;
	UINT32 BMS_FuseStatusErr_23_23 : 1 ;
} _VCU_Batt_WarnMsg ;

typedef struct {
	UINT32 CRC_VCU_Batt_Info_0_7 : 8 ;
	UINT32 ALV_VCU_Batt_Info_8_11 : 4 ;
	UINT32 BMS_PackCur_16_31 : 16 ;
	UINT32 BMS_PackVoltage_32_47 : 16 ;
	UINT32 BMS_PackTemp_48_55 : 8 ;
	UINT32 BMS_RemainChargeTime_56_67 : 12 ;
	UINT32 BMS_ChargingVoltage_72_87 : 16 ;
	UINT32 BMS_ChargingCurrent_88_103 : 16 ;
} _VCU_Batt_Info ;

typedef struct {
	UINT32 ST_TRAI_0_1 : 2 ;
} _STAT_ANHAENGER ;

typedef struct {
	UINT32 CRC_ST_GWS_0_7 : 8 ;
	UINT32 ALIV_ST_GWS_8_11 : 4 ;
	UINT32 OP_GWS_12_15 : 4 ;
	UINT32 OP_GWS_PUBU_PKG_24_25 : 2 ;
} _ST_GWS ;

typedef struct {
	UINT32 CRC_SFA_SteerWheel_Info_0_7 : 8 ;
	UINT32 ALIV_SFA_SteerWheel_Info_8_11 : 4 ;
	UINT32 SFA_CenteringStatus_61_63 : 3 ;
	UINT32 SFA_EmergencyRequest_59_60 : 2 ;
	UINT32 SFA_SteerWheelAngle_40_55 : 16 ;
	UINT32 SFA_SteerWheelAngleSpeed_32_39 : 8 ;
	UINT32 SFA_SteerWheelTorque_16_27 : 12 ;
	UINT32 SFA_WarningLamp_56_58 : 3 ;
} _SFA_SteerWheel_Info ;

typedef struct {
	UINT32 T_SEC_COU_REL_0_31 : 32 ;
} _RELATIVZEIT ;

typedef struct {
	UINT32 NM3ControlBitVector_0_7 : 8 ;
	UINT32 NM3SenderECUId_8_15 : 8 ;
	UINT32 NM3BasePartialNetworks_16_31 : 16 ;
	UINT32 NM3FunctionalPartialNetworks_32_63 : 32 ;
} _Networkmanagement3_Status ;

typedef struct {
	UINT32 MILE_KM_0_23 : 24 ;
} _KILOMETERSTAND ;

typedef struct {
	UINT32 StatusServiceDisconnectionPlug_24_25 : 2 ;
	UINT32 StsDisconnectingSwtHighVoltStorg_26_31 : 6 ;
} _HighVoltageStorage200msNo1 ;

typedef struct {
	UINT32 CRC_HighVoltageStorage10msNo2_256_271 : 16 ;
	UINT32 ALIV_HighVoltageStorage10msNo2_272_279 : 8 ;
	UINT32 ActualValueVoltageLinkVerified_296_307 : 12 ;
} _HighVoltageStorage10msNo2 ;

typedef struct {
	UINT32 ST_ENERG_FZM_16_19 : 4 ;
	UINT32 ST_ILK_ERRM_FZM_56_57 : 2 ;
} _FZZSTD ;

typedef struct {
	UINT32 FZU_ChargingStopReq_0_1 : 2 ;
} _FZU_ChargingControl ;

typedef struct {
	UINT32 NO_VECH_1_0_7 : 8 ;
	UINT32 NO_VECH_2_8_15 : 8 ;
	UINT32 NO_VECH_3_16_23 : 8 ;
	UINT32 NO_VECH_4_24_31 : 8 ;
	UINT32 NO_VECH_5_32_39 : 8 ;
	UINT32 NO_VECH_6_40_47 : 8 ;
	UINT32 NO_VECH_7_48_55 : 8 ;
} _FAHRGESTELLNUMMER ;

typedef struct {
	UINT32 CTR_ERRM_BN_U_0_5 : 6 ;
} _ERRM_BN_U ;

typedef struct {
	UINT32 CRC_DT_DISP_GRDT_0_7 : 8 ;
	UINT32 ALIV_DT_DISP_GRDT_8_11 : 4 ;
	UINT32 DISP_PRG_GRB_16_18 : 3 ;
	UINT32 DISP_PO_IDC_GRB_19_20 : 2 ;
	UINT32 DISP_PO_GRB_21_23 : 3 ;
} _DT_DISP_GRDT ;

typedef struct {
	UINT32 CRC_CON_VEH_0_7 : 8 ;
	UINT32 ALIV_CON_VEH_8_11 : 4 ;
	UINT32 CTR_BS_PRTNT_12_15 : 4 ;
	UINT32 CTR_FKTN_PRTNT_16_47 : 32 ;
	UINT32 ST_CON_VEH_48_51 : 4 ;
	UINT32 QU_ST_CON_VEH_52_55 : 4 ;
} _CON_VEH ;

typedef struct {
	UINT32 PowerETractSys2LimGenMax_32_47 : 16 ;
	UINT32 PowerETractSys2LimMotMax_0_15 : 16 ;
	UINT32 PowerETractSys1LimGenMax_16_31 : 16 ;
	UINT32 PowerETractSys1LimMotMax_48_63 : 16 ;
	UINT32 OperatingModeEANActualValue_64_71 : 8 ;
	UINT32 RequestExtraBoostETractSys1_72_73 : 2 ;
	UINT32 RequestExtraBoostETractSys2_80_81 : 2 ;
} _CombinedChargerUnit10msNo2 ;

typedef struct {
	UINT32 TEMP_EX_0_7 : 8 ;
} _A_TEMP ;

typedef struct {
	UINT32 ABS_ACTIVE_0_1 : 2 ;
} _ABS_ESC_01 ;

typedef struct {
	UINT32 WEstTot_Nm_0_15 : 16 ;
} _IEB_01 ;

typedef struct {
	UINT32 AD3_PrsrVal_Fl_0_7 : 8 ;
	UINT32 AD3_PrsrVal_Fr_8_15 : 8 ;
	UINT32 AD3_PrsrVal_Rl_16_23 : 8 ;
	UINT32 AD3_PrsrVal_Rr_24_31 : 8 ;
} _ESC_A ;

typedef struct {
	UINT32 MILE_KM_TOT_0_31 : 32 ;
} _Kilometerstand_2 ;

typedef struct {
	UINT32 CRC_EBCM_STATUS_0_7 : 8 ;
	UINT32 ALIV_EBCM_STATUS_8_11 : 4 ;
	UINT32 MCPressureSts_47_47 : 1 ;
	UINT32 MCPressure_12_23 : 12 ;
	UINT32 BreakPedalPercent_24_35 : 12 ;
	UINT32 BreakPedalPercentValid_46_46 : 1 ;
	UINT32 EPBStatus_36_39 : 4 ;
	UINT32 EPBFault_49_49 : 1 ;
	UINT32 TCSAvailable_44_44 : 1 ;
	UINT32 TCSActive_45_45 : 1 ;
	UINT32 HillholderStatus_40_43 : 4 ;
	UINT32 HillholderFault_48_48 : 1 ;
	UINT32 EBCM_BrkPedlSts_50_51 : 2 ;
} _EBCM_STATUS ;

typedef struct {
	UINT32 ST_SLIP_THO_44_47 : 4 ;
} _ST_STAB_DSC_2 ;

typedef struct {
	UINT32 CRC_ST_STAB_DSC_0_7 : 8 ;
	UINT32 ALIV_ST_STAB_DSC_8_11 : 4 ;
	UINT32 QU_FN_FDR_16_27 : 12 ;
	UINT32 QU_FN_ABS_28_39 : 12 ;
	UINT32 QU_FN_ASC_40_51 : 12 ;
	UINT32 ST_BRG_DV_56_61 : 6 ;
} _ST_STAB_DSC ;

typedef struct {
	UINT32 OpModETractSys1ActVal_116_123 : 8 ;
} _TracEMacElectc1Time100msNo1 ;

typedef struct {
	UINT32 OpModETractSys2ActVal_116_123 : 8 ;
} _TracEMacElectc2Time100msNo1 ;

typedef struct {
	UINT32 CRC_EXTS_ARB_INTF_128_135 : 8 ;
	UINT32 ALIV_EXTS_ARB_INTF_136_139 : 4 ;
	UINT32 CHL_EXTS_ARB_INTF_140_143 : 4 ;
	UINT32 AVL_BRTORQ_WHL_RS_LH_EXT_144_159 : 16 ;
	UINT32 AVL_BRTORQ_WHL_RS_RH_EXT_160_175 : 16 ;
	UINT32 AVL_BRTORQ_WHL_FS_LH_EXT_176_191 : 16 ;
	UINT32 AVL_BRTORQ_WHL_FS_RH_EXT_192_207 : 16 ;
	UINT32 CHL_RQ_RPM_BAX_268_271 : 4 ;
	UINT32 ALIV_RQ_RPM_BAX_264_267 : 4 ;
	UINT32 CRC_RQ_RPM_BAX_256_263 : 8 ;
	UINT32 TAR_RPM_MAX_BAX_272_287 : 16 ;
	UINT32 TAR_RPM_MIN_BAX_288_303 : 16 ;
	UINT32 ST_TAR_RPM_BAX_304_307 : 4 ;
	UINT32 TAR_STIF_SPCO_308_311 : 4 ;
	UINT32 ALIV_RQ_RPM_FTAX_328_331 : 4 ;
	UINT32 CHL_RQ_RPM_FTAX_332_335 : 4 ;
	UINT32 CRC_RQ_RPM_FTAX_320_327 : 8 ;
	UINT32 TAR_RPM_MAX_FTAX_336_351 : 16 ;
	UINT32 TAR_RPM_MIN_FTAX_352_367 : 16 ;
	UINT32 ST_TAR_RPM_FTAX_368_371 : 4 ;
	UINT32 StatusSlipThresholdsFrontAxle_472_475 : 4 ;
	UINT32 StatusSlipThresholdsRearAxle_372_375 : 4 ;
	UINT32 CRC_StatusSlipThresholds_456_463 : 8 ;
	UINT32 ALIV_StatusSlipThresholds_464_467 : 4 ;
	UINT32 CHL_StatusSlipThresholds_468_471 : 4 ;
} _BundleEAFlexrayToAECANFD10msNo1 ;

typedef struct {
	UINT32 CRC_AVL_RPM_WHL_0_7 : 8 ;
	UINT32 ALIV_AVL_RPM_WHL_8_11 : 4 ;
	UINT32 AVL_RPM_WHL_RLH_16_31 : 16 ;
	UINT32 AVL_RPM_WHL_RRH_32_47 : 16 ;
	UINT32 AVL_RPM_WHL_FLH_48_63 : 16 ;
	UINT32 AVL_RPM_WHL_FRH_64_79 : 16 ;
	UINT32 QU_AVL_RPM_WHL_RLH_80_83 : 4 ;
	UINT32 QU_AVL_RPM_WHL_RRH_84_87 : 4 ;
	UINT32 QU_AVL_RPM_WHL_FLH_88_91 : 4 ;
	UINT32 QU_AVL_RPM_WHL_FRH_92_95 : 4 ;
} _AVL_RPM_WHL ;

typedef struct {
	UINT32 CRC_V_VEH_128_135 : 8 ;
	UINT32 ALIV_V_VEH_136_139 : 4 ;
	UINT32 V_VEH_COG_143_158 : 16 ;
	UINT32 QU_V_VEH_COG_160_163 : 4 ;
	UINT32 SecOcDataP2V_VEH_168_231 : 64 ;
} _BundleEAFlexrayToCANFD20msNo1 ;

typedef struct {
	UINT32 CRC_CLAMP_STAT_0_7 : 8 ;
	UINT32 STAT_CL30S_Light_16_17 : 2 ;
	UINT32 STAT_CL30S_L_14_15 : 2 ;
	UINT32 STAT_CL15_L_12_13 : 2 ;
	UINT32 ALIV_CLAMP_STAT_8_11 : 4 ;
	UINT32 STAT_CL15_WUPL_18_19 : 2 ;
} _CLAMP_STAT ;


#endif  // FEV_VCU_DATA_H