
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
#define get_MFS_VoiceRecognitionOn_Off() float32( FEV_MFS_Control_Button.MFS_VoiceRecognitionOn_Off*1+ (0) )
#define get_MFS_ISAControl() float32( FEV_MFS_Control_Button.MFS_ISAControl*1+ (0) )
#define get_MFS_CruiseSpeedIncrease() float32( FEV_MFS_Control_Button.MFS_CruiseSpeedIncrease*1+ (0) )
#define get_MFS_TelephoneCall_EndCall() float32( FEV_MFS_Control_Button.MFS_TelephoneCall_EndCall*1+ (0) )
#define get_MFS_LKAControl() float32( FEV_MFS_Control_Button.MFS_LKAControl*1+ (0) )
#define get_MFS_CruiseGapIncrease() float32( FEV_MFS_Control_Button.MFS_CruiseGapIncrease*1+ (0) )
#define get_MFS_CruiseOn_Off() float32( FEV_MFS_Control_Button.MFS_CruiseOn_Off*1+ (0) )
#define get_MFS_CruiseGapDecrease() float32( FEV_MFS_Control_Button.MFS_CruiseGapDecrease*1+ (0) )
#define get_MFS_CruiseCancel() float32( FEV_MFS_Control_Button.MFS_CruiseCancel*1+ (0) )
#define get_MFS_CruiseSpeedDecrease() float32( FEV_MFS_Control_Button.MFS_CruiseSpeedDecrease*1+ (0) )
#define get_MFS_SourseControl() float32( FEV_MFS_Control_Button.MFS_SourseControl*1+ (0) )
#define get_MFS_UpControl() float32( FEV_MFS_Control_Button.MFS_UpControl*1+ (0) )
#define get_MFS_DownControl() float32( FEV_MFS_Control_Button.MFS_DownControl*1+ (0) )
#define get_MFS_LeftControl() float32( FEV_MFS_Control_Button.MFS_LeftControl*1+ (0) )
#define get_MFS_Failure() float32( FEV_MFS_Control_Button.MFS_Failure*1+ (0) )
#define get_MFS_RightControl() float32( FEV_MFS_Control_Button.MFS_RightControl*1+ (0) )
#define get_MFS_OK_Control() float32( FEV_MFS_Control_Button.MFS_OK_Control*1+ (0) )
#define get_CHKSM_CRASH_Sts() float32( FEV_ACM_CRASH_INFO.CHKSM_CRASH_Sts*1+ (0) )
#define get_ALV_CRASH_Sts() float32( FEV_ACM_CRASH_INFO.ALV_CRASH_Sts*1+ (0) )
#define get_ACM_Crash_Sts() float32( FEV_ACM_CRASH_INFO.ACM_Crash_Sts*1+ (0) )
#define get_ACM_Airbag_Deployment_Status() float32( FEV_ACM_CRASH_INFO.ACM_Airbag_Deployment_Status*1+ (0) )
#define get_ACM_Crash_Intensity() float32( FEV_ACM_CRASH_INFO.ACM_Crash_Intensity*1+ (0) )
#define get_ACM_Front_Crash() float32( FEV_ACM_CRASH_INFO.ACM_Front_Crash*1+ (0) )
#define get_ACM_DriverSide_Crash() float32( FEV_ACM_CRASH_INFO.ACM_DriverSide_Crash*1+ (0) )
#define get_ACM_PassSide_Crash() float32( FEV_ACM_CRASH_INFO.ACM_PassSide_Crash*1+ (0) )
#define get_ACM_Rear_Crash() float32( FEV_ACM_CRASH_INFO.ACM_Rear_Crash*1+ (0) )
#define get_ACM_Rollover_Crash() float32( FEV_ACM_CRASH_INFO.ACM_Rollover_Crash*1+ (0) )
#define get_Mileage() float32( FEV_IDB_MILEAGE.Mileage*1+ (0) )
#define get_VCU_Pump_3_Flowrate() float32( FEV_VCU_PUMP_STATUS.VCU_Pump_3_Flowrate*0.1+ (0) )
#define get_CHKSM_IDB_FUNCTION() float32( FEV_IDB_FUNCTION.CHKSM_IDB_FUNCTION*1+ (0) )
#define get_ALV_IDB_FUNCTION() float32( FEV_IDB_FUNCTION.ALV_IDB_FUNCTION*1+ (0) )
#define get_STAT_ABS() float32( FEV_IDB_FUNCTION.STAT_ABS*1+ (0) )
#define get_ABS_Active() float32( FEV_IDB_FUNCTION.ABS_Active*1+ (0) )
#define get_AYC_Active() float32( FEV_IDB_FUNCTION.AYC_Active*1+ (0) )
#define get_ASR_Active() float32( FEV_IDB_FUNCTION.ASR_Active*1+ (0) )
#define get_STAT_DSC() float32( FEV_IDB_FUNCTION.STAT_DSC*1+ (0) )
#define get_DSC_Active() float32( FEV_IDB_FUNCTION.DSC_Active*1+ (0) )
#define get_HBA_ActiveSignal() float32( FEV_IDB_FUNCTION.HBA_ActiveSignal*1+ (0) )
#define get_ARM_ActiveSignal() float32( FEV_IDB_FUNCTION.ARM_ActiveSignal*1+ (0) )
#define get_STAT_AutoHazardBlinking() float32( FEV_IDB_FUNCTION.STAT_AutoHazardBlinking*1+ (0) )
#define get_MSR_Active() float32( FEV_IDB_FUNCTION.MSR_Active*1+ (0) )
#define get_HSA_ActiveSignal() float32( FEV_IDB_FUNCTION.HSA_ActiveSignal*1+ (0) )
#define get_EPBi_ECD_ActiveSignal() float32( FEV_IDB_FUNCTION.EPBi_ECD_ActiveSignal*1+ (0) )
#define get_TSM_Active() float32( FEV_IDB_FUNCTION.TSM_Active*1+ (0) )
#define get_HAS_Available() float32( FEV_IDB_FUNCTION.HAS_Available*1+ (0) )
#define get_STAT_EBD() float32( FEV_IDB_FUNCTION.STAT_EBD*1+ (0) )
#define get_EBD_Active() float32( FEV_IDB_FUNCTION.EBD_Active*1+ (0) )
#define get_ST_BRG_MSA() float32( FEV_IDB_FUNCTION.ST_BRG_MSA*1+ (0) )
#define get_CRC_VCU_HV_DrvSys_status() float32( FEV_VCU_HV_DrvSys_status.CRC_VCU_HV_DrvSys_status*1+ (0) )
#define get_ALIV_VCU_HV_DrvSys_status() float32( FEV_VCU_HV_DrvSys_status.ALIV_VCU_HV_DrvSys_status*1+ (0) )
#define get_VCU_HVsystem_status() float32( FEV_VCU_HV_DrvSys_status.VCU_HVsystem_status*1+ (0) )
#define get_VCU_ACPD_Percent() float32( FEV_VCU_HV_DrvSys_status.VCU_ACPD_Percent*0.0625+ (0) )
#define get_VCU_ACPD_Percent_Valid() float32( FEV_VCU_HV_DrvSys_status.VCU_ACPD_Percent_Valid*1+ (0) )
#define get_VCU_ACTGear() float32( FEV_VCU_HV_DrvSys_status.VCU_ACTGear*1+ (0) )
#define get_VCU_ACTGearValid() float32( FEV_VCU_HV_DrvSys_status.VCU_ACTGearValid*1+ (0) )
#define get_VCU_ACT_DriveMode_Valid() float32( FEV_VCU_HV_DrvSys_status.VCU_ACT_DriveMode_Valid*1+ (0) )
#define get_VCU_HV_DRVsystem_status() float32( FEV_VCU_HV_DrvSys_status.VCU_HV_DRVsystem_status*1+ (0) )
#define get_VCU_Recu_BrakeLight_ON_Req() float32( FEV_VCU_HV_DrvSys_status.VCU_Recu_BrakeLight_ON_Req*1+ (0) )
#define get_MHU_UserProfileId() float32( FEV_MHU_Vehicle_Info.MHU_UserProfileId*1+ (0) )
#define get_SOH_SUL() float32( FEV_BAS_Measured_Data.SOH_SUL*1+ (0) )
#define get_SOC_STATE() float32( FEV_BAS_Measured_Data.SOC_STATE*1+ (0) )
#define get_FLAG_INCONSTENCY() float32( FEV_BAS_Measured_Data.FLAG_INCONSTENCY*1+ (0) )
#define get_CHKSM_BCM_STAT_DOOR_FLAP() float32( FEV_BCM_STAT_DOOR_FLAP.CHKSM_BCM_STAT_DOOR_FLAP*1+ (0) )
#define get_ALIVE_BCM_STAT_DOOR_FLAP() float32( FEV_BCM_STAT_DOOR_FLAP.ALIVE_BCM_STAT_DOOR_FLAP*1+ (0) )
#define get_BCM_STAT_TrunkAjar() float32( FEV_BCM_STAT_DOOR_FLAP.BCM_STAT_TrunkAjar*1+ (0) )
#define get_BCM_STAT_DoorAjarFL() float32( FEV_BCM_STAT_DOOR_FLAP.BCM_STAT_DoorAjarFL*1+ (0) )
#define get_BCM_STAT_DoorAjarFR() float32( FEV_BCM_STAT_DOOR_FLAP.BCM_STAT_DoorAjarFR*1+ (0) )
#define get_BCM_STAT_DoorAjarRL() float32( FEV_BCM_STAT_DOOR_FLAP.BCM_STAT_DoorAjarRL*1+ (0) )
#define get_BCM_STAT_DoorAjarRR() float32( FEV_BCM_STAT_DOOR_FLAP.BCM_STAT_DoorAjarRR*1+ (0) )
#define get_BCM_STAT_BonnetAjar() float32( FEV_BCM_STAT_DOOR_FLAP.BCM_STAT_BonnetAjar*1+ (0) )
#define get_CHKSM_BCM_SWITCH_Sts() float32( FEV_BCM_SwitchSts.CHKSM_BCM_SWITCH_Sts*1+ (0) )
#define get_ALV_BCM_SWITCH_Sts() float32( FEV_BCM_SwitchSts.ALV_BCM_SWITCH_Sts*1+ (0) )
#define get_BCM_STAT_BrakeSwitch() float32( FEV_BCM_SwitchSts.BCM_STAT_BrakeSwitch*1+ (0) )
#define get_BCM_STAT_HazardWarn() float32( FEV_BCM_SwitchSts.BCM_STAT_HazardWarn*1+ (0) )
#define get_BCM_STAT_Horn() float32( FEV_BCM_SwitchSts.BCM_STAT_Horn*1+ (0) )
#define get_BCM_STAT_Autowiping() float32( FEV_BCM_SwitchSts.BCM_STAT_Autowiping*1+ (0) )
#define get_BCM_WelcomeActive() float32( FEV_BCM_SwitchSts.BCM_WelcomeActive*1+ (0) )
#define get_ACM_Seat_Belt_Status_3rd_Row_Dri() float32( FEV_BCM_SwitchSts.ACM_Seat_Belt_Status_3rd_Row_Dri*1+ (0) )
#define get_CHKSM_BCM_VOLTAGE() float32( FEV_BCM_VOLTAGE.CHKSM_BCM_VOLTAGE*1+ (0) )
#define get_ALIVE_BCM_VOLTAGE() float32( FEV_BCM_VOLTAGE.ALIVE_BCM_VOLTAGE*1+ (0) )
#define get_UBatt() float32( FEV_BCM_VOLTAGE.UBatt*0.0009777+ (3) )
#define get_LV_Batt_Temp() float32( FEV_BCM_VOLTAGE.LV_Batt_Temp*1+ (-40) )
#define get_LV_SOC() float32( FEV_BCM_VOLTAGE.LV_SOC*1+ (0) )
#define get_LV_Batt_Current() float32( FEV_BCM_VOLTAGE.LV_Batt_Current*0.03125+ (-1536) )
#define get_CHKSM_BCM_CLAMP_STAT() float32( FEV_BCM_CLAMP_STAT.CHKSM_BCM_CLAMP_STAT*1+ (0) )
#define get_ALIVE_BCM_CLAMP_STAT() float32( FEV_BCM_CLAMP_STAT.ALIVE_BCM_CLAMP_STAT*1+ (0) )
#define get_RemoteFunctionState() float32( FEV_BCM_CLAMP_STAT.RemoteFunctionState*1+ (0) )
#define get_STAT_BLS() float32( FEV_BCM_CLAMP_STAT.STAT_BLS*1+ (0) )
#define get_STAT_CL_50_L() float32( FEV_BCM_CLAMP_STAT.STAT_CL_50_L*1+ (0) )
#define get_Clamp50AdviceRemoteStart() float32( FEV_BCM_CLAMP_STAT.Clamp50AdviceRemoteStart*1+ (0) )
#define get_Clamp50AdviceESS() float32( FEV_BCM_CLAMP_STAT.Clamp50AdviceESS*1+ (0) )
#define get_STAT_CL_R_L() float32( FEV_BCM_CLAMP_STAT.STAT_CL_R_L*1+ (0) )
#define get_STAT_CL_15_1_L() float32( FEV_BCM_CLAMP_STAT.STAT_CL_15_1_L*1+ (0) )
#define get_STAT_CL_15_1_DME_L() float32( FEV_BCM_CLAMP_STAT.STAT_CL_15_1_DME_L*1+ (0) )
#define get_FobId() float32( FEV_BCM_CLAMP_STAT.FobId*1+ (0) )
#define get_STAT_Terminal() float32( FEV_BCM_CLAMP_STAT.STAT_Terminal*1+ (0) )
#define get_STAT_CL30_C_BEV() float32( FEV_BCM_CLAMP_STAT.STAT_CL30_C_BEV*1+ (0) )
#define get_BCM_Clamp_Transport() float32( FEV_BCM_CLAMP_STAT.BCM_Clamp_Transport*1+ (0) )
#define get_CCU_REQ_ESSMotorControl() float32( FEV_CCU_MaxReq.CCU_REQ_ESSMotorControl*1+ (0) )
#define get_CCU_AC_PWM() float32( FEV_CCU_MaxReq.CCU_AC_PWM*1+ (0) )
#define get_ACCharging_MaxChargingPower() float32( FEV_VCU_ACCharging_Info.ACCharging_MaxChargingPower*0.1+ (0) )
#define get_CurrentACChargingPower() float32( FEV_VCU_ACCharging_Info.CurrentACChargingPower*0.1+ (0) )
#define get_ACCharging_MaxCurrent() float32( FEV_VCU_ACCharging_Info.ACCharging_MaxCurrent*0.1+ (0) )
#define get_DCCharging_MaxChargingPower() float32( FEV_VCU_DCCharging_Info.DCCharging_MaxChargingPower*0.1+ (0) )
#define get_CurrentDCChargingPower() float32( FEV_VCU_DCCharging_Info.CurrentDCChargingPower*0.1+ (0) )
#define get_DCCharging_MaxCurrent() float32( FEV_VCU_DCCharging_Info.DCCharging_MaxCurrent*0.1+ (0) )
#define get_CHKSM_BCM_TERMINAL() float32( FEV_BCM_TERMINAL.CHKSM_BCM_TERMINAL*1+ (0) )
#define get_ALV_BCM_TERMINAL() float32( FEV_BCM_TERMINAL.ALV_BCM_TERMINAL*1+ (0) )
#define get_ST_KL() float32( FEV_BCM_TERMINAL.ST_KL*1+ (0) )
#define get_ST_KL_KEY_VLD() float32( FEV_BCM_TERMINAL.ST_KL_KEY_VLD*1+ (0) )
#define get_ST_STCD_PENG() float32( FEV_BCM_TERMINAL.ST_STCD_PENG*1+ (0) )
#define get_ST_SSB() float32( FEV_BCM_TERMINAL.ST_SSB*1+ (0) )
#define get_RWDT_BLS() float32( FEV_BCM_TERMINAL.RWDT_BLS*1+ (0) )
#define get_RQ_DRVG_RDI() float32( FEV_BCM_TERMINAL.RQ_DRVG_RDI*1+ (0) )
#define get_CTR_ENG_STOP() float32( FEV_BCM_TERMINAL.CTR_ENG_STOP*1+ (0) )
#define get_ST_VEH_CON() float32( FEV_BCM_TERMINAL.ST_VEH_CON*1+ (0) )
#define get_VCU_AcChgGunIn() float32( FEV_VCU_ChargingConnection.VCU_AcChgGunIn*1+ (0) )
#define get_VCU_DCChgGunIn() float32( FEV_VCU_ChargingConnection.VCU_DCChgGunIn*1+ (0) )
#define get_VCU_CPValue() float32( FEV_VCU_ChargingConnection.VCU_CPValue*1+ (0) )
#define get_VCU_ACChargingVoltage() float32( FEV_VCU_ChargingConnection.VCU_ACChargingVoltage*1+ (0) )
#define get_VCU_MinCurrentOfACCharging() float32( FEV_VCU_ChargingConnection.VCU_MinCurrentOfACCharging*1+ (0) )
#define get_VCU_MaxCurrentOfACCharging() float32( FEV_VCU_ChargingConnection.VCU_MaxCurrentOfACCharging*1+ (0) )
#define get_TWV1_N_Position() float32( FEV_VCU_TWV1_Frm.TWV1_N_Position*0.1+ (0) )
#define get_CHSKM_BMS_CurMeas() float32( FEV_BMS_CurMeas.CHSKM_BMS_CurMeas*1+ (0) )
#define get_ALV_BMS_CurMeas() float32( FEV_BMS_CurMeas.ALV_BMS_CurMeas*1+ (0) )
#define get_BMS_PackCur_MEAS() float32( FEV_BMS_CurMeas.BMS_PackCur_MEAS*0.1+ (-3276.8) )
#define get_Checksum_0x176() float32( FEV_BMS_HVMeas1.Checksum_0x176*1+ (0) )
#define get_Rolling_Counter_0x176() float32( FEV_BMS_HVMeas1.Rolling_Counter_0x176*1+ (0) )
#define get_BMS_HVPackVol_MEAS() float32( FEV_BMS_HVMeas1.BMS_HVPackVol_MEAS*0.1+ (0) )
#define get_BMS_HVLinkVol_MEAS() float32( FEV_BMS_HVMeas1.BMS_HVLinkVol_MEAS*0.1+ (0) )
#define get_YSS_LONG_ACC_UNFILTERED() float32( FEV_YSS_LongAcc.YSS_LONG_ACC_UNFILTERED*0.002+ (-65.532) )
#define get_YSS_LONG_ACC() float32( FEV_YSS_LongAcc.YSS_LONG_ACC*0.002+ (-65.532) )
#define get_YSS_LAT_ACC_UNFILTERED() float32( FEV_YSS_LateralAcc.YSS_LAT_ACC_UNFILTERED*0.002+ (-65.532) )
#define get_YSS_LAT_ACC() float32( FEV_YSS_LateralAcc.YSS_LAT_ACC*0.002+ (-65.532) )
#define get_YSS_YAW_RATE_UNFILTERED() float32( FEV_YSS_YawRate.YSS_YAW_RATE_UNFILTERED*0.005+ (-163.83) )
#define get_YSS_YAW_RATE() float32( FEV_YSS_YawRate.YSS_YAW_RATE*0.005+ (-163.83) )
#define get_YSS_TEMPERATURE() float32( FEV_YSS_YawRate.YSS_TEMPERATURE*1+ (-40) )
#define get_CHKSM_EPS2_SAS_Sensor() float32( FEV_EPS2_SAS_Sensor.CHKSM_EPS2_SAS_Sensor*1+ (0) )
#define get_ALV_EPS2_SAS_Sensor() float32( FEV_EPS2_SAS_Sensor.ALV_EPS2_SAS_Sensor*1+ (0) )
#define get_EPS2_SAS_SASStsSnsr() float32( FEV_EPS2_SAS_Sensor.EPS2_SAS_SASStsSnsr*1+ (0) )
#define get_EPS2_SAS_SteerWhlRotSpd() float32( FEV_EPS2_SAS_Sensor.EPS2_SAS_SteerWhlRotSpd*0.125+ (-1024) )
#define get_EPS2_SAS_SteerWhlRotSpdStatus() float32( FEV_EPS2_SAS_Sensor.EPS2_SAS_SteerWhlRotSpdStatus*1+ (0) )
#define get_EPS2_SAS_SASFailure() float32( FEV_EPS2_SAS_Sensor.EPS2_SAS_SASFailure*1+ (0) )
#define get_EPS2_SAS_Calibrated() float32( FEV_EPS2_SAS_Sensor.EPS2_SAS_Calibrated*1+ (0) )
#define get_EPS2_SAS_SteerWheelAngleValid() float32( FEV_EPS2_SAS_Sensor.EPS2_SAS_SteerWheelAngleValid*1+ (0) )
#define get_EPS2_SAS_SteerWheelAngle() float32( FEV_EPS2_SAS_Sensor.EPS2_SAS_SteerWheelAngle*0.0238+ (-780) )
#define get_CHSKM_V_VEH() float32( FEV_IDB_V_VEH.CHSKM_V_VEH*1+ (0) )
#define get_ALIV_V_VEH() float32( FEV_IDB_V_VEH.ALIV_V_VEH*1+ (0) )
#define get_V_VEH_COG() float32( FEV_IDB_V_VEH.V_VEH_COG*0.015625+ (0) )
#define get_DVCO_VEH() float32( FEV_IDB_V_VEH.DVCO_VEH*1+ (0) )
#define get_QU_V_VEH_COG() float32( FEV_IDB_V_VEH.QU_V_VEH_COG*1+ (0) )
#define get_CHKSM_EDS_OutPut_FR() float32( FEV_EDS_OutPut_FR.CHKSM_EDS_OutPut_FR*1+ (0) )
#define get_ALV_EDS_OutPut_FR() float32( FEV_EDS_OutPut_FR.ALV_EDS_OutPut_FR*1+ (0) )
#define get_EDS_Work_STS_FR() float32( FEV_EDS_OutPut_FR.EDS_Work_STS_FR*1+ (0) )
#define get_EDS_Spd_FR() float32( FEV_EDS_OutPut_FR.EDS_Spd_FR*1+ (-20000) )
#define get_EDS_output_trqValid_FR() float32( FEV_EDS_OutPut_FR.EDS_output_trqValid_FR*1+ (0) )
#define get_EDS_MotorDriveSts_FR() float32( FEV_EDS_OutPut_FR.EDS_MotorDriveSts_FR*1+ (0) )
#define get_EDS_powoff_req_FR() float32( FEV_EDS_OutPut_FR.EDS_powoff_req_FR*1+ (0) )
#define get_EDS_SpdValid_FR() float32( FEV_EDS_OutPut_FR.EDS_SpdValid_FR*1+ (0) )
#define get_EDS_output_trq_FR() float32( FEV_EDS_OutPut_FR.EDS_output_trq_FR*1+ (-2000) )
#define get_EDS_VCU_6SO_flag_FWD() float32( FEV_EDS_OutPut_FR.EDS_VCU_6SO_flag_FWD*1+ (0) )
#define get_CHKSM_EDS_OutPut_RR() float32( FEV_EDS_OutPut_RR.CHKSM_EDS_OutPut_RR*1+ (0) )
#define get_ALV_EDS_OutPut_RR() float32( FEV_EDS_OutPut_RR.ALV_EDS_OutPut_RR*1+ (0) )
#define get_EDS_Work_STS_RR() float32( FEV_EDS_OutPut_RR.EDS_Work_STS_RR*1+ (0) )
#define get_EDS_Spd_RR() float32( FEV_EDS_OutPut_RR.EDS_Spd_RR*1+ (-20000) )
#define get_EDS_output_trqValid_RR() float32( FEV_EDS_OutPut_RR.EDS_output_trqValid_RR*1+ (0) )
#define get_EDS_MotorDriveSts_RR() float32( FEV_EDS_OutPut_RR.EDS_MotorDriveSts_RR*1+ (0) )
#define get_EDS_powoff_req_RR() float32( FEV_EDS_OutPut_RR.EDS_powoff_req_RR*1+ (0) )
#define get_EDS_SpdValid_RR() float32( FEV_EDS_OutPut_RR.EDS_SpdValid_RR*1+ (0) )
#define get_EDS_output_trq_RR() float32( FEV_EDS_OutPut_RR.EDS_output_trq_RR*1+ (-2000) )
#define get_EDS_VCU_6SO_flag_RWD() float32( FEV_EDS_OutPut_RR.EDS_VCU_6SO_flag_RWD*1+ (0) )
#define get_ADAS_VCU_Wheeltorque() float32( FEV_ADAS_VCU_ACC_Status.ADAS_VCU_Wheeltorque*1+ (0) )
#define get_CHKSM_IC_ODO() float32( FEV_IC_ODO.CHKSM_IC_ODO*1+ (0) )
#define get_ALIV_IC_ODO() float32( FEV_IC_ODO.ALIV_IC_ODO*1+ (0) )
#define get_MHU_Odometer_IC() float32( FEV_IC_ODO.MHU_Odometer_IC*1+ (0) )
#define get_VCU_vDCDCRequest() float32( FEV_VCU_POD_reqDCDC.VCU_vDCDCRequest*0.0625+ (0) )
#define get_VCU_iDCDCRequest_lim() float32( FEV_VCU_POD_reqDCDC.VCU_iDCDCRequest_lim*0.0625+ (0) )
#define get_CRC_VCU_ADAS() float32( FEV_VCU_ADAS_ACC_status.CRC_VCU_ADAS*1+ (0) )
#define get_ALIV_VCU_ADAS() float32( FEV_VCU_ADAS_ACC_status.ALIV_VCU_ADAS*1+ (0) )
#define get_VCU_ADAS_ControledRes() float32( FEV_VCU_ADAS_ACC_status.VCU_ADAS_ControledRes*1+ (0) )
#define get_VCU_ADAS_Available() float32( FEV_VCU_ADAS_ACC_status.VCU_ADAS_Available*1+ (0) )
#define get_VCU_Accel_Pedal_Position_Virtual() float32( FEV_VCU_ADAS_ACC_status.VCU_Accel_Pedal_Position_Virtual*0.4+ (0) )
#define get_VCU_ADAS_FuncMode() float32( FEV_VCU_ADAS_ACC_status.VCU_ADAS_FuncMode*1+ (0) )
#define get_VCU_ADAS_CtrlAbortFeedback() float32( FEV_VCU_ADAS_ACC_status.VCU_ADAS_CtrlAbortFeedback*1+ (0) )
#define get_Checksum_0x215() float32( FEV_BMS_Sts.Checksum_0x215*1+ (0) )
#define get_Rolling_Counter_0x215() float32( FEV_BMS_Sts.Rolling_Counter_0x215*1+ (0) )
#define get_BMS_BatBalance_ERR() float32( FEV_BMS_Sts.BMS_BatBalance_ERR*1+ (0) )
#define get_BMS_Balance_STS() float32( FEV_BMS_Sts.BMS_Balance_STS*1+ (0) )
#define get_BMS_IGN_Sts() float32( FEV_BMS_Sts.BMS_IGN_Sts*1+ (0) )
#define get_BMS_HWCrash_Sts() float32( FEV_BMS_Sts.BMS_HWCrash_Sts*1+ (0) )
#define get_BMS_HVIL_STS() float32( FEV_BMS_Sts.BMS_HVIL_STS*1+ (0) )
#define get_BMS_HVOnOff_STS() float32( FEV_BMS_Sts.BMS_HVOnOff_STS*1+ (0) )
#define get_BMS_ERR_LEV() float32( FEV_BMS_Sts.BMS_ERR_LEV*1+ (0) )
#define get_BMS_SocActual_EST() float32( FEV_BMS_Sts.BMS_SocActual_EST*0.1+ (0) )
#define get_BMS_Sys_STS() float32( FEV_BMS_Sts.BMS_Sys_STS*1+ (0) )
#define get_BMS_ISU_Status() float32( FEV_BMS_Sts.BMS_ISU_Status*1+ (0) )
#define get_BMS_SOH() float32( FEV_BMS_Sts.BMS_SOH*0.5+ (0) )
#define get_BMS_SOE() float32( FEV_BMS_Sts.BMS_SOE*0.5+ (0) )
#define get_CHSKM_VCU_EDSControl_Front() float32( FEV_VCU_EDSControl_Front.CHSKM_VCU_EDSControl_Front*1+ (0) )
#define get_ALV_VCU_EDSControl_Front() float32( FEV_VCU_EDSControl_Front.ALV_VCU_EDSControl_Front*1+ (0) )
#define get_VCU_EDS_TargetTqMin_FWD() float32( FEV_VCU_EDSControl_Front.VCU_EDS_TargetTqMin_FWD*1+ (-500) )
#define get_VCU_EDS_demtrq_FWD() float32( FEV_VCU_EDSControl_Front.VCU_EDS_demtrq_FWD*0.5+ (-500) )
#define get_VCU_EDS_TargetTqMax_FWD() float32( FEV_VCU_EDSControl_Front.VCU_EDS_TargetTqMax_FWD*1+ (0) )
#define get_VCU_EDS_demtrqValid_FWD() float32( FEV_VCU_EDSControl_Front.VCU_EDS_demtrqValid_FWD*1+ (0) )
#define get_VCU_EDS_HeatPowerDemand() float32( FEV_VCU_EDSControl_Front.VCU_EDS_HeatPowerDemand*0.1+ (0) )
#define get_CHSKM_VCU_EDSControl_Rear() float32( FEV_VCU_EDSControl_Rear.CHSKM_VCU_EDSControl_Rear*1+ (0) )
#define get_ALV_VCU_EDSControl_Rear() float32( FEV_VCU_EDSControl_Rear.ALV_VCU_EDSControl_Rear*1+ (0) )
#define get_VCU_EDS_TargetTqMin_RWD() float32( FEV_VCU_EDSControl_Rear.VCU_EDS_TargetTqMin_RWD*1+ (-500) )
#define get_VCU_EDS_demtrq_RWD() float32( FEV_VCU_EDSControl_Rear.VCU_EDS_demtrq_RWD*0.5+ (-500) )
#define get_VCU_EDS_TargetTqMax_RWD() float32( FEV_VCU_EDSControl_Rear.VCU_EDS_TargetTqMax_RWD*1+ (0) )
#define get_VCU_EDS_demtrqValid_RWD() float32( FEV_VCU_EDSControl_Rear.VCU_EDS_demtrqValid_RWD*1+ (0) )
#define get_CHKSM_TRM_STATUS() float32( FEV_TRM_STATUS.CHKSM_TRM_STATUS*1+ (0) )
#define get_ALIVE_TRM_STATUS() float32( FEV_TRM_STATUS.ALIVE_TRM_STATUS*1+ (0) )
#define get_TrailerDetected() float32( FEV_TRM_STATUS.TrailerDetected*1+ (0) )
#define get_CHSKM_EDS_curSts_FR() float32( FEV_EDS_curSts_FR.CHSKM_EDS_curSts_FR*1+ (0) )
#define get_ALV_EDS_curSts_FR() float32( FEV_EDS_curSts_FR.ALV_EDS_curSts_FR*1+ (0) )
#define get_EDS_MotTemp_MEAS_EDS_FWD() float32( FEV_EDS_curSts_FR.EDS_MotTemp_MEAS_EDS_FWD*1+ (-40) )
#define get_EDS_temp_FWD() float32( FEV_EDS_curSts_FR.EDS_temp_FWD*1+ (-40) )
#define get_EDS_CoolFlowrate_DMD_FWD() float32( FEV_EDS_curSts_FR.EDS_CoolFlowrate_DMD_FWD*0.1+ (0) )
#define get_EDS_DampingState_FWD() float32( FEV_EDS_curSts_FR.EDS_DampingState_FWD*1+ (0) )
#define get_EDS_IGBTState_FWD() float32( FEV_EDS_curSts_FR.EDS_IGBTState_FWD*1+ (0) )
#define get_CHSKM_EDS_curSts_RR() float32( FEV_EDS_curSts_RR.CHSKM_EDS_curSts_RR*1+ (0) )
#define get_ALV_EDS_curSts_RR() float32( FEV_EDS_curSts_RR.ALV_EDS_curSts_RR*1+ (0) )
#define get_EDS_MotTemp_MEAS_EDS_RWD() float32( FEV_EDS_curSts_RR.EDS_MotTemp_MEAS_EDS_RWD*1+ (-40) )
#define get_EDS_temp_RWD() float32( FEV_EDS_curSts_RR.EDS_temp_RWD*1+ (-40) )
#define get_EDS_CoolFlowrate_DMD_RWD() float32( FEV_EDS_curSts_RR.EDS_CoolFlowrate_DMD_RWD*0.1+ (0) )
#define get_EDS_DampingState_RWD() float32( FEV_EDS_curSts_RR.EDS_DampingState_RWD*1+ (0) )
#define get_EDS_IGBTState_RWD() float32( FEV_EDS_curSts_RR.EDS_IGBTState_RWD*1+ (0) )
#define get_CHKSM_IDB_WheelSts_FR() float32( FEV_IDB_WheelSts_FR.CHKSM_IDB_WheelSts_FR*1+ (0) )
#define get_ALV_IDB_WheelSts_FR() float32( FEV_IDB_WheelSts_FR.ALV_IDB_WheelSts_FR*1+ (0) )
#define get_IDB_WheelDirection_FR() float32( FEV_IDB_WheelSts_FR.IDB_WheelDirection_FR*1+ (0) )
#define get_IDB_WheelDirection_FL() float32( FEV_IDB_WheelSts_FR.IDB_WheelDirection_FL*1+ (0) )
#define get_IDB_WheelSpeedRC_FL() float32( FEV_IDB_WheelSts_FR.IDB_WheelSpeedRC_FL*1+ (0) )
#define get_IDB_WheelSpeedRC_FR() float32( FEV_IDB_WheelSts_FR.IDB_WheelSpeedRC_FR*1+ (0) )
#define get_CHKSM_IDB_WheelSts_RR() float32( FEV_IDB_WheelSts_RR.CHKSM_IDB_WheelSts_RR*1+ (0) )
#define get_ALV_IDB_WheelSts_RR() float32( FEV_IDB_WheelSts_RR.ALV_IDB_WheelSts_RR*1+ (0) )
#define get_IDB_WheelDirection_RR() float32( FEV_IDB_WheelSts_RR.IDB_WheelDirection_RR*1+ (0) )
#define get_IDB_WheelDirection_RL() float32( FEV_IDB_WheelSts_RR.IDB_WheelDirection_RL*1+ (0) )
#define get_IDB_WheelSpeedRC_RL() float32( FEV_IDB_WheelSts_RR.IDB_WheelSpeedRC_RL*1+ (0) )
#define get_IDB_WheelSpeedRC_RR() float32( FEV_IDB_WheelSts_RR.IDB_WheelSpeedRC_RR*1+ (0) )
#define get_CHKSM_IDB_BrkPdl() float32( FEV_IDB_BrkPdl.CHKSM_IDB_BrkPdl*1+ (0) )
#define get_ALV_IDB_BrkPdl() float32( FEV_IDB_BrkPdl.ALV_IDB_BrkPdl*1+ (0) )
#define get_IDB_CircPres() float32( FEV_IDB_BrkPdl.IDB_CircPres*0.01+ (0) )
#define get_IDB_BrkPedlVal() float32( FEV_IDB_BrkPdl.IDB_BrkPedlVal*0.1+ (0) )
#define get_IDB_BrkPedlValVldty() float32( FEV_IDB_BrkPdl.IDB_BrkPedlValVldty*1+ (0) )
#define get_IDB_FrntLeEstimdWhlPres() float32( FEV_IDB_WheelPressEst.IDB_FrntLeEstimdWhlPres*1+ (0) )
#define get_IDB_FrntRiEstimdWhlPres() float32( FEV_IDB_WheelPressEst.IDB_FrntRiEstimdWhlPres*1+ (0) )
#define get_IDB_ReLeEstimdWhlPres() float32( FEV_IDB_WheelPressEst.IDB_ReLeEstimdWhlPres*1+ (0) )
#define get_IDB_ReRiEstimdWhlPres() float32( FEV_IDB_WheelPressEst.IDB_ReRiEstimdWhlPres*1+ (0) )
#define get_CHKSM_RCU_EPB_Sts() float32( FEV_RCU_EPB_Sts.CHKSM_RCU_EPB_Sts*1+ (0) )
#define get_ALV_RCU_EPB_Sts() float32( FEV_RCU_EPB_Sts.ALV_RCU_EPB_Sts*1+ (0) )
#define get_RCU_EPB_SystemState() float32( FEV_RCU_EPB_Sts.RCU_EPB_SystemState*1+ (0) )
#define get_RCU_EPB_DecelReq() float32( FEV_RCU_EPB_Sts.RCU_EPB_DecelReq*0.001+ (0) )
#define get_RCU_EPB_FltSts() float32( FEV_RCU_EPB_Sts.RCU_EPB_FltSts*1+ (0) )
#define get_BMS_MinCellTemp() float32( FEV_BMS_CellTemp.BMS_MinCellTemp*1+ (-40) )
#define get_BMS_PackTemp() float32( FEV_BMS_CellTemp.BMS_PackTemp*1+ (-40) )
#define get_BMS_MaxCellTemp() float32( FEV_BMS_CellTemp.BMS_MaxCellTemp*1+ (-40) )
#define get_BMS_MaxMinDiffCellTemp() float32( FEV_BMS_CellTemp.BMS_MaxMinDiffCellTemp*1+ (-40) )
#define get_CHSKM_BMS_CoolntInletOutletTmp() float32( FEV_BMS_CoolntInletOutletTmp.CHSKM_BMS_CoolntInletOutletTmp*1+ (0) )
#define get_ALV_BMS_CoolntInletOutletTmp() float32( FEV_BMS_CoolntInletOutletTmp.ALV_BMS_CoolntInletOutletTmp*1+ (0) )
#define get_BMS_CoolantInletTemp() float32( FEV_BMS_CoolntInletOutletTmp.BMS_CoolantInletTemp*1+ (-40) )
#define get_BMS_CoolantOutletTemp() float32( FEV_BMS_CoolntInletOutletTmp.BMS_CoolantOutletTemp*1+ (-40) )
#define get_AVL_RPM_WHL_RLH() float32( FEV_IDB_AVL_RPM_WHL_REAR.AVL_RPM_WHL_RLH*0.0156+ (-511.9844) )
#define get_AVL_RPM_WHL_RRH() float32( FEV_IDB_AVL_RPM_WHL_REAR.AVL_RPM_WHL_RRH*0.0156+ (-511.9844) )
#define get_QU_AVL_RPM_WHL_RLH() float32( FEV_IDB_AVL_RPM_WHL_REAR.QU_AVL_RPM_WHL_RLH*1+ (0) )
#define get_QU_AVL_RPM_WHL_RRH() float32( FEV_IDB_AVL_RPM_WHL_REAR.QU_AVL_RPM_WHL_RRH*1+ (0) )
#define get_AVL_RPM_WHL_FLH() float32( FEV_IDB_AVL_RPM_WHL_FRONT.AVL_RPM_WHL_FLH*0.0156+ (-511.9844) )
#define get_AVL_RPM_WHL_FRH() float32( FEV_IDB_AVL_RPM_WHL_FRONT.AVL_RPM_WHL_FRH*0.0156+ (-511.9844) )
#define get_QU_AVL_RPM_WHL_FLH() float32( FEV_IDB_AVL_RPM_WHL_FRONT.QU_AVL_RPM_WHL_FLH*1+ (0) )
#define get_QU_AVL_RPM_WHL_FRH() float32( FEV_IDB_AVL_RPM_WHL_FRONT.QU_AVL_RPM_WHL_FRH*1+ (0) )
#define get_VCU_iLineLimit() float32( FEV_VCU_POD_reqCharge.VCU_iLineLimit*0.0625+ (0) )
#define get_VCU_iOBCRequest() float32( FEV_VCU_POD_reqCharge.VCU_iOBCRequest*0.0625+ (0) )
#define get_VCU_vOBCRequest() float32( FEV_VCU_POD_reqCharge.VCU_vOBCRequest*0.0625+ (0) )
#define get_THM_tempCoolantInletEMU() float32( FEV_VCU_POD_info.THM_tempCoolantInletEMU*1+ (-40) )
#define get_THM_pwmPumpOBC() float32( FEV_VCU_POD_info.THM_pwmPumpOBC*1+ (0) )
#define get_CHSKM_EDS_Power_FR() float32( FEV_EDS_Power_FR.CHSKM_EDS_Power_FR*1+ (0) )
#define get_ALV_EDS_Power_FR() float32( FEV_EDS_Power_FR.ALV_EDS_Power_FR*1+ (0) )
#define get_EDS_MotorSerialNum_FWD() float32( FEV_EDS_Power_FR.EDS_MotorSerialNum_FWD*1+ (0) )
#define get_EDS_MaxTrq_FWD() float32( FEV_EDS_Power_FR.EDS_MaxTrq_FWD*1+ (-2000) )
#define get_EDS_MinTrq_FWD() float32( FEV_EDS_Power_FR.EDS_MinTrq_FWD*1+ (-2000) )
#define get_CHSKM_EDS_R_Power_RR() float32( FEV_EDS_Power_RR.CHSKM_EDS_R_Power_RR*1+ (0) )
#define get_ALV_EDS_R_Power_RR() float32( FEV_EDS_Power_RR.ALV_EDS_R_Power_RR*1+ (0) )
#define get_EDS_MotorSerialNum_RWD() float32( FEV_EDS_Power_RR.EDS_MotorSerialNum_RWD*1+ (0) )
#define get_EDS_MaxTrq_RWD() float32( FEV_EDS_Power_RR.EDS_MaxTrq_RWD*1+ (-2000) )
#define get_EDS_MinTrq_RWD() float32( FEV_EDS_Power_RR.EDS_MinTrq_RWD*1+ (-2000) )
#define get_CHKSM_IC_SENSOR() float32( FEV_IC_SENSOR.CHKSM_IC_SENSOR*1+ (0) )
#define get_ALV_IC_SENSOR() float32( FEV_IC_SENSOR.ALV_IC_SENSOR*1+ (0) )
#define get_MHU_STAT_AmbientTempRaw() float32( FEV_IC_SENSOR.MHU_STAT_AmbientTempRaw*0.5+ (-40) )
#define get_MHU_STAT_FuelLevel() float32( FEV_IC_SENSOR.MHU_STAT_FuelLevel*1+ (0) )
#define get_MHU_STAT_AmbientTemp() float32( FEV_IC_SENSOR.MHU_STAT_AmbientTemp*0.5+ (-40) )
#define get_MHU_STAT_CoolantLevelStatus() float32( FEV_IC_SENSOR.MHU_STAT_CoolantLevelStatus*1+ (0) )
#define get_DISP_HR() float32( FEV_MHU_DATE_TIME.DISP_HR*1+ (0) )
#define get_DISP_MN() float32( FEV_MHU_DATE_TIME.DISP_MN*1+ (0) )
#define get_DISP_SEC() float32( FEV_MHU_DATE_TIME.DISP_SEC*1+ (0) )
#define get_DISP_DATE_DAY() float32( FEV_MHU_DATE_TIME.DISP_DATE_DAY*1+ (0) )
#define get_DISP_DATE_MON() float32( FEV_MHU_DATE_TIME.DISP_DATE_MON*1+ (0) )
#define get_DISP_DATE_WDAY() float32( FEV_MHU_DATE_TIME.DISP_DATE_WDAY*1+ (0) )
#define get_DISP_DATE_YR() float32( FEV_MHU_DATE_TIME.DISP_DATE_YR*1+ (0) )
#define get_ST_DISP_CTI_DATE() float32( FEV_MHU_DATE_TIME.ST_DISP_CTI_DATE*1+ (0) )
#define get_DISP_HR_UTC() float32( FEV_MHU_DATE_TIME_UTC.DISP_HR_UTC*1+ (0) )
#define get_DISP_MN_UTC() float32( FEV_MHU_DATE_TIME_UTC.DISP_MN_UTC*1+ (0) )
#define get_DISP_SEC_UTC() float32( FEV_MHU_DATE_TIME_UTC.DISP_SEC_UTC*1+ (0) )
#define get_DISP_DATE_DAY_UTC() float32( FEV_MHU_DATE_TIME_UTC.DISP_DATE_DAY_UTC*1+ (0) )
#define get_DISP_DATE_MON_UTC() float32( FEV_MHU_DATE_TIME_UTC.DISP_DATE_MON_UTC*1+ (0) )
#define get_DISP_DATE_YR_UTC() float32( FEV_MHU_DATE_TIME_UTC.DISP_DATE_YR_UTC*1+ (0) )
#define get_CCU_STAT_Auto() float32( FEV_CCU_STATUS.CCU_STAT_Auto*1+ (0) )
#define get_CCU_STAT_OnOff() float32( FEV_CCU_STATUS.CCU_STAT_OnOff*1+ (0) )
#define get_CCU_STAT_Defrost() float32( FEV_CCU_STATUS.CCU_STAT_Defrost*1+ (0) )
#define get_CCU_STAT_PTC_Heater() float32( FEV_CCU_STATUS.CCU_STAT_PTC_Heater*1+ (0) )
#define get_CCU_STAT_TempDriver() float32( FEV_CCU_STATUS.CCU_STAT_TempDriver*0.5+ (0) )
#define get_CCU_STAT_TempPassenger() float32( FEV_CCU_STATUS.CCU_STAT_TempPassenger*0.5+ (0) )
#define get_CHKSM_CCU_TEMP_PRESSURE() float32( FEV_CCU_TEMP_PRESSURE.CHKSM_CCU_TEMP_PRESSURE*1+ (0) )
#define get_ALV_CCU_TEMP_PRESSURE() float32( FEV_CCU_TEMP_PRESSURE.ALV_CCU_TEMP_PRESSURE*1+ (0) )
#define get_CCU_Pressure_AC() float32( FEV_CCU_TEMP_PRESSURE.CCU_Pressure_AC*1+ (0) )
#define get_CCU_InteriorTemp() float32( FEV_CCU_TEMP_PRESSURE.CCU_InteriorTemp*0.5+ (-40) )
#define get_CCU_TempEx_AC() float32( FEV_CCU_TEMP_PRESSURE.CCU_TempEx_AC*0.5+ (-40) )
#define get_CCU_EvaporatorTemp() float32( FEV_CCU_TEMP_PRESSURE.CCU_EvaporatorTemp*0.5+ (-40) )
#define get_HtrMediumOutletTemp() float32( FEV_VCU_HeatCoolStat.HtrMediumOutletTemp*0.5+ (-40) )
#define get_HtrMediumInletTemp() float32( FEV_VCU_HeatCoolStat.HtrMediumInletTemp*0.5+ (-40) )
#define get_ECompRpm() float32( FEV_VCU_HeatCoolStat.ECompRpm*1+ (0) )
#define get_ECompPowerConsumption() float32( FEV_VCU_HeatCoolStat.ECompPowerConsumption*0.1+ (0) )
#define get_CCU_CoolPowerDemand() float32( FEV_CCU_HeatCoolReq.CCU_CoolPowerDemand*0.1+ (0) )
#define get_CCU_HeatPowerDemand() float32( FEV_CCU_HeatCoolReq.CCU_HeatPowerDemand*0.1+ (0) )
#define get_CCU_CoolDemand() float32( FEV_CCU_HeatCoolReq.CCU_CoolDemand*0.5+ (0) )
#define get_CCU_HeatDemand() float32( FEV_CCU_HeatCoolReq.CCU_HeatDemand*0.5+ (0) )
#define get_CHSKM_POD_StatusCharger1() float32( FEV_POD_StatusCharger1.CHSKM_POD_StatusCharger1*1+ (0) )
#define get_ALV_POD_StatusCharger1() float32( FEV_POD_StatusCharger1.ALV_POD_StatusCharger1*1+ (0) )
#define get_POD_statusOBC() float32( FEV_POD_StatusCharger1.POD_statusOBC*1+ (0) )
#define get_POD_OBC_Max_Current_Out() float32( FEV_POD_StatusCharger1.POD_OBC_Max_Current_Out*1+ (0) )
#define get_POD_iDCOut() float32( FEV_POD_StatusCharger1.POD_iDCOut*1+ (0) )
#define get_POD_vDCOut() float32( FEV_POD_StatusCharger1.POD_vDCOut*0.0625+ (0) )
#define get_SECCAN_POD_StatusCharger1() float32( FEV_POD_StatusCharger1.SECCAN_POD_StatusCharger1*1+ (0) )
#define get_CHSKM_POD_StatusCharger2() float32( FEV_POD_StatusCharger2.CHSKM_POD_StatusCharger2*1+ (0) )
#define get_ALV_POD_StatusCharger2() float32( FEV_POD_StatusCharger2.ALV_POD_StatusCharger2*1+ (0) )
#define get_POD_phaseACInput() float32( FEV_POD_StatusCharger2.POD_phaseACInput*1+ (0) )
#define get_POD_iACInput() float32( FEV_POD_StatusCharger2.POD_iACInput*0.0625+ (0) )
#define get_POD_vACInput() float32( FEV_POD_StatusCharger2.POD_vACInput*0.0625+ (0) )
#define get_POD_tempACCharger() float32( FEV_POD_StatusCharger2.POD_tempACCharger*1+ (-40) )
#define get_POD_tempColdplate() float32( FEV_POD_StatusCharger2.POD_tempColdplate*1+ (-40) )
#define get_CHSKM_POD_StatusDCDC1() float32( FEV_POD_StatusDCDC1.CHSKM_POD_StatusDCDC1*1+ (0) )
#define get_ALV_POD_StatusDCDC1() float32( FEV_POD_StatusDCDC1.ALV_POD_StatusDCDC1*1+ (0) )
#define get_POD_statusDCDC() float32( FEV_POD_StatusDCDC1.POD_statusDCDC*1+ (0) )
#define get_POD_DCDC_Max_Current_Out() float32( FEV_POD_StatusDCDC1.POD_DCDC_Max_Current_Out*1+ (0) )
#define get_POD_vFC() float32( FEV_POD_StatusFC.POD_vFC*0.0625+ (0) )
#define get_MILE_KM() float32( FEV_IC_MILEAGE.MILE_KM*1+ (0) )
#define get_FLLV_FUTA() float32( FEV_IC_MILEAGE.FLLV_FUTA*1+ (0) )
#define get_RNG() float32( FEV_IC_MILEAGE.RNG*1+ (0) )
#define get_ST_FLLV_FUTA_SPAR() float32( FEV_IC_MILEAGE.ST_FLLV_FUTA_SPAR*1+ (0) )
#define get_CHSKM_POD_StatusDCDC2() float32( FEV_POD_StatusDCDC2.CHSKM_POD_StatusDCDC2*1+ (0) )
#define get_ALV_POD_StatusDCDC2() float32( FEV_POD_StatusDCDC2.ALV_POD_StatusDCDC2*1+ (0) )
#define get_POD_vDCInput() float32( FEV_POD_StatusDCDC2.POD_vDCInput*0.0625+ (0) )
#define get_POD_iDCDCOutput() float32( FEV_POD_StatusDCDC2.POD_iDCDCOutput*0.0625+ (0) )
#define get_POD_vDCDCOutput() float32( FEV_POD_StatusDCDC2.POD_vDCDCOutput*0.0625+ (0) )
#define get_EDS_bus_Volt_FWD() float32( FEV_EDS_Sts_FR.EDS_bus_Volt_FWD*0.1+ (0) )
#define get_EDS_bus_Curr_FWD() float32( FEV_EDS_Sts_FR.EDS_bus_Curr_FWD*0.1+ (-1000) )
#define get_EDS_bus_Volt_RWD() float32( FEV_EDS_R_Sts_RR.EDS_bus_Volt_RWD*0.1+ (0) )
#define get_EDS_bus_Curr_RWD() float32( FEV_EDS_R_Sts_RR.EDS_bus_Curr_RWD*0.1+ (-1000) )
#define get_POD_tempHVBusPlus() float32( FEV_POD_Thermal.POD_tempHVBusPlus*1+ (-40) )
#define get_POD_tempHVBusNeg() float32( FEV_POD_Thermal.POD_tempHVBusNeg*1+ (-40) )
#define get_POD_tempInternal() float32( FEV_POD_Thermal.POD_tempInternal*1+ (-40) )
#define get_POD_tempColdPlate() float32( FEV_POD_Thermal.POD_tempColdPlate*1+ (-40) )
#define get_POD_FlowRate_Req() float32( FEV_POD_Thermal.POD_FlowRate_Req*1+ (0) )
#define get_POD_CoolPwrDemand() float32( FEV_POD_Thermal.POD_CoolPwrDemand*0.1+ (0) )
#define get_Checksum_0x375() float32( FEV_BMS_Relay.Checksum_0x375*1+ (0) )
#define get_Rolling_Counter_0x375() float32( FEV_BMS_Relay.Rolling_Counter_0x375*1+ (0) )
#define get_BMS_PreChgRelay_ERR() float32( FEV_BMS_Relay.BMS_PreChgRelay_ERR*1+ (0) )
#define get_BMS_TotalNegRelay_ERR() float32( FEV_BMS_Relay.BMS_TotalNegRelay_ERR*1+ (0) )
#define get_BMS_MainPosRelay_ERR() float32( FEV_BMS_Relay.BMS_MainPosRelay_ERR*1+ (0) )
#define get_BMS_MainPosRelay_STS() float32( FEV_BMS_Relay.BMS_MainPosRelay_STS*1+ (0) )
#define get_BMS_PreChgRelay_STS() float32( FEV_BMS_Relay.BMS_PreChgRelay_STS*1+ (0) )
#define get_BMS_TotalNegRelay_STS() float32( FEV_BMS_Relay.BMS_TotalNegRelay_STS*1+ (0) )
#define get_EPS2_SteeringTorque() float32( FEV_EPS2_Advanced.EPS2_SteeringTorque*0.01+ (-10.24) )
#define get_EPS2_Steering_angle_spd() float32( FEV_EPS2_Advanced.EPS2_Steering_angle_spd*0.125+ (-1024) )
#define get_EPS2_Steering_angle() float32( FEV_EPS2_Advanced.EPS2_Steering_angle*0.0238+ (-780) )
#define get_VIN_Byte1() float32( FEV_BCM_VEHICLE_IDENT_NUMBER.VIN_Byte1*1+ (0) )
#define get_VIN_Byte2() float32( FEV_BCM_VEHICLE_IDENT_NUMBER.VIN_Byte2*1+ (0) )
#define get_VIN_Byte3() float32( FEV_BCM_VEHICLE_IDENT_NUMBER.VIN_Byte3*1+ (0) )
#define get_VIN_Byte4() float32( FEV_BCM_VEHICLE_IDENT_NUMBER.VIN_Byte4*1+ (0) )
#define get_VIN_Byte5() float32( FEV_BCM_VEHICLE_IDENT_NUMBER.VIN_Byte5*1+ (0) )
#define get_VIN_Byte6() float32( FEV_BCM_VEHICLE_IDENT_NUMBER.VIN_Byte6*1+ (0) )
#define get_VIN_Byte7() float32( FEV_BCM_VEHICLE_IDENT_NUMBER.VIN_Byte7*1+ (0) )
#define get_CHKSM_ACM_SEAT_OCCUPATION() float32( FEV_ACM_OCCUPANT_STATUS.CHKSM_ACM_SEAT_OCCUPATION*1+ (0) )
#define get_ALV_ACM_SEAT_OCCUPATION() float32( FEV_ACM_OCCUPANT_STATUS.ALV_ACM_SEAT_OCCUPATION*1+ (0) )
#define get_ACM_Seat_Occupancy_2nd_Row_Pas() float32( FEV_ACM_OCCUPANT_STATUS.ACM_Seat_Occupancy_2nd_Row_Pas*1+ (0) )
#define get_ACM_Seat_Occupancy_2nd_Row_Mid() float32( FEV_ACM_OCCUPANT_STATUS.ACM_Seat_Occupancy_2nd_Row_Mid*1+ (0) )
#define get_ACM_Seat_Belt_Status_Driver() float32( FEV_ACM_OCCUPANT_STATUS.ACM_Seat_Belt_Status_Driver*1+ (0) )
#define get_ACM_Seat_Belt_Status_2nd_Row_Dri() float32( FEV_ACM_OCCUPANT_STATUS.ACM_Seat_Belt_Status_2nd_Row_Dri*1+ (0) )
#define get_ACM_Seat_Belt_Status_2nd_Row_Pas() float32( FEV_ACM_OCCUPANT_STATUS.ACM_Seat_Belt_Status_2nd_Row_Pas*1+ (0) )
#define get_SUM_VCU_Thermal_info_FB() float32( FEV_VCU_Thermal_info_FB.SUM_VCU_Thermal_info_FB*1+ (0) )
#define get_ALV_VCU_Thermal_info_FB() float32( FEV_VCU_Thermal_info_FB.ALV_VCU_Thermal_info_FB*1+ (0) )
#define get_VCU_Pump_1_Flowrate() float32( FEV_VCU_Thermal_info_FB.VCU_Pump_1_Flowrate*0.1+ (0) )
#define get_VCU_Pump_2_Flowrate() float32( FEV_VCU_Thermal_info_FB.VCU_Pump_2_Flowrate*0.1+ (0) )
#define get_VCU_TempSensor_1_value() float32( FEV_VCU_Thermal_info_FB.VCU_TempSensor_1_value*1+ (-40) )
#define get_VCU_TempSensor_6_value() float32( FEV_VCU_Thermal_info_FB.VCU_TempSensor_6_value*1+ (-40) )
#define get_VCU_TempSensor_5_value() float32( FEV_VCU_Thermal_info_FB.VCU_TempSensor_5_value*1+ (-40) )
#define get_VCU_RunningRange() float32( FEV_VCU_HVsystem_status.VCU_RunningRange*0.5+ (0) )
#define get_VCU_RunningRange_chrg_estSts() float32( FEV_VCU_HVsystem_status.VCU_RunningRange_chrg_estSts*1+ (0) )
#define get_VCU_RunningRange_charged() float32( FEV_VCU_HVsystem_status.VCU_RunningRange_charged*0.5+ (0) )
#define get_VCU_HVbatSoc_charged() float32( FEV_VCU_HVsystem_status.VCU_HVbatSoc_charged*0.1+ (0) )
#define get_VCU_HVbatSoc_charged_estStatus() float32( FEV_VCU_HVsystem_status.VCU_HVbatSoc_charged_estStatus*1+ (0) )
#define get_VCU_MHU_Ack_TargetSOC() float32( FEV_VCU_HMI_Info.VCU_MHU_Ack_TargetSOC*1+ (0) )
#define get_VCU_ValetMode_MaxSpeedSts() float32( FEV_VCU_HMI_Info.VCU_ValetMode_MaxSpeedSts*1+ (0) )
#define get_CHKSM_MHU_EVSetting() float32( FEV_MHU_EvSetting.CHKSM_MHU_EVSetting*1+ (0) )
#define get_ALV_MHU_EVSetting() float32( FEV_MHU_EvSetting.ALV_MHU_EVSetting*1+ (0) )
#define get_MHU_ChargeSetTargetSOC() float32( FEV_MHU_EvSetting.MHU_ChargeSetTargetSOC*1+ (0) )
#define get_MHU_ChargingRequest() float32( FEV_MHU_EvSetting.MHU_ChargingRequest*1+ (0) )
#define get_MHU_ChgPort_Open_req() float32( FEV_MHU_EvSetting.MHU_ChgPort_Open_req*1+ (0) )
#define get_MHU_SET_DrivingModeSwitch() float32( FEV_MHU_EvSetting.MHU_SET_DrivingModeSwitch*1+ (0) )
#define get_MHU_ValetMode_Activation() float32( FEV_MHU_EvSetting.MHU_ValetMode_Activation*1+ (0) )
#define get_MHU_ValetMode_MaxSpeed() float32( FEV_MHU_EvSetting.MHU_ValetMode_MaxSpeed*1+ (0) )
#define get_MHU_ChargingCurrentLimit() float32( FEV_MHU_EvSetting.MHU_ChargingCurrentLimit*1+ (0) )
#define get_MHU_FOTA_Checksum() float32( FEV_MHU_FOTA_STATUS.MHU_FOTA_Checksum*1+ (0) )
#define get_MHU_FOTA_Alive_Counter() float32( FEV_MHU_FOTA_STATUS.MHU_FOTA_Alive_Counter*1+ (0) )
#define get_MHU_FOTA_State() float32( FEV_MHU_FOTA_STATUS.MHU_FOTA_State*1+ (0) )
#define get_MHU_FOTA_Error_Code() float32( FEV_MHU_FOTA_STATUS.MHU_FOTA_Error_Code*1+ (0) )
#define get_VCU_Instant_ConsumEnergy() float32( FEV_VCU_MHU_info_2.VCU_Instant_ConsumEnergy*0.1+ (0) )
#define get_VCU_Average_ConsumEnergy() float32( FEV_VCU_MHU_info_2.VCU_Average_ConsumEnergy*0.1+ (0) )
#define get_VCU_BrakeRegenMode() float32( FEV_VCU_MHU_info.VCU_BrakeRegenMode*1+ (0) )
#define get_VCU_PowerRegenGaugeDisplay() float32( FEV_VCU_MHU_info.VCU_PowerRegenGaugeDisplay*1+ (-100) )
#define get_VCU_Charging_Authen_stt() float32( FEV_VCU_MHU_info.VCU_Charging_Authen_stt*1+ (0) )
#define get_VCU_SOC_display() float32( FEV_VCU_MHU_info.VCU_SOC_display*0.1+ (0) )
#define get_VCU_Hvbatt_charging_stt() float32( FEV_VCU_MHU_info.VCU_Hvbatt_charging_stt*1+ (0) )
#define get_RS_Sol_L() float32( FEV_BCM_RainLightSnr.RS_Sol_L*5+ (0) )
#define get_RS_Sol_R() float32( FEV_BCM_RainLightSnr.RS_Sol_R*5+ (0) )
#define get_RS_F_HUD_Sensor() float32( FEV_BCM_RainLightSnr.RS_F_HUD_Sensor*1+ (0) )
#define get_RS_HUD_illuminance() float32( FEV_BCM_RainLightSnr.RS_HUD_illuminance*1+ (0) )
#define get_MHU_Request_CarOFF() float32( FEV_MHU_CarMode_Switch.MHU_Request_CarOFF*1+ (0) )
#define get_OP_WIPO_SZL_LIN() float32( FEV_SCM_Raw_Status.OP_WIPO_SZL_LIN*1+ (0) )
#define get_OP_COLS_SZL_LIN() float32( FEV_SCM_Raw_Status.OP_COLS_SZL_LIN*1+ (0) )
#define get_CHSKM_GS_WarnMsg() float32( FEV_GS_WarnMsg.CHSKM_GS_WarnMsg*1+ (0) )
#define get_ALV_GS_WarnMsg() float32( FEV_GS_WarnMsg.ALV_GS_WarnMsg*1+ (0) )
#define get_GS_Warning_Flag_1() float32( FEV_GS_WarnMsg.GS_Warning_Flag_1*1+ (0) )
#define get_GS_Warning_Flag_2() float32( FEV_GS_WarnMsg.GS_Warning_Flag_2*1+ (0) )
#define get_GS_Warning_Flag_3() float32( FEV_GS_WarnMsg.GS_Warning_Flag_3*1+ (0) )
#define get_GS_Warning_Flag_4() float32( FEV_GS_WarnMsg.GS_Warning_Flag_4*1+ (0) )
#define get_GS_Warning_Flag_5() float32( FEV_GS_WarnMsg.GS_Warning_Flag_5*1+ (0) )
#define get_GS_Warning_Flag_6() float32( FEV_GS_WarnMsg.GS_Warning_Flag_6*1+ (0) )
#define get_GS_Warning_Flag_7() float32( FEV_GS_WarnMsg.GS_Warning_Flag_7*1+ (0) )
#define get_GS_Warning_Flag_8() float32( FEV_GS_WarnMsg.GS_Warning_Flag_8*1+ (0) )
#define get_GS_Warning_Flag_9() float32( FEV_GS_WarnMsg.GS_Warning_Flag_9*1+ (0) )
#define get_GS_Warning_Flag_10() float32( FEV_GS_WarnMsg.GS_Warning_Flag_10*1+ (0) )
#define get_GS_Warning_Flag_11() float32( FEV_GS_WarnMsg.GS_Warning_Flag_11*1+ (0) )
#define get_GS_Warning_Flag_12() float32( FEV_GS_WarnMsg.GS_Warning_Flag_12*1+ (0) )
#define get_GS_Reserved_signal1() float32( FEV_GS_WarnMsg.GS_Reserved_signal1*1+ (0) )
#define get_GS_Reserved_signal2() float32( FEV_GS_WarnMsg.GS_Reserved_signal2*1+ (0) )
#define get_GS_Reserved_signal3() float32( FEV_GS_WarnMsg.GS_Reserved_signal3*1+ (0) )
#define get_GS_Reserved_signal4() float32( FEV_GS_WarnMsg.GS_Reserved_signal4*1+ (0) )
#define get_GS_Reserved_signal5() float32( FEV_GS_WarnMsg.GS_Reserved_signal5*1+ (0) )
#define get_EDS_R_Warning_Flag_4() float32( FEV_EDS_R_WarnMsg.EDS_R_Warning_Flag_4*1+ (0) )
#define get_EDS_R_Warning_Flag_6() float32( FEV_EDS_R_WarnMsg.EDS_R_Warning_Flag_6*1+ (0) )
#define get_EDS_R_Warning_Flag_9() float32( FEV_EDS_R_WarnMsg.EDS_R_Warning_Flag_9*1+ (0) )
#define get_EDS_R_Warning_Flag_12() float32( FEV_EDS_R_WarnMsg.EDS_R_Warning_Flag_12*1+ (0) )
#define get_EDS_R_Reserved_signal3() float32( FEV_EDS_R_WarnMsg.EDS_R_Reserved_signal3*1+ (0) )
#define get_EDS_R_Reserved_signal4() float32( FEV_EDS_R_WarnMsg.EDS_R_Reserved_signal4*1+ (0) )
#define get_EDS_R_Reserved_signal5() float32( FEV_EDS_R_WarnMsg.EDS_R_Reserved_signal5*1+ (0) )
#define get_EDS_F_Warning_Flag_2() float32( FEV_EDS_F_WarnMsg.EDS_F_Warning_Flag_2*1+ (0) )
#define get_EDS_F_Warning_Flag_3() float32( FEV_EDS_F_WarnMsg.EDS_F_Warning_Flag_3*1+ (0) )
#define get_EDS_F_Warning_Flag_6() float32( FEV_EDS_F_WarnMsg.EDS_F_Warning_Flag_6*1+ (0) )
#define get_EDS_F_Warning_Flag_7() float32( FEV_EDS_F_WarnMsg.EDS_F_Warning_Flag_7*1+ (0) )
#define get_EDS_F_Warning_Flag_10() float32( FEV_EDS_F_WarnMsg.EDS_F_Warning_Flag_10*1+ (0) )
#define get_EDS_F_Warning_Flag_11() float32( FEV_EDS_F_WarnMsg.EDS_F_Warning_Flag_11*1+ (0) )
#define get_EDS_F_Reserved_signal2() float32( FEV_EDS_F_WarnMsg.EDS_F_Reserved_signal2*1+ (0) )
#define get_EDS_F_Reserved_signal4() float32( FEV_EDS_F_WarnMsg.EDS_F_Reserved_signal4*1+ (0) )
#define get_POD_Warning_Flag_1() float32( FEV_POD_WarnMsg.POD_Warning_Flag_1*1+ (0) )
#define get_POD_Warning_Flag_2() float32( FEV_POD_WarnMsg.POD_Warning_Flag_2*1+ (0) )
#define get_POD_Warning_Flag_3() float32( FEV_POD_WarnMsg.POD_Warning_Flag_3*1+ (0) )
#define get_POD_Warning_Flag_4() float32( FEV_POD_WarnMsg.POD_Warning_Flag_4*1+ (0) )
#define get_POD_Warning_Flag_5() float32( FEV_POD_WarnMsg.POD_Warning_Flag_5*1+ (0) )
#define get_POD_Warning_Flag_6() float32( FEV_POD_WarnMsg.POD_Warning_Flag_6*1+ (0) )
#define get_POD_Warning_Flag_7() float32( FEV_POD_WarnMsg.POD_Warning_Flag_7*1+ (0) )
#define get_POD_Warning_Flag_8() float32( FEV_POD_WarnMsg.POD_Warning_Flag_8*1+ (0) )
#define get_POD_Warning_Flag_9() float32( FEV_POD_WarnMsg.POD_Warning_Flag_9*1+ (0) )
#define get_POD_Warning_Flag_10() float32( FEV_POD_WarnMsg.POD_Warning_Flag_10*1+ (0) )
#define get_POD_Warning_Flag_11() float32( FEV_POD_WarnMsg.POD_Warning_Flag_11*1+ (0) )
#define get_POD_Warning_Flag_12() float32( FEV_POD_WarnMsg.POD_Warning_Flag_12*1+ (0) )
#define get_POD_Warning_Flag_13() float32( FEV_POD_WarnMsg.POD_Warning_Flag_13*1+ (0) )
#define get_POD_Warning_Flag_14() float32( FEV_POD_WarnMsg.POD_Warning_Flag_14*1+ (0) )
#define get_POD_Warning_Flag_15() float32( FEV_POD_WarnMsg.POD_Warning_Flag_15*1+ (0) )
#define get_POD_Warning_Flag_16() float32( FEV_POD_WarnMsg.POD_Warning_Flag_16*1+ (0) )
#define get_POD_Warning_Flag_17() float32( FEV_POD_WarnMsg.POD_Warning_Flag_17*1+ (0) )
#define get_POD_Warning_Flag_18() float32( FEV_POD_WarnMsg.POD_Warning_Flag_18*1+ (0) )
#define get_POD_Warning_Flag_19() float32( FEV_POD_WarnMsg.POD_Warning_Flag_19*1+ (0) )
#define get_POD_Warning_Flag_20() float32( FEV_POD_WarnMsg.POD_Warning_Flag_20*1+ (0) )
#define get_POD_Warning_Flag_21() float32( FEV_POD_WarnMsg.POD_Warning_Flag_21*1+ (0) )
#define get_POD_Warning_Flag_22() float32( FEV_POD_WarnMsg.POD_Warning_Flag_22*1+ (0) )
#define get_POD_Warning_Flag_23() float32( FEV_POD_WarnMsg.POD_Warning_Flag_23*1+ (0) )
#define get_POD_Warning_Flag_24() float32( FEV_POD_WarnMsg.POD_Warning_Flag_24*1+ (0) )
#define get_POD_Warning_Flag_25() float32( FEV_POD_WarnMsg.POD_Warning_Flag_25*1+ (0) )
#define get_POD_Warning_Flag_26() float32( FEV_POD_WarnMsg.POD_Warning_Flag_26*1+ (0) )
#define get_POD_Warning_Flag_27() float32( FEV_POD_WarnMsg.POD_Warning_Flag_27*1+ (0) )
#define get_POD_Warning_Flag_28() float32( FEV_POD_WarnMsg.POD_Warning_Flag_28*1+ (0) )
#define get_POD_Reserved_signal3() float32( FEV_POD_WarnMsg.POD_Reserved_signal3*1+ (0) )
#define get_POD_Reserved_signal4() float32( FEV_POD_WarnMsg.POD_Reserved_signal4*1+ (0) )
#define get_POD_Reserved_signal5() float32( FEV_POD_WarnMsg.POD_Reserved_signal5*1+ (0) )
#define get_XGW_srcNodeID() float32( FEV_XGW_NM.XGW_srcNodeID*1+ (0) )
#define get_XGW_CtrlBitVector() float32( FEV_XGW_NM.XGW_CtrlBitVector*1+ (0) )
#define get_XGW_usrData0() float32( FEV_XGW_NM.XGW_usrData0*1+ (0) )
#define get_XGW_usrData1() float32( FEV_XGW_NM.XGW_usrData1*1+ (0) )
#define get_XGW_usrData2() float32( FEV_XGW_NM.XGW_usrData2*1+ (0) )
#define get_XGW_usrData3() float32( FEV_XGW_NM.XGW_usrData3*1+ (0) )
#define get_XGW_usrData4() float32( FEV_XGW_NM.XGW_usrData4*1+ (0) )
#define get_XGW_usrData5() float32( FEV_XGW_NM.XGW_usrData5*1+ (0) )
#define get_EDS_R_srcNodeID() float32( FEV_EDS_R_NM.EDS_R_srcNodeID*1+ (0) )
#define get_EDS_R_CtrlBitVector() float32( FEV_EDS_R_NM.EDS_R_CtrlBitVector*1+ (0) )
#define get_EDS_R_usrData0() float32( FEV_EDS_R_NM.EDS_R_usrData0*1+ (0) )
#define get_EDS_R_usrData1() float32( FEV_EDS_R_NM.EDS_R_usrData1*1+ (0) )
#define get_EDS_R_usrData2() float32( FEV_EDS_R_NM.EDS_R_usrData2*1+ (0) )
#define get_EDS_R_usrData3() float32( FEV_EDS_R_NM.EDS_R_usrData3*1+ (0) )
#define get_EDS_R_usrData4() float32( FEV_EDS_R_NM.EDS_R_usrData4*1+ (0) )
#define get_EDS_R_usrData5() float32( FEV_EDS_R_NM.EDS_R_usrData5*1+ (0) )
#define get_EDS_F_srcNodeID() float32( FEV_EDS_F_NM.EDS_F_srcNodeID*1+ (0) )
#define get_EDS_F_CtrlBitVector() float32( FEV_EDS_F_NM.EDS_F_CtrlBitVector*1+ (0) )
#define get_EDS_F_usrData0() float32( FEV_EDS_F_NM.EDS_F_usrData0*1+ (0) )
#define get_EDS_F_usrData1() float32( FEV_EDS_F_NM.EDS_F_usrData1*1+ (0) )
#define get_EDS_F_usrData2() float32( FEV_EDS_F_NM.EDS_F_usrData2*1+ (0) )
#define get_EDS_F_usrData3() float32( FEV_EDS_F_NM.EDS_F_usrData3*1+ (0) )
#define get_EDS_F_usrData4() float32( FEV_EDS_F_NM.EDS_F_usrData4*1+ (0) )
#define get_EDS_F_usrData5() float32( FEV_EDS_F_NM.EDS_F_usrData5*1+ (0) )
#define get_IDB_srcNodeID() float32( FEV_IDB_NM.IDB_srcNodeID*1+ (0) )
#define get_IDB_CtrlBitVector() float32( FEV_IDB_NM.IDB_CtrlBitVector*1+ (0) )
#define get_IDB_usrData0() float32( FEV_IDB_NM.IDB_usrData0*1+ (0) )
#define get_IDB_usrData1() float32( FEV_IDB_NM.IDB_usrData1*1+ (0) )
#define get_IDB_usrData2() float32( FEV_IDB_NM.IDB_usrData2*1+ (0) )
#define get_IDB_usrData3() float32( FEV_IDB_NM.IDB_usrData3*1+ (0) )
#define get_IDB_usrData4() float32( FEV_IDB_NM.IDB_usrData4*1+ (0) )
#define get_IDB_usrData5() float32( FEV_IDB_NM.IDB_usrData5*1+ (0) )
#define get_VCU_srcNodeID() float32( FEV_VCU_NM.VCU_srcNodeID*1+ (0) )
#define get_VCU_CtrlBitVector() float32( FEV_VCU_NM.VCU_CtrlBitVector*1+ (0) )
#define get_VCU_usrData0() float32( FEV_VCU_NM.VCU_usrData0*1+ (0) )
#define get_VCU_usrData1() float32( FEV_VCU_NM.VCU_usrData1*1+ (0) )
#define get_VCU_usrData2() float32( FEV_VCU_NM.VCU_usrData2*1+ (0) )
#define get_VCU_usrData3() float32( FEV_VCU_NM.VCU_usrData3*1+ (0) )
#define get_VCU_usrData4() float32( FEV_VCU_NM.VCU_usrData4*1+ (0) )
#define get_VCU_usrData5() float32( FEV_VCU_NM.VCU_usrData5*1+ (0) )
#define get_ADAS_srcNodeID() float32( FEV_ADAS_NM.ADAS_srcNodeID*1+ (0) )
#define get_ADAS_CtrlBitVector() float32( FEV_ADAS_NM.ADAS_CtrlBitVector*1+ (0) )
#define get_ADAS_usrData0() float32( FEV_ADAS_NM.ADAS_usrData0*1+ (0) )
#define get_ADAS_usrData1() float32( FEV_ADAS_NM.ADAS_usrData1*1+ (0) )
#define get_ADAS_usrData2() float32( FEV_ADAS_NM.ADAS_usrData2*1+ (0) )
#define get_ADAS_usrData3() float32( FEV_ADAS_NM.ADAS_usrData3*1+ (0) )
#define get_ADAS_usrData4() float32( FEV_ADAS_NM.ADAS_usrData4*1+ (0) )
#define get_ADAS_usrData5() float32( FEV_ADAS_NM.ADAS_usrData5*1+ (0) )
#define get_GS_DiagRespData0() float32( FEV_GS_DiagResp.GS_DiagRespData0*1+ (0) )
#define get_GS_DiagRespData2() float32( FEV_GS_DiagResp.GS_DiagRespData2*1+ (0) )
#define get_GS_DiagRespData6() float32( FEV_GS_DiagResp.GS_DiagRespData6*1+ (0) )
#define get_EDS_R_DiagRespData2() float32( FEV_EDS_R_DiagResp.EDS_R_DiagRespData2*1+ (0) )
#define get_EDS_R_DiagRespData5() float32( FEV_EDS_R_DiagResp.EDS_R_DiagRespData5*1+ (0) )
#define get_EDS_R_DiagRespData6() float32( FEV_EDS_R_DiagResp.EDS_R_DiagRespData6*1+ (0) )
#define get_EDS_R_DiagRespData7() float32( FEV_EDS_R_DiagResp.EDS_R_DiagRespData7*1+ (0) )
#define get_EDS_F_DiagRespData2() float32( FEV_EDS_F_DiagResp.EDS_F_DiagRespData2*1+ (0) )
#define get_EDS_F_DiagRespData6() float32( FEV_EDS_F_DiagResp.EDS_F_DiagRespData6*1+ (0) )
#define get_IDB_DiagRespData1() float32( FEV_IDB_DiagResp.IDB_DiagRespData1*1+ (0) )
#define get_IDB_DiagRespData2() float32( FEV_IDB_DiagResp.IDB_DiagRespData2*1+ (0) )
#define get_IDB_DiagRespData5() float32( FEV_IDB_DiagResp.IDB_DiagRespData5*1+ (0) )
#define get_IDB_DiagRespData6() float32( FEV_IDB_DiagResp.IDB_DiagRespData6*1+ (0) )
#define get_EPS2_DiagRespData1() float32( FEV_EPS2_DiagResp.EPS2_DiagRespData1*1+ (0) )
#define get_EPS2_DiagRespData2() float32( FEV_EPS2_DiagResp.EPS2_DiagRespData2*1+ (0) )
#define get_EPS2_DiagRespData4() float32( FEV_EPS2_DiagResp.EPS2_DiagRespData4*1+ (0) )
#define get_EPS2_DiagRespData6() float32( FEV_EPS2_DiagResp.EPS2_DiagRespData6*1+ (0) )
#define get_EPS2_DiagRespData7() float32( FEV_EPS2_DiagResp.EPS2_DiagRespData7*1+ (0) )
#define get_VCU_DiagRespData4() float32( FEV_VCU_DiagResp.VCU_DiagRespData4*1+ (0) )
#define get_VCU_DiagRespData7() float32( FEV_VCU_DiagResp.VCU_DiagRespData7*1+ (0) )
#define get_POD_DCDC_DiagRespData2() float32( FEV_POD_DCDC_DiagResp.POD_DCDC_DiagRespData2*1+ (0) )
#define get_POD_DCDC_DiagRespData3() float32( FEV_POD_DCDC_DiagResp.POD_DCDC_DiagRespData3*1+ (0) )
#define get_POD_DCDC_DiagRespData6() float32( FEV_POD_DCDC_DiagResp.POD_DCDC_DiagRespData6*1+ (0) )
#define get_POD_OBC_DiagRespData1() float32( FEV_POD_OBC_DiagResp.POD_OBC_DiagRespData1*1+ (0) )
#define get_POD_OBC_DiagRespData3() float32( FEV_POD_OBC_DiagResp.POD_OBC_DiagRespData3*1+ (0) )
#define get_POD_OBC_DiagRespData5() float32( FEV_POD_OBC_DiagResp.POD_OBC_DiagRespData5*1+ (0) )
#define get_POD_OBC_DiagRespData7() float32( FEV_POD_OBC_DiagResp.POD_OBC_DiagRespData7*1+ (0) )
#define get_POD_DiagRespData0() float32( FEV_POD_GW_Response.POD_DiagRespData0*1+ (0) )
#define get_POD_DiagRespData3() float32( FEV_POD_GW_Response.POD_DiagRespData3*1+ (0) )
#define get_POD_DiagRespData4() float32( FEV_POD_GW_Response.POD_DiagRespData4*1+ (0) )
#define get_POD_DiagRespData5() float32( FEV_POD_GW_Response.POD_DiagRespData5*1+ (0) )
#define get_GS_DiagReqData4() float32( FEV_GS_DiagReq.GS_DiagReqData4*1+ (0) )
#define get_EDS_R_DiagReqData1() float32( FEV_EDS_R_DiagReq.EDS_R_DiagReqData1*1+ (0) )
#define get_EDS_R_DiagReqData3() float32( FEV_EDS_R_DiagReq.EDS_R_DiagReqData3*1+ (0) )
#define get_EDS_R_DiagReqData4() float32( FEV_EDS_R_DiagReq.EDS_R_DiagReqData4*1+ (0) )
#define get_EDS_R_DiagReqData6() float32( FEV_EDS_R_DiagReq.EDS_R_DiagReqData6*1+ (0) )
#define get_EDS_F_DiagReqData0() float32( FEV_EDS_F_DiagReq.EDS_F_DiagReqData0*1+ (0) )
#define get_EDS_F_DiagReqData2() float32( FEV_EDS_F_DiagReq.EDS_F_DiagReqData2*1+ (0) )
#define get_RCU_DiagReqData4() float32( FEV_RCU_DiagReq.RCU_DiagReqData4*1+ (0) )
#define get_RCU_DiagReqData6() float32( FEV_RCU_DiagReq.RCU_DiagReqData6*1+ (0) )
#define get_RCU_DiagReqData7() float32( FEV_RCU_DiagReq.RCU_DiagReqData7*1+ (0) )
#define get_IDB_DiagReqData6() float32( FEV_IDB_DiagReq.IDB_DiagReqData6*1+ (0) )
#define get_EPS2_DiagReqData3() float32( FEV_EPS2_DiagReq.EPS2_DiagReqData3*1+ (0) )
#define get_EPS2_DiagReqData5() float32( FEV_EPS2_DiagReq.EPS2_DiagReqData5*1+ (0) )
#define get_VCU_DiagReqData0() float32( FEV_VCU_DiagReq.VCU_DiagReqData0*1+ (0) )
#define get_VCU_DiagReqData2() float32( FEV_VCU_DiagReq.VCU_DiagReqData2*1+ (0) )
#define get_VCU_DiagReqData5() float32( FEV_VCU_DiagReq.VCU_DiagReqData5*1+ (0) )
#define get_VCU_DiagReqData7() float32( FEV_VCU_DiagReq.VCU_DiagReqData7*1+ (0) )
#define get_POD_DCDC_DiagReqData2() float32( FEV_POD_DCDC_DiagReq.POD_DCDC_DiagReqData2*1+ (0) )
#define get_POD_DCDC_DiagReqData4() float32( FEV_POD_DCDC_DiagReq.POD_DCDC_DiagReqData4*1+ (0) )
#define get_POD_DCDC_DiagReqData5() float32( FEV_POD_DCDC_DiagReq.POD_DCDC_DiagReqData5*1+ (0) )
#define get_POD_OBC_DiagReqData3() float32( FEV_POD_OBC_DiagReq.POD_OBC_DiagReqData3*1+ (0) )
#define get_POD_OBC_DiagReqData7() float32( FEV_POD_OBC_DiagReq.POD_OBC_DiagReqData7*1+ (0) )
#define get_POD_DiagReqData0() float32( FEV_POD_GW_Request.POD_DiagReqData0*1+ (0) )
#define get_DiagReqAllCANData0() float32( FEV_DIAG_Req_All_CAN.DiagReqAllCANData0*1+ (0) )
#define get_DiagReqAllCANData1() float32( FEV_DIAG_Req_All_CAN.DiagReqAllCANData1*1+ (0) )
#define get_DiagReqAllCANData2() float32( FEV_DIAG_Req_All_CAN.DiagReqAllCANData2*1+ (0) )
#define get_DiagReqAllCANData3() float32( FEV_DIAG_Req_All_CAN.DiagReqAllCANData3*1+ (0) )
#define get_DiagReqAllCANData4() float32( FEV_DIAG_Req_All_CAN.DiagReqAllCANData4*1+ (0) )
#define get_DiagReqAllCANData5() float32( FEV_DIAG_Req_All_CAN.DiagReqAllCANData5*1+ (0) )
#define get_DiagReqAllCANData6() float32( FEV_DIAG_Req_All_CAN.DiagReqAllCANData6*1+ (0) )
#define get_DiagReqAllCANData7() float32( FEV_DIAG_Req_All_CAN.DiagReqAllCANData7*1+ (0) )
#define get_DiagReqAllEcuData0() float32( FEV_DIAG_Req_All_Ecu.DiagReqAllEcuData0*1+ (0) )
#define get_DiagReqAllEcuData1() float32( FEV_DIAG_Req_All_Ecu.DiagReqAllEcuData1*1+ (0) )
#define get_DiagReqAllEcuData2() float32( FEV_DIAG_Req_All_Ecu.DiagReqAllEcuData2*1+ (0) )
#define get_DiagReqAllEcuData3() float32( FEV_DIAG_Req_All_Ecu.DiagReqAllEcuData3*1+ (0) )
#define get_DiagReqAllEcuData4() float32( FEV_DIAG_Req_All_Ecu.DiagReqAllEcuData4*1+ (0) )
#define get_DiagReqAllEcuData5() float32( FEV_DIAG_Req_All_Ecu.DiagReqAllEcuData5*1+ (0) )
#define get_DiagReqAllEcuData6() float32( FEV_DIAG_Req_All_Ecu.DiagReqAllEcuData6*1+ (0) )
#define get_DiagReqAllEcuData7() float32( FEV_DIAG_Req_All_Ecu.DiagReqAllEcuData7*1+ (0) )
#define get_SEED_CAN_Req1() float32( FEV_SEED_CAN_Req1_CCU_R.SEED_CAN_Req1*1+ (0) )
#define get_SEED_CAN_Req2() float32( FEV_SEED_CAN_Req2_CCU_F.SEED_CAN_Req2*1+ (0) )
#define get_SEED_CAN_Req5() float32( FEV_SEED_CAN_Req5_EDS_R.SEED_CAN_Req5*1+ (0) )
#define get_SEED_CAN_Req6() float32( FEV_SEED_CAN_Req6_BCM.SEED_CAN_Req6*1+ (0) )
#define get_SEED_CAN_Req7() float32( FEV_SEED_CAN_Req7_VCU_PT.SEED_CAN_Req7*1+ (0) )
#define get_SEED_CAN_Req8() float32( FEV_SEED_CAN_Req8_ADAS_PT.SEED_CAN_Req8*1+ (0) )
#define get_SEED_CAN_Req10() float32( FEV_SEED_CAN_Req10_IDB_PT.SEED_CAN_Req10*1+ (0) )
#define get_SEED_CAN_Req18() float32( FEV_SEED_CAN_Req18_MHU.SEED_CAN_Req18*1+ (0) )
#define get_SEED_CAN_Req23() float32( FEV_SEED_CAN_Req23_EDS_F.SEED_CAN_Req23*1+ (0) )
#define get_SEED_CAN_Req22() float32( FEV_SEED_CAN_Req22_POD.SEED_CAN_Req22*1+ (0) )
#define get_Diag_Request_ECU_Data0() float32( FEV_Diag_Request_ECU.Diag_Request_ECU_Data0*1+ (0) )
#define get_Diag_Request_ECU_Data1() float32( FEV_Diag_Request_ECU.Diag_Request_ECU_Data1*1+ (0) )
#define get_Diag_Request_ECU_Data2() float32( FEV_Diag_Request_ECU.Diag_Request_ECU_Data2*1+ (0) )
#define get_Diag_Request_ECU_Data3() float32( FEV_Diag_Request_ECU.Diag_Request_ECU_Data3*1+ (0) )
#define get_Diag_Request_ECU_Data4() float32( FEV_Diag_Request_ECU.Diag_Request_ECU_Data4*1+ (0) )
#define get_Diag_Request_ECU_Data5() float32( FEV_Diag_Request_ECU.Diag_Request_ECU_Data5*1+ (0) )
#define get_Diag_Request_ECU_Data6() float32( FEV_Diag_Request_ECU.Diag_Request_ECU_Data6*1+ (0) )
#define get_Diag_Request_ECU_Data7() float32( FEV_Diag_Request_ECU.Diag_Request_ECU_Data7*1+ (0) )


