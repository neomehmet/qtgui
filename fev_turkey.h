
#ifndef FEV_VCU_DATA_H 
#define FEV_VCU_DATA_H 
#include <stdint.h>  // Include for UINT32 type

#*************#
#****MEHMET***#
#*****KOSE****#
#*****FEV*****#
#****TURKEY***#
#*************#

#get macros
#define get_CHKSM_CRASH_Sts() float32( ACM_CRASH_INFO.CHKSM_CRASH_Sts*1+ (0) )
#define get_ALV_CRASH_Sts() float32( ACM_CRASH_INFO.ALV_CRASH_Sts*1+ (0) )
#define get_ACM_Crash_Sts() float32( ACM_CRASH_INFO.ACM_Crash_Sts*1+ (0) )
#define get_ACM_Airbag_Deployment_Status() float32( ACM_CRASH_INFO.ACM_Airbag_Deployment_Status*1+ (0) )
#define get_ACM_Crash_Intensity() float32( ACM_CRASH_INFO.ACM_Crash_Intensity*1+ (0) )
#define get_ACM_Front_Crash() float32( ACM_CRASH_INFO.ACM_Front_Crash*1+ (0) )
#define get_ACM_DriverSide_Crash() float32( ACM_CRASH_INFO.ACM_DriverSide_Crash*1+ (0) )
#define get_ACM_PassSide_Crash() float32( ACM_CRASH_INFO.ACM_PassSide_Crash*1+ (0) )
#define get_ACM_Rear_Crash() float32( ACM_CRASH_INFO.ACM_Rear_Crash*1+ (0) )
#define get_ACM_Rollover_Crash() float32( ACM_CRASH_INFO.ACM_Rollover_Crash*1+ (0) )
#define get_CHKSM_BCM_VOLTAGE() float32( BCM_VOLTAGE.CHKSM_BCM_VOLTAGE*1+ (0) )
#define get_ALIVE_BCM_VOLTAGE() float32( BCM_VOLTAGE.ALIVE_BCM_VOLTAGE*1+ (0) )
#define get_UBatt() float32( BCM_VOLTAGE.UBatt*0.0009777+ (3) )
#define get_LV_Batt_Temp() float32( BCM_VOLTAGE.LV_Batt_Temp*1+ (-40) )
#define get_LV_SOC() float32( BCM_VOLTAGE.LV_SOC*1+ (0) )
#define get_LV_Batt_Current() float32( BCM_VOLTAGE.LV_Batt_Current*0.03125+ (-1536) )
#define get_CHKSM_BCM_CLAMP_STAT() float32( BCM_CLAMP_STAT.CHKSM_BCM_CLAMP_STAT*1+ (0) )
#define get_ALIVE_BCM_CLAMP_STAT() float32( BCM_CLAMP_STAT.ALIVE_BCM_CLAMP_STAT*1+ (0) )
#define get_RemoteFunctionState() float32( BCM_CLAMP_STAT.RemoteFunctionState*1+ (0) )
#define get_STAT_BLS() float32( BCM_CLAMP_STAT.STAT_BLS*1+ (0) )
#define get_STAT_CL_50_L() float32( BCM_CLAMP_STAT.STAT_CL_50_L*1+ (0) )
#define get_Clamp50AdviceRemoteStart() float32( BCM_CLAMP_STAT.Clamp50AdviceRemoteStart*1+ (0) )
#define get_Clamp50AdviceESS() float32( BCM_CLAMP_STAT.Clamp50AdviceESS*1+ (0) )
#define get_STAT_CL_R_L() float32( BCM_CLAMP_STAT.STAT_CL_R_L*1+ (0) )
#define get_STAT_CL_15_1_L() float32( BCM_CLAMP_STAT.STAT_CL_15_1_L*1+ (0) )
#define get_STAT_CL_15_1_DME_L() float32( BCM_CLAMP_STAT.STAT_CL_15_1_DME_L*1+ (0) )
#define get_FobId() float32( BCM_CLAMP_STAT.FobId*1+ (0) )
#define get_STAT_Terminal() float32( BCM_CLAMP_STAT.STAT_Terminal*1+ (0) )
#define get_STAT_CL30_C_BEV() float32( BCM_CLAMP_STAT.STAT_CL30_C_BEV*1+ (0) )
#define get_BCM_Clamp_Transport() float32( BCM_CLAMP_STAT.BCM_Clamp_Transport*1+ (0) )
#define get_CHKSM_ACChargingInfo() float32( VCU_ACCharging_Info.CHKSM_ACChargingInfo*1+ (0) )
#define get_ALIVE_ACChargingInfo() float32( VCU_ACCharging_Info.ALIVE_ACChargingInfo*1+ (0) )
#define get_ACCharging_MaxChargingPower() float32( VCU_ACCharging_Info.ACCharging_MaxChargingPower*0.1+ (0) )
#define get_CurrentACChargingPower() float32( VCU_ACCharging_Info.CurrentACChargingPower*0.1+ (0) )
#define get_ACCharging_MaxCurrent() float32( VCU_ACCharging_Info.ACCharging_MaxCurrent*0.1+ (0) )
#define get_CHKSM_DCChargingInfo() float32( VCU_DCCharging_Info.CHKSM_DCChargingInfo*1+ (0) )
#define get_ALIVE_DCChargingInfo() float32( VCU_DCCharging_Info.ALIVE_DCChargingInfo*1+ (0) )
#define get_DCCharging_MaxChargingPower() float32( VCU_DCCharging_Info.DCCharging_MaxChargingPower*0.1+ (0) )
#define get_CurrentDCChargingPower() float32( VCU_DCCharging_Info.CurrentDCChargingPower*0.1+ (0) )
#define get_DCCharging_MaxCurrent() float32( VCU_DCCharging_Info.DCCharging_MaxCurrent*0.1+ (0) )
#define get_Checksum_0x125() float32( BMS_AllowDischargeCurr.Checksum_0x125*1+ (0) )
#define get_Rolling_Counter_0x125() float32( BMS_AllowDischargeCurr.Rolling_Counter_0x125*1+ (0) )
#define get_BMS_AllowDischgCurr() float32( BMS_AllowDischargeCurr.BMS_AllowDischgCurr*0.1+ (0) )
#define get_BMS_AllowDischgCurrPeak() float32( BMS_AllowDischargeCurr.BMS_AllowDischgCurrPeak*0.1+ (0) )
#define get_SECCAN_BMS_AllowDischargeCurr() float32( BMS_AllowDischargeCurr.SECCAN_BMS_AllowDischargeCurr*1+ (0) )
#define get_Checksum_0x126() float32( BMS_AllowChargeCurr.Checksum_0x126*1+ (0) )
#define get_Rolling_Counter_0x126() float32( BMS_AllowChargeCurr.Rolling_Counter_0x126*1+ (0) )
#define get_BMS_AllowChgCurr() float32( BMS_AllowChargeCurr.BMS_AllowChgCurr*0.1+ (0) )
#define get_BMS_AllowChgCurrPeak() float32( BMS_AllowChargeCurr.BMS_AllowChgCurrPeak*0.1+ (0) )
#define get_SECCAN_BMS_AllowChargeCurr() float32( BMS_AllowChargeCurr.SECCAN_BMS_AllowChargeCurr*1+ (0) )
#define get_Checksum_0x127() float32( BMS_AllowDischgCurrAvg.Checksum_0x127*1+ (0) )
#define get_Rolling_Counter_0x127() float32( BMS_AllowDischgCurrAvg.Rolling_Counter_0x127*1+ (0) )
#define get_BMS_AllowDischgCurrAvg() float32( BMS_AllowDischgCurrAvg.BMS_AllowDischgCurrAvg*0.1+ (0) )
#define get_CHSKM_VCU_ChargingConnection() float32( VCU_ChargingConnection.CHSKM_VCU_ChargingConnection*1+ (0) )
#define get_ALV_VCU_ChargingConnection() float32( VCU_ChargingConnection.ALV_VCU_ChargingConnection*1+ (0) )
#define get_VCU_AcChgGunIn() float32( VCU_ChargingConnection.VCU_AcChgGunIn*1+ (0) )
#define get_VCU_DCChgGunIn() float32( VCU_ChargingConnection.VCU_DCChgGunIn*1+ (0) )
#define get_CHSKM_BMS_CurMeas() float32( BMS_CurMeas.CHSKM_BMS_CurMeas*1+ (0) )
#define get_ALV_BMS_CurMeas() float32( BMS_CurMeas.ALV_BMS_CurMeas*1+ (0) )
#define get_BMS_StartOfMeasument_STS() float32( BMS_CurMeas.BMS_StartOfMeasument_STS*1+ (0) )
#define get_BMS_PackCur_MEAS() float32( BMS_CurMeas.BMS_PackCur_MEAS*0.1+ (-3276.8) )
#define get_Checksum_0x176() float32( BMS_HVMeas1.Checksum_0x176*1+ (0) )
#define get_Rolling_Counter_0x176() float32( BMS_HVMeas1.Rolling_Counter_0x176*1+ (0) )
#define get_BMS_HVPackVol_MEAS() float32( BMS_HVMeas1.BMS_HVPackVol_MEAS*0.1+ (0) )
#define get_BMS_HVLinkVol_MEAS() float32( BMS_HVMeas1.BMS_HVLinkVol_MEAS*0.1+ (0) )
#define get_Checksum_0x177() float32( BMS_HVMeas2.Checksum_0x177*1+ (0) )
#define get_Rolling_Counter_0x177() float32( BMS_HVMeas2.Rolling_Counter_0x177*1+ (0) )
#define get_BMS_HVBusVol_MEAS() float32( BMS_HVMeas2.BMS_HVBusVol_MEAS*0.1+ (0) )
#define get_BMS_HVFuseVol_MEAS() float32( BMS_HVMeas2.BMS_HVFuseVol_MEAS*0.1+ (0) )
#define get_CHSKM_VCU_Sts1() float32( VCU_Sts1.CHSKM_VCU_Sts1*1+ (0) )
#define get_ALV_VCU_Sts1() float32( VCU_Sts1.ALV_VCU_Sts1*1+ (0) )
#define get_VCU_BMS_HVOnOff_REQ() float32( VCU_Sts1.VCU_BMS_HVOnOff_REQ*1+ (0) )
#define get_CHSKM_V_VEH() float32( IDB_V_VEH.CHSKM_V_VEH*1+ (0) )
#define get_ALIV_V_VEH() float32( IDB_V_VEH.ALIV_V_VEH*1+ (0) )
#define get_V_VEH_COG() float32( IDB_V_VEH.V_VEH_COG*0.015625+ (0) )
#define get_DVCO_VEH() float32( IDB_V_VEH.DVCO_VEH*1+ (0) )
#define get_QU_V_VEH_COG() float32( IDB_V_VEH.QU_V_VEH_COG*1+ (0) )
#define get_CHKSM_EDS_OutPut_FR() float32( EDS_OutPut_FR.CHKSM_EDS_OutPut_FR*1+ (0) )
#define get_ALV_EDS_OutPut_FR() float32( EDS_OutPut_FR.ALV_EDS_OutPut_FR*1+ (0) )
#define get_EDS_Work_STS_FR() float32( EDS_OutPut_FR.EDS_Work_STS_FR*1+ (0) )
#define get_EDS_Spd_FR() float32( EDS_OutPut_FR.EDS_Spd_FR*1+ (-20000) )
#define get_EDS_output_trqValid_FR() float32( EDS_OutPut_FR.EDS_output_trqValid_FR*1+ (0) )
#define get_EDS_MotorDriveSts_FR() float32( EDS_OutPut_FR.EDS_MotorDriveSts_FR*1+ (0) )
#define get_EDS_powoff_req_FR() float32( EDS_OutPut_FR.EDS_powoff_req_FR*1+ (0) )
#define get_EDS_SpdValid_FR() float32( EDS_OutPut_FR.EDS_SpdValid_FR*1+ (0) )
#define get_EDS_output_trq_FR() float32( EDS_OutPut_FR.EDS_output_trq_FR*1+ (-2000) )
#define get_EDS_VCU_6SO_flag_FWD() float32( EDS_OutPut_FR.EDS_VCU_6SO_flag_FWD*1+ (0) )
#define get_CHKSM_EDS_OutPut_RR() float32( EDS_OutPut_RR.CHKSM_EDS_OutPut_RR*1+ (0) )
#define get_ALV_EDS_OutPut_RR() float32( EDS_OutPut_RR.ALV_EDS_OutPut_RR*1+ (0) )
#define get_EDS_Work_STS_RR() float32( EDS_OutPut_RR.EDS_Work_STS_RR*1+ (0) )
#define get_EDS_Spd_RR() float32( EDS_OutPut_RR.EDS_Spd_RR*1+ (-20000) )
#define get_EDS_output_trqValid_RR() float32( EDS_OutPut_RR.EDS_output_trqValid_RR*1+ (0) )
#define get_EDS_MotorDriveSts_RR() float32( EDS_OutPut_RR.EDS_MotorDriveSts_RR*1+ (0) )
#define get_EDS_powoff_req_RR() float32( EDS_OutPut_RR.EDS_powoff_req_RR*1+ (0) )
#define get_EDS_SpdValid_RR() float32( EDS_OutPut_RR.EDS_SpdValid_RR*1+ (0) )
#define get_EDS_output_trq_RR() float32( EDS_OutPut_RR.EDS_output_trq_RR*1+ (-2000) )
#define get_EDS_VCU_6SO_flag_RWD() float32( EDS_OutPut_RR.EDS_VCU_6SO_flag_RWD*1+ (0) )
#define get_Checksum_0x205() float32( BMS_VolMeas1.Checksum_0x205*1+ (0) )
#define get_Rolling_Counter_0x205() float32( BMS_VolMeas1.Rolling_Counter_0x205*1+ (0) )
#define get_BMS_CellNumMinCellVol() float32( BMS_VolMeas1.BMS_CellNumMinCellVol*1+ (0) )
#define get_BMS_CellNumMaxCellVol() float32( BMS_VolMeas1.BMS_CellNumMaxCellVol*1+ (0) )
#define get_BMS_MinCellVol() float32( BMS_VolMeas1.BMS_MinCellVol*0.001+ (0) )
#define get_BMS_MaxCellVol() float32( BMS_VolMeas1.BMS_MaxCellVol*0.001+ (0) )
#define get_Checksum_0x206() float32( BMS_VolMeas2.Checksum_0x206*1+ (0) )
#define get_Rolling_Counter_0x206() float32( BMS_VolMeas2.Rolling_Counter_0x206*1+ (0) )
#define get_BMS_MaxMinDiffCellVol() float32( BMS_VolMeas2.BMS_MaxMinDiffCellVol*0.001+ (0) )
#define get_SECCAN_BMS_VolMeas2() float32( BMS_VolMeas2.SECCAN_BMS_VolMeas2*1+ (0) )
#define get_Checksum_0x209() float32( BMS_PowerCont.Checksum_0x209*1+ (0) )
#define get_Rolling_Counter_0x209() float32( BMS_PowerCont.Rolling_Counter_0x209*1+ (0) )
#define get_BMS_MaxDischgPwr_ALW() float32( BMS_PowerCont.BMS_MaxDischgPwr_ALW*0.1+ (0) )
#define get_BMS_MaxChgPwr_ALW() float32( BMS_PowerCont.BMS_MaxChgPwr_ALW*0.1+ (0) )
#define get_BMS_MaxDischgPwr_Peak() float32( BMS_PowerCont.BMS_MaxDischgPwr_Peak*0.2+ (0) )
#define get_BMS_MaxChgPwr_Peak() float32( BMS_PowerCont.BMS_MaxChgPwr_Peak*0.2+ (0) )
#define get_CHKSM_IC_ODO() float32( IC_ODO.CHKSM_IC_ODO*1+ (0) )
#define get_ALIV_IC_ODO() float32( IC_ODO.ALIV_IC_ODO*1+ (0) )
#define get_MHU_Odometer_IC() float32( IC_ODO.MHU_Odometer_IC*1+ (0) )
#define get_Checksum_0x213() float32( BMS_PowerAvg.Checksum_0x213*1+ (0) )
#define get_Rolling_Counter_0x213() float32( BMS_PowerAvg.Rolling_Counter_0x213*1+ (0) )
#define get_BMS_AvgDischgPwr_ALW() float32( BMS_PowerAvg.BMS_AvgDischgPwr_ALW*0.1+ (0) )
#define get_Checksum_0x214() float32( BMS_Sts_0x214.Checksum_0x214*1+ (0) )
#define get_Rolling_Counter_0x214() float32( BMS_Sts_0x214.Rolling_Counter_0x214*1+ (0) )
#define get_BMS_Display_SOC() float32( BMS_Sts_0x214.BMS_Display_SOC*0.1+ (0) )
#define get_BMS_MinCellSOC() float32( BMS_Sts_0x214.BMS_MinCellSOC*0.1+ (0) )
#define get_BMS_MaxCellSOC() float32( BMS_Sts_0x214.BMS_MaxCellSOC*0.1+ (0) )
#define get_BMS_ProbeNumMaxCellSOC() float32( BMS_Sts_0x214.BMS_ProbeNumMaxCellSOC*1+ (0) )
#define get_BMS_ProbeNumMinCellSOC() float32( BMS_Sts_0x214.BMS_ProbeNumMinCellSOC*1+ (0) )
#define get_Checksum_0x215() float32( BMS_Sts.Checksum_0x215*1+ (0) )
#define get_Rolling_Counter_0x215() float32( BMS_Sts.Rolling_Counter_0x215*1+ (0) )
#define get_BMS_BatBalance_ERR() float32( BMS_Sts.BMS_BatBalance_ERR*1+ (0) )
#define get_BMS_Balance_STS() float32( BMS_Sts.BMS_Balance_STS*1+ (0) )
#define get_BMS_IGN_Sts() float32( BMS_Sts.BMS_IGN_Sts*1+ (0) )
#define get_BMS_HWCrash_Sts() float32( BMS_Sts.BMS_HWCrash_Sts*1+ (0) )
#define get_BMS_HVIL_STS() float32( BMS_Sts.BMS_HVIL_STS*1+ (0) )
#define get_BMS_HVOnOff_STS() float32( BMS_Sts.BMS_HVOnOff_STS*1+ (0) )
#define get_BMS_ERR_LEV() float32( BMS_Sts.BMS_ERR_LEV*1+ (0) )
#define get_BMS_SocActual_EST() float32( BMS_Sts.BMS_SocActual_EST*0.1+ (0) )
#define get_BMS_Sys_STS() float32( BMS_Sts.BMS_Sys_STS*1+ (0) )
#define get_BMS_ISU_Status() float32( BMS_Sts.BMS_ISU_Status*1+ (0) )
#define get_BMS_SOH() float32( BMS_Sts.BMS_SOH*0.5+ (0) )
#define get_BMS_SOE() float32( BMS_Sts.BMS_SOE*0.5+ (0) )
#define get_BMS_HV_Sts() float32( BMS_Sts.BMS_HV_Sts*1+ (0) )
#define get_Checksum_0x216() float32( BMS_ChgParamReq.Checksum_0x216*1+ (0) )
#define get_Rolling_Counter_0x216() float32( BMS_ChgParamReq.Rolling_Counter_0x216*1+ (0) )
#define get_BMS_RemainChargeTime() float32( BMS_ChgParamReq.BMS_RemainChargeTime*1+ (0) )
#define get_BMS_ChgVoltage_REQ() float32( BMS_ChgParamReq.BMS_ChgVoltage_REQ*0.1+ (0) )
#define get_BMS_ChgCurrent_REQ() float32( BMS_ChgParamReq.BMS_ChgCurrent_REQ*0.1+ (0) )
#define get_CHSKM_VCU_BMS_Information() float32( VCU_BMS_Information.CHSKM_VCU_BMS_Information*1+ (0) )
#define get_ALIV_VCU_BMS_Information() float32( VCU_BMS_Information.ALIV_VCU_BMS_Information*1+ (0) )
#define get_VCU_DCChargeRelayP() float32( VCU_BMS_Information.VCU_DCChargeRelayP*1+ (0) )
#define get_VCU_DCChargeRelayN() float32( VCU_BMS_Information.VCU_DCChargeRelayN*1+ (0) )
#define get_VCU_BMS_Insulation_Mon_Req() float32( VCU_BMS_Information.VCU_BMS_Insulation_Mon_Req*1+ (0) )
#define get_CHSKM_VCU_PTControl() float32( VCU_PTControl.CHSKM_VCU_PTControl*1+ (0) )
#define get_ALV_VCU_PTControl() float32( VCU_PTControl.ALV_VCU_PTControl*1+ (0) )
#define get_VCU_ChargeAllow() float32( VCU_PTControl.VCU_ChargeAllow*1+ (0) )
#define get_CHSKM_VCU_BMS_Thermal_FB() float32( VCU_BMS_Thermal_FB.CHSKM_VCU_BMS_Thermal_FB*1+ (0) )
#define get_ALIV_VCU_BMS_Thermal_FB() float32( VCU_BMS_Thermal_FB.ALIV_VCU_BMS_Thermal_FB*1+ (0) )
#define get_VCU_BMS_PTCOnOff_Sts() float32( VCU_BMS_Thermal_FB.VCU_BMS_PTCOnOff_Sts*1+ (0) )
#define get_VCU_BMS_ValveOnOff_Sts() float32( VCU_BMS_Thermal_FB.VCU_BMS_ValveOnOff_Sts*1+ (0) )
#define get_VCU_BMS_PumpFB() float32( VCU_BMS_Thermal_FB.VCU_BMS_PumpFB*1+ (0) )
#define get_Checksum_0x225() float32( BMS_FaultMgr_0x225.Checksum_0x225*1+ (0) )
#define get_Rolling_Counter_0x225() float32( BMS_FaultMgr_0x225.Rolling_Counter_0x225*1+ (0) )
#define get_CDM_bAcvCanComStblMon() float32( BMS_FaultMgr_0x225.CDM_bAcvCanComStblMon*1+ (0) )
#define get_FRMo_bErrHvbatStReqExtMon() float32( BMS_FaultMgr_0x225.FRMo_bErrHvbatStReqExtMon*1+ (0) )
#define get_FRMo_bErrChrgnAllwdExtMon() float32( BMS_FaultMgr_0x225.FRMo_bErrChrgnAllwdExtMon*1+ (0) )
#define get_FRMo_bErrVehCrashStExtMon() float32( BMS_FaultMgr_0x225.FRMo_bErrVehCrashStExtMon*1+ (0) )
#define get_CDM_bErrComctnLossCanMon() float32( BMS_FaultMgr_0x225.CDM_bErrComctnLossCanMon*1+ (0) )
#define get_CTCMon_bErrCtctrSopcMon() float32( BMS_FaultMgr_0x225.CTCMon_bErrCtctrSopcMon*1+ (0) )
#define get_CTCMon_bInvldCtctrHisdIFbMon() float32( BMS_FaultMgr_0x225.CTCMon_bInvldCtctrHisdIFbMon*1+ (0) )
#define get_CTCMon_bInvldCtctrLosdUFbMon() float32( BMS_FaultMgr_0x225.CTCMon_bInvldCtctrLosdUFbMon*1+ (0) )
#define get_CTM_bErrCellTDifMaxMon() float32( BMS_FaultMgr_0x225.CTM_bErrCellTDifMaxMon*1+ (0) )
#define get_CTM_bErrCellTMaxMon() float32( BMS_FaultMgr_0x225.CTM_bErrCellTMaxMon*1+ (0) )
#define get_CTM_bErrCellTMinMon() float32( BMS_FaultMgr_0x225.CTM_bErrCellTMinMon*1+ (0) )
#define get_CTM_bErrThrwyPredMon() float32( BMS_FaultMgr_0x225.CTM_bErrThrwyPredMon*1+ (0) )
#define get_CUM_bErrCellUDifMaxMon() float32( BMS_FaultMgr_0x225.CUM_bErrCellUDifMaxMon*1+ (0) )
#define get_CUM_bErrCellUMaxMon() float32( BMS_FaultMgr_0x225.CUM_bErrCellUMaxMon*1+ (0) )
#define get_CUM_bErrCellUMinMon() float32( BMS_FaultMgr_0x225.CUM_bErrCellUMinMon*1+ (0) )
#define get_CUM_bErrCellUProtnMaxNvMon() float32( BMS_FaultMgr_0x225.CUM_bErrCellUProtnMaxNvMon*1+ (0) )
#define get_CUM_bErrCellUProtnMinNvMon() float32( BMS_FaultMgr_0x225.CUM_bErrCellUProtnMinNvMon*1+ (0) )
#define get_CUM_bErrPackUImplyMon() float32( BMS_FaultMgr_0x225.CUM_bErrPackUImplyMon*1+ (0) )
#define get_EHPMon_bRdyHvilMon() float32( BMS_FaultMgr_0x225.EHPMon_bRdyHvilMon*1+ (0) )
#define get_EHPMon_bErrWlddNegNvMon() float32( BMS_FaultMgr_0x225.EHPMon_bErrWlddNegNvMon*1+ (0) )
#define get_EHPMon_bErrWlddPosNvMon() float32( BMS_FaultMgr_0x225.EHPMon_bErrWlddPosNvMon*1+ (0) )
#define get_EHPMon_bErrWlddPrechNvMon() float32( BMS_FaultMgr_0x225.EHPMon_bErrWlddPrechNvMon*1+ (0) )
#define get_EHPMon_bErrHvilMon() float32( BMS_FaultMgr_0x225.EHPMon_bErrHvilMon*1+ (0) )
#define get_EHPMon_bErrHvilShoMon() float32( BMS_FaultMgr_0x225.EHPMon_bErrHvilShoMon*1+ (0) )
#define get_EHPMon_bErrPackIslnRNvMon() float32( BMS_FaultMgr_0x225.EHPMon_bErrPackIslnRNvMon*1+ (0) )
#define get_EHPMon_bErrVehCrashNvMon() float32( BMS_FaultMgr_0x225.EHPMon_bErrVehCrashNvMon*1+ (0) )
#define get_EHPMon_bErrVehIslnRNvMon() float32( BMS_FaultMgr_0x225.EHPMon_bErrVehIslnRNvMon*1+ (0) )
#define get_FRMo_bErrMemStorgNvMon() float32( BMS_FaultMgr_0x225.FRMo_bErrMemStorgNvMon*1+ (0) )
#define get_L1IM_bErrClmp30MaxMonInp() float32( BMS_FaultMgr_0x225.L1IM_bErrClmp30MaxMonInp*1+ (0) )
#define get_L1IM_bErrClmp30MinMonInp() float32( BMS_FaultMgr_0x225.L1IM_bErrClmp30MinMonInp*1+ (0) )
#define get_L1IM_bErrCtctrDtrtMonInp() float32( BMS_FaultMgr_0x225.L1IM_bErrCtctrDtrtMonInp*1+ (0) )
#define get_L1IM_bErrUActImplyMonInp() float32( BMS_FaultMgr_0x225.L1IM_bErrUActImplyMonInp*1+ (0) )
#define get_MCCM_bAcvMdulCtlrStsMon() float32( BMS_FaultMgr_0x225.MCCM_bAcvMdulCtlrStsMon*1+ (0) )
#define get_MCCM_bErrLntecSngFltMon() float32( BMS_FaultMgr_0x225.MCCM_bErrLntecSngFltMon*1+ (0) )
#define get_MCCM_bErrLntecLtntFltMon() float32( BMS_FaultMgr_0x225.MCCM_bErrLntecLtntFltMon*1+ (0) )
#define get_MCCM_bErrMdulCellSnsrCfgMon() float32( BMS_FaultMgr_0x225.MCCM_bErrMdulCellSnsrCfgMon*1+ (0) )
#define get_MCCM_bErrMdulCtlrComMon() float32( BMS_FaultMgr_0x225.MCCM_bErrMdulCtlrComMon*1+ (0) )
#define get_MCCM_bErrSnsrTEltlMon() float32( BMS_FaultMgr_0x225.MCCM_bErrSnsrTEltlMon*1+ (0) )
#define get_MCCM_bWarnSnsrTEltlMon() float32( BMS_FaultMgr_0x225.MCCM_bWarnSnsrTEltlMon*1+ (0) )
#define get_PCM_bRdySnsrIMon() float32( BMS_FaultMgr_0x225.PCM_bRdySnsrIMon*1+ (0) )
#define get_PCM_bErrPackEFlowMaxLimMon() float32( BMS_FaultMgr_0x225.PCM_bErrPackEFlowMaxLimMon*1+ (0) )
#define get_PCM_bErrPackIChDchaMaxLimMon() float32( BMS_FaultMgr_0x225.PCM_bErrPackIChDchaMaxLimMon*1+ (0) )
#define get_PCM_bErrSnsrIImplyMon() float32( BMS_FaultMgr_0x225.PCM_bErrSnsrIImplyMon*1+ (0) )
#define get_FRMo_bErrSnsrI1ExtMon() float32( BMS_FaultMgr_0x225.FRMo_bErrSnsrI1ExtMon*1+ (0) )
#define get_PCM_bInvldSnsrI1Mon() float32( BMS_FaultMgr_0x225.PCM_bInvldSnsrI1Mon*1+ (0) )
#define get_PCM_bInvldSnsrI2Mon() float32( BMS_FaultMgr_0x225.PCM_bInvldSnsrI2Mon*1+ (0) )
#define get_FRMo_bErrSopcLvl3Mon() float32( BMS_FaultMgr_0x225.FRMo_bErrSopcLvl3Mon*1+ (0) )
#define get_BMS_FRMo_Reserved_1() float32( BMS_FaultMgr_0x225.BMS_FRMo_Reserved_1*1+ (0) )
#define get_BMS_FRMo_Reserved_2() float32( BMS_FaultMgr_0x225.BMS_FRMo_Reserved_2*1+ (0) )
#define get_BMS_FRMo_Reserved_3() float32( BMS_FaultMgr_0x225.BMS_FRMo_Reserved_3*1+ (0) )
#define get_BMS_FRMo_Reserved_4() float32( BMS_FaultMgr_0x225.BMS_FRMo_Reserved_4*1+ (0) )
#define get_BMS_FRMo_Reserved_5() float32( BMS_FaultMgr_0x225.BMS_FRMo_Reserved_5*1+ (0) )
#define get_Checksum_0x226() float32( BMS_QMMgr_0x226.Checksum_0x226*1+ (0) )
#define get_Rolling_Counter_0x226() float32( BMS_QMMgr_0x226.Rolling_Counter_0x226*1+ (0) )
#define get_BMS_QMMo_Reserved_0() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_0*1+ (0) )
#define get_BMS_QMMo_Reserved_1() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_1*1+ (0) )
#define get_BMS_QMMo_Reserved_2() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_2*1+ (0) )
#define get_BMS_QMMo_Reserved_3() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_3*1+ (0) )
#define get_BMS_QMMo_Reserved_4() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_4*1+ (0) )
#define get_BMS_QMMo_Reserved_5() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_5*1+ (0) )
#define get_BMS_QMMo_Reserved_6() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_6*1+ (0) )
#define get_BMS_QMMo_Reserved_7() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_7*1+ (0) )
#define get_BMS_QMMo_Reserved_8() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_8*1+ (0) )
#define get_BMS_QMMo_Reserved_9() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_9*1+ (0) )
#define get_BMS_QMMo_Reserved_10() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_10*1+ (0) )
#define get_BMS_QMMo_Reserved_11() float32( BMS_QMMgr_0x226.BMS_QMMo_Reserved_11*1+ (0) )
#define get_CDEM_ErrDisp_0() float32( BMS_QMMgr_0x226.CDEM_ErrDisp_0*1+ (0) )
#define get_CDEM_ErrDisp_1() float32( BMS_QMMgr_0x226.CDEM_ErrDisp_1*1+ (0) )
#define get_BMS_Capacity_Thrput_Charge() float32( BMS_CapacityThrput.BMS_Capacity_Thrput_Charge*1+ (0) )
#define get_BMS_Capacity_Thrput_Discharge() float32( BMS_CapacityThrput.BMS_Capacity_Thrput_Discharge*1+ (0) )
#define get_Checksum_0x245() float32( BMS_CellTemp.Checksum_0x245*1+ (0) )
#define get_Rolling_Counter_0x245() float32( BMS_CellTemp.Rolling_Counter_0x245*1+ (0) )
#define get_BMS_ProbeNumMaxCellTemp() float32( BMS_CellTemp.BMS_ProbeNumMaxCellTemp*1+ (0) )
#define get_BMS_MinCellTemp() float32( BMS_CellTemp.BMS_MinCellTemp*1+ (-40) )
#define get_BMS_ProbeNumMinCellTemp() float32( BMS_CellTemp.BMS_ProbeNumMinCellTemp*1+ (0) )
#define get_BMS_PackTemp() float32( BMS_CellTemp.BMS_PackTemp*1+ (-40) )
#define get_BMS_MaxCellTemp() float32( BMS_CellTemp.BMS_MaxCellTemp*1+ (-40) )
#define get_BMS_MaxMinDiffCellTemp() float32( BMS_CellTemp.BMS_MaxMinDiffCellTemp*1+ (-40) )
#define get_Checksum_0x246() float32( BMS_CellAverage.Checksum_0x246*1+ (0) )
#define get_Rolling_Counter_0x246() float32( BMS_CellAverage.Rolling_Counter_0x246*1+ (0) )
#define get_BMS_CellTemp_Avg() float32( BMS_CellAverage.BMS_CellTemp_Avg*1+ (40) )
#define get_BMS_CellTemp_StdDev() float32( BMS_CellAverage.BMS_CellTemp_StdDev*1+ (40) )
#define get_BMS_CellVol_Avg() float32( BMS_CellAverage.BMS_CellVol_Avg*0.001+ (0) )
#define get_BMS_CellVol_StdDev() float32( BMS_CellAverage.BMS_CellVol_StdDev*0.001+ (0) )
#define get_CHSKM_BMS_VCU_THMReq() float32( BMS_VCU_THMReq.CHSKM_BMS_VCU_THMReq*1+ (0) )
#define get_ALV_BMS_VCU_THMReq() float32( BMS_VCU_THMReq.ALV_BMS_VCU_THMReq*1+ (0) )
#define get_BMS_FlowRate_Req() float32( BMS_VCU_THMReq.BMS_FlowRate_Req*1+ (0) )
#define get_BMS_CoolPwrDemand() float32( BMS_VCU_THMReq.BMS_CoolPwrDemand*0.1+ (0) )
#define get_BMS_HeatPwrDemand() float32( BMS_VCU_THMReq.BMS_HeatPwrDemand*0.1+ (0) )
#define get_BMS_VCU_PTCOnOff_Req() float32( BMS_VCU_THMReq.BMS_VCU_PTCOnOff_Req*1+ (0) )
#define get_BMS_VCU_ValveOnOff_Req() float32( BMS_VCU_THMReq.BMS_VCU_ValveOnOff_Req*1+ (0) )
#define get_CHSKM_BMS_CoolntInletOutletTmp() float32( BMS_CoolntInletOutletTmp.CHSKM_BMS_CoolntInletOutletTmp*1+ (0) )
#define get_ALV_BMS_CoolntInletOutletTmp() float32( BMS_CoolntInletOutletTmp.ALV_BMS_CoolntInletOutletTmp*1+ (0) )
#define get_BMS_CoolantInletTemp() float32( BMS_CoolntInletOutletTmp.BMS_CoolantInletTemp*1+ (-40) )
#define get_BMS_CoolantOutletTemp() float32( BMS_CoolntInletOutletTmp.BMS_CoolantOutletTemp*1+ (-40) )
#define get_BMS_BDUTemp1() float32( BMS_CoolntInletOutletTmp.BMS_BDUTemp1*1+ (-40) )
#define get_BMS_BDUTemp2() float32( BMS_CoolntInletOutletTmp.BMS_BDUTemp2*1+ (-40) )
#define get_CHKSM_IC_SENSOR() float32( IC_SENSOR.CHKSM_IC_SENSOR*1+ (0) )
#define get_ALV_IC_SENSOR() float32( IC_SENSOR.ALV_IC_SENSOR*1+ (0) )
#define get_MHU_STAT_AmbientTempRaw() float32( IC_SENSOR.MHU_STAT_AmbientTempRaw*0.5+ (-40) )
#define get_MHU_STAT_FuelLevel() float32( IC_SENSOR.MHU_STAT_FuelLevel*1+ (0) )
#define get_MHU_STAT_AmbientTemp() float32( IC_SENSOR.MHU_STAT_AmbientTemp*0.5+ (-40) )
#define get_MHU_STAT_CoolantLevelStatus() float32( IC_SENSOR.MHU_STAT_CoolantLevelStatus*1+ (0) )
#define get_TEMP_EX() float32( IC_TEMP.TEMP_EX*0.5+ (-40) )
#define get_TEMP_EX_UNFILT() float32( IC_TEMP.TEMP_EX_UNFILT*0.5+ (-40) )
#define get_DISP_HR() float32( MHU_DATE_TIME.DISP_HR*1+ (0) )
#define get_DISP_MN() float32( MHU_DATE_TIME.DISP_MN*1+ (0) )
#define get_DISP_SEC() float32( MHU_DATE_TIME.DISP_SEC*1+ (0) )
#define get_DISP_DATE_DAY() float32( MHU_DATE_TIME.DISP_DATE_DAY*1+ (0) )
#define get_DISP_DATE_MON() float32( MHU_DATE_TIME.DISP_DATE_MON*1+ (0) )
#define get_DISP_DATE_WDAY() float32( MHU_DATE_TIME.DISP_DATE_WDAY*1+ (0) )
#define get_DISP_DATE_YR() float32( MHU_DATE_TIME.DISP_DATE_YR*1+ (0) )
#define get_ST_DISP_CTI_DATE() float32( MHU_DATE_TIME.ST_DISP_CTI_DATE*1+ (0) )
#define get_CHKSM_CCU_TEMP_PRESSURE() float32( CCU_TEMP_PRESSURE.CHKSM_CCU_TEMP_PRESSURE*1+ (0) )
#define get_ALV_CCU_TEMP_PRESSURE() float32( CCU_TEMP_PRESSURE.ALV_CCU_TEMP_PRESSURE*1+ (0) )
#define get_CCU_Pressure_AC() float32( CCU_TEMP_PRESSURE.CCU_Pressure_AC*1+ (0) )
#define get_CCU_InteriorTemp() float32( CCU_TEMP_PRESSURE.CCU_InteriorTemp*0.5+ (-40) )
#define get_CCU_TempEx_AC() float32( CCU_TEMP_PRESSURE.CCU_TempEx_AC*0.5+ (-40) )
#define get_CCU_EvaporatorTemp() float32( CCU_TEMP_PRESSURE.CCU_EvaporatorTemp*0.5+ (-40) )
#define get_CHSKM_BMS_Insulation() float32( BMS_Insulation.CHSKM_BMS_Insulation*1+ (0) )
#define get_ALV_BMS_Insulation() float32( BMS_Insulation.ALV_BMS_Insulation*1+ (0) )
#define get_BMS_VCU_Insulation_Mon_Sts() float32( BMS_Insulation.BMS_VCU_Insulation_Mon_Sts*1+ (0) )
#define get_BMS_PackInsuRes() float32( BMS_Insulation.BMS_PackInsuRes*1+ (0) )
#define get_Checksum_0x307() float32( BMS_Sensor_Start_Stop_0x307.Checksum_0x307*1+ (0) )
#define get_Rolling_Counter_0x307() float32( BMS_Sensor_Start_Stop_0x307.Rolling_Counter_0x307*1+ (0) )
#define get_BMS_Start_Stop_DM13() float32( BMS_Sensor_Start_Stop_0x307.BMS_Start_Stop_DM13*1+ (0) )
#define get_Checksum_0x308() float32( BMS_Sensor_Output02_0x308.Checksum_0x308*1+ (0) )
#define get_Rolling_Counter_0x308() float32( BMS_Sensor_Output02_0x308.Rolling_Counter_0x308*1+ (0) )
#define get_BMS_SensorSts_H2() float32( BMS_Sensor_Output02_0x308.BMS_SensorSts_H2*1+ (0) )
#define get_BMS_SensorSts_Temperature() float32( BMS_Sensor_Output02_0x308.BMS_SensorSts_Temperature*1+ (0) )
#define get_BMS_H2() float32( BMS_Sensor_Output02_0x308.BMS_H2*0.0025+ (0) )
#define get_BMS__Temperature() float32( BMS_Sensor_Output02_0x308.BMS__Temperature*0.03125+ (-273) )
#define get_Checksum_0x309() float32( BMS_Sensor_Output01_0x309.Checksum_0x309*1+ (0) )
#define get_Rolling_Counter_0x309() float32( BMS_Sensor_Output01_0x309.Rolling_Counter_0x309*1+ (0) )
#define get_BMS_SensorSts_Humidity() float32( BMS_Sensor_Output01_0x309.BMS_SensorSts_Humidity*1+ (0) )
#define get_BMS_SensorSts_Pressure() float32( BMS_Sensor_Output01_0x309.BMS_SensorSts_Pressure*1+ (0) )
#define get_BMS_Humidity() float32( BMS_Sensor_Output01_0x309.BMS_Humidity*0.4+ (0) )
#define get_BMS_Pressure() float32( BMS_Sensor_Output01_0x309.BMS_Pressure*0.0078125+ (-250) )
#define get_BMS_SensorSts_Voltage_Level() float32( BMS_Sensor_Output01_0x309.BMS_SensorSts_Voltage_Level*1+ (0) )
#define get_BMS_SensorSts_Reserved() float32( BMS_Sensor_Output01_0x309.BMS_SensorSts_Reserved*1+ (0) )
#define get_BMS_SensorSts_Internal_Temp() float32( BMS_Sensor_Output01_0x309.BMS_SensorSts_Internal_Temp*1+ (0) )
#define get_BMS_SensorSts_Brown_Out_Recovery() float32( BMS_Sensor_Output01_0x309.BMS_SensorSts_Brown_Out_Recovery*1+ (0) )
#define get_Checksum_0x315() float32( BMS_Sensor_Config_0x315.Checksum_0x315*1+ (0) )
#define get_BMS_Config_Number_Of_byte() float32( BMS_Sensor_Config_0x315.BMS_Config_Number_Of_byte*1+ (0) )
#define get_BMS_Config_Read_Write() float32( BMS_Sensor_Config_0x315.BMS_Config_Read_Write*1+ (0) )
#define get_BMS_Config_Address() float32( BMS_Sensor_Config_0x315.BMS_Config_Address*1+ (0) )
#define get_BMS_Config_Data() float32( BMS_Sensor_Config_0x315.BMS_Config_Data*1+ (0) )
#define get_Checksum_0x316() float32( BMS_Sensor_Read_Config_0x316.Checksum_0x316*1+ (0) )
#define get_BMS_Read_Config_Number_Of_byte() float32( BMS_Sensor_Read_Config_0x316.BMS_Read_Config_Number_Of_byte*1+ (0) )
#define get_BMS_Read_Config_Address() float32( BMS_Sensor_Read_Config_0x316.BMS_Read_Config_Address*1+ (0) )
#define get_BMS_Read_Config_Data() float32( BMS_Sensor_Read_Config_0x316.BMS_Read_Config_Data*1+ (0) )
#define get_Checksum_0x330() float32( BMS_HistData.Checksum_0x330*1+ (0) )
#define get_Rolling_Counter_0x330() float32( BMS_HistData.Rolling_Counter_0x330*1+ (0) )
#define get_BMS_ContactorAging() float32( BMS_HistData.BMS_ContactorAging*1+ (0) )
#define get_Checksum_0x332() float32( BMS_PackInfo.Checksum_0x332*1+ (0) )
#define get_Rolling_Counter_0x332() float32( BMS_PackInfo.Rolling_Counter_0x332*1+ (0) )
#define get_BMS_PackCNom() float32( BMS_PackInfo.BMS_PackCNom*0.1+ (0) )
#define get_BMS_PackTemp_0x332() float32( BMS_PackInfo.BMS_PackTemp_0x332*1+ (-40) )
#define get_BMS_SOHc() float32( BMS_PackInfo.BMS_SOHc*1+ (0) )
#define get_BMS_SOHr() float32( BMS_PackInfo.BMS_SOHr*1+ (0) )
#define get_SECCAN_BMS_PackInfo() float32( BMS_PackInfo.SECCAN_BMS_PackInfo*1+ (0) )
#define get_Checksum_0x375() float32( BMS_Relay.Checksum_0x375*1+ (0) )
#define get_Rolling_Counter_0x375() float32( BMS_Relay.Rolling_Counter_0x375*1+ (0) )
#define get_BMS_PreChgRelay_ERR() float32( BMS_Relay.BMS_PreChgRelay_ERR*1+ (0) )
#define get_BMS_TotalNegRelay_ERR() float32( BMS_Relay.BMS_TotalNegRelay_ERR*1+ (0) )
#define get_BMS_MainPosRelay_ERR() float32( BMS_Relay.BMS_MainPosRelay_ERR*1+ (0) )
#define get_BMS_MainPosRelay_STS() float32( BMS_Relay.BMS_MainPosRelay_STS*1+ (0) )
#define get_BMS_PreChgRelay_STS() float32( BMS_Relay.BMS_PreChgRelay_STS*1+ (0) )
#define get_BMS_TotalNegRelay_STS() float32( BMS_Relay.BMS_TotalNegRelay_STS*1+ (0) )
#define get_VIN_Byte1() float32( BCM_VEHICLE_IDENT_NUMBER.VIN_Byte1*1+ (0) )
#define get_VIN_Byte2() float32( BCM_VEHICLE_IDENT_NUMBER.VIN_Byte2*1+ (0) )
#define get_VIN_Byte3() float32( BCM_VEHICLE_IDENT_NUMBER.VIN_Byte3*1+ (0) )
#define get_VIN_Byte4() float32( BCM_VEHICLE_IDENT_NUMBER.VIN_Byte4*1+ (0) )
#define get_VIN_Byte5() float32( BCM_VEHICLE_IDENT_NUMBER.VIN_Byte5*1+ (0) )
#define get_VIN_Byte6() float32( BCM_VEHICLE_IDENT_NUMBER.VIN_Byte6*1+ (0) )
#define get_VIN_Byte7() float32( BCM_VEHICLE_IDENT_NUMBER.VIN_Byte7*1+ (0) )
#define get_CRC_VCU_HMI_Info() float32( VCU_HMI_Info.CRC_VCU_HMI_Info*1+ (0) )
#define get_ALIV_VCU_HMI_Info() float32( VCU_HMI_Info.ALIV_VCU_HMI_Info*1+ (0) )
#define get_VCU_MHU_Ack_TargetSOC() float32( VCU_HMI_Info.VCU_MHU_Ack_TargetSOC*1+ (0) )
#define get_MHU_FOTA_Checksum() float32( MHU_FOTA_STATUS.MHU_FOTA_Checksum*1+ (0) )
#define get_MHU_FOTA_Alive_Counter() float32( MHU_FOTA_STATUS.MHU_FOTA_Alive_Counter*1+ (0) )
#define get_MHU_FOTA_State() float32( MHU_FOTA_STATUS.MHU_FOTA_State*1+ (0) )
#define get_MHU_FOTA_Error_Code() float32( MHU_FOTA_STATUS.MHU_FOTA_Error_Code*1+ (0) )
#define get_Checksum_0x455() float32( BMS_ERROR.Checksum_0x455*1+ (0) )
#define get_Rolling_Counter_0x455() float32( BMS_ERROR.Rolling_Counter_0x455*1+ (0) )
#define get_BMS_CellLowVol_ERR() float32( BMS_ERROR.BMS_CellLowVol_ERR*1+ (0) )
#define get_BMS_HVIL_Err() float32( BMS_ERROR.BMS_HVIL_Err*1+ (0) )
#define get_BMS_PackInsu_ERR() float32( BMS_ERROR.BMS_PackInsu_ERR*1+ (0) )
#define get_BMS_CellVoltDiff_ERR() float32( BMS_ERROR.BMS_CellVoltDiff_ERR*1+ (0) )
#define get_BMS_ProbeTempDiff_ERR() float32( BMS_ERROR.BMS_ProbeTempDiff_ERR*1+ (0) )
#define get_BMS_PackHighVol_ERR() float32( BMS_ERROR.BMS_PackHighVol_ERR*1+ (0) )
#define get_BMS_PackLowVol_ERR() float32( BMS_ERROR.BMS_PackLowVol_ERR*1+ (0) )
#define get_BMS_CellHighVol_ERR() float32( BMS_ERROR.BMS_CellHighVol_ERR*1+ (0) )
#define get_BMS_ProbeHighTemp_ERR() float32( BMS_ERROR.BMS_ProbeHighTemp_ERR*1+ (0) )
#define get_BMS_FuseStatus_ERR() float32( BMS_ERROR.BMS_FuseStatus_ERR*1+ (0) )
#define get_BMS_PackOverCurr_ERR() float32( BMS_ERROR.BMS_PackOverCurr_ERR*1+ (0) )
#define get_BMS_ProbeLowTemp_ERR() float32( BMS_ERROR.BMS_ProbeLowTemp_ERR*1+ (0) )
#define get_CHSKM_BMS_WarnMsg() float32( BMS_WarnMsg.CHSKM_BMS_WarnMsg*1+ (0) )
#define get_ALV_BMS_WarnMsg() float32( BMS_WarnMsg.ALV_BMS_WarnMsg*1+ (0) )
#define get_BMS_PackTempSts() float32( BMS_WarnMsg.BMS_PackTempSts*1+ (0) )
#define get_BMS_ThermalRunaway() float32( BMS_WarnMsg.BMS_ThermalRunaway*1+ (0) )
#define get_BMS_BatteryReplacement() float32( BMS_WarnMsg.BMS_BatteryReplacement*1+ (0) )
#define get_BMS_Warning_PowerDegrade() float32( BMS_WarnMsg.BMS_Warning_PowerDegrade*1+ (0) )
#define get_BMS_Warning_DeltaSoC() float32( BMS_WarnMsg.BMS_Warning_DeltaSoC*1+ (0) )
#define get_BMS_Warning_HVILSts() float32( BMS_WarnMsg.BMS_Warning_HVILSts*1+ (0) )
#define get_BMS_Warning_Isolation() float32( BMS_WarnMsg.BMS_Warning_Isolation*1+ (0) )
#define get_BMS_Warning_CoolantLeakage() float32( BMS_WarnMsg.BMS_Warning_CoolantLeakage*1+ (0) )
#define get_BMS_MalfunctionSts() float32( BMS_WarnMsg.BMS_MalfunctionSts*1+ (0) )
#define get_BMS_LowBattery() float32( BMS_WarnMsg.BMS_LowBattery*1+ (0) )
#define get_BMS_Warning_DeltaTemperature() float32( BMS_WarnMsg.BMS_Warning_DeltaTemperature*1+ (0) )
#define get_BMS_Warning_BDUTemperatureSts() float32( BMS_WarnMsg.BMS_Warning_BDUTemperatureSts*1+ (0) )
#define get_BMS_Reserved_signal3() float32( BMS_WarnMsg.BMS_Reserved_signal3*1+ (0) )
#define get_BMS_Reserved_signal4() float32( BMS_WarnMsg.BMS_Reserved_signal4*1+ (0) )
#define get_BMS_Reserved_signal5() float32( BMS_WarnMsg.BMS_Reserved_signal5*1+ (0) )
#define get_XGW_srcNodeID() float32( XGW_NM.XGW_srcNodeID*1+ (0) )
#define get_XGW_CtrlBitVector() float32( XGW_NM.XGW_CtrlBitVector*1+ (0) )
#define get_XGW_usrData0() float32( XGW_NM.XGW_usrData0*1+ (0) )
#define get_XGW_usrData1() float32( XGW_NM.XGW_usrData1*1+ (0) )
#define get_XGW_usrData2() float32( XGW_NM.XGW_usrData2*1+ (0) )
#define get_XGW_usrData3() float32( XGW_NM.XGW_usrData3*1+ (0) )
#define get_XGW_usrData4() float32( XGW_NM.XGW_usrData4*1+ (0) )
#define get_XGW_usrData5() float32( XGW_NM.XGW_usrData5*1+ (0) )
#define get_BMS_srcNodeID() float32( BMS_NM.BMS_srcNodeID*1+ (0) )
#define get_BMS_CtrlBitVector() float32( BMS_NM.BMS_CtrlBitVector*1+ (0) )
#define get_BMS_usrData0() float32( BMS_NM.BMS_usrData0*1+ (0) )
#define get_BMS_usrData1() float32( BMS_NM.BMS_usrData1*1+ (0) )
#define get_BMS_usrData2() float32( BMS_NM.BMS_usrData2*1+ (0) )
#define get_BMS_usrData3() float32( BMS_NM.BMS_usrData3*1+ (0) )
#define get_BMS_usrData4() float32( BMS_NM.BMS_usrData4*1+ (0) )
#define get_BMS_usrData5() float32( BMS_NM.BMS_usrData5*1+ (0) )
#define get_BMS_DiagRespData0() float32( BMS_DiagResp.BMS_DiagRespData0*1+ (0) )
#define get_BMS_DiagRespData1() float32( BMS_DiagResp.BMS_DiagRespData1*1+ (0) )
#define get_BMS_DiagRespData2() float32( BMS_DiagResp.BMS_DiagRespData2*1+ (0) )
#define get_BMS_DiagRespData3() float32( BMS_DiagResp.BMS_DiagRespData3*1+ (0) )
#define get_BMS_DiagRespData4() float32( BMS_DiagResp.BMS_DiagRespData4*1+ (0) )
#define get_BMS_DiagRespData5() float32( BMS_DiagResp.BMS_DiagRespData5*1+ (0) )
#define get_BMS_DiagRespData6() float32( BMS_DiagResp.BMS_DiagRespData6*1+ (0) )
#define get_BMS_DiagRespData7() float32( BMS_DiagResp.BMS_DiagRespData7*1+ (0) )
#define get_BMS_DiagReqData0() float32( BMS_DiagReq.BMS_DiagReqData0*1+ (0) )
#define get_BMS_DiagReqData1() float32( BMS_DiagReq.BMS_DiagReqData1*1+ (0) )
#define get_BMS_DiagReqData2() float32( BMS_DiagReq.BMS_DiagReqData2*1+ (0) )
#define get_BMS_DiagReqData3() float32( BMS_DiagReq.BMS_DiagReqData3*1+ (0) )
#define get_BMS_DiagReqData4() float32( BMS_DiagReq.BMS_DiagReqData4*1+ (0) )
#define get_BMS_DiagReqData5() float32( BMS_DiagReq.BMS_DiagReqData5*1+ (0) )
#define get_BMS_DiagReqData6() float32( BMS_DiagReq.BMS_DiagReqData6*1+ (0) )
#define get_BMS_DiagReqData7() float32( BMS_DiagReq.BMS_DiagReqData7*1+ (0) )
#define get_DiagReqAllCANData0() float32( DIAG_Req_All_CAN.DiagReqAllCANData0*1+ (0) )
#define get_DiagReqAllCANData1() float32( DIAG_Req_All_CAN.DiagReqAllCANData1*1+ (0) )
#define get_DiagReqAllCANData2() float32( DIAG_Req_All_CAN.DiagReqAllCANData2*1+ (0) )
#define get_DiagReqAllCANData3() float32( DIAG_Req_All_CAN.DiagReqAllCANData3*1+ (0) )
#define get_DiagReqAllCANData4() float32( DIAG_Req_All_CAN.DiagReqAllCANData4*1+ (0) )
#define get_DiagReqAllCANData5() float32( DIAG_Req_All_CAN.DiagReqAllCANData5*1+ (0) )
#define get_DiagReqAllCANData6() float32( DIAG_Req_All_CAN.DiagReqAllCANData6*1+ (0) )
#define get_DiagReqAllCANData7() float32( DIAG_Req_All_CAN.DiagReqAllCANData7*1+ (0) )
#define get_DiagReqAllEcuData0() float32( DIAG_Req_All_Ecu.DiagReqAllEcuData0*1+ (0) )
#define get_DiagReqAllEcuData1() float32( DIAG_Req_All_Ecu.DiagReqAllEcuData1*1+ (0) )
#define get_DiagReqAllEcuData2() float32( DIAG_Req_All_Ecu.DiagReqAllEcuData2*1+ (0) )
#define get_DiagReqAllEcuData3() float32( DIAG_Req_All_Ecu.DiagReqAllEcuData3*1+ (0) )
#define get_DiagReqAllEcuData4() float32( DIAG_Req_All_Ecu.DiagReqAllEcuData4*1+ (0) )
#define get_DiagReqAllEcuData5() float32( DIAG_Req_All_Ecu.DiagReqAllEcuData5*1+ (0) )
#define get_DiagReqAllEcuData6() float32( DIAG_Req_All_Ecu.DiagReqAllEcuData6*1+ (0) )
#define get_DiagReqAllEcuData7() float32( DIAG_Req_All_Ecu.DiagReqAllEcuData7*1+ (0) )
#define get_SEED_CAN_Req12() float32( SEED_CAN_Req12_VCU_BA.SEED_CAN_Req12*1+ (0) )
#define get_SEED_CAN_Req24() float32( SEED_CAN_Req24_BMS.SEED_CAN_Req24*1+ (0) )
#define get_BMS_XCPTxData() float32( BMS_XCPTx.BMS_XCPTxData*1+ (0) )
#define get_BMS_XCPRxData() float32( BMS_XCPRx.BMS_XCPRxData*1+ (0) )
#define get_Diag_Request_ECU_Data0() float32( Diag_Request_ECU.Diag_Request_ECU_Data0*1+ (0) )
#define get_Diag_Request_ECU_Data1() float32( Diag_Request_ECU.Diag_Request_ECU_Data1*1+ (0) )
#define get_Diag_Request_ECU_Data2() float32( Diag_Request_ECU.Diag_Request_ECU_Data2*1+ (0) )
#define get_Diag_Request_ECU_Data3() float32( Diag_Request_ECU.Diag_Request_ECU_Data3*1+ (0) )
#define get_Diag_Request_ECU_Data4() float32( Diag_Request_ECU.Diag_Request_ECU_Data4*1+ (0) )
#define get_Diag_Request_ECU_Data5() float32( Diag_Request_ECU.Diag_Request_ECU_Data5*1+ (0) )
#define get_Diag_Request_ECU_Data6() float32( Diag_Request_ECU.Diag_Request_ECU_Data6*1+ (0) )
#define get_Diag_Request_ECU_Data7() float32( Diag_Request_ECU.Diag_Request_ECU_Data7*1+ (0) )


