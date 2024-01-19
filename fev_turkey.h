#ifndef FEV_VCU_DATA_H 
#define FEV_VCU_DATA_H 
#include <stdint.h>  // Include for UINT32 type

#define get_ST_TRAI float32( fev_STAT_ANHAENGER.ST_TRAI*1+0 )
#define get_CRC_ST_GWS float32( fev_ST_GWS.CRC_ST_GWS*1+0 )
#define get_ALIV_ST_GWS float32( fev_ST_GWS.ALIV_ST_GWS*1+0 )
#define get_OP_GWS float32( fev_ST_GWS.OP_GWS*1+0 )
#define get_OP_GWS_PUBU_PKG float32( fev_ST_GWS.OP_GWS_PUBU_PKG*1+0 )
#define get_CRC_SFA_SteerWheel_Info float32( fev_SFA_SteerWheel_Info.CRC_SFA_SteerWheel_Info*1+0 )
#define get_ALIV_SFA_SteerWheel_Info float32( fev_SFA_SteerWheel_Info.ALIV_SFA_SteerWheel_Info*1+0 )
#define get_SFA_SteerWheelTorque float32( fev_SFA_SteerWheel_Info.SFA_SteerWheelTorque*0.02+0 )
#define get_SFA_SteerWheelAngleSpeed float32( fev_SFA_SteerWheel_Info.SFA_SteerWheelAngleSpeed*4+0 )
#define get_SFA_SteerWheelAngle float32( fev_SFA_SteerWheel_Info.SFA_SteerWheelAngle*0.02+0 )
#define get_SFA_WarningLamp float32( fev_SFA_SteerWheel_Info.SFA_WarningLamp*1+0 )
#define get_SFA_EmergencyRequest float32( fev_SFA_SteerWheel_Info.SFA_EmergencyRequest*1+0 )
#define get_SFA_CenteringStatus float32( fev_SFA_SteerWheel_Info.SFA_CenteringStatus*1+0 )
#define get_T_SEC_COU_REL float32( fev_RELATIVZEIT.T_SEC_COU_REL*1+0 )
#define get_NM3ControlBitVector float32( fev_Networkmanagement3_Status.NM3ControlBitVector*1+0 )
#define get_NM3SenderECUId float32( fev_Networkmanagement3_Status.NM3SenderECUId*1+0 )
#define get_NM3BasePartialNetworks float32( fev_Networkmanagement3_Status.NM3BasePartialNetworks*1+0 )
#define get_NM3FunctionalPartialNetworks float32( fev_Networkmanagement3_Status.NM3FunctionalPartialNetworks*1+0 )
#define get_MILE_KM float32( fev_KILOMETERSTAND.MILE_KM*1+0 )
#define get_ST_ENERG_FZM float32( fev_FZZSTD.ST_ENERG_FZM*1+0 )
#define get_ST_ILK_ERRM_FZM float32( fev_FZZSTD.ST_ILK_ERRM_FZM*1+0 )
#define get_FZU_ChargingStopReq float32( fev_FZU_ChargingControl.FZU_ChargingStopReq*1+0 )
#define get_NO_VECH_1 float32( fev_FAHRGESTELLNUMMER.NO_VECH_1*1+0 )
#define get_NO_VECH_2 float32( fev_FAHRGESTELLNUMMER.NO_VECH_2*1+0 )
#define get_NO_VECH_3 float32( fev_FAHRGESTELLNUMMER.NO_VECH_3*1+0 )
#define get_NO_VECH_4 float32( fev_FAHRGESTELLNUMMER.NO_VECH_4*1+0 )
#define get_NO_VECH_5 float32( fev_FAHRGESTELLNUMMER.NO_VECH_5*1+0 )
#define get_NO_VECH_6 float32( fev_FAHRGESTELLNUMMER.NO_VECH_6*1+0 )
#define get_NO_VECH_7 float32( fev_FAHRGESTELLNUMMER.NO_VECH_7*1+0 )
#define get_CTR_ERRM_BN_U float32( fev_ERRM_BN_U.CTR_ERRM_BN_U*1+0 )
#define get_CRC_CON_VEH float32( fev_CON_VEH.CRC_CON_VEH*1+0 )
#define get_ALIV_CON_VEH float32( fev_CON_VEH.ALIV_CON_VEH*1+0 )
#define get_CTR_BS_PRTNT float32( fev_CON_VEH.CTR_BS_PRTNT*1+0 )
#define get_CTR_FKTN_PRTNT float32( fev_CON_VEH.CTR_FKTN_PRTNT*1+0 )
#define get_ST_CON_VEH float32( fev_CON_VEH.ST_CON_VEH*1+0 )
#define get_QU_ST_CON_VEH float32( fev_CON_VEH.QU_ST_CON_VEH*1+0 )
#define get_TEMP_EX float32( fev_A_TEMP.TEMP_EX*0.5+-40 )
#define get_ABS_ACTIVE float32( fev_ABS_ESC_01.ABS_ACTIVE*1+0 )
#define get_WEstTot_Nm float32( fev_IEB_01.WEstTot_Nm*1+0 )
#define get_AD3_PrsrVal_Fl float32( fev_ESC_A.AD3_PrsrVal_Fl*1+0 )
#define get_AD3_PrsrVal_Fr float32( fev_ESC_A.AD3_PrsrVal_Fr*1+0 )
#define get_AD3_PrsrVal_Rl float32( fev_ESC_A.AD3_PrsrVal_Rl*1+0 )
#define get_AD3_PrsrVal_Rr float32( fev_ESC_A.AD3_PrsrVal_Rr*1+0 )
#define get_MILE_KM_TOT float32( fev_Kilometerstand_2.MILE_KM_TOT*0.001+0 )
#define get_CRC_EBCM_STATUS float32( fev_EBCM_STATUS.CRC_EBCM_STATUS*1+0 )
#define get_ALIV_EBCM_STATUS float32( fev_EBCM_STATUS.ALIV_EBCM_STATUS*1+0 )
#define get_MCPressure float32( fev_EBCM_STATUS.MCPressure*1+-42.5 )
#define get_BreakPedalPercent float32( fev_EBCM_STATUS.BreakPedalPercent*0.0625+0 )
#define get_EPBStatus float32( fev_EBCM_STATUS.EPBStatus*1+0 )
#define get_HillholderStatus float32( fev_EBCM_STATUS.HillholderStatus*1+0 )
#define get_TCSAvailable float32( fev_EBCM_STATUS.TCSAvailable*1+0 )
#define get_TCSActive float32( fev_EBCM_STATUS.TCSActive*1+0 )
#define get_BreakPedalPercentValid float32( fev_EBCM_STATUS.BreakPedalPercentValid*1+0 )
#define get_MCPressureSts float32( fev_EBCM_STATUS.MCPressureSts*1+0 )
#define get_HillholderFault float32( fev_EBCM_STATUS.HillholderFault*1+0 )
#define get_EPBFault float32( fev_EBCM_STATUS.EPBFault*1+0 )
#define get_EBCM_BrkPedlSts float32( fev_EBCM_STATUS.EBCM_BrkPedlSts*1+0 )
#define get_ST_SLIP_THO float32( fev_ST_STAB_DSC_2.ST_SLIP_THO*1+0 )
#define get_CRC_ST_STAB_DSC float32( fev_ST_STAB_DSC.CRC_ST_STAB_DSC*1+0 )
#define get_ALIV_ST_STAB_DSC float32( fev_ST_STAB_DSC.ALIV_ST_STAB_DSC*1+0 )
#define get_QU_FN_FDR float32( fev_ST_STAB_DSC.QU_FN_FDR*1+0 )
#define get_QU_FN_ABS float32( fev_ST_STAB_DSC.QU_FN_ABS*1+0 )
#define get_QU_FN_ASC float32( fev_ST_STAB_DSC.QU_FN_ASC*1+0 )
#define get_ST_BRG_DV float32( fev_ST_STAB_DSC.ST_BRG_DV*1+0 )
#define get_CRC_EXTS_ARB_INTF float32( fev_BundleEAFlexrayToAECANFD10msNo1.CRC_EXTS_ARB_INTF*1+0 )
#define get_ALIV_EXTS_ARB_INTF float32( fev_BundleEAFlexrayToAECANFD10msNo1.ALIV_EXTS_ARB_INTF*1+0 )
#define get_CHL_EXTS_ARB_INTF float32( fev_BundleEAFlexrayToAECANFD10msNo1.CHL_EXTS_ARB_INTF*1+0 )
#define get_AVL_BRTORQ_WHL_RS_LH_EXT float32( fev_BundleEAFlexrayToAECANFD10msNo1.AVL_BRTORQ_WHL_RS_LH_EXT*1+-32000 )
#define get_AVL_BRTORQ_WHL_RS_RH_EXT float32( fev_BundleEAFlexrayToAECANFD10msNo1.AVL_BRTORQ_WHL_RS_RH_EXT*1+-32000 )
#define get_AVL_BRTORQ_WHL_FS_LH_EXT float32( fev_BundleEAFlexrayToAECANFD10msNo1.AVL_BRTORQ_WHL_FS_LH_EXT*1+-32000 )
#define get_AVL_BRTORQ_WHL_FS_RH_EXT float32( fev_BundleEAFlexrayToAECANFD10msNo1.AVL_BRTORQ_WHL_FS_RH_EXT*1+-32000 )
#define get_CRC_RQ_RPM_BAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.CRC_RQ_RPM_BAX*1+0 )
#define get_ALIV_RQ_RPM_BAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.ALIV_RQ_RPM_BAX*1+0 )
#define get_CHL_RQ_RPM_BAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.CHL_RQ_RPM_BAX*1+0 )
#define get_TAR_RPM_MAX_BAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.TAR_RPM_MAX_BAX*0.01+0 )
#define get_TAR_RPM_MIN_BAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.TAR_RPM_MIN_BAX*0.01+0 )
#define get_ST_TAR_RPM_BAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.ST_TAR_RPM_BAX*1+0 )
#define get_TAR_STIF_SPCO float32( fev_BundleEAFlexrayToAECANFD10msNo1.TAR_STIF_SPCO*1+0 )
#define get_CRC_RQ_RPM_FTAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.CRC_RQ_RPM_FTAX*1+0 )
#define get_ALIV_RQ_RPM_FTAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.ALIV_RQ_RPM_FTAX*1+0 )
#define get_CHL_RQ_RPM_FTAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.CHL_RQ_RPM_FTAX*1+0 )
#define get_TAR_RPM_MAX_FTAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.TAR_RPM_MAX_FTAX*0.01+0 )
#define get_TAR_RPM_MIN_FTAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.TAR_RPM_MIN_FTAX*0.01+0 )
#define get_ST_TAR_RPM_FTAX float32( fev_BundleEAFlexrayToAECANFD10msNo1.ST_TAR_RPM_FTAX*1+0 )
#define get_StatusSlipThresholdsRearAxle float32( fev_BundleEAFlexrayToAECANFD10msNo1.StatusSlipThresholdsRearAxle*1+0 )
#define get_CRC_StatusSlipThresholds float32( fev_BundleEAFlexrayToAECANFD10msNo1.CRC_StatusSlipThresholds*1+0 )
#define get_ALIV_StatusSlipThresholds float32( fev_BundleEAFlexrayToAECANFD10msNo1.ALIV_StatusSlipThresholds*1+0 )
#define get_CHL_StatusSlipThresholds float32( fev_BundleEAFlexrayToAECANFD10msNo1.CHL_StatusSlipThresholds*1+0 )
#define get_StatusSlipThresholdsFrontAxle float32( fev_BundleEAFlexrayToAECANFD10msNo1.StatusSlipThresholdsFrontAxle*1+0 )
#define get_CRC_AVL_RPM_WHL float32( fev_AVL_RPM_WHL.CRC_AVL_RPM_WHL*1+0 )
#define get_ALIV_AVL_RPM_WHL float32( fev_AVL_RPM_WHL.ALIV_AVL_RPM_WHL*1+0 )
#define get_AVL_RPM_WHL_RLH float32( fev_AVL_RPM_WHL.AVL_RPM_WHL_RLH*0.015625+-511.984375 )
#define get_AVL_RPM_WHL_RRH float32( fev_AVL_RPM_WHL.AVL_RPM_WHL_RRH*0.015625+-511.984375 )
#define get_AVL_RPM_WHL_FLH float32( fev_AVL_RPM_WHL.AVL_RPM_WHL_FLH*0.015625+-511.984375 )
#define get_AVL_RPM_WHL_FRH float32( fev_AVL_RPM_WHL.AVL_RPM_WHL_FRH*0.015625+-511.984375 )
#define get_QU_AVL_RPM_WHL_RLH float32( fev_AVL_RPM_WHL.QU_AVL_RPM_WHL_RLH*1+0 )
#define get_QU_AVL_RPM_WHL_RRH float32( fev_AVL_RPM_WHL.QU_AVL_RPM_WHL_RRH*1+0 )
#define get_QU_AVL_RPM_WHL_FLH float32( fev_AVL_RPM_WHL.QU_AVL_RPM_WHL_FLH*1+0 )
#define get_QU_AVL_RPM_WHL_FRH float32( fev_AVL_RPM_WHL.QU_AVL_RPM_WHL_FRH*1+0 )
#define get_CRC_V_VEH float32( fev_BundleEAFlexrayToCANFD20msNo1.CRC_V_VEH*1+0 )
#define get_ALIV_V_VEH float32( fev_BundleEAFlexrayToCANFD20msNo1.ALIV_V_VEH*1+0 )
#define get_V_VEH_COG float32( fev_BundleEAFlexrayToCANFD20msNo1.V_VEH_COG*0.015625+0 )
#define get_QU_V_VEH_COG float32( fev_BundleEAFlexrayToCANFD20msNo1.QU_V_VEH_COG*1+0 )
#define get_SecOcDataP2V_VEH float32( fev_BundleEAFlexrayToCANFD20msNo1.SecOcDataP2V_VEH*1+0 )
#define get_CRC_CLAMP_STAT float32( fev_CLAMP_STAT.CRC_CLAMP_STAT*1+0 )
#define get_ALIV_CLAMP_STAT float32( fev_CLAMP_STAT.ALIV_CLAMP_STAT*1+0 )
#define get_STAT_CL15_L float32( fev_CLAMP_STAT.STAT_CL15_L*1+0 )
#define get_STAT_CL30S_L float32( fev_CLAMP_STAT.STAT_CL30S_L*1+0 )
#define get_STAT_CL30S_Light float32( fev_CLAMP_STAT.STAT_CL30S_Light*1+0 )
#define get_STAT_CL15_WUPL float32( fev_CLAMP_STAT.STAT_CL15_WUPL*1+0 )
#define set_CRC_VCU_WarnMsg ( fev_VCU_WarnMsg.CRC_VCU_WarnMsg )
#define set_ALV_VCU_WarnMsg ( fev_VCU_WarnMsg.ALV_VCU_WarnMsg )
#define set_VCU_GearPAtStationaryOnly ( fev_VCU_WarnMsg.VCU_GearPAtStationaryOnly )
#define set_VCU_GearPNotPossible ( fev_VCU_WarnMsg.VCU_GearPNotPossible )
#define set_VCU_PressBreakToEngageGear ( fev_VCU_WarnMsg.VCU_PressBreakToEngageGear )
#define set_VCU_CantChangeGear ( fev_VCU_WarnMsg.VCU_CantChangeGear )
#define set_VCU_MotorCoolantPumpErr ( fev_VCU_WarnMsg.VCU_MotorCoolantPumpErr )
#define set_VCU_EmergencyShutdown ( fev_VCU_WarnMsg.VCU_EmergencyShutdown )
#define set_VCU_HeatLoopTempSensorErr ( fev_VCU_WarnMsg.VCU_HeatLoopTempSensorErr )
#define set_VCU_GearMalfunc ( fev_VCU_WarnMsg.VCU_GearMalfunc )
#define set_VCU_CoolingTempExceedLimit ( fev_VCU_WarnMsg.VCU_CoolingTempExceedLimit )
#define set_VCU_TransmissionMalfunction ( fev_VCU_WarnMsg.VCU_TransmissionMalfunction )
#define set_VCU_ParkLockNotEngaged ( fev_VCU_WarnMsg.VCU_ParkLockNotEngaged )
#define set_VCU_CoolantTempHigh ( fev_VCU_WarnMsg.VCU_CoolantTempHigh )
#define set_VCU_CheckDriveTrain ( fev_VCU_WarnMsg.VCU_CheckDriveTrain )
#define set_VCU_OBCTempHigh ( fev_VCU_WarnMsg.VCU_OBCTempHigh )
#define set_VCU_DCDC_TempHigh ( fev_VCU_WarnMsg.VCU_DCDC_TempHigh )
#define set_VCU_ChargingInletTempHigh ( fev_VCU_WarnMsg.VCU_ChargingInletTempHigh )
#define set_VCU_HVILErr ( fev_VCU_WarnMsg.VCU_HVILErr )
#define set_VCU_Limphome ( fev_VCU_WarnMsg.VCU_Limphome )
#define set_VCU_HVSystemReduced ( fev_VCU_WarnMsg.VCU_HVSystemReduced )
#define set_CRC_VCU_StatusDCDC ( fev_VCU_StatusDCDC.CRC_VCU_StatusDCDC )
#define set_ALV_VCU_StatusDCDC ( fev_VCU_StatusDCDC.ALV_VCU_StatusDCDC )
#define set_DCDC_status ( fev_VCU_StatusDCDC.DCDC_status )
#define set_DCDC_maxCurrentOut ( fev_VCU_StatusDCDC.DCDC_maxCurrentOut )
#define set_DCDC_iOutput ( fev_VCU_StatusDCDC.DCDC_iOutput )
#define set_DCDC_vDCInput ( fev_VCU_StatusDCDC.DCDC_vDCInput )
#define set_DCDC_vOutput ( fev_VCU_StatusDCDC.DCDC_vOutput )
#define set_CRC_VCU_MHU_info ( fev_VCU_MHU_info.CRC_VCU_MHU_info )
#define set_ALV_VCU_MHU_info ( fev_VCU_MHU_info.ALV_VCU_MHU_info )
#define set_VCU_CurPwrConsum ( fev_VCU_MHU_info.VCU_CurPwrConsum )
#define set_VCU_RemainingRange ( fev_VCU_MHU_info.VCU_RemainingRange )
#define set_VCU_ChgGun_Status ( fev_VCU_MHU_info.VCU_ChgGun_Status )
#define set_VCU_BattChargingStatus ( fev_VCU_MHU_info.VCU_BattChargingStatus )
#define set_VCU_VehChg_STS ( fev_VCU_MHU_info.VCU_VehChg_STS )
#define set_VCU_ChgGunConnStatus ( fev_VCU_MHU_info.VCU_ChgGunConnStatus )
#define set_VCU_BattSOC ( fev_VCU_MHU_info.VCU_BattSOC )
#define set_CRC_VCU_HVsystem_status ( fev_VCU_HVsystem_status.CRC_VCU_HVsystem_status )
#define set_ALIV_VCU_HVsystem_status ( fev_VCU_HVsystem_status.ALIV_VCU_HVsystem_status )
#define set_VCU_RunningRange_chrg_estSts ( fev_VCU_HVsystem_status.VCU_RunningRange_chrg_estSts )
#define set_VCU_HVbatSoc_charged_estStatus ( fev_VCU_HVsystem_status.VCU_HVbatSoc_charged_estStatus )
#define set_VCU_RunningRange_charged ( fev_VCU_HVsystem_status.VCU_RunningRange_charged )
#define set_VCU_HVbatSoc_charged ( fev_VCU_HVsystem_status.VCU_HVbatSoc_charged )
#define set_CRC_VCU_HV_DrvSys_status ( fev_VCU_HV_DrvSys_status.CRC_VCU_HV_DrvSys_status )
#define set_ALV_VCU_HV_DrvSys_bstatus ( fev_VCU_HV_DrvSys_status.ALV_VCU_HV_DrvSys_bstatus )
#define set_VCU_HV_SystemStatus ( fev_VCU_HV_DrvSys_status.VCU_HV_SystemStatus )
#define set_VCU_HV_DrvSystemStatus ( fev_VCU_HV_DrvSys_status.VCU_HV_DrvSystemStatus )
#define set_VCU_ACT_Gear ( fev_VCU_HV_DrvSys_status.VCU_ACT_Gear )
#define set_VCU_ACT_GearValid ( fev_VCU_HV_DrvSys_status.VCU_ACT_GearValid )
#define set_VCU_ACPD_Percent ( fev_VCU_HV_DrvSys_status.VCU_ACPD_Percent )
#define set_VCU_ACPD_Percent_Valid ( fev_VCU_HV_DrvSys_status.VCU_ACPD_Percent_Valid )
#define set_VCU_ACT_DriveMode ( fev_VCU_HV_DrvSys_status.VCU_ACT_DriveMode )
#define set_VCU_ACT_DriveModeValid ( fev_VCU_HV_DrvSys_status.VCU_ACT_DriveModeValid )
#define set_CRC_VCU_ChargingConnection ( fev_VCU_ChargingConnection.CRC_VCU_ChargingConnection )
#define set_ALV_VCU_ChargingConnection ( fev_VCU_ChargingConnection.ALV_VCU_ChargingConnection )
#define set_VCU_DCChgGunIn ( fev_VCU_ChargingConnection.VCU_DCChgGunIn )
#define set_VCU_AcChgGunIn ( fev_VCU_ChargingConnection.VCU_AcChgGunIn )
#define set_VCU_CPValue ( fev_VCU_ChargingConnection.VCU_CPValue )
#define set_VCU_ACChargingVoltage ( fev_VCU_ChargingConnection.VCU_ACChargingVoltage )
#define set_VCU_MaxCurrentOfACCharging ( fev_VCU_ChargingConnection.VCU_MaxCurrentOfACCharging )
#define set_CHSKM_VCU_Batt_WarnMsg ( fev_VCU_Batt_WarnMsg.CHSKM_VCU_Batt_WarnMsg )
#define set_ALV_VCU_Batt_WarnMsg ( fev_VCU_Batt_WarnMsg.ALV_VCU_Batt_WarnMsg )
#define set_BMS_PackTempSts ( fev_VCU_Batt_WarnMsg.BMS_PackTempSts )
#define set_BMS_ThermalRunaway ( fev_VCU_Batt_WarnMsg.BMS_ThermalRunaway )
#define set_BMS_CellTempErr ( fev_VCU_Batt_WarnMsg.BMS_CellTempErr )
#define set_BMS_HVILErr ( fev_VCU_Batt_WarnMsg.BMS_HVILErr )
#define set_BMS_PackInsuErr ( fev_VCU_Batt_WarnMsg.BMS_PackInsuErr )
#define set_BMS_MalfunctionSts ( fev_VCU_Batt_WarnMsg.BMS_MalfunctionSts )
#define set_BMS_LowBattery ( fev_VCU_Batt_WarnMsg.BMS_LowBattery )
#define set_BMS_FuseStatusErr ( fev_VCU_Batt_WarnMsg.BMS_FuseStatusErr )
#define set_BMS_CellVoltErr ( fev_VCU_Batt_WarnMsg.BMS_CellVoltErr )
#define set_BMS_PackVolErr ( fev_VCU_Batt_WarnMsg.BMS_PackVolErr )
#define set_BMS_PackOverCurrErr ( fev_VCU_Batt_WarnMsg.BMS_PackOverCurrErr )
#define set_BMS_Reserved_signal1 ( fev_VCU_Batt_WarnMsg.BMS_Reserved_signal1 )
#define set_BMS_Reserved_signal2 ( fev_VCU_Batt_WarnMsg.BMS_Reserved_signal2 )
#define set_BMS_Reserved_signal3 ( fev_VCU_Batt_WarnMsg.BMS_Reserved_signal3 )
#define set_BMS_Reserved_signal4 ( fev_VCU_Batt_WarnMsg.BMS_Reserved_signal4 )
#define set_BMS_Reserved_signal5 ( fev_VCU_Batt_WarnMsg.BMS_Reserved_signal5 )
#define set_CRC_VCU_Batt_Info ( fev_VCU_Batt_Info.CRC_VCU_Batt_Info )
#define set_ALV_VCU_Batt_Info ( fev_VCU_Batt_Info.ALV_VCU_Batt_Info )
#define set_BMS_PackCur ( fev_VCU_Batt_Info.BMS_PackCur )
#define set_BMS_PackVoltage ( fev_VCU_Batt_Info.BMS_PackVoltage )
#define set_BMS_PackTemp ( fev_VCU_Batt_Info.BMS_PackTemp )
#define set_BMS_RemainChargeTime ( fev_VCU_Batt_Info.BMS_RemainChargeTime )
#define set_BMS_ChargingVoltage ( fev_VCU_Batt_Info.BMS_ChargingVoltage )
#define set_BMS_ChargingCurrent ( fev_VCU_Batt_Info.BMS_ChargingCurrent )
#define set_StatusServiceDisconnectionPlug ( fev_HighVoltageStorage200msNo1.StatusServiceDisconnectionPlug )
#define set_StsDisconnectingSwtHighVoltStorg ( fev_HighVoltageStorage200msNo1.StsDisconnectingSwtHighVoltStorg )
#define set_CRC_HighVoltageStorage10msNo2 ( fev_HighVoltageStorage10msNo2.CRC_HighVoltageStorage10msNo2 )
#define set_ALIV_HighVoltageStorage10msNo2 ( fev_HighVoltageStorage10msNo2.ALIV_HighVoltageStorage10msNo2 )
#define set_ActualValueVoltageLinkVerified ( fev_HighVoltageStorage10msNo2.ActualValueVoltageLinkVerified )
#define set_CRC_DT_DISP_GRDT ( fev_DT_DISP_GRDT.CRC_DT_DISP_GRDT )
#define set_ALIV_DT_DISP_GRDT ( fev_DT_DISP_GRDT.ALIV_DT_DISP_GRDT )
#define set_DISP_PRG_GRB ( fev_DT_DISP_GRDT.DISP_PRG_GRB )
#define set_DISP_PO_IDC_GRB ( fev_DT_DISP_GRDT.DISP_PO_IDC_GRB )
#define set_DISP_PO_GRB ( fev_DT_DISP_GRDT.DISP_PO_GRB )
#define set_PowerETractSys2LimMotMax ( fev_CombinedChargerUnit10msNo2.PowerETractSys2LimMotMax )
#define set_PowerETractSys1LimGenMax ( fev_CombinedChargerUnit10msNo2.PowerETractSys1LimGenMax )
#define set_PowerETractSys2LimGenMax ( fev_CombinedChargerUnit10msNo2.PowerETractSys2LimGenMax )
#define set_PowerETractSys1LimMotMax ( fev_CombinedChargerUnit10msNo2.PowerETractSys1LimMotMax )
#define set_OperatingModeEANActualValue ( fev_CombinedChargerUnit10msNo2.OperatingModeEANActualValue )
#define set_RequestExtraBoostETractSys1 ( fev_CombinedChargerUnit10msNo2.RequestExtraBoostETractSys1 )
#define set_RequestExtraBoostETractSys2 ( fev_CombinedChargerUnit10msNo2.RequestExtraBoostETractSys2 )
#define set_OpModETractSys1ActVal ( fev_TracEMacElectc1Time100msNo1.OpModETractSys1ActVal )
#define set_OpModETractSys2ActVal ( fev_TracEMacElectc2Time100msNo1.OpModETractSys2ActVal )