#set macros

typedef struct {
	uint8 MFS_VoiceRecognitionOn_Off : 3 ;
	uint8 MFS_ISAControl : 2 ;
	uint8 MFS_CruiseSpeedIncrease : 3 ;
	uint8 MFS_TelephoneCall_EndCall : 3 ;
	uint8 MFS_LKAControl : 2 ;
	uint8 MFS_CruiseGapIncrease : 3 ;
	uint8 MFS_CruiseOn_Off : 3 ;
	uint8 MFS_CruiseGapDecrease : 3 ;
	uint8 MFS_CruiseCancel : 2 ;
	uint8 MFS_CruiseSpeedDecrease : 3 ;
	uint8 MFS_SourseControl : 3 ;
	uint8 MFS_UpControl : 3 ;
	uint8 MFS_DownControl : 3 ;
	uint8 MFS_LeftControl : 3 ;
	uint8 MFS_Failure : 1 ;
	uint8 MFS_RightControl : 3 ;
	uint8 MFS_OK_Control : 3 ;
} MFS_Control_Button ;


typedef struct {
	uint8 CHKSM_CRASH_Sts : 8 ;
	uint8 ALV_CRASH_Sts : 4 ;
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
	uint16 Mileage : 16 ;
} IDB_MILEAGE ;


