#ifndef FEV_VCU_DATA_H 
#define FEV_VCU_DATA_H 
#include <stdint.h>  // Include for UINT32 type

#define get_CRC_VCU_WarnMsg float32( deneme_VCU_WarnMsg.CRC_VCU_WarnMsg*1+0 )
#define get_ALV_VCU_WarnMsg float32( deneme_VCU_WarnMsg.ALV_VCU_WarnMsg*1+0 )
#define get_VCU_GearPAtStationaryOnly float32( deneme_VCU_WarnMsg.VCU_GearPAtStationaryOnly*1+0 )
#define get_VCU_GearPNotPossible float32( deneme_VCU_WarnMsg.VCU_GearPNotPossible*1+0 )
#define get_VCU_PressBreakToEngageGear float32( deneme_VCU_WarnMsg.VCU_PressBreakToEngageGear*1+0 )
#define get_VCU_CantChangeGear float32( deneme_VCU_WarnMsg.VCU_CantChangeGear*1+0 )
#define get_VCU_MotorCoolantPumpErr float32( deneme_VCU_WarnMsg.VCU_MotorCoolantPumpErr*1+0 )
#define get_VCU_EmergencyShutdown float32( deneme_VCU_WarnMsg.VCU_EmergencyShutdown*1+0 )
#define get_VCU_HeatLoopTempSensorErr float32( deneme_VCU_WarnMsg.VCU_HeatLoopTempSensorErr*1+0 )
#define get_VCU_GearMalfunc float32( deneme_VCU_WarnMsg.VCU_GearMalfunc*1+0 )
#define get_VCU_CoolingTempExceedLimit float32( deneme_VCU_WarnMsg.VCU_CoolingTempExceedLimit*1+0 )
#define get_VCU_TransmissionMalfunction float32( deneme_VCU_WarnMsg.VCU_TransmissionMalfunction*1+0 )
#define get_VCU_ParkLockNotEngaged float32( deneme_VCU_WarnMsg.VCU_ParkLockNotEngaged*1+0 )
#define get_VCU_CoolantTempHigh float32( deneme_VCU_WarnMsg.VCU_CoolantTempHigh*1+0 )
#define get_VCU_CheckDriveTrain float32( deneme_VCU_WarnMsg.VCU_CheckDriveTrain*1+0 )
#define get_VCU_OBCTempHigh float32( deneme_VCU_WarnMsg.VCU_OBCTempHigh*1+0 )
#define get_VCU_DCDC_TempHigh float32( deneme_VCU_WarnMsg.VCU_DCDC_TempHigh*1+0 )
#define get_VCU_ChargingInletTempHigh float32( deneme_VCU_WarnMsg.VCU_ChargingInletTempHigh*1+0 )
#define get_VCU_HVILErr float32( deneme_VCU_WarnMsg.VCU_HVILErr*1+0 )
#define get_VCU_Limphome float32( deneme_VCU_WarnMsg.VCU_Limphome*1+0 )
#define get_VCU_HVSystemReduced float32( deneme_VCU_WarnMsg.VCU_HVSystemReduced*1+0 )
#define get_CRC_VCU_StatusDCDC float32( deneme_VCU_StatusDCDC.CRC_VCU_StatusDCDC*1+0 )
#define get_ALV_VCU_StatusDCDC float32( deneme_VCU_StatusDCDC.ALV_VCU_StatusDCDC*1+0 )
#define get_DCDC_status float32( deneme_VCU_StatusDCDC.DCDC_status*1+0 )
#define get_DCDC_maxCurrentOut float32( deneme_VCU_StatusDCDC.DCDC_maxCurrentOut*0.1+0 )
#define get_DCDC_iOutput float32( deneme_VCU_StatusDCDC.DCDC_iOutput*0.1+0 )
#define get_DCDC_vDCInput float32( deneme_VCU_StatusDCDC.DCDC_vDCInput*0.0625+0 )
#define get_DCDC_vOutput float32( deneme_VCU_StatusDCDC.DCDC_vOutput*0.0625+0 )
#define get_CRC_VCU_MHU_info float32( deneme_VCU_MHU_info.CRC_VCU_MHU_info*1+0 )
#define get_ALV_VCU_MHU_info float32( deneme_VCU_MHU_info.ALV_VCU_MHU_info*1+0 )
#define get_VCU_CurPwrConsum float32( deneme_VCU_MHU_info.VCU_CurPwrConsum*1+0 )
#define get_VCU_RemainingRange float32( deneme_VCU_MHU_info.VCU_RemainingRange*0.5+0 )
#define get_VCU_ChgGun_Status float32( deneme_VCU_MHU_info.VCU_ChgGun_Status*1+0 )
#define get_VCU_BattChargingStatus float32( deneme_VCU_MHU_info.VCU_BattChargingStatus*1+0 )
#define get_VCU_VehChg_STS float32( deneme_VCU_MHU_info.VCU_VehChg_STS*1+0 )
#define get_VCU_ChgGunConnStatus float32( deneme_VCU_MHU_info.VCU_ChgGunConnStatus*1+0 )
#define get_VCU_BattSOC float32( deneme_VCU_MHU_info.VCU_BattSOC*0.1+0 )
#define get_CRC_VCU_HVsystem_status float32( deneme_VCU_HVsystem_status.CRC_VCU_HVsystem_status*1+0 )
#define get_ALIV_VCU_HVsystem_status float32( deneme_VCU_HVsystem_status.ALIV_VCU_HVsystem_status*1+0 )
#define get_VCU_RunningRange_chrg_estSts float32( deneme_VCU_HVsystem_status.VCU_RunningRange_chrg_estSts*1+0 )
#define get_VCU_HVbatSoc_charged_estStatus float32( deneme_VCU_HVsystem_status.VCU_HVbatSoc_charged_estStatus*1+0 )
#define get_VCU_RunningRange_charged float32( deneme_VCU_HVsystem_status.VCU_RunningRange_charged*0.5+0 )
#define get_VCU_HVbatSoc_charged float32( deneme_VCU_HVsystem_status.VCU_HVbatSoc_charged*0.1+0 )
#define get_CRC_VCU_HV_DrvSys_status float32( deneme_VCU_HV_DrvSys_status.CRC_VCU_HV_DrvSys_status*1+0 )
#define get_ALV_VCU_HV_DrvSys_bstatus float32( deneme_VCU_HV_DrvSys_status.ALV_VCU_HV_DrvSys_bstatus*1+0 )
#define get_VCU_HV_SystemStatus float32( deneme_VCU_HV_DrvSys_status.VCU_HV_SystemStatus*1+0 )
#define get_VCU_HV_DrvSystemStatus float32( deneme_VCU_HV_DrvSys_status.VCU_HV_DrvSystemStatus*1+0 )
#define get_VCU_ACT_Gear float32( deneme_VCU_HV_DrvSys_status.VCU_ACT_Gear*1+0 )
#define get_VCU_ACT_GearValid float32( deneme_VCU_HV_DrvSys_status.VCU_ACT_GearValid*1+0 )
#define get_VCU_ACPD_Percent float32( deneme_VCU_HV_DrvSys_status.VCU_ACPD_Percent*0.0625+0 )
#define get_VCU_ACPD_Percent_Valid float32( deneme_VCU_HV_DrvSys_status.VCU_ACPD_Percent_Valid*1+0 )
#define get_VCU_ACT_DriveMode float32( deneme_VCU_HV_DrvSys_status.VCU_ACT_DriveMode*1+0 )
#define get_VCU_ACT_DriveModeValid float32( deneme_VCU_HV_DrvSys_status.VCU_ACT_DriveModeValid*1+0 )
#define get_CRC_VCU_ChargingConnection float32( deneme_VCU_ChargingConnection.CRC_VCU_ChargingConnection*1+0 )
#define get_ALV_VCU_ChargingConnection float32( deneme_VCU_ChargingConnection.ALV_VCU_ChargingConnection*1+0 )
#define get_VCU_DCChgGunIn float32( deneme_VCU_ChargingConnection.VCU_DCChgGunIn*1+0 )
#define get_VCU_AcChgGunIn float32( deneme_VCU_ChargingConnection.VCU_AcChgGunIn*1+0 )
#define get_VCU_CPValue float32( deneme_VCU_ChargingConnection.VCU_CPValue*1+0 )
#define get_VCU_ACChargingVoltage float32( deneme_VCU_ChargingConnection.VCU_ACChargingVoltage*1+0 )
#define get_VCU_MaxCurrentOfACCharging float32( deneme_VCU_ChargingConnection.VCU_MaxCurrentOfACCharging*1+0 )
#define get_CHSKM_VCU_Batt_WarnMsg float32( deneme_VCU_Batt_WarnMsg.CHSKM_VCU_Batt_WarnMsg*1+0 )
#define get_ALV_VCU_Batt_WarnMsg float32( deneme_VCU_Batt_WarnMsg.ALV_VCU_Batt_WarnMsg*1+0 )
#define get_BMS_PackTempSts float32( deneme_VCU_Batt_WarnMsg.BMS_PackTempSts*1+0 )
#define get_BMS_ThermalRunaway float32( deneme_VCU_Batt_WarnMsg.BMS_ThermalRunaway*1+0 )
#define get_BMS_CellTempErr float32( deneme_VCU_Batt_WarnMsg.BMS_CellTempErr*1+0 )
#define get_BMS_HVILErr float32( deneme_VCU_Batt_WarnMsg.BMS_HVILErr*1+0 )
#define get_BMS_PackInsuErr float32( deneme_VCU_Batt_WarnMsg.BMS_PackInsuErr*1+0 )
#define get_BMS_MalfunctionSts float32( deneme_VCU_Batt_WarnMsg.BMS_MalfunctionSts*1+0 )
#define get_BMS_LowBattery float32( deneme_VCU_Batt_WarnMsg.BMS_LowBattery*1+0 )
#define get_BMS_FuseStatusErr float32( deneme_VCU_Batt_WarnMsg.BMS_FuseStatusErr*1+0 )
#define get_BMS_CellVoltErr float32( deneme_VCU_Batt_WarnMsg.BMS_CellVoltErr*1+0 )
#define get_BMS_PackVolErr float32( deneme_VCU_Batt_WarnMsg.BMS_PackVolErr*1+0 )
#define get_BMS_PackOverCurrErr float32( deneme_VCU_Batt_WarnMsg.BMS_PackOverCurrErr*1+0 )
#define get_BMS_Reserved_signal1 float32( deneme_VCU_Batt_WarnMsg.BMS_Reserved_signal1*1+0 )
#define get_BMS_Reserved_signal2 float32( deneme_VCU_Batt_WarnMsg.BMS_Reserved_signal2*1+0 )
#define get_BMS_Reserved_signal3 float32( deneme_VCU_Batt_WarnMsg.BMS_Reserved_signal3*1+0 )
#define get_BMS_Reserved_signal4 float32( deneme_VCU_Batt_WarnMsg.BMS_Reserved_signal4*1+0 )
#define get_BMS_Reserved_signal5 float32( deneme_VCU_Batt_WarnMsg.BMS_Reserved_signal5*1+0 )
#define get_CRC_VCU_Batt_Info float32( deneme_VCU_Batt_Info.CRC_VCU_Batt_Info*1+0 )
#define get_ALV_VCU_Batt_Info float32( deneme_VCU_Batt_Info.ALV_VCU_Batt_Info*1+0 )
#define get_BMS_PackCur float32( deneme_VCU_Batt_Info.BMS_PackCur*0.1+-1500 )
#define get_BMS_PackVoltage float32( deneme_VCU_Batt_Info.BMS_PackVoltage*0.1+0 )
#define get_BMS_PackTemp float32( deneme_VCU_Batt_Info.BMS_PackTemp*1+-40 )
#define get_BMS_RemainChargeTime float32( deneme_VCU_Batt_Info.BMS_RemainChargeTime*1+0 )
#define get_BMS_ChargingVoltage float32( deneme_VCU_Batt_Info.BMS_ChargingVoltage*0.1+0 )
#define get_BMS_ChargingCurrent float32( deneme_VCU_Batt_Info.BMS_ChargingCurrent*0.1+0 )
#define get_ST_TRAI float32( deneme_STAT_ANHAENGER.ST_TRAI*1+0 )
#define get_CRC_ST_GWS float32( deneme_ST_GWS.CRC_ST_GWS*1+0 )
#define get_ALIV_ST_GWS float32( deneme_ST_GWS.ALIV_ST_GWS*1+0 )
#define get_OP_GWS float32( deneme_ST_GWS.OP_GWS*1+0 )
#define get_OP_GWS_PUBU_PKG float32( deneme_ST_GWS.OP_GWS_PUBU_PKG*1+0 )
#define get_CRC_SFA_SteerWheel_Info float32( deneme_SFA_SteerWheel_Info.CRC_SFA_SteerWheel_Info*1+0 )
#define get_ALIV_SFA_SteerWheel_Info float32( deneme_SFA_SteerWheel_Info.ALIV_SFA_SteerWheel_Info*1+0 )
#define get_SFA_SteerWheelTorque float32( deneme_SFA_SteerWheel_Info.SFA_SteerWheelTorque*0.02+0 )
#define get_SFA_SteerWheelAngleSpeed float32( deneme_SFA_SteerWheel_Info.SFA_SteerWheelAngleSpeed*4+0 )
#define get_SFA_SteerWheelAngle float32( deneme_SFA_SteerWheel_Info.SFA_SteerWheelAngle*0.02+0 )
#define get_SFA_WarningLamp float32( deneme_SFA_SteerWheel_Info.SFA_WarningLamp*1+0 )
#define get_SFA_EmergencyRequest float32( deneme_SFA_SteerWheel_Info.SFA_EmergencyRequest*1+0 )
#define get_SFA_CenteringStatus float32( deneme_SFA_SteerWheel_Info.SFA_CenteringStatus*1+0 )
#define get_T_SEC_COU_REL float32( deneme_RELATIVZEIT.T_SEC_COU_REL*1+0 )
#define get_NM3ControlBitVector float32( deneme_Networkmanagement3_Status.NM3ControlBitVector*1+0 )
#define get_NM3SenderECUId float32( deneme_Networkmanagement3_Status.NM3SenderECUId*1+0 )
#define get_NM3BasePartialNetworks float32( deneme_Networkmanagement3_Status.NM3BasePartialNetworks*1+0 )
#define get_NM3FunctionalPartialNetworks float32( deneme_Networkmanagement3_Status.NM3FunctionalPartialNetworks*1+0 )
#define get_MILE_KM float32( deneme_KILOMETERSTAND.MILE_KM*1+0 )
#define get_StatusServiceDisconnectionPlug float32( deneme_HighVoltageStorage200msNo1.StatusServiceDisconnectionPlug*1+0 )
#define get_StsDisconnectingSwtHighVoltStorg float32( deneme_HighVoltageStorage200msNo1.StsDisconnectingSwtHighVoltStorg*1+0 )
#define get_CRC_HighVoltageStorage10msNo2 float32( deneme_HighVoltageStorage10msNo2.CRC_HighVoltageStorage10msNo2*1+0 )
#define get_ALIV_HighVoltageStorage10msNo2 float32( deneme_HighVoltageStorage10msNo2.ALIV_HighVoltageStorage10msNo2*1+0 )
#define get_ActualValueVoltageLinkVerified float32( deneme_HighVoltageStorage10msNo2.ActualValueVoltageLinkVerified*0.25+0 )
#define get_ST_ENERG_FZM float32( deneme_FZZSTD.ST_ENERG_FZM*1+0 )
#define get_ST_ILK_ERRM_FZM float32( deneme_FZZSTD.ST_ILK_ERRM_FZM*1+0 )
#define get_FZU_ChargingStopReq float32( deneme_FZU_ChargingControl.FZU_ChargingStopReq*1+0 )
#define get_NO_VECH_1 float32( deneme_FAHRGESTELLNUMMER.NO_VECH_1*1+0 )
#define get_NO_VECH_2 float32( deneme_FAHRGESTELLNUMMER.NO_VECH_2*1+0 )
#define get_NO_VECH_3 float32( deneme_FAHRGESTELLNUMMER.NO_VECH_3*1+0 )
#define get_NO_VECH_4 float32( deneme_FAHRGESTELLNUMMER.NO_VECH_4*1+0 )
#define get_NO_VECH_5 float32( deneme_FAHRGESTELLNUMMER.NO_VECH_5*1+0 )
#define get_NO_VECH_6 float32( deneme_FAHRGESTELLNUMMER.NO_VECH_6*1+0 )
#define get_NO_VECH_7 float32( deneme_FAHRGESTELLNUMMER.NO_VECH_7*1+0 )
#define get_CTR_ERRM_BN_U float32( deneme_ERRM_BN_U.CTR_ERRM_BN_U*1+0 )
#define get_CRC_DT_DISP_GRDT float32( deneme_DT_DISP_GRDT.CRC_DT_DISP_GRDT*1+0 )
#define get_ALIV_DT_DISP_GRDT float32( deneme_DT_DISP_GRDT.ALIV_DT_DISP_GRDT*1+0 )
#define get_DISP_PRG_GRB float32( deneme_DT_DISP_GRDT.DISP_PRG_GRB*1+0 )
#define get_DISP_PO_IDC_GRB float32( deneme_DT_DISP_GRDT.DISP_PO_IDC_GRB*1+0 )
#define get_DISP_PO_GRB float32( deneme_DT_DISP_GRDT.DISP_PO_GRB*1+0 )
#define get_CRC_CON_VEH float32( deneme_CON_VEH.CRC_CON_VEH*1+0 )
#define get_ALIV_CON_VEH float32( deneme_CON_VEH.ALIV_CON_VEH*1+0 )
#define get_CTR_BS_PRTNT float32( deneme_CON_VEH.CTR_BS_PRTNT*1+0 )
#define get_CTR_FKTN_PRTNT float32( deneme_CON_VEH.CTR_FKTN_PRTNT*1+0 )
#define get_ST_CON_VEH float32( deneme_CON_VEH.ST_CON_VEH*1+0 )
#define get_QU_ST_CON_VEH float32( deneme_CON_VEH.QU_ST_CON_VEH*1+0 )
#define get_PowerETractSys2LimMotMax float32( deneme_CombinedChargerUnit10msNo2.PowerETractSys2LimMotMax*50+-1638300 )
#define get_PowerETractSys1LimGenMax float32( deneme_CombinedChargerUnit10msNo2.PowerETractSys1LimGenMax*50+-1638300 )
#define get_PowerETractSys2LimGenMax float32( deneme_CombinedChargerUnit10msNo2.PowerETractSys2LimGenMax*50+-1638300 )
#define get_PowerETractSys1LimMotMax float32( deneme_CombinedChargerUnit10msNo2.PowerETractSys1LimMotMax*50+-1638300 )
#define get_OperatingModeEANActualValue float32( deneme_CombinedChargerUnit10msNo2.OperatingModeEANActualValue*1+0 )
#define get_RequestExtraBoostETractSys1 float32( deneme_CombinedChargerUnit10msNo2.RequestExtraBoostETractSys1*1+0 )
#define get_RequestExtraBoostETractSys2 float32( deneme_CombinedChargerUnit10msNo2.RequestExtraBoostETractSys2*1+0 )
#define get_TEMP_EX float32( deneme_A_TEMP.TEMP_EX*0.5+-40 )
#define get_ABS_ACTIVE float32( deneme_ABS_ESC_01.ABS_ACTIVE*1+0 )
#define get_WEstTot_Nm float32( deneme_IEB_01.WEstTot_Nm*1+0 )
#define get_AD3_PrsrVal_Fl float32( deneme_ESC_A.AD3_PrsrVal_Fl*1+0 )
#define get_AD3_PrsrVal_Fr float32( deneme_ESC_A.AD3_PrsrVal_Fr*1+0 )
#define get_AD3_PrsrVal_Rl float32( deneme_ESC_A.AD3_PrsrVal_Rl*1+0 )
#define get_AD3_PrsrVal_Rr float32( deneme_ESC_A.AD3_PrsrVal_Rr*1+0 )
#define get_MILE_KM_TOT float32( deneme_Kilometerstand_2.MILE_KM_TOT*0.001+0 )
#define get_CRC_EBCM_STATUS float32( deneme_EBCM_STATUS.CRC_EBCM_STATUS*1+0 )
#define get_ALIV_EBCM_STATUS float32( deneme_EBCM_STATUS.ALIV_EBCM_STATUS*1+0 )
#define get_MCPressure float32( deneme_EBCM_STATUS.MCPressure*1+-42.5 )
#define get_BreakPedalPercent float32( deneme_EBCM_STATUS.BreakPedalPercent*0.0625+0 )
#define get_EPBStatus float32( deneme_EBCM_STATUS.EPBStatus*1+0 )
#define get_HillholderStatus float32( deneme_EBCM_STATUS.HillholderStatus*1+0 )
#define get_TCSAvailable float32( deneme_EBCM_STATUS.TCSAvailable*1+0 )
#define get_TCSActive float32( deneme_EBCM_STATUS.TCSActive*1+0 )
#define get_BreakPedalPercentValid float32( deneme_EBCM_STATUS.BreakPedalPercentValid*1+0 )
#define get_MCPressureSts float32( deneme_EBCM_STATUS.MCPressureSts*1+0 )
#define get_HillholderFault float32( deneme_EBCM_STATUS.HillholderFault*1+0 )
#define get_EPBFault float32( deneme_EBCM_STATUS.EPBFault*1+0 )
#define get_EBCM_BrkPedlSts float32( deneme_EBCM_STATUS.EBCM_BrkPedlSts*1+0 )
#define get_ST_SLIP_THO float32( deneme_ST_STAB_DSC_2.ST_SLIP_THO*1+0 )
#define get_CRC_ST_STAB_DSC float32( deneme_ST_STAB_DSC.CRC_ST_STAB_DSC*1+0 )
#define get_ALIV_ST_STAB_DSC float32( deneme_ST_STAB_DSC.ALIV_ST_STAB_DSC*1+0 )
#define get_QU_FN_FDR float32( deneme_ST_STAB_DSC.QU_FN_FDR*1+0 )
#define get_QU_FN_ABS float32( deneme_ST_STAB_DSC.QU_FN_ABS*1+0 )
#define get_QU_FN_ASC float32( deneme_ST_STAB_DSC.QU_FN_ASC*1+0 )
#define get_ST_BRG_DV float32( deneme_ST_STAB_DSC.ST_BRG_DV*1+0 )
#define get_OpModETractSys1ActVal float32( deneme_TracEMacElectc1Time100msNo1.OpModETractSys1ActVal*1+0 )
#define get_OpModETractSys2ActVal float32( deneme_TracEMacElectc2Time100msNo1.OpModETractSys2ActVal*1+0 )
#define get_CRC_EXTS_ARB_INTF float32( deneme_BundleEAFlexrayToAECANFD10msNo1.CRC_EXTS_ARB_INTF*1+0 )
#define get_ALIV_EXTS_ARB_INTF float32( deneme_BundleEAFlexrayToAECANFD10msNo1.ALIV_EXTS_ARB_INTF*1+0 )
#define get_CHL_EXTS_ARB_INTF float32( deneme_BundleEAFlexrayToAECANFD10msNo1.CHL_EXTS_ARB_INTF*1+0 )
#define get_AVL_BRTORQ_WHL_RS_LH_EXT float32( deneme_BundleEAFlexrayToAECANFD10msNo1.AVL_BRTORQ_WHL_RS_LH_EXT*1+-32000 )
#define get_AVL_BRTORQ_WHL_RS_RH_EXT float32( deneme_BundleEAFlexrayToAECANFD10msNo1.AVL_BRTORQ_WHL_RS_RH_EXT*1+-32000 )
#define get_AVL_BRTORQ_WHL_FS_LH_EXT float32( deneme_BundleEAFlexrayToAECANFD10msNo1.AVL_BRTORQ_WHL_FS_LH_EXT*1+-32000 )
#define get_AVL_BRTORQ_WHL_FS_RH_EXT float32( deneme_BundleEAFlexrayToAECANFD10msNo1.AVL_BRTORQ_WHL_FS_RH_EXT*1+-32000 )
#define get_CRC_RQ_RPM_BAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.CRC_RQ_RPM_BAX*1+0 )
#define get_ALIV_RQ_RPM_BAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.ALIV_RQ_RPM_BAX*1+0 )
#define get_CHL_RQ_RPM_BAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.CHL_RQ_RPM_BAX*1+0 )
#define get_TAR_RPM_MAX_BAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.TAR_RPM_MAX_BAX*0.01+0 )
#define get_TAR_RPM_MIN_BAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.TAR_RPM_MIN_BAX*0.01+0 )
#define get_ST_TAR_RPM_BAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.ST_TAR_RPM_BAX*1+0 )
#define get_TAR_STIF_SPCO float32( deneme_BundleEAFlexrayToAECANFD10msNo1.TAR_STIF_SPCO*1+0 )
#define get_CRC_RQ_RPM_FTAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.CRC_RQ_RPM_FTAX*1+0 )
#define get_ALIV_RQ_RPM_FTAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.ALIV_RQ_RPM_FTAX*1+0 )
#define get_CHL_RQ_RPM_FTAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.CHL_RQ_RPM_FTAX*1+0 )
#define get_TAR_RPM_MAX_FTAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.TAR_RPM_MAX_FTAX*0.01+0 )
#define get_TAR_RPM_MIN_FTAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.TAR_RPM_MIN_FTAX*0.01+0 )
#define get_ST_TAR_RPM_FTAX float32( deneme_BundleEAFlexrayToAECANFD10msNo1.ST_TAR_RPM_FTAX*1+0 )
#define get_StatusSlipThresholdsRearAxle float32( deneme_BundleEAFlexrayToAECANFD10msNo1.StatusSlipThresholdsRearAxle*1+0 )
#define get_CRC_StatusSlipThresholds float32( deneme_BundleEAFlexrayToAECANFD10msNo1.CRC_StatusSlipThresholds*1+0 )
#define get_ALIV_StatusSlipThresholds float32( deneme_BundleEAFlexrayToAECANFD10msNo1.ALIV_StatusSlipThresholds*1+0 )
#define get_CHL_StatusSlipThresholds float32( deneme_BundleEAFlexrayToAECANFD10msNo1.CHL_StatusSlipThresholds*1+0 )
#define get_StatusSlipThresholdsFrontAxle float32( deneme_BundleEAFlexrayToAECANFD10msNo1.StatusSlipThresholdsFrontAxle*1+0 )
#define get_CRC_AVL_RPM_WHL float32( deneme_AVL_RPM_WHL.CRC_AVL_RPM_WHL*1+0 )
#define get_ALIV_AVL_RPM_WHL float32( deneme_AVL_RPM_WHL.ALIV_AVL_RPM_WHL*1+0 )
#define get_AVL_RPM_WHL_RLH float32( deneme_AVL_RPM_WHL.AVL_RPM_WHL_RLH*0.015625+-511.984375 )
#define get_AVL_RPM_WHL_RRH float32( deneme_AVL_RPM_WHL.AVL_RPM_WHL_RRH*0.015625+-511.984375 )
#define get_AVL_RPM_WHL_FLH float32( deneme_AVL_RPM_WHL.AVL_RPM_WHL_FLH*0.015625+-511.984375 )
#define get_AVL_RPM_WHL_FRH float32( deneme_AVL_RPM_WHL.AVL_RPM_WHL_FRH*0.015625+-511.984375 )
#define get_QU_AVL_RPM_WHL_RLH float32( deneme_AVL_RPM_WHL.QU_AVL_RPM_WHL_RLH*1+0 )
#define get_QU_AVL_RPM_WHL_RRH float32( deneme_AVL_RPM_WHL.QU_AVL_RPM_WHL_RRH*1+0 )
#define get_QU_AVL_RPM_WHL_FLH float32( deneme_AVL_RPM_WHL.QU_AVL_RPM_WHL_FLH*1+0 )
#define get_QU_AVL_RPM_WHL_FRH float32( deneme_AVL_RPM_WHL.QU_AVL_RPM_WHL_FRH*1+0 )
#define get_CRC_V_VEH float32( deneme_BundleEAFlexrayToCANFD20msNo1.CRC_V_VEH*1+0 )
#define get_ALIV_V_VEH float32( deneme_BundleEAFlexrayToCANFD20msNo1.ALIV_V_VEH*1+0 )
#define get_V_VEH_COG float32( deneme_BundleEAFlexrayToCANFD20msNo1.V_VEH_COG*0.015625+0 )
#define get_QU_V_VEH_COG float32( deneme_BundleEAFlexrayToCANFD20msNo1.QU_V_VEH_COG*1+0 )
#define get_SecOcDataP2V_VEH float32( deneme_BundleEAFlexrayToCANFD20msNo1.SecOcDataP2V_VEH*1+0 )
#define get_CRC_CLAMP_STAT float32( deneme_CLAMP_STAT.CRC_CLAMP_STAT*1+0 )
#define get_ALIV_CLAMP_STAT float32( deneme_CLAMP_STAT.ALIV_CLAMP_STAT*1+0 )
#define get_STAT_CL15_L float32( deneme_CLAMP_STAT.STAT_CL15_L*1+0 )
#define get_STAT_CL30S_L float32( deneme_CLAMP_STAT.STAT_CL30S_L*1+0 )
#define get_STAT_CL30S_Light float32( deneme_CLAMP_STAT.STAT_CL30S_Light*1+0 )
#define get_STAT_CL15_WUPL float32( deneme_CLAMP_STAT.STAT_CL15_WUPL*1+0 )

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
} deneme_VCU_WarnMsg ;