typedef struct {
	uint8 CRC_VCU_WarnMsg : 8 ;
	uint8 ALV_VCU_WarnMsg : 4 ;
	uint8 VCU_GearPAtStationaryOnly : 1 ;
	uint8 VCU_GearPNotPossible : 1 ;
	uint8 VCU_PressBreakToEngageGear : 1 ;
	uint8 VCU_CantChangeGear : 1 ;
	uint8 VCU_MotorCoolantPumpErr : 3 ;
	uint8 VCU_EmergencyShutdown : 1 ;
	uint8 VCU_HeatLoopTempSensorErr : 3 ;
	uint8 VCU_GearMalfunc : 1 ;
	uint8 VCU_CoolingTempExceedLimit : 1 ;
	uint8 VCU_TransmissionMalfunction : 1 ;
	uint8 VCU_ParkLockNotEngaged : 1 ;
	uint8 VCU_CoolantTempHigh : 1 ;
	uint8 VCU_CheckDriveTrain : 1 ;
	uint8 VCU_OBCTempHigh : 1 ;
	uint8 VCU_DCDC_TempHigh : 1 ;
	uint8 VCU_ChargingInletTempHigh : 1 ;
	uint8 VCU_HVILErr : 1 ;
	uint8 VCU_Limphome : 1 ;
	uint8 VCU_HVSystemReduced : 1 ;
} fev_VCU_WarnMsg ;