#set macros

typedef struct {
	uint8 CHKSM_CRASH_Sts : 8 ;
	uint8 ALV_CRASH_Sts : 4 ;
	uint8 NoUsedBits1 : 5 ;
	uint8 ACM_Crash_Sts : 2 ;
	uint8 ACM_Airbag_Deployment_Status : 2 ;
	uint8 ACM_Crash_Intensity : 3 ;
	uint8 ACM_Front_Crash : 2 ;
	uint8 ACM_DriverSide_Crash : 2 ;
	uint8 ACM_PassSide_Crash : 2 ;
	uint8 ACM_Rear_Crash : 2 ;
	uint8 ACM_Rollover_Crash : 2 ;
} ACM_CRASH_INFO ;


typedef struct {
	uint8 CHKSM_BCM_VOLTAGE : 8 ;
	uint8 ALIVE_BCM_VOLTAGE : 4 ;
	uint16 UBatt : 14 ;
	uint8 NoUsedBits1 : 8 ;
	uint8 LV_Batt_Temp : 8 ;
	uint8 LV_SOC : 8 ;
	uint16 LV_Batt_Current : 16 ;
} BCM_VOLTAGE ;


typedef struct {
	uint8 CHKSM_BCM_CLAMP_STAT : 8 ;
	uint8 ALIVE_BCM_CLAMP_STAT : 4 ;
	uint8 RemoteFunctionState : 2 ;
	uint8 STAT_BLS : 2 ;
	uint8 STAT_CL_50_L : 2 ;
	uint8 Clamp50AdviceRemoteStart : 2 ;
	uint8 Clamp50AdviceESS : 2 ;
	uint8 NoUsedBits1 : 2 ;
	uint8 STAT_CL_R_L : 2 ;
	uint8 STAT_CL_15_1_L : 2 ;
	uint8 STAT_CL_15_1_DME_L : 2 ;
	uint8 FobId : 2 ;
	uint8 STAT_Terminal : 3 ;
	uint8 STAT_CL30_C_BEV : 2 ;
	uint8 BCM_Clamp_Transport : 3 ;
} BCM_CLAMP_STAT ;