typedef struct {
	uint8 CRC_VCU_StatusDCDC : 8 ;
	uint8 ALV_VCU_StatusDCDC : 4 ;
	uint8 DCDC_status : 3 ;
	uint8 NoUsedBits : 1 ;
	uint16 DCDC_maxCurrentOut : 16 ;
	uint16 DCDC_iOutput : 16 ;
	uint16 DCDC_vDCInput : 16 ;
	uint16 DCDC_vOutput : 16 ;
} deneme_VCU_StatusDCDC ;


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
} deneme_VCU_MHU_info ;


typedef struct {
	uint8 CRC_VCU_HVsystem_status : 8 ;
	uint8 ALIV_VCU_HVsystem_status : 4 ;
	uint8 VCU_RunningRange_chrg_estSts : 2 ;
	uint8 VCU_HVbatSoc_charged_estStatus : 2 ;
	uint16 VCU_RunningRange_charged : 12 ;
	uint8 NoUsedBits : 4 ;
	uint16 VCU_HVbatSoc_charged : 10 ;
} deneme_VCU_HVsystem_status ;


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
} deneme_VCU_HV_DrvSys_status ;


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
} deneme_VCU_ChargingConnection ;


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
} deneme_VCU_Batt_WarnMsg ;


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
} deneme_VCU_Batt_Info ;