typedef struct {
	uint8 CRC_VCU_StatusDCDC : 8 ;
	uint8 ALV_VCU_StatusDCDC : 4 ;
	uint8 DCDC_status : 3 ;
	uint8 NoUsedBits : 1 ;
	uint16 DCDC_maxCurrentOut : 16 ;
	uint16 DCDC_iOutput : 16 ;
	uint16 DCDC_vDCInput : 16 ;
	uint16 DCDC_vOutput : 16 ;
} fev_VCU_StatusDCDC ;


typedef struct {
	uint8 CRC_VCU_MHU_info : 8 ;
	uint8 ALV_VCU_MHU_info : 4 ;
	uint8 VCU_CurPwrConsum : 4 ;
	uint16 VCU_RemainingRange : 12 ;
	uint8 VCU_ChgGun_Status : 3 ;
	uint8 VCU_BattChargingStatus : 1 ;
	uint8 VCU_VehChg_STS : 3 ;
	uint8 VCU_ChgGunConnStatus : 1 ;
	uint8 NoUsedBits : 4 ;
	uint16 VCU_BattSOC : 10 ;
} fev_VCU_MHU_info ;


typedef struct {
	uint8 CRC_VCU_HVsystem_status : 8 ;
	uint8 ALIV_VCU_HVsystem_status : 4 ;
	uint8 VCU_RunningRange_chrg_estSts : 2 ;
	uint8 VCU_HVbatSoc_charged_estStatus : 2 ;
	uint16 VCU_RunningRange_charged : 12 ;
	uint8 NoUsedBits : 4 ;
	uint16 VCU_HVbatSoc_charged : 10 ;
} fev_VCU_HVsystem_status ;