typedef struct {
	uint8 CHKSM_ACChargingInfo : 8 ;
	uint8 ALIVE_ACChargingInfo : 4 ;
	uint8 NoUsedBits1 : 2 ;
	uint16 ACCharging_MaxChargingPower : 10 ;
	uint16 CurrentACChargingPower : 16 ;
	uint16 ACCharging_MaxCurrent : 16 ;
} VCU_ACCharging_Info ;


typedef struct {
	uint8 CHKSM_DCChargingInfo : 8 ;
	uint8 ALIVE_DCChargingInfo : 4 ;
	uint8 NoUsedBits1 : 2 ;
	uint16 DCCharging_MaxChargingPower : 10 ;
	uint16 CurrentDCChargingPower : 16 ;
	uint16 DCCharging_MaxCurrent : 16 ;
} VCU_DCCharging_Info ;


typedef struct {
	uint8 Checksum_0x125 : 8 ;
	uint8 Rolling_Counter_0x125 : 4 ;
	uint16 BMS_AllowDischgCurr : 16 ;
	uint16 BMS_AllowDischgCurrPeak : 16 ;
	uint16 NoUsedBits1 : 16 ;
	uint8 SECCAN_BMS_AllowDischargeCurr : 8 ;
} BMS_AllowDischargeCurr ;