typedef struct {
	uint8 ST_TRAI : 2 ;
} deneme_STAT_ANHAENGER ;


typedef struct {
	uint8 CRC_ST_GWS : 8 ;
	uint8 ALIV_ST_GWS : 4 ;
	uint8 OP_GWS : 4 ;
	uint8 NoUsedBits : 8 ;
	uint8 OP_GWS_PUBU_PKG : 2 ;
} deneme_ST_GWS ;


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
} deneme_SFA_SteerWheel_Info ;


typedef struct {
	uint32 T_SEC_COU_REL : 32 ;
} deneme_RELATIVZEIT ;


typedef struct {
	uint8 NM3ControlBitVector : 8 ;
	uint8 NM3SenderECUId : 8 ;
	uint16 NM3BasePartialNetworks : 16 ;
	uint32 NM3FunctionalPartialNetworks : 32 ;
} deneme_Networkmanagement3_Status ;


typedef struct {
	uint32 MILE_KM : 24 ;
} deneme_KILOMETERSTAND ;


typedef struct {
	uint8 StatusServiceDisconnectionPlug : 2 ;
	uint8 StsDisconnectingSwtHighVoltStorg : 6 ;
} deneme_HighVoltageStorage200msNo1 ;


typedef struct {
	uint16 CRC_HighVoltageStorage10msNo2 : 16 ;
	uint8 ALIV_HighVoltageStorage10msNo2 : 8 ;
	uint16 NoUsedBits : 16 ;
	uint16 ActualValueVoltageLinkVerified : 12 ;
} deneme_HighVoltageStorage10msNo2 ;