typedef struct {
	uint8 CRC_VCU_HV_DrvSys_status : 8 ;
	uint8 ALV_VCU_HV_DrvSys_bstatus : 4 ;
	uint8 VCU_HV_SystemStatus : 3 ;
	uint8 NoUsedBits : 1 ;
	uint8 VCU_HV_DrvSystemStatus : 3 ;
	uint8 NoUsedBits : 1 ;
	uint8 VCU_ACT_Gear : 3 ;
	uint8 VCU_ACT_GearValid : 1 ;
	uint16 VCU_ACPD_Percent : 12 ;
	uint8 VCU_ACPD_Percent_Valid : 1 ;
	uint8 NoUsedBits : 3 ;
	uint8 VCU_ACT_DriveMode : 3 ;
	uint8 VCU_ACT_DriveModeValid : 1 ;
} fev_VCU_HV_DrvSys_status ;


typedef struct {
	uint8 CRC_VCU_ChargingConnection : 8 ;
	uint8 ALV_VCU_ChargingConnection : 4 ;
	uint8 VCU_DCChgGunIn : 1 ;
	uint8 VCU_AcChgGunIn : 1 ;
	uint8 NoUsedBits : 2 ;
	uint8 VCU_CPValue : 7 ;
	uint8 NoUsedBits : 1 ;
	uint8 VCU_ACChargingVoltage : 8 ;
	uint8 VCU_MaxCurrentOfACCharging : 6 ;
} fev_VCU_ChargingConnection ;