typedef struct {
	uint8 VCU_Pump_3_Flowrate : 8 ;
} VCU_PUMP_STATUS ;


typedef struct {
	uint8 CHKSM_IDB_FUNCTION : 8 ;
	uint8 ALV_IDB_FUNCTION : 4 ;
	uint8 STAT_ABS : 2 ;
	uint8 ABS_Active : 2 ;
	uint8 AYC_Active : 2 ;
	uint8 ASR_Active : 2 ;
	uint8 STAT_DSC : 2 ;
	uint8 DSC_Active : 2 ;
	uint8 HBA_ActiveSignal : 2 ;
	uint8 ARM_ActiveSignal : 2 ;
	uint8 STAT_AutoHazardBlinking : 2 ;
	uint8 MSR_Active : 2 ;
	uint8 HSA_ActiveSignal : 2 ;
	uint8 EPBi_ECD_ActiveSignal : 2 ;
	uint8 TSM_Active : 2 ;
	uint8 HAS_Available : 2 ;
	uint8 STAT_EBD : 2 ;
	uint8 EBD_Active : 2 ;
	uint8 ST_BRG_MSA : 4 ;
} IDB_FUNCTION ;


typedef struct {
} MHU_IDB_Mode_Select ;


typedef struct {
	uint8 CRC_VCU_HV_DrvSys_status : 8 ;
	uint8 ALIV_VCU_HV_DrvSys_status : 4 ;
	uint8 VCU_HVsystem_status : 3 ;
	uint16 VCU_ACPD_Percent : 12 ;
	uint8 VCU_ACPD_Percent_Valid : 1 ;
	uint8 VCU_ACTGear : 3 ;
	uint8 VCU_ACTGearValid : 1 ;
	uint8 VCU_ACT_DriveMode_Valid : 1 ;
	uint8 VCU_HV_DRVsystem_status : 3 ;
	uint8 VCU_Recu_BrakeLight_ON_Req : 2 ;
} VCU_HV_DrvSys_status ;