typedef struct {
	uint8 Checksum_0x126 : 8 ;
	uint8 Rolling_Counter_0x126 : 4 ;
	uint16 BMS_AllowChgCurr : 16 ;
	uint16 BMS_AllowChgCurrPeak : 16 ;
	uint16 NoUsedBits1 : 16 ;
	uint8 SECCAN_BMS_AllowChargeCurr : 8 ;
} BMS_AllowChargeCurr ;


typedef struct {
	uint8 Checksum_0x127 : 8 ;
	uint8 Rolling_Counter_0x127 : 4 ;
	uint16 BMS_AllowDischgCurrAvg : 16 ;
} BMS_AllowDischgCurrAvg ;


typedef struct {
	uint8 CHSKM_VCU_ChargingConnection : 8 ;
	uint8 ALV_VCU_ChargingConnection : 4 ;
	uint8 VCU_AcChgGunIn : 1 ;
	uint8 VCU_DCChgGunIn : 1 ;
} VCU_ChargingConnection ;


typedef struct {
	uint8 CHSKM_BMS_CurMeas : 8 ;
	uint8 ALV_BMS_CurMeas : 4 ;
	uint8 NoUsedBits1 : 3 ;
	uint8 BMS_StartOfMeasument_STS : 1 ;
	uint16 BMS_PackCur_MEAS : 16 ;
} BMS_CurMeas ;