typedef struct {
	uint8 CHSKM_VCU_Batt_WarnMsg : 8 ;
	uint8 ALV_VCU_Batt_WarnMsg : 4 ;
	uint8 BMS_PackTempSts : 2 ;
	uint8 BMS_ThermalRunaway : 1 ;
	uint8 NoUsedBits : 1 ;
	uint8 BMS_CellTempErr : 2 ;
	uint8 BMS_HVILErr : 1 ;
	uint8 BMS_PackInsuErr : 1 ;
	uint8 BMS_MalfunctionSts : 1 ;
	uint8 BMS_LowBattery : 2 ;
	uint8 BMS_FuseStatusErr : 1 ;
	uint8 BMS_CellVoltErr : 2 ;
	uint8 BMS_PackVolErr : 2 ;
	uint8 BMS_PackOverCurrErr : 1 ;
	uint8 BMS_Reserved_signal1 : 3 ;
	uint8 BMS_Reserved_signal2 : 8 ;
	uint8 BMS_Reserved_signal3 : 8 ;
	uint8 BMS_Reserved_signal4 : 8 ;
	uint8 BMS_Reserved_signal5 : 8 ;
} fev_VCU_Batt_WarnMsg ;


typedef struct {
	uint8 CRC_VCU_Batt_Info : 8 ;
	uint8 ALV_VCU_Batt_Info : 4 ;
	uint8 NoUsedBits : 4 ;
	uint16 BMS_PackCur : 16 ;
	uint16 BMS_PackVoltage : 16 ;
	uint8 BMS_PackTemp : 8 ;
	uint16 BMS_RemainChargeTime : 12 ;
	uint8 NoUsedBits : 4 ;
	uint16 BMS_ChargingVoltage : 16 ;
	uint16 BMS_ChargingCurrent : 16 ;
} fev_VCU_Batt_Info ;