typedef struct {
} VCU_IDB_Regen_Cap ;


typedef struct {
} VCU_IDB_Regen_Act ;


typedef struct {
} IDB_VCU_ACC_TorqueRequest ;


typedef struct {
	uint8 MHU_UserProfileId : 4 ;
} MHU_Vehicle_Info ;


typedef struct {
	uint8 SOH_SUL : 8 ;
	uint8 SOC_STATE : 2 ;
	uint8 FLAG_INCONSTENCY : 1 ;
} BAS_Measured_Data ;


typedef struct {
	uint8 CHKSM_BCM_STAT_DOOR_FLAP : 8 ;
	uint8 ALIVE_BCM_STAT_DOOR_FLAP : 4 ;
	uint8 BCM_STAT_TrunkAjar : 2 ;
	uint8 BCM_STAT_DoorAjarFL : 2 ;
	uint8 BCM_STAT_DoorAjarFR : 2 ;
	uint8 BCM_STAT_DoorAjarRL : 2 ;
	uint8 BCM_STAT_DoorAjarRR : 2 ;
	uint8 BCM_STAT_BonnetAjar : 2 ;
} BCM_STAT_DOOR_FLAP ;


typedef struct {
} GS_DriveReq ;


typedef struct {
	uint8 CHKSM_BCM_SWITCH_Sts : 8 ;
	uint8 ALV_BCM_SWITCH_Sts : 4 ;
	uint8 BCM_STAT_BrakeSwitch : 2 ;
	uint8 BCM_STAT_HazardWarn : 2 ;
	uint8 BCM_STAT_Horn : 2 ;
	uint8 BCM_STAT_Autowiping : 2 ;
	uint8 BCM_WelcomeActive : 2 ;
	uint8 ACM_Seat_Belt_Status_3rd_Row_Dri : 2 ;
} BCM_SwitchSts ;