typedef struct {
	uint8 Checksum_0x176 : 8 ;
	uint8 Rolling_Counter_0x176 : 4 ;
	uint16 BMS_HVPackVol_MEAS : 16 ;
	uint16 BMS_HVLinkVol_MEAS : 16 ;
} BMS_HVMeas1 ;


typedef struct {
	uint8 Checksum_0x177 : 8 ;
	uint8 Rolling_Counter_0x177 : 4 ;
	uint16 BMS_HVBusVol_MEAS : 16 ;
	uint16 BMS_HVFuseVol_MEAS : 16 ;
} BMS_HVMeas2 ;


typedef struct {
	uint8 CHSKM_VCU_Sts1 : 8 ;
	uint8 ALV_VCU_Sts1 : 4 ;
	uint8 NoUsedBits1 : 6 ;
	uint8 VCU_BMS_HVOnOff_REQ : 2 ;
} VCU_Sts1 ;


typedef struct {
	uint8 CHSKM_V_VEH : 8 ;
	uint8 ALIV_V_VEH : 4 ;
	uint16 V_VEH_COG : 16 ;
	uint16 NoUsedBits1 : 9 ;
	uint8 DVCO_VEH : 3 ;
	uint8 QU_V_VEH_COG : 4 ;
} IDB_V_VEH ;