typedef struct {
	uint8 ST_TRAI : 2 ;
} fev_STAT_ANHAENGER ;


typedef struct {
	uint8 CRC_ST_GWS : 8 ;
	uint8 ALIV_ST_GWS : 4 ;
	uint8 OP_GWS : 4 ;
	uint8 NoUsedBits : 8 ;
	uint8 OP_GWS_PUBU_PKG : 2 ;
} fev_ST_GWS ;


typedef struct {
	uint8 CRC_SFA_SteerWheel_Info : 8 ;
	uint8 ALIV_SFA_SteerWheel_Info : 4 ;
	uint8 NoUsedBits : 4 ;
	uint16 SFA_SteerWheelTorque : 12 ;
	uint8 NoUsedBits : 4 ;
	uint8 SFA_SteerWheelAngleSpeed : 8 ;
	uint16 SFA_SteerWheelAngle : 16 ;
	uint8 SFA_WarningLamp : 3 ;
	uint8 SFA_EmergencyRequest : 2 ;
	uint8 SFA_CenteringStatus : 3 ;
} fev_SFA_SteerWheel_Info ;


typedef struct {
	uint32 T_SEC_COU_REL : 32 ;
} fev_RELATIVZEIT ;


typedef struct {
	uint8 NM3ControlBitVector : 8 ;
	uint8 NM3SenderECUId : 8 ;
	uint16 NM3BasePartialNetworks : 16 ;
	uint32 NM3FunctionalPartialNetworks : 32 ;
} fev_Networkmanagement3_Status ;