typedef struct {
	uint8 CHKSM_BCM_VOLTAGE : 8 ;
	uint8 ALIVE_BCM_VOLTAGE : 4 ;
	uint16 UBatt : 14 ;
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
	uint8 STAT_CL_R_L : 2 ;
	uint8 STAT_CL_15_1_L : 2 ;
	uint8 STAT_CL_15_1_DME_L : 2 ;
	uint8 FobId : 2 ;
	uint8 STAT_Terminal : 3 ;
	uint8 STAT_CL30_C_BEV : 2 ;
	uint8 BCM_Clamp_Transport : 3 ;
} BCM_CLAMP_STAT ;


typedef struct {
	uint8 CCU_REQ_ESSMotorControl : 3 ;
	uint8 CCU_AC_PWM : 7 ;
} CCU_MaxReq ;


typedef struct {
	uint16 ACCharging_MaxChargingPower : 10 ;
	uint16 CurrentACChargingPower : 16 ;
	uint16 ACCharging_MaxCurrent : 16 ;
} VCU_ACCharging_Info ;


typedef struct {
	uint16 DCCharging_MaxChargingPower : 10 ;
	uint16 CurrentDCChargingPower : 16 ;
	uint16 DCCharging_MaxCurrent : 16 ;
} VCU_DCCharging_Info ;