typedef struct {
	uint8 CHKSM_EDS_OutPut_FR : 8 ;
	uint8 ALV_EDS_OutPut_FR : 4 ;
	uint8 EDS_Work_STS_FR : 4 ;
	uint16 EDS_Spd_FR : 16 ;
	uint8 NoUsedBits1 : 8 ;
	uint8 EDS_output_trqValid_FR : 2 ;
	uint8 EDS_MotorDriveSts_FR : 2 ;
	uint8 EDS_powoff_req_FR : 2 ;
	uint8 EDS_SpdValid_FR : 2 ;
	uint16 EDS_output_trq_FR : 16 ;
	uint16 NoUsedBits2 : 14 ;
	uint8 EDS_VCU_6SO_flag_FWD : 2 ;
} EDS_OutPut_FR ;


typedef struct {
	uint8 CHKSM_EDS_OutPut_RR : 8 ;
	uint8 ALV_EDS_OutPut_RR : 4 ;
	uint8 EDS_Work_STS_RR : 4 ;
	uint16 EDS_Spd_RR : 16 ;
	uint8 NoUsedBits1 : 8 ;
	uint8 EDS_output_trqValid_RR : 2 ;
	uint8 EDS_MotorDriveSts_RR : 2 ;
	uint8 EDS_powoff_req_RR : 2 ;
	uint8 EDS_SpdValid_RR : 2 ;
	uint16 EDS_output_trq_RR : 16 ;
	uint16 NoUsedBits2 : 14 ;
	uint8 EDS_VCU_6SO_flag_RWD : 2 ;
} EDS_OutPut_RR ;


typedef struct {
	uint8 Checksum_0x205 : 8 ;
	uint8 Rolling_Counter_0x205 : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 BMS_CellNumMinCellVol : 8 ;
	uint8 BMS_CellNumMaxCellVol : 8 ;
	uint16 BMS_MinCellVol : 13 ;
	uint8 NoUsedBits2 : 3 ;
	uint16 BMS_MaxCellVol : 13 ;
} BMS_VolMeas1 ;


typedef struct {
	uint8 Checksum_0x206 : 8 ;
	uint8 Rolling_Counter_0x206 : 4 ;
	uint16 BMS_MaxMinDiffCellVol : 13 ;
	uint64 NoUsedBits1 : 35 ;
	uint8 SECCAN_BMS_VolMeas2 : 8 ;
} BMS_VolMeas2 ;


typedef struct {
	uint8 Checksum_0x209 : 8 ;
	uint8 Rolling_Counter_0x209 : 4 ;
	uint16 BMS_MaxDischgPwr_ALW : 12 ;
	uint16 BMS_MaxChgPwr_ALW : 12 ;
	uint8 NoUsedBits1 : 8 ;
	uint16 BMS_MaxDischgPwr_Peak : 12 ;
	uint16 BMS_MaxChgPwr_Peak : 12 ;
} BMS_PowerCont ;


typedef struct {
	uint8 CHKSM_IC_ODO : 8 ;
	uint8 ALIV_IC_ODO : 4 ;
	uint32 MHU_Odometer_IC : 20 ;
} IC_ODO ;


typedef struct {
	uint8 Checksum_0x213 : 8 ;
	uint8 Rolling_Counter_0x213 : 4 ;
	uint16 BMS_AvgDischgPwr_ALW : 12 ;
} BMS_PowerAvg ;