typedef struct {
	uint32 MILE_KM : 24 ;
} fev_KILOMETERSTAND ;


typedef struct {
	uint8 StatusServiceDisconnectionPlug : 2 ;
	uint8 StsDisconnectingSwtHighVoltStorg : 6 ;
} fev_HighVoltageStorage200msNo1 ;


typedef struct {
	uint16 CRC_HighVoltageStorage10msNo2 : 16 ;
	uint8 ALIV_HighVoltageStorage10msNo2 : 8 ;
	uint16 NoUsedBits : 16 ;
	uint16 ActualValueVoltageLinkVerified : 12 ;
} fev_HighVoltageStorage10msNo2 ;


typedef struct {
	uint8 ST_ENERG_FZM : 4 ;
	uint64 NoUsedBits : 36 ;
	uint8 ST_ILK_ERRM_FZM : 2 ;
} fev_FZZSTD ;


typedef struct {
	uint8 FZU_ChargingStopReq : 2 ;
} fev_FZU_ChargingControl ;


typedef struct {
	uint8 NO_VECH_1 : 8 ;
	uint8 NO_VECH_2 : 8 ;
	uint8 NO_VECH_3 : 8 ;
	uint8 NO_VECH_4 : 8 ;
	uint8 NO_VECH_5 : 8 ;
	uint8 NO_VECH_6 : 8 ;
	uint8 NO_VECH_7 : 8 ;
} fev_FAHRGESTELLNUMMER ;


typedef struct {
	uint8 CTR_ERRM_BN_U : 6 ;
} fev_ERRM_BN_U ;


typedef struct {
	uint8 CRC_DT_DISP_GRDT : 8 ;
	uint8 ALIV_DT_DISP_GRDT : 4 ;
	uint8 NoUsedBits : 4 ;
	uint8 DISP_PRG_GRB : 3 ;
	uint8 DISP_PO_IDC_GRB : 2 ;
	uint8 DISP_PO_GRB : 3 ;
} fev_DT_DISP_GRDT ;


typedef struct {
	uint8 CRC_CON_VEH : 8 ;
	uint8 ALIV_CON_VEH : 4 ;
	uint8 CTR_BS_PRTNT : 4 ;
	uint32 CTR_FKTN_PRTNT : 32 ;
	uint8 ST_CON_VEH : 4 ;
	uint8 QU_ST_CON_VEH : 4 ;
} fev_CON_VEH ;


typedef struct {
	uint16 PowerETractSys2LimMotMax : 16 ;
	uint16 PowerETractSys1LimGenMax : 16 ;
	uint16 PowerETractSys2LimGenMax : 16 ;
	uint16 PowerETractSys1LimMotMax : 16 ;
	uint8 OperatingModeEANActualValue : 8 ;
	uint8 RequestExtraBoostETractSys1 : 2 ;
	uint8 NoUsedBits : 6 ;
	uint8 RequestExtraBoostETractSys2 : 2 ;
} fev_CombinedChargerUnit10msNo2 ;


typedef struct {
	uint8 TEMP_EX : 8 ;
} fev_A_TEMP ;


typedef struct {
	uint8 ABS_ACTIVE : 2 ;
} fev_ABS_ESC_01 ;


typedef struct {
	uint16 WEstTot_Nm : 16 ;
} fev_IEB_01 ;


typedef struct {
	uint8 AD3_PrsrVal_Fl : 8 ;
	uint8 AD3_PrsrVal_Fr : 8 ;
	uint8 AD3_PrsrVal_Rl : 8 ;
	uint8 AD3_PrsrVal_Rr : 8 ;
} fev_ESC_A ;