typedef struct {
	uint8 CHKSM_BCM_TERMINAL : 8 ;
	uint8 ALV_BCM_TERMINAL : 4 ;
	uint8 ST_KL : 4 ;
	uint8 ST_KL_KEY_VLD : 4 ;
	uint8 ST_STCD_PENG : 2 ;
	uint8 ST_SSB : 2 ;
	uint8 RWDT_BLS : 4 ;
	uint8 RQ_DRVG_RDI : 2 ;
	uint8 CTR_ENG_STOP : 2 ;
	uint8 ST_VEH_CON : 4 ;
} BCM_TERMINAL ;


typedef struct {
} MHU_PnC_triggerMsg ;


typedef struct {
} VCU_PnC_ErrorMsg ;


typedef struct {
} VCU_PnC_ErrorMsg_2 ;


typedef struct {
} EDS_FS_FR ;


typedef struct {
} EDS_FS_RR ;


typedef struct {
	uint8 VCU_AcChgGunIn : 1 ;
	uint8 VCU_DCChgGunIn : 1 ;
	uint8 VCU_CPValue : 7 ;
	uint8 VCU_ACChargingVoltage : 8 ;
	uint8 VCU_MinCurrentOfACCharging : 3 ;
	uint8 VCU_MaxCurrentOfACCharging : 6 ;
} VCU_ChargingConnection ;


typedef struct {
	uint16 TWV1_N_Position : 16 ;
} VCU_TWV1_Frm ;


typedef struct {
	uint8 CHSKM_BMS_CurMeas : 8 ;
	uint8 ALV_BMS_CurMeas : 4 ;
	uint16 BMS_PackCur_MEAS : 16 ;
} BMS_CurMeas ;


typedef struct {
	uint8 Checksum_0x176 : 8 ;
	uint8 Rolling_Counter_0x176 : 4 ;
	uint16 BMS_HVPackVol_MEAS : 16 ;
	uint16 BMS_HVLinkVol_MEAS : 16 ;
} BMS_HVMeas1 ;


typedef struct {
	uint16 YSS_LONG_ACC_UNFILTERED : 16 ;
	uint16 YSS_LONG_ACC : 16 ;
} YSS_LongAcc ;


typedef struct {
	uint16 YSS_LAT_ACC_UNFILTERED : 16 ;
	uint16 YSS_LAT_ACC : 16 ;
} YSS_LateralAcc ;


typedef struct {
	uint16 YSS_YAW_RATE_UNFILTERED : 16 ;
	uint16 YSS_YAW_RATE : 16 ;
	uint8 YSS_TEMPERATURE : 8 ;
} YSS_YawRate ;


typedef struct {
	uint8 CHKSM_EPS2_SAS_Sensor : 8 ;
	uint8 ALV_EPS2_SAS_Sensor : 4 ;
	uint8 EPS2_SAS_SASStsSnsr : 2 ;
	uint16 EPS2_SAS_SteerWhlRotSpd : 14 ;
	uint8 EPS2_SAS_SteerWhlRotSpdStatus : 2 ;
	uint8 EPS2_SAS_SASFailure : 2 ;
	uint8 EPS2_SAS_Calibrated : 2 ;
	uint8 EPS2_SAS_SteerWheelAngleValid : 2 ;
	uint16 EPS2_SAS_SteerWheelAngle : 16 ;
} EPS2_SAS_Sensor ;


typedef struct {
} VCU_Debug ;


typedef struct {
} VCU_FS_A ;


typedef struct {
} VCU_FS_B ;


typedef struct {
	uint8 CHSKM_V_VEH : 8 ;
	uint8 ALIV_V_VEH : 4 ;
	uint16 V_VEH_COG : 16 ;
	uint8 DVCO_VEH : 3 ;
	uint8 QU_V_VEH_COG : 4 ;
} IDB_V_VEH ;


typedef struct {
} VCU_FR_TorqCap ;