typedef struct {
	uint8 ST_ENERG_FZM : 4 ;
	uint64 NoUsedBits : 36 ;
	uint8 ST_ILK_ERRM_FZM : 2 ;
} deneme_FZZSTD ;


typedef struct {
	uint8 FZU_ChargingStopReq : 2 ;
} deneme_FZU_ChargingControl ;


typedef struct {
	uint8 NO_VECH_1 : 8 ;
	uint8 NO_VECH_2 : 8 ;
	uint8 NO_VECH_3 : 8 ;
	uint8 NO_VECH_4 : 8 ;
	uint8 NO_VECH_5 : 8 ;
	uint8 NO_VECH_6 : 8 ;
	uint8 NO_VECH_7 : 8 ;
} deneme_FAHRGESTELLNUMMER ;


typedef struct {
	uint8 CTR_ERRM_BN_U : 6 ;
} deneme_ERRM_BN_U ;


typedef struct {
	uint8 CRC_DT_DISP_GRDT : 8 ;
	uint8 ALIV_DT_DISP_GRDT : 4 ;
	uint8 NoUsedBits : 4 ;
	uint8 DISP_PRG_GRB : 3 ;
	uint8 DISP_PO_IDC_GRB : 2 ;
	uint8 DISP_PO_GRB : 3 ;
} deneme_DT_DISP_GRDT ;