typedef struct {
	uint32 MILE_KM_TOT : 32 ;
} fev_Kilometerstand_2 ;


typedef struct {
	uint8 CRC_EBCM_STATUS : 8 ;
	uint8 ALIV_EBCM_STATUS : 4 ;
	uint16 MCPressure : 12 ;
	uint16 BreakPedalPercent : 12 ;
	uint8 EPBStatus : 4 ;
	uint8 HillholderStatus : 4 ;
	uint8 TCSAvailable : 1 ;
	uint8 TCSActive : 1 ;
	uint8 BreakPedalPercentValid : 1 ;
	uint8 MCPressureSts : 1 ;
	uint8 HillholderFault : 1 ;
	uint8 EPBFault : 1 ;
	uint8 EBCM_BrkPedlSts : 2 ;
} fev_EBCM_STATUS ;


typedef struct {
	uint8 ST_SLIP_THO : 4 ;
} fev_ST_STAB_DSC_2 ;


typedef struct {
	uint8 CRC_ST_STAB_DSC : 8 ;
	uint8 ALIV_ST_STAB_DSC : 4 ;
	uint8 NoUsedBits : 4 ;
	uint16 QU_FN_FDR : 12 ;
	uint16 QU_FN_ABS : 12 ;
	uint16 QU_FN_ASC : 12 ;
	uint8 NoUsedBits : 4 ;
	uint8 ST_BRG_DV : 6 ;
} fev_ST_STAB_DSC ;


typedef struct {
	uint8 OpModETractSys1ActVal : 8 ;
} fev_TracEMacElectc1Time100msNo1 ;


typedef struct {
	uint8 OpModETractSys2ActVal : 8 ;
} fev_TracEMacElectc2Time100msNo1 ;


typedef struct {
	uint8 CRC_EXTS_ARB_INTF : 8 ;
	uint8 ALIV_EXTS_ARB_INTF : 4 ;
	uint8 CHL_EXTS_ARB_INTF : 4 ;
	uint16 AVL_BRTORQ_WHL_RS_LH_EXT : 16 ;
	uint16 AVL_BRTORQ_WHL_RS_RH_EXT : 16 ;
	uint16 AVL_BRTORQ_WHL_FS_LH_EXT : 16 ;
	uint16 AVL_BRTORQ_WHL_FS_RH_EXT : 16 ;
	uint64 NoUsedBits : 48 ;
	uint8 CRC_RQ_RPM_BAX : 8 ;
	uint8 ALIV_RQ_RPM_BAX : 4 ;
	uint8 CHL_RQ_RPM_BAX : 4 ;
	uint16 TAR_RPM_MAX_BAX : 16 ;
	uint16 TAR_RPM_MIN_BAX : 16 ;
	uint8 ST_TAR_RPM_BAX : 4 ;
	uint8 TAR_STIF_SPCO : 4 ;
	uint8 NoUsedBits : 8 ;
	uint8 CRC_RQ_RPM_FTAX : 8 ;
	uint8 ALIV_RQ_RPM_FTAX : 4 ;
	uint8 CHL_RQ_RPM_FTAX : 4 ;
	uint16 TAR_RPM_MAX_FTAX : 16 ;
	uint16 TAR_RPM_MIN_FTAX : 16 ;
	uint8 ST_TAR_RPM_FTAX : 4 ;
	uint8 StatusSlipThresholdsRearAxle : 4 ;
	uint64 NoUsedBits : 80 ;
	uint8 CRC_StatusSlipThresholds : 8 ;
	uint8 ALIV_StatusSlipThresholds : 4 ;
	uint8 CHL_StatusSlipThresholds : 4 ;
	uint8 StatusSlipThresholdsFrontAxle : 4 ;
} fev_BundleEAFlexrayToAECANFD10msNo1 ;


typedef struct {
	uint8 CRC_AVL_RPM_WHL : 8 ;
	uint8 ALIV_AVL_RPM_WHL : 4 ;
	uint8 NoUsedBits : 4 ;
	uint16 AVL_RPM_WHL_RLH : 16 ;
	uint16 AVL_RPM_WHL_RRH : 16 ;
	uint16 AVL_RPM_WHL_FLH : 16 ;
	uint16 AVL_RPM_WHL_FRH : 16 ;
	uint8 QU_AVL_RPM_WHL_RLH : 4 ;
	uint8 QU_AVL_RPM_WHL_RRH : 4 ;
	uint8 QU_AVL_RPM_WHL_FLH : 4 ;
	uint8 QU_AVL_RPM_WHL_FRH : 4 ;
} fev_AVL_RPM_WHL ;


typedef struct {
	uint8 CRC_V_VEH : 8 ;
	uint8 ALIV_V_VEH : 4 ;
	uint8 NoUsedBits : 3 ;
	uint16 V_VEH_COG : 16 ;
	uint8 NoUsedBits : 1 ;
	uint8 QU_V_VEH_COG : 4 ;
	uint8 NoUsedBits : 4 ;
	uint64 SecOcDataP2V_VEH : 64 ;
} fev_BundleEAFlexrayToCANFD20msNo1 ;


typedef struct {
	uint8 CRC_CLAMP_STAT : 8 ;
	uint8 ALIV_CLAMP_STAT : 4 ;
	uint8 STAT_CL15_L : 2 ;
	uint8 STAT_CL30S_L : 2 ;
	uint8 STAT_CL30S_Light : 2 ;
	uint8 STAT_CL15_WUPL : 2 ;
} fev_CLAMP_STAT ;



#endif  // FEV_VCU_DATA_H