typedef struct {
} VCU_RR_TorqCap ;


typedef struct {
	uint8 CHKSM_EDS_OutPut_FR : 8 ;
	uint8 ALV_EDS_OutPut_FR : 4 ;
	uint8 EDS_Work_STS_FR : 4 ;
	uint16 EDS_Spd_FR : 16 ;
	uint8 EDS_output_trqValid_FR : 2 ;
	uint8 EDS_MotorDriveSts_FR : 2 ;
	uint8 EDS_powoff_req_FR : 2 ;
	uint8 EDS_SpdValid_FR : 2 ;
	uint16 EDS_output_trq_FR : 16 ;
	uint8 EDS_VCU_6SO_flag_FWD : 2 ;
} EDS_OutPut_FR ;


typedef struct {
	uint8 CHKSM_EDS_OutPut_RR : 8 ;
	uint8 ALV_EDS_OutPut_RR : 4 ;
	uint8 EDS_Work_STS_RR : 4 ;
	uint16 EDS_Spd_RR : 16 ;
	uint8 EDS_output_trqValid_RR : 2 ;
	uint8 EDS_MotorDriveSts_RR : 2 ;
	uint8 EDS_powoff_req_RR : 2 ;
	uint8 EDS_SpdValid_RR : 2 ;
	uint16 EDS_output_trq_RR : 16 ;
	uint8 EDS_VCU_6SO_flag_RWD : 2 ;
} EDS_OutPut_RR ;


typedef struct {
	uint16 ADAS_VCU_Wheeltorque : 13 ;
} ADAS_VCU_ACC_Status ;


typedef struct {
	uint8 CHKSM_IC_ODO : 8 ;
	uint8 ALIV_IC_ODO : 4 ;
	uint32 MHU_Odometer_IC : 20 ;
} IC_ODO ;


typedef struct {
	uint16 VCU_vDCDCRequest : 16 ;
	uint16 VCU_iDCDCRequest_lim : 16 ;
} VCU_POD_reqDCDC ;


typedef struct {
	uint8 CRC_VCU_ADAS : 8 ;
	uint8 ALIV_VCU_ADAS : 4 ;
	uint8 VCU_ADAS_ControledRes : 1 ;
	uint8 VCU_ADAS_Available : 1 ;
	uint8 VCU_Accel_Pedal_Position_Virtual : 8 ;
	uint8 VCU_ADAS_FuncMode : 3 ;
	uint8 VCU_ADAS_CtrlAbortFeedback : 3 ;
} VCU_ADAS_ACC_status ;


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
	uint8 BMS_SOH : 8 ;
	uint8 BMS_SOE : 8 ;
} BMS_Sts ;


typedef struct {
} CCUR_ClimateSetting ;


typedef struct {
} CCUF_ClimateSetting ;


typedef struct {
	uint8 CHSKM_VCU_EDSControl_Front : 8 ;
	uint8 ALV_VCU_EDSControl_Front : 4 ;
	uint16 VCU_EDS_TargetTqMin_FWD : 10 ;
	uint16 VCU_EDS_demtrq_FWD : 12 ;
	uint16 VCU_EDS_TargetTqMax_FWD : 10 ;
	uint8 VCU_EDS_demtrqValid_FWD : 1 ;
	uint8 VCU_EDS_HeatPowerDemand : 8 ;
} VCU_EDSControl_Front ;


typedef struct {
	uint8 CHSKM_VCU_EDSControl_Rear : 8 ;
	uint8 ALV_VCU_EDSControl_Rear : 4 ;
	uint16 VCU_EDS_TargetTqMin_RWD : 10 ;
	uint16 VCU_EDS_demtrq_RWD : 12 ;
	uint16 VCU_EDS_TargetTqMax_RWD : 10 ;
	uint8 VCU_EDS_demtrqValid_RWD : 1 ;
} VCU_EDSControl_Rear ;


typedef struct {
	uint8 CHKSM_TRM_STATUS : 8 ;
	uint8 ALIVE_TRM_STATUS : 4 ;
	uint8 TrailerDetected : 2 ;
} TRM_STATUS ;


typedef struct {
	uint8 CHSKM_EDS_curSts_FR : 8 ;
	uint8 ALV_EDS_curSts_FR : 4 ;
	uint8 EDS_MotTemp_MEAS_EDS_FWD : 8 ;
	uint8 EDS_temp_FWD : 8 ;
	uint8 EDS_CoolFlowrate_DMD_FWD : 8 ;
	uint8 EDS_DampingState_FWD : 1 ;
	uint8 EDS_IGBTState_FWD : 2 ;
} EDS_curSts_FR ;


typedef struct {
	uint8 CHSKM_EDS_curSts_RR : 8 ;
	uint8 ALV_EDS_curSts_RR : 4 ;
	uint8 EDS_MotTemp_MEAS_EDS_RWD : 8 ;
	uint8 EDS_temp_RWD : 8 ;
	uint8 EDS_CoolFlowrate_DMD_RWD : 8 ;
	uint8 EDS_DampingState_RWD : 1 ;
	uint8 EDS_IGBTState_RWD : 2 ;
} EDS_curSts_RR ;


typedef struct {
	uint8 CHKSM_IDB_WheelSts_FR : 8 ;
	uint8 ALV_IDB_WheelSts_FR : 4 ;
	uint8 IDB_WheelDirection_FR : 2 ;
	uint8 IDB_WheelDirection_FL : 2 ;
	uint16 IDB_WheelSpeedRC_FL : 16 ;
	uint16 IDB_WheelSpeedRC_FR : 16 ;
} IDB_WheelSts_FR ;


typedef struct {
	uint8 CHKSM_IDB_WheelSts_RR : 8 ;
	uint8 ALV_IDB_WheelSts_RR : 4 ;
	uint8 IDB_WheelDirection_RR : 2 ;
	uint8 IDB_WheelDirection_RL : 2 ;
	uint16 IDB_WheelSpeedRC_RL : 16 ;
	uint16 IDB_WheelSpeedRC_RR : 16 ;
} IDB_WheelSts_RR ;


typedef struct {
	uint8 CHKSM_IDB_BrkPdl : 8 ;
	uint8 ALV_IDB_BrkPdl : 4 ;
	uint16 IDB_CircPres : 15 ;
	uint16 IDB_BrkPedlVal : 15 ;
	uint8 IDB_BrkPedlValVldty : 1 ;
} IDB_BrkPdl ;


typedef struct {
	uint16 IDB_FrntLeEstimdWhlPres : 15 ;
	uint16 IDB_FrntRiEstimdWhlPres : 15 ;
	uint16 IDB_ReLeEstimdWhlPres : 15 ;
	uint16 IDB_ReRiEstimdWhlPres : 15 ;
} IDB_WheelPressEst ;


typedef struct {
	uint8 CHKSM_RCU_EPB_Sts : 8 ;
	uint8 ALV_RCU_EPB_Sts : 4 ;
	uint8 RCU_EPB_SystemState : 3 ;
	uint16 RCU_EPB_DecelReq : 16 ;
	uint8 RCU_EPB_FltSts : 3 ;
} RCU_EPB_Sts ;


typedef struct {
	uint8 BMS_MinCellTemp : 8 ;
	uint8 BMS_PackTemp : 8 ;
	uint8 BMS_MaxCellTemp : 8 ;
	uint8 BMS_MaxMinDiffCellTemp : 8 ;
} BMS_CellTemp ;


typedef struct {
	uint8 CHSKM_BMS_CoolntInletOutletTmp : 8 ;
	uint8 ALV_BMS_CoolntInletOutletTmp : 4 ;
	uint8 BMS_CoolantInletTemp : 8 ;
	uint8 BMS_CoolantOutletTemp : 8 ;
} BMS_CoolntInletOutletTmp ;


typedef struct {
	uint16 AVL_RPM_WHL_RLH : 16 ;
	uint16 AVL_RPM_WHL_RRH : 16 ;
	uint8 QU_AVL_RPM_WHL_RLH : 4 ;
	uint8 QU_AVL_RPM_WHL_RRH : 4 ;
} IDB_AVL_RPM_WHL_REAR ;


typedef struct {
	uint16 AVL_RPM_WHL_FLH : 16 ;
	uint16 AVL_RPM_WHL_FRH : 16 ;
	uint8 QU_AVL_RPM_WHL_FLH : 4 ;
	uint8 QU_AVL_RPM_WHL_FRH : 4 ;
} IDB_AVL_RPM_WHL_FRONT ;


typedef struct {
} VCU_Wheel_Torque_Status ;


typedef struct {
	uint16 VCU_iLineLimit : 16 ;
	uint16 VCU_iOBCRequest : 16 ;
	uint16 VCU_vOBCRequest : 16 ;
} VCU_POD_reqCharge ;


typedef struct {
	uint16 THM_tempCoolantInletEMU : 16 ;
	uint8 THM_pwmPumpOBC : 8 ;
} VCU_POD_info ;


typedef struct {
	uint8 CHSKM_EDS_Power_FR : 8 ;
	uint8 ALV_EDS_Power_FR : 4 ;
	uint8 EDS_MotorSerialNum_FWD : 1 ;
	uint16 EDS_MaxTrq_FWD : 16 ;
	uint16 EDS_MinTrq_FWD : 16 ;
} EDS_Power_FR ;


typedef struct {
	uint8 CHSKM_EDS_R_Power_RR : 8 ;
	uint8 ALV_EDS_R_Power_RR : 4 ;
	uint8 EDS_MotorSerialNum_RWD : 1 ;
	uint16 EDS_MaxTrq_RWD : 16 ;
	uint16 EDS_MinTrq_RWD : 16 ;
} EDS_Power_RR ;


typedef struct {
	uint8 CHKSM_IC_SENSOR : 8 ;
	uint8 ALV_IC_SENSOR : 4 ;
	uint8 MHU_STAT_AmbientTempRaw : 8 ;
	uint8 MHU_STAT_FuelLevel : 8 ;
	uint8 MHU_STAT_AmbientTemp : 8 ;
	uint8 MHU_STAT_CoolantLevelStatus : 2 ;
} IC_SENSOR ;


typedef struct {
	uint8 DISP_HR : 8 ;
	uint8 DISP_MN : 8 ;
	uint8 DISP_SEC : 8 ;
	uint8 DISP_DATE_DAY : 8 ;
	uint8 DISP_DATE_MON : 4 ;
	uint8 DISP_DATE_WDAY : 4 ;
	uint16 DISP_DATE_YR : 16 ;
	uint8 ST_DISP_CTI_DATE : 4 ;
} MHU_DATE_TIME ;


typedef struct {
	uint8 DISP_HR_UTC : 8 ;
	uint8 DISP_MN_UTC : 8 ;
	uint8 DISP_SEC_UTC : 8 ;
	uint8 DISP_DATE_DAY_UTC : 8 ;
	uint8 DISP_DATE_MON_UTC : 4 ;
	uint16 DISP_DATE_YR_UTC : 16 ;
} MHU_DATE_TIME_UTC ;


typedef struct {
	uint8 CCU_STAT_Auto : 2 ;
	uint8 CCU_STAT_OnOff : 2 ;
	uint8 CCU_STAT_Defrost : 2 ;
	uint8 CCU_STAT_PTC_Heater : 3 ;
	uint8 CCU_STAT_TempDriver : 8 ;
	uint8 CCU_STAT_TempPassenger : 8 ;
} CCU_STATUS ;


typedef struct {
	uint8 CHKSM_CCU_TEMP_PRESSURE : 8 ;
	uint8 ALV_CCU_TEMP_PRESSURE : 4 ;
	uint8 CCU_Pressure_AC : 6 ;
	uint8 CCU_InteriorTemp : 8 ;
	uint8 CCU_TempEx_AC : 8 ;
	uint8 CCU_EvaporatorTemp : 8 ;
} CCU_TEMP_PRESSURE ;


typedef struct {
	uint16 HtrMediumOutletTemp : 9 ;
	uint16 HtrMediumInletTemp : 9 ;
	uint16 ECompRpm : 16 ;
	uint8 ECompPowerConsumption : 8 ;
} VCU_HeatCoolStat ;


typedef struct {
	uint8 CCU_CoolPowerDemand : 8 ;
	uint8 CCU_HeatPowerDemand : 8 ;
	uint8 CCU_CoolDemand : 8 ;
	uint8 CCU_HeatDemand : 8 ;
} CCU_HeatCoolReq ;


typedef struct {
	uint8 CHSKM_POD_StatusCharger1 : 8 ;
	uint8 ALV_POD_StatusCharger1 : 4 ;
	uint8 POD_statusOBC : 3 ;
	uint8 POD_OBC_Max_Current_Out : 8 ;
	uint8 POD_iDCOut : 8 ;
	uint16 POD_vDCOut : 16 ;
	uint8 SECCAN_POD_StatusCharger1 : 8 ;
} POD_StatusCharger1 ;


typedef struct {
	uint8 CHSKM_POD_StatusCharger2 : 8 ;
	uint8 ALV_POD_StatusCharger2 : 4 ;
	uint8 POD_phaseACInput : 2 ;
	uint16 POD_iACInput : 16 ;
	uint16 POD_vACInput : 16 ;
	uint8 POD_tempACCharger : 8 ;
	uint8 POD_tempColdplate : 8 ;
} POD_StatusCharger2 ;


typedef struct {
	uint8 CHSKM_POD_StatusDCDC1 : 8 ;
	uint8 ALV_POD_StatusDCDC1 : 4 ;
	uint8 POD_statusDCDC : 3 ;
	uint8 POD_DCDC_Max_Current_Out : 8 ;
} POD_StatusDCDC1 ;


typedef struct {
	uint16 POD_vFC : 16 ;
} POD_StatusFC ;


typedef struct {
	uint32 MILE_KM : 24 ;
	uint8 FLLV_FUTA : 8 ;
	uint16 RNG : 12 ;
	uint8 ST_FLLV_FUTA_SPAR : 2 ;
} IC_MILEAGE ;


typedef struct {
	uint8 CHSKM_POD_StatusDCDC2 : 8 ;
	uint8 ALV_POD_StatusDCDC2 : 4 ;
	uint16 POD_vDCInput : 16 ;
	uint16 POD_iDCDCOutput : 16 ;
	uint16 POD_vDCDCOutput : 16 ;
} POD_StatusDCDC2 ;


typedef struct {
	uint16 EDS_bus_Volt_FWD : 14 ;
	uint16 EDS_bus_Curr_FWD : 16 ;
} EDS_Sts_FR ;


typedef struct {
	uint16 EDS_bus_Volt_RWD : 14 ;
	uint16 EDS_bus_Curr_RWD : 16 ;
} EDS_R_Sts_RR ;


typedef struct {
	uint8 POD_tempHVBusPlus : 8 ;
	uint8 POD_tempHVBusNeg : 8 ;
	uint8 POD_tempInternal : 8 ;
	uint8 POD_tempColdPlate : 8 ;
	uint8 POD_FlowRate_Req : 8 ;
	uint8 POD_CoolPwrDemand : 8 ;
} POD_Thermal ;


typedef struct {
	uint8 Checksum_0x375 : 8 ;
	uint8 Rolling_Counter_0x375 : 4 ;
	uint8 BMS_PreChgRelay_ERR : 1 ;
	uint8 BMS_TotalNegRelay_ERR : 1 ;
	uint8 BMS_MainPosRelay_ERR : 1 ;
	uint8 BMS_MainPosRelay_STS : 3 ;
	uint8 BMS_PreChgRelay_STS : 3 ;
	uint8 BMS_TotalNegRelay_STS : 3 ;
} BMS_Relay ;


typedef struct {
	uint16 EPS2_SteeringTorque : 12 ;
	uint16 EPS2_Steering_angle_spd : 14 ;
	uint16 EPS2_Steering_angle : 16 ;
} EPS2_Advanced ;


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
	uint8 CHKSM_ACM_SEAT_OCCUPATION : 8 ;
	uint8 ALV_ACM_SEAT_OCCUPATION : 4 ;
	uint8 ACM_Seat_Occupancy_2nd_Row_Pas : 2 ;
	uint8 ACM_Seat_Occupancy_2nd_Row_Mid : 2 ;
	uint8 ACM_Seat_Belt_Status_Driver : 2 ;
	uint8 ACM_Seat_Belt_Status_2nd_Row_Dri : 2 ;
	uint8 ACM_Seat_Belt_Status_2nd_Row_Pas : 2 ;
} ACM_OCCUPANT_STATUS ;


typedef struct {
} VCU_Sts3 ;


typedef struct {
} BCM_Auth_Immo ;


typedef struct {
} VCU_Auth_Immo ;