typedef struct {
	uint8 CRC_CON_VEH : 8 ;
	uint8 ALIV_CON_VEH : 4 ;
	uint8 CTR_BS_PRTNT : 4 ;
	uint32 CTR_FKTN_PRTNT : 32 ;
	uint8 ST_CON_VEH : 4 ;
	uint8 QU_ST_CON_VEH : 4 ;
} deneme_CON_VEH ;


typedef struct {
	uint16 PowerETractSys2LimMotMax : 16 ;
	uint16 PowerETractSys1LimGenMax : 16 ;
	uint16 PowerETractSys2LimGenMax : 16 ;
	uint16 PowerETractSys1LimMotMax : 16 ;
	uint8 OperatingModeEANActualValue : 8 ;
	uint8 RequestExtraBoostETractSys1 : 2 ;
	uint8 NoUsedBits : 6 ;
	uint8 RequestExtraBoostETractSys2 : 2 ;
} deneme_CombinedChargerUnit10msNo2 ;


typedef struct {
	uint8 TEMP_EX : 8 ;
} deneme_A_TEMP ;


typedef struct {
	uint8 ABS_ACTIVE : 2 ;
} deneme_ABS_ESC_01 ;


typedef struct {
	uint16 WEstTot_Nm : 16 ;
} deneme_IEB_01 ;