typedef struct {
	uint8 Checksum_0x214 : 8 ;
	uint8 Rolling_Counter_0x214 : 4 ;
	uint16 BMS_Display_SOC : 10 ;
	uint16 BMS_MinCellSOC : 10 ;
	uint16 BMS_MaxCellSOC : 10 ;
	uint16 NoUsedBits1 : 14 ;
	uint8 BMS_ProbeNumMaxCellSOC : 8 ;
	uint8 BMS_ProbeNumMinCellSOC : 8 ;
} BMS_Sts_0x214 ;


typedef struct {
	uint8 Checksum_0x215 : 8 ;
	uint8 Rolling_Counter_0x215 : 4 ;
	uint8 BMS_BatBalance_ERR : 1 ;
	uint8 BMS_Balance_STS : 1 ;
	uint8 BMS_IGN_Sts : 1 ;
	uint8 BMS_HWCrash_Sts : 1 ;
	uint8 BMS_HVIL_STS : 2 ;
	uint8 BMS_HVOnOff_STS : 2 ;
	uint8 BMS_ERR_LEV : 4 ;
	uint16 BMS_SocActual_EST : 10 ;
	uint8 BMS_Sys_STS : 4 ;
	uint8 BMS_ISU_Status : 2 ;
	uint8 NoUsedBits1 : 8 ;
	uint8 BMS_SOH : 8 ;
	uint8 BMS_SOE : 8 ;
	uint8 BMS_HV_Sts : 8 ;
} BMS_Sts ;


typedef struct {
	uint8 Checksum_0x216 : 8 ;
	uint8 Rolling_Counter_0x216 : 4 ;
	uint16 BMS_RemainChargeTime : 14 ;
	uint8 NoUsedBits1 : 2 ;
	uint16 BMS_ChgVoltage_REQ : 14 ;
	uint8 NoUsedBits2 : 2 ;
	uint16 BMS_ChgCurrent_REQ : 16 ;
} BMS_ChgParamReq ;


typedef struct {
	uint8 CHSKM_VCU_BMS_Information : 8 ;
	uint8 ALIV_VCU_BMS_Information : 4 ;
	uint8 VCU_DCChargeRelayP : 1 ;
	uint8 VCU_DCChargeRelayN : 1 ;
	uint8 VCU_BMS_Insulation_Mon_Req : 1 ;
} VCU_BMS_Information ;


typedef struct {
	uint8 CHSKM_VCU_PTControl : 8 ;
	uint8 ALV_VCU_PTControl : 4 ;
	uint64 NoUsedBits1 : 42 ;
	uint8 VCU_ChargeAllow : 1 ;
} VCU_PTControl ;


typedef struct {
	uint8 CHSKM_VCU_BMS_Thermal_FB : 8 ;
	uint8 ALIV_VCU_BMS_Thermal_FB : 4 ;
	uint8 VCU_BMS_PTCOnOff_Sts : 1 ;
	uint8 VCU_BMS_ValveOnOff_Sts : 1 ;
	uint8 NoUsedBits1 : 2 ;
	uint8 VCU_BMS_PumpFB : 3 ;
} VCU_BMS_Thermal_FB ;


typedef struct {
	uint8 Checksum_0x225 : 8 ;
	uint8 Rolling_Counter_0x225 : 4 ;
	uint8 CDM_bAcvCanComStblMon : 1 ;
	uint8 FRMo_bErrHvbatStReqExtMon : 1 ;
	uint8 FRMo_bErrChrgnAllwdExtMon : 1 ;
	uint8 FRMo_bErrVehCrashStExtMon : 1 ;
	uint8 CDM_bErrComctnLossCanMon : 1 ;
	uint8 CTCMon_bErrCtctrSopcMon : 1 ;
	uint8 CTCMon_bInvldCtctrHisdIFbMon : 1 ;
	uint8 CTCMon_bInvldCtctrLosdUFbMon : 1 ;
	uint8 CTM_bErrCellTDifMaxMon : 1 ;
	uint8 CTM_bErrCellTMaxMon : 1 ;
	uint8 CTM_bErrCellTMinMon : 1 ;
	uint8 CTM_bErrThrwyPredMon : 1 ;
	uint8 CUM_bErrCellUDifMaxMon : 1 ;
	uint8 CUM_bErrCellUMaxMon : 1 ;
	uint8 CUM_bErrCellUMinMon : 1 ;
	uint8 CUM_bErrCellUProtnMaxNvMon : 1 ;
	uint8 CUM_bErrCellUProtnMinNvMon : 1 ;
	uint8 CUM_bErrPackUImplyMon : 1 ;
	uint8 EHPMon_bRdyHvilMon : 1 ;
	uint8 EHPMon_bErrWlddNegNvMon : 1 ;
	uint8 EHPMon_bErrWlddPosNvMon : 1 ;
	uint8 EHPMon_bErrWlddPrechNvMon : 1 ;
	uint8 EHPMon_bErrHvilMon : 1 ;
	uint8 EHPMon_bErrHvilShoMon : 1 ;
	uint8 EHPMon_bErrPackIslnRNvMon : 1 ;
	uint8 EHPMon_bErrVehCrashNvMon : 1 ;
	uint8 EHPMon_bErrVehIslnRNvMon : 1 ;
	uint8 FRMo_bErrMemStorgNvMon : 1 ;
	uint8 L1IM_bErrClmp30MaxMonInp : 1 ;
	uint8 L1IM_bErrClmp30MinMonInp : 1 ;
	uint8 L1IM_bErrCtctrDtrtMonInp : 1 ;
	uint8 L1IM_bErrUActImplyMonInp : 1 ;
	uint8 MCCM_bAcvMdulCtlrStsMon : 1 ;
	uint8 MCCM_bErrLntecSngFltMon : 1 ;
	uint8 MCCM_bErrLntecLtntFltMon : 1 ;
	uint8 MCCM_bErrMdulCellSnsrCfgMon : 1 ;
	uint8 MCCM_bErrMdulCtlrComMon : 1 ;
	uint8 MCCM_bErrSnsrTEltlMon : 1 ;
	uint8 MCCM_bWarnSnsrTEltlMon : 1 ;
	uint8 PCM_bRdySnsrIMon : 1 ;
	uint8 PCM_bErrPackEFlowMaxLimMon : 1 ;
	uint8 PCM_bErrPackIChDchaMaxLimMon : 1 ;
	uint8 PCM_bErrSnsrIImplyMon : 1 ;
	uint8 FRMo_bErrSnsrI1ExtMon : 1 ;
	uint8 PCM_bInvldSnsrI1Mon : 1 ;
	uint8 PCM_bInvldSnsrI2Mon : 1 ;
	uint8 FRMo_bErrSopcLvl3Mon : 1 ;
	uint8 BMS_FRMo_Reserved_1 : 1 ;
	uint8 BMS_FRMo_Reserved_2 : 1 ;
	uint8 BMS_FRMo_Reserved_3 : 1 ;
	uint8 BMS_FRMo_Reserved_4 : 1 ;
	uint8 BMS_FRMo_Reserved_5 : 1 ;
} BMS_FaultMgr_0x225 ;


typedef struct {
	uint8 Checksum_0x226 : 8 ;
	uint8 Rolling_Counter_0x226 : 4 ;
	uint8 BMS_QMMo_Reserved_0 : 1 ;
	uint8 BMS_QMMo_Reserved_1 : 1 ;
	uint8 BMS_QMMo_Reserved_2 : 1 ;
	uint8 BMS_QMMo_Reserved_3 : 1 ;
	uint8 BMS_QMMo_Reserved_4 : 1 ;
	uint8 BMS_QMMo_Reserved_5 : 1 ;
	uint8 BMS_QMMo_Reserved_6 : 1 ;
	uint8 BMS_QMMo_Reserved_7 : 1 ;
	uint8 BMS_QMMo_Reserved_8 : 1 ;
	uint8 BMS_QMMo_Reserved_9 : 1 ;
	uint8 BMS_QMMo_Reserved_10 : 1 ;
	uint8 BMS_QMMo_Reserved_11 : 1 ;
	uint16 CDEM_ErrDisp_0 : 16 ;
	uint16 CDEM_ErrDisp_1 : 16 ;
} BMS_QMMgr_0x226 ;


typedef struct {
	uint32 BMS_Capacity_Thrput_Charge : 32 ;
	uint32 BMS_Capacity_Thrput_Discharge : 32 ;
} BMS_CapacityThrput ;


typedef struct {
	uint8 Checksum_0x245 : 8 ;
	uint8 Rolling_Counter_0x245 : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 BMS_ProbeNumMaxCellTemp : 6 ;
	uint8 NoUsedBits2 : 2 ;
	uint8 BMS_MinCellTemp : 8 ;
	uint8 BMS_ProbeNumMinCellTemp : 6 ;
	uint8 NoUsedBits3 : 2 ;
	uint8 BMS_PackTemp : 8 ;
	uint8 BMS_MaxCellTemp : 8 ;
	uint8 BMS_MaxMinDiffCellTemp : 8 ;
} BMS_CellTemp ;


typedef struct {
	uint8 Checksum_0x246 : 8 ;
	uint8 Rolling_Counter_0x246 : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 BMS_CellTemp_Avg : 8 ;
	uint8 BMS_CellTemp_StdDev : 8 ;
	uint16 BMS_CellVol_Avg : 13 ;
	uint8 NoUsedBits2 : 3 ;
	uint16 BMS_CellVol_StdDev : 13 ;
} BMS_CellAverage ;


typedef struct {
	uint8 CHSKM_BMS_VCU_THMReq : 8 ;
	uint8 ALV_BMS_VCU_THMReq : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 BMS_FlowRate_Req : 8 ;
	uint16 BMS_CoolPwrDemand : 12 ;
	uint16 BMS_HeatPwrDemand : 12 ;
	uint16 NoUsedBits2 : 12 ;
	uint8 BMS_VCU_PTCOnOff_Req : 1 ;
	uint8 BMS_VCU_ValveOnOff_Req : 1 ;
} BMS_VCU_THMReq ;


typedef struct {
	uint8 CHSKM_BMS_CoolntInletOutletTmp : 8 ;
	uint8 ALV_BMS_CoolntInletOutletTmp : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 BMS_CoolantInletTemp : 8 ;
	uint8 BMS_CoolantOutletTemp : 8 ;
	uint8 BMS_BDUTemp1 : 8 ;
	uint8 BMS_BDUTemp2 : 8 ;
} BMS_CoolntInletOutletTmp ;


typedef struct {
	uint8 CHKSM_IC_SENSOR : 8 ;
	uint8 ALV_IC_SENSOR : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 MHU_STAT_AmbientTempRaw : 8 ;
	uint8 MHU_STAT_FuelLevel : 8 ;
	uint8 MHU_STAT_AmbientTemp : 8 ;
	uint8 NoUsedBits2 : 6 ;
	uint8 MHU_STAT_CoolantLevelStatus : 2 ;
} IC_SENSOR ;


typedef struct {
	uint8 TEMP_EX : 8 ;
	uint8 TEMP_EX_UNFILT : 8 ;
} IC_TEMP ;


typedef struct {
	uint8 DISP_HR : 8 ;
	uint8 DISP_MN : 8 ;
	uint8 DISP_SEC : 8 ;
	uint8 DISP_DATE_DAY : 8 ;
	uint8 DISP_DATE_MON : 4 ;
	uint8 DISP_DATE_WDAY : 4 ;
	uint16 DISP_DATE_YR : 16 ;
	uint16 NoUsedBits1 : 12 ;
	uint8 ST_DISP_CTI_DATE : 4 ;
} MHU_DATE_TIME ;