typedef struct {
	uint8 SUM_VCU_Thermal_info_FB : 8 ;
	uint8 ALV_VCU_Thermal_info_FB : 4 ;
	uint8 VCU_Pump_1_Flowrate : 8 ;
	uint8 VCU_Pump_2_Flowrate : 8 ;
	uint8 VCU_TempSensor_1_value : 8 ;
	uint8 VCU_TempSensor_6_value : 8 ;
	uint8 VCU_TempSensor_5_value : 8 ;
} VCU_Thermal_info_FB ;


typedef struct {
	uint16 VCU_RunningRange : 12 ;
	uint8 VCU_RunningRange_chrg_estSts : 2 ;
	uint16 VCU_RunningRange_charged : 12 ;
	uint16 VCU_HVbatSoc_charged : 10 ;
	uint8 VCU_HVbatSoc_charged_estStatus : 2 ;
} VCU_HVsystem_status ;


typedef struct {
	uint8 VCU_MHU_Ack_TargetSOC : 7 ;
	uint8 VCU_ValetMode_MaxSpeedSts : 8 ;
} VCU_HMI_Info ;


typedef struct {
	uint8 CHKSM_MHU_EVSetting : 8 ;
	uint8 ALV_MHU_EVSetting : 4 ;
	uint8 MHU_ChargeSetTargetSOC : 7 ;
	uint8 MHU_ChargingRequest : 2 ;
	uint8 MHU_ChgPort_Open_req : 2 ;
	uint8 MHU_SET_DrivingModeSwitch : 2 ;
	uint8 MHU_ValetMode_Activation : 8 ;
	uint8 MHU_ValetMode_MaxSpeed : 8 ;
	uint8 MHU_ChargingCurrentLimit : 6 ;
} MHU_EvSetting ;


typedef struct {
} MHU_CCUF_ClimateSetting ;


typedef struct {
	uint8 MHU_FOTA_Checksum : 8 ;
	uint8 MHU_FOTA_Alive_Counter : 4 ;
	uint8 MHU_FOTA_State : 4 ;
	uint8 MHU_FOTA_Error_Code : 8 ;
} MHU_FOTA_STATUS ;


typedef struct {
	uint16 VCU_Instant_ConsumEnergy : 10 ;
	uint16 VCU_Average_ConsumEnergy : 10 ;
} VCU_MHU_info_2 ;


typedef struct {
} EDS_Error_FR_A ;


typedef struct {
} EDS_Error_RR_A ;


typedef struct {
	uint8 VCU_BrakeRegenMode : 2 ;
	uint8 VCU_PowerRegenGaugeDisplay : 8 ;
	uint8 VCU_Charging_Authen_stt : 3 ;
	uint16 VCU_SOC_display : 10 ;
	uint8 VCU_Hvbatt_charging_stt : 1 ;
} VCU_MHU_info ;


typedef struct {
} EDS_Error_FR_B ;


typedef struct {
} EDS_Error_RR_B ;


typedef struct {
	uint8 RS_Sol_L : 8 ;
	uint8 RS_Sol_R : 8 ;
	uint8 RS_F_HUD_Sensor : 1 ;
	uint16 RS_HUD_illuminance : 16 ;
} BCM_RainLightSnr ;


typedef struct {
	uint8 MHU_Request_CarOFF : 2 ;
} MHU_CarMode_Switch ;


typedef struct {
	uint8 OP_WIPO_SZL_LIN : 3 ;
	uint8 OP_COLS_SZL_LIN : 8 ;
} SCM_Raw_Status ;


typedef struct {
} POD_OBC_Fault_Event ;


typedef struct {
} POD_GTW_Fault_Event ;


typedef struct {
} POD_DCDC_Fault_Event ;


typedef struct {
	uint8 CHSKM_GS_WarnMsg : 8 ;
	uint8 ALV_GS_WarnMsg : 4 ;
	uint8 GS_Warning_Flag_1 : 1 ;
	uint8 GS_Warning_Flag_2 : 1 ;
	uint8 GS_Warning_Flag_3 : 1 ;
	uint8 GS_Warning_Flag_4 : 1 ;
	uint8 GS_Warning_Flag_5 : 1 ;
	uint8 GS_Warning_Flag_6 : 1 ;
	uint8 GS_Warning_Flag_7 : 1 ;
	uint8 GS_Warning_Flag_8 : 1 ;
	uint8 GS_Warning_Flag_9 : 1 ;
	uint8 GS_Warning_Flag_10 : 1 ;
	uint8 GS_Warning_Flag_11 : 1 ;
	uint8 GS_Warning_Flag_12 : 1 ;
	uint8 GS_Reserved_signal1 : 8 ;
	uint8 GS_Reserved_signal2 : 8 ;
	uint8 GS_Reserved_signal3 : 8 ;
	uint8 GS_Reserved_signal4 : 8 ;
	uint8 GS_Reserved_signal5 : 8 ;
} GS_WarnMsg ;


typedef struct {
	uint8 EDS_R_Warning_Flag_4 : 1 ;
	uint8 EDS_R_Warning_Flag_6 : 1 ;
	uint8 EDS_R_Warning_Flag_9 : 1 ;
	uint8 EDS_R_Warning_Flag_12 : 1 ;
	uint8 EDS_R_Reserved_signal3 : 8 ;
	uint8 EDS_R_Reserved_signal4 : 8 ;
	uint8 EDS_R_Reserved_signal5 : 8 ;
} EDS_R_WarnMsg ;


typedef struct {
	uint8 EDS_F_Warning_Flag_2 : 1 ;
	uint8 EDS_F_Warning_Flag_3 : 1 ;
	uint8 EDS_F_Warning_Flag_6 : 1 ;
	uint8 EDS_F_Warning_Flag_7 : 1 ;
	uint8 EDS_F_Warning_Flag_10 : 1 ;
	uint8 EDS_F_Warning_Flag_11 : 1 ;
	uint8 EDS_F_Reserved_signal2 : 8 ;
	uint8 EDS_F_Reserved_signal4 : 8 ;
} EDS_F_WarnMsg ;


typedef struct {
} EPS2_WarnMsg ;


typedef struct {
} VCU_WarnMsg ;


typedef struct {
	uint8 POD_Warning_Flag_1 : 1 ;
	uint8 POD_Warning_Flag_2 : 1 ;
	uint8 POD_Warning_Flag_3 : 1 ;
	uint8 POD_Warning_Flag_4 : 1 ;
	uint8 POD_Warning_Flag_5 : 1 ;
	uint8 POD_Warning_Flag_6 : 1 ;
	uint8 POD_Warning_Flag_7 : 1 ;
	uint8 POD_Warning_Flag_8 : 1 ;
	uint8 POD_Warning_Flag_9 : 1 ;
	uint8 POD_Warning_Flag_10 : 1 ;
	uint8 POD_Warning_Flag_11 : 1 ;
	uint8 POD_Warning_Flag_12 : 1 ;
	uint8 POD_Warning_Flag_13 : 1 ;
	uint8 POD_Warning_Flag_14 : 1 ;
	uint8 POD_Warning_Flag_15 : 1 ;
	uint8 POD_Warning_Flag_16 : 1 ;
	uint8 POD_Warning_Flag_17 : 1 ;
	uint8 POD_Warning_Flag_18 : 1 ;
	uint8 POD_Warning_Flag_19 : 1 ;
	uint8 POD_Warning_Flag_20 : 1 ;
	uint8 POD_Warning_Flag_21 : 1 ;
	uint8 POD_Warning_Flag_22 : 1 ;
	uint8 POD_Warning_Flag_23 : 1 ;
	uint8 POD_Warning_Flag_24 : 1 ;
	uint8 POD_Warning_Flag_25 : 1 ;
	uint8 POD_Warning_Flag_26 : 1 ;
	uint8 POD_Warning_Flag_27 : 1 ;
	uint8 POD_Warning_Flag_28 : 1 ;
	uint8 POD_Reserved_signal3 : 8 ;
	uint8 POD_Reserved_signal4 : 8 ;
	uint8 POD_Reserved_signal5 : 8 ;
} POD_WarnMsg ;


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
	uint8 EDS_R_srcNodeID : 8 ;
	uint8 EDS_R_CtrlBitVector : 8 ;
	uint8 EDS_R_usrData0 : 8 ;
	uint8 EDS_R_usrData1 : 8 ;
	uint8 EDS_R_usrData2 : 8 ;
	uint8 EDS_R_usrData3 : 8 ;
	uint8 EDS_R_usrData4 : 8 ;
	uint8 EDS_R_usrData5 : 8 ;
} EDS_R_NM ;


typedef struct {
	uint8 EDS_F_srcNodeID : 8 ;
	uint8 EDS_F_CtrlBitVector : 8 ;
	uint8 EDS_F_usrData0 : 8 ;
	uint8 EDS_F_usrData1 : 8 ;
	uint8 EDS_F_usrData2 : 8 ;
	uint8 EDS_F_usrData3 : 8 ;
	uint8 EDS_F_usrData4 : 8 ;
	uint8 EDS_F_usrData5 : 8 ;
} EDS_F_NM ;


typedef struct {
	uint8 IDB_srcNodeID : 8 ;
	uint8 IDB_CtrlBitVector : 8 ;
	uint8 IDB_usrData0 : 8 ;
	uint8 IDB_usrData1 : 8 ;
	uint8 IDB_usrData2 : 8 ;
	uint8 IDB_usrData3 : 8 ;
	uint8 IDB_usrData4 : 8 ;
	uint8 IDB_usrData5 : 8 ;
} IDB_NM ;


typedef struct {
	uint8 VCU_srcNodeID : 8 ;
	uint8 VCU_CtrlBitVector : 8 ;
	uint8 VCU_usrData0 : 8 ;
	uint8 VCU_usrData1 : 8 ;
	uint8 VCU_usrData2 : 8 ;
	uint8 VCU_usrData3 : 8 ;
	uint8 VCU_usrData4 : 8 ;
	uint8 VCU_usrData5 : 8 ;
} VCU_NM ;


typedef struct {
	uint8 ADAS_srcNodeID : 8 ;
	uint8 ADAS_CtrlBitVector : 8 ;
	uint8 ADAS_usrData0 : 8 ;
	uint8 ADAS_usrData1 : 8 ;
	uint8 ADAS_usrData2 : 8 ;
	uint8 ADAS_usrData3 : 8 ;
	uint8 ADAS_usrData4 : 8 ;
	uint8 ADAS_usrData5 : 8 ;
} ADAS_NM ;


typedef struct {
	uint8 GS_DiagRespData0 : 8 ;
	uint8 GS_DiagRespData2 : 8 ;
	uint8 GS_DiagRespData6 : 8 ;
} GS_DiagResp ;


typedef struct {
	uint8 EDS_R_DiagRespData2 : 8 ;
	uint8 EDS_R_DiagRespData5 : 8 ;
	uint8 EDS_R_DiagRespData6 : 8 ;
	uint8 EDS_R_DiagRespData7 : 8 ;
} EDS_R_DiagResp ;


typedef struct {
	uint8 EDS_F_DiagRespData2 : 8 ;
	uint8 EDS_F_DiagRespData6 : 8 ;
} EDS_F_DiagResp ;


typedef struct {
} RCU_DiagResp ;


typedef struct {
	uint8 IDB_DiagRespData1 : 8 ;
	uint8 IDB_DiagRespData2 : 8 ;
	uint8 IDB_DiagRespData5 : 8 ;
	uint8 IDB_DiagRespData6 : 8 ;
} IDB_DiagResp ;


typedef struct {
	uint8 EPS2_DiagRespData1 : 8 ;
	uint8 EPS2_DiagRespData2 : 8 ;
	uint8 EPS2_DiagRespData4 : 8 ;
	uint8 EPS2_DiagRespData6 : 8 ;
	uint8 EPS2_DiagRespData7 : 8 ;
} EPS2_DiagResp ;


typedef struct {
	uint8 VCU_DiagRespData4 : 8 ;
	uint8 VCU_DiagRespData7 : 8 ;
} VCU_DiagResp ;


typedef struct {
	uint8 POD_DCDC_DiagRespData2 : 8 ;
	uint8 POD_DCDC_DiagRespData3 : 8 ;
	uint8 POD_DCDC_DiagRespData6 : 8 ;
} POD_DCDC_DiagResp ;


typedef struct {
	uint8 POD_OBC_DiagRespData1 : 8 ;
	uint8 POD_OBC_DiagRespData3 : 8 ;
	uint8 POD_OBC_DiagRespData5 : 8 ;
	uint8 POD_OBC_DiagRespData7 : 8 ;
} POD_OBC_DiagResp ;


typedef struct {
	uint8 POD_DiagRespData0 : 8 ;
	uint8 POD_DiagRespData3 : 8 ;
	uint8 POD_DiagRespData4 : 8 ;
	uint8 POD_DiagRespData5 : 8 ;
} POD_GW_Response ;


typedef struct {
} POD_OBC_CPU2_Diag_Resp ;


typedef struct {
	uint8 GS_DiagReqData4 : 8 ;
} GS_DiagReq ;


typedef struct {
	uint8 EDS_R_DiagReqData1 : 8 ;
	uint8 EDS_R_DiagReqData3 : 8 ;
	uint8 EDS_R_DiagReqData4 : 8 ;
	uint8 EDS_R_DiagReqData6 : 8 ;
} EDS_R_DiagReq ;


typedef struct {
	uint8 EDS_F_DiagReqData0 : 8 ;
	uint8 EDS_F_DiagReqData2 : 8 ;
} EDS_F_DiagReq ;


typedef struct {
	uint8 RCU_DiagReqData4 : 8 ;
	uint8 RCU_DiagReqData6 : 8 ;
	uint8 RCU_DiagReqData7 : 8 ;
} RCU_DiagReq ;


typedef struct {
	uint8 IDB_DiagReqData6 : 8 ;
} IDB_DiagReq ;


typedef struct {
	uint8 EPS2_DiagReqData3 : 8 ;
	uint8 EPS2_DiagReqData5 : 8 ;
} EPS2_DiagReq ;


typedef struct {
	uint8 VCU_DiagReqData0 : 8 ;
	uint8 VCU_DiagReqData2 : 8 ;
	uint8 VCU_DiagReqData5 : 8 ;
	uint8 VCU_DiagReqData7 : 8 ;
} VCU_DiagReq ;


typedef struct {
	uint8 POD_DCDC_DiagReqData2 : 8 ;
	uint8 POD_DCDC_DiagReqData4 : 8 ;
	uint8 POD_DCDC_DiagReqData5 : 8 ;
} POD_DCDC_DiagReq ;


typedef struct {
	uint8 POD_OBC_DiagReqData3 : 8 ;
	uint8 POD_OBC_DiagReqData7 : 8 ;
} POD_OBC_DiagReq ;


typedef struct {
	uint8 POD_DiagReqData0 : 8 ;
} POD_GW_Request ;


typedef struct {
} POD_OBC_CPU2_Diag_Req ;


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
	uint64 SEED_CAN_Req1 : 64 ;
} SEED_CAN_Req1_CCU_R ;


typedef struct {
	uint64 SEED_CAN_Req2 : 64 ;
} SEED_CAN_Req2_CCU_F ;


typedef struct {
	uint64 SEED_CAN_Req5 : 64 ;
} SEED_CAN_Req5_EDS_R ;


typedef struct {
	uint64 SEED_CAN_Req6 : 64 ;
} SEED_CAN_Req6_BCM ;


typedef struct {
	uint64 SEED_CAN_Req7 : 64 ;
} SEED_CAN_Req7_VCU_PT ;


typedef struct {
	uint64 SEED_CAN_Req8 : 64 ;
} SEED_CAN_Req8_ADAS_PT ;


typedef struct {
} POD_PDU_App_Version ;


typedef struct {
} POD_Err_Lvl ;


typedef struct {
	uint64 SEED_CAN_Req10 : 64 ;
} SEED_CAN_Req10_IDB_PT ;


typedef struct {
	uint64 SEED_CAN_Req18 : 64 ;
} SEED_CAN_Req18_MHU ;


typedef struct {
	uint64 SEED_CAN_Req23 : 64 ;
} SEED_CAN_Req23_EDS_F ;


typedef struct {
	uint64 SEED_CAN_Req22 : 64 ;
} SEED_CAN_Req22_POD ;


typedef struct {
} POD_BootLoader_HeartBeat ;


typedef struct {
} POD_DCDC_App_Version ;


typedef struct {
} POD_OBC_App_Version ;


typedef struct {
} POD_debug ;


typedef struct {
} POD_GTW_EventMatrix ;


typedef struct {
} POD_OBC_EventMatrix ;


typedef struct {
} POD_DCDC_EventMatrix ;


typedef struct {
} VCU_DebugDiag ;


typedef struct {
} EPS2_XCP_CCP_Resp ;


typedef struct {
} EPS2_XCP_CCP_Req ;


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



































































































#ups you scrolled down too much, you see me even. now you may go to up:D:D 