typedef struct {
	uint8 AD3_PrsrVal_Fl : 8 ;
	uint8 AD3_PrsrVal_Fr : 8 ;
	uint8 AD3_PrsrVal_Rl : 8 ;
	uint8 AD3_PrsrVal_Rr : 8 ;
} deneme_ESC_A ;


typedef struct {
	uint32 MILE_KM_TOT : 32 ;
} deneme_Kilometerstand_2 ;


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
} deneme_EBCM_STATUS ;


typedef struct {
	uint8 ST_SLIP_THO : 4 ;
} deneme_ST_STAB_DSC_2 ;


typedef struct {
	uint8 CRC_ST_STAB_DSC : 8 ;
	uint8 ALIV_ST_STAB_DSC : 4 ;
	uint8 NoUsedBits : 4 ;
	uint16 QU_FN_FDR : 12 ;
	uint16 QU_FN_ABS : 12 ;
	uint16 QU_FN_ASC : 12 ;
	uint8 NoUsedBits : 4 ;
	uint8 ST_BRG_DV : 6 ;
} deneme_ST_STAB_DSC ;


typedef struct {
	uint8 OpModETractSys1ActVal : 8 ;
} deneme_TracEMacElectc1Time100msNo1 ;


typedef struct {
	uint8 OpModETractSys2ActVal : 8 ;
} deneme_TracEMacElectc2Time100msNo1 ;


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
} deneme_BundleEAFlexrayToAECANFD10msNo1 ;


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
} deneme_AVL_RPM_WHL ;


typedef struct {
	uint8 CRC_V_VEH : 8 ;
	uint8 ALIV_V_VEH : 4 ;
	uint8 NoUsedBits : 3 ;
	uint16 V_VEH_COG : 16 ;
	uint8 NoUsedBits : 1 ;
	uint8 QU_V_VEH_COG : 4 ;
	uint8 NoUsedBits : 4 ;
	uint64 SecOcDataP2V_VEH : 64 ;
} deneme_BundleEAFlexrayToCANFD20msNo1 ;


typedef struct {
	uint8 CRC_CLAMP_STAT : 8 ;
	uint8 ALIV_CLAMP_STAT : 4 ;
	uint8 STAT_CL15_L : 2 ;
	uint8 STAT_CL30S_L : 2 ;
	uint8 STAT_CL30S_Light : 2 ;
	uint8 STAT_CL15_WUPL : 2 ;
} deneme_CLAMP_STAT ;



#endif  // FEV_VCU_DATA_H