typedef struct {
	uint8 CHKSM_CCU_TEMP_PRESSURE : 8 ;
	uint8 ALV_CCU_TEMP_PRESSURE : 4 ;
	uint8 NoUsedBits1 : 6 ;
	uint8 CCU_Pressure_AC : 6 ;
	uint8 CCU_InteriorTemp : 8 ;
	uint8 CCU_TempEx_AC : 8 ;
	uint8 CCU_EvaporatorTemp : 8 ;
} CCU_TEMP_PRESSURE ;


typedef struct {
	uint8 CHSKM_BMS_Insulation : 8 ;
	uint8 ALV_BMS_Insulation : 4 ;
	uint8 NoUsedBits1 : 3 ;
	uint8 BMS_VCU_Insulation_Mon_Sts : 1 ;
	uint16 BMS_PackInsuRes : 16 ;
} BMS_Insulation ;


typedef struct {
	uint8 Checksum_0x307 : 8 ;
	uint8 Rolling_Counter_0x307 : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 BMS_Start_Stop_DM13 : 2 ;
} BMS_Sensor_Start_Stop_0x307 ;


typedef struct {
	uint8 Checksum_0x308 : 8 ;
	uint8 Rolling_Counter_0x308 : 4 ;
	uint8 BMS_SensorSts_H2 : 2 ;
	uint8 BMS_SensorSts_Temperature : 2 ;
	uint16 BMS_H2 : 16 ;
	uint16 BMS__Temperature : 16 ;
} BMS_Sensor_Output02_0x308 ;


typedef struct {
	uint8 Checksum_0x309 : 8 ;
	uint8 Rolling_Counter_0x309 : 4 ;
	uint8 BMS_SensorSts_Humidity : 2 ;
	uint8 BMS_SensorSts_Pressure : 2 ;
	uint8 BMS_Humidity : 8 ;
	uint16 BMS_Pressure : 16 ;
	uint8 NoUsedBits1 : 8 ;
	uint8 BMS_SensorSts_Voltage_Level : 1 ;
	uint8 BMS_SensorSts_Reserved : 1 ;
	uint8 BMS_SensorSts_Internal_Temp : 1 ;
	uint8 BMS_SensorSts_Brown_Out_Recovery : 1 ;
} BMS_Sensor_Output01_0x309 ;


typedef struct {
	uint8 Checksum_0x315 : 8 ;
	uint8 BMS_Config_Number_Of_byte : 8 ;
	uint8 BMS_Config_Read_Write : 8 ;
	uint8 BMS_Config_Address : 8 ;
	uint16 BMS_Config_Data : 16 ;
} BMS_Sensor_Config_0x315 ;


typedef struct {
	uint8 Checksum_0x316 : 8 ;
	uint8 BMS_Read_Config_Number_Of_byte : 8 ;
	uint8 BMS_Read_Config_Address : 8 ;
	uint16 BMS_Read_Config_Data : 16 ;
} BMS_Sensor_Read_Config_0x316 ;


typedef struct {
	uint8 Checksum_0x330 : 8 ;
	uint8 Rolling_Counter_0x330 : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 BMS_ContactorAging : 8 ;
} BMS_HistData ;


typedef struct {
	uint8 Checksum_0x332 : 8 ;
	uint8 Rolling_Counter_0x332 : 4 ;
	uint16 BMS_PackCNom : 16 ;
	uint8 NoUsedBits1 : 8 ;
	uint8 BMS_PackTemp_0x332 : 8 ;
	uint8 BMS_SOHc : 8 ;
	uint8 BMS_SOHr : 8 ;
	uint8 SECCAN_BMS_PackInfo : 8 ;
} BMS_PackInfo ;


typedef struct {
	uint8 Checksum_0x375 : 8 ;
	uint8 Rolling_Counter_0x375 : 4 ;
	uint8 BMS_PreChgRelay_ERR : 1 ;
	uint8 BMS_TotalNegRelay_ERR : 1 ;
	uint8 BMS_MainPosRelay_ERR : 1 ;
	uint8 NoUsedBits1 : 1 ;
	uint8 BMS_MainPosRelay_STS : 3 ;
	uint8 BMS_PreChgRelay_STS : 3 ;
	uint8 NoUsedBits2 : 2 ;
	uint8 BMS_TotalNegRelay_STS : 3 ;
} BMS_Relay ;


typedef struct {
	uint8 VIN_Byte1 : 8 ;
	uint8 VIN_Byte2 : 8 ;
	uint8 VIN_Byte3 : 8 ;
	uint8 VIN_Byte4 : 8 ;
	uint8 VIN_Byte5 : 8 ;
	uint8 VIN_Byte6 : 8 ;
	uint8 VIN_Byte7 : 8 ;
} BCM_VEHICLE_IDENT_NUMBER ;


typedef struct {
	uint8 CRC_VCU_HMI_Info : 8 ;
	uint8 ALIV_VCU_HMI_Info : 4 ;
	uint32 NoUsedBits1 : 21 ;
	uint8 VCU_MHU_Ack_TargetSOC : 7 ;
} VCU_HMI_Info ;


typedef struct {
	uint8 MHU_FOTA_Checksum : 8 ;
	uint8 MHU_FOTA_Alive_Counter : 4 ;
	uint8 MHU_FOTA_State : 4 ;
	uint8 MHU_FOTA_Error_Code : 8 ;
} MHU_FOTA_STATUS ;


typedef struct {
	uint8 Checksum_0x455 : 8 ;
	uint8 Rolling_Counter_0x455 : 4 ;
	uint8 NoUsedBits1 : 4 ;
	uint8 BMS_CellLowVol_ERR : 2 ;
	uint8 BMS_HVIL_Err : 2 ;
	uint8 BMS_PackInsu_ERR : 2 ;
	uint8 BMS_CellVoltDiff_ERR : 2 ;
	uint8 BMS_ProbeTempDiff_ERR : 2 ;
	uint8 BMS_PackHighVol_ERR : 2 ;
	uint8 BMS_PackLowVol_ERR : 2 ;
	uint8 BMS_CellHighVol_ERR : 2 ;
	uint8 BMS_ProbeHighTemp_ERR : 2 ;
	uint8 BMS_FuseStatus_ERR : 2 ;
	uint8 BMS_PackOverCurr_ERR : 2 ;
	uint8 BMS_ProbeLowTemp_ERR : 2 ;
} BMS_ERROR ;


typedef struct {
	uint8 CHSKM_BMS_WarnMsg : 8 ;
	uint8 ALV_BMS_WarnMsg : 4 ;
	uint8 BMS_PackTempSts : 2 ;
	uint8 BMS_ThermalRunaway : 1 ;
	uint8 BMS_BatteryReplacement : 1 ;
	uint8 BMS_Warning_PowerDegrade : 1 ;
	uint8 BMS_Warning_DeltaSoC : 1 ;
	uint8 BMS_Warning_HVILSts : 1 ;
	uint8 BMS_Warning_Isolation : 1 ;
	uint8 BMS_Warning_CoolantLeakage : 1 ;
	uint8 BMS_MalfunctionSts : 1 ;
	uint8 BMS_LowBattery : 2 ;
	uint8 BMS_Warning_DeltaTemperature : 8 ;
	uint8 BMS_Warning_BDUTemperatureSts : 8 ;
	uint8 BMS_Reserved_signal3 : 8 ;
	uint8 BMS_Reserved_signal4 : 8 ;
	uint8 BMS_Reserved_signal5 : 8 ;
} BMS_WarnMsg ;


typedef struct {
	uint8 XGW_srcNodeID : 8 ;
	uint8 XGW_CtrlBitVector : 8 ;
	uint8 XGW_usrData0 : 8 ;
	uint8 XGW_usrData1 : 8 ;
	uint8 XGW_usrData2 : 8 ;
	uint8 XGW_usrData3 : 8 ;
	uint8 XGW_usrData4 : 8 ;
	uint8 XGW_usrData5 : 8 ;
} XGW_NM ;


typedef struct {
	uint8 BMS_srcNodeID : 8 ;
	uint8 BMS_CtrlBitVector : 8 ;
	uint8 BMS_usrData0 : 8 ;
	uint8 BMS_usrData1 : 8 ;
	uint8 BMS_usrData2 : 8 ;
	uint8 BMS_usrData3 : 8 ;
	uint8 BMS_usrData4 : 8 ;
	uint8 BMS_usrData5 : 8 ;
} BMS_NM ;


typedef struct {
	uint8 BMS_DiagRespData0 : 8 ;
	uint8 BMS_DiagRespData1 : 8 ;
	uint8 BMS_DiagRespData2 : 8 ;
	uint8 BMS_DiagRespData3 : 8 ;
	uint8 BMS_DiagRespData4 : 8 ;
	uint8 BMS_DiagRespData5 : 8 ;
	uint8 BMS_DiagRespData6 : 8 ;
	uint8 BMS_DiagRespData7 : 8 ;
} BMS_DiagResp ;


typedef struct {
	uint8 BMS_DiagReqData0 : 8 ;
	uint8 BMS_DiagReqData1 : 8 ;
	uint8 BMS_DiagReqData2 : 8 ;
	uint8 BMS_DiagReqData3 : 8 ;
	uint8 BMS_DiagReqData4 : 8 ;
	uint8 BMS_DiagReqData5 : 8 ;
	uint8 BMS_DiagReqData6 : 8 ;
	uint8 BMS_DiagReqData7 : 8 ;
} BMS_DiagReq ;


typedef struct {
	uint8 DiagReqAllCANData0 : 8 ;
	uint8 DiagReqAllCANData1 : 8 ;
	uint8 DiagReqAllCANData2 : 8 ;
	uint8 DiagReqAllCANData3 : 8 ;
	uint8 DiagReqAllCANData4 : 8 ;
	uint8 DiagReqAllCANData5 : 8 ;
	uint8 DiagReqAllCANData6 : 8 ;
	uint8 DiagReqAllCANData7 : 8 ;
} DIAG_Req_All_CAN ;


typedef struct {
	uint8 DiagReqAllEcuData0 : 8 ;
	uint8 DiagReqAllEcuData1 : 8 ;
	uint8 DiagReqAllEcuData2 : 8 ;
	uint8 DiagReqAllEcuData3 : 8 ;
	uint8 DiagReqAllEcuData4 : 8 ;
	uint8 DiagReqAllEcuData5 : 8 ;
	uint8 DiagReqAllEcuData6 : 8 ;
	uint8 DiagReqAllEcuData7 : 8 ;
} DIAG_Req_All_Ecu ;


typedef struct {
	uint64 SEED_CAN_Req12 : 64 ;
} SEED_CAN_Req12_VCU_BA ;


typedef struct {
	uint64 SEED_CAN_Req24 : 64 ;
} SEED_CAN_Req24_BMS ;


typedef struct {
	uint64 BMS_XCPTxData : 64 ;
} BMS_XCPTx ;


typedef struct {
	uint64 BMS_XCPRxData : 64 ;
} BMS_XCPRx ;


typedef struct {
	uint8 Diag_Request_ECU_Data0 : 8 ;
	uint8 Diag_Request_ECU_Data1 : 8 ;
	uint8 Diag_Request_ECU_Data2 : 8 ;
	uint8 Diag_Request_ECU_Data3 : 8 ;
	uint8 Diag_Request_ECU_Data4 : 8 ;
	uint8 Diag_Request_ECU_Data5 : 8 ;
	uint8 Diag_Request_ECU_Data6 : 8 ;
	uint8 Diag_Request_ECU_Data7 : 8 ;
} Diag_Request_ECU ;



#endif  // FEV_VCU_DATA_H