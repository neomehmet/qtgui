@echo off
setlocal
set CLASSPATH="templates"
if "%COMFRAMEWORK_CODEGENERATOR_HOME%" == "" (
    set COMFRAMEWORK_CODEGENERATOR_HOME=..\..\..\..\tools\comFramework\codeGenerator
)
set PATH=%COMFRAMEWORK_CODEGENERATOR_HOME%\dist;%PATH%
call codeGenerator ^
  -v WARN ^
  --cluster-name CLUSTER ^
  --node-name VCU ^
  -op suppressUnaffectedSignals -ov true ^
  --template-wrap-column 70 ^
  --bus-name Body_CAN_FD ^
    --node-name VCU ^
    -dbc "..\Dbc\CEER_B_CANFD_FRS01.dbc" ^
  --bus-name CHS1 ^
    --node-name VCU ^
    -dbc "..\Dbc\CEER_CHS1_CANFD_FRS01.dbc" ^
  --bus-name CHS2 ^
    --node-name VCU ^
    -dbc "..\Dbc\CEER_CHS2_CANFD_FRS01.dbc" ^
  --bus-name PT_CAN_FD ^
    --node-name VCU ^
    -dbc "..\Dbc\CEER_PT_CANFD_FRS01.dbc" ^
  --output-file-name cap_canApi.c ^
   --template-file-name cap_canApi_c.stg ^
   --template-name canApi ^
   
   
   
rem  --output-file-name canCommunicationMatrix.adoc ^
rem    --template-file-name overview.adoc.stg ^
rem    --template-name asciidocReport ^
rem  --output-file-name cap_canEcApi.h ^
rem  --template-file-name cap_canEcApi_CanCodec.stg ^
rem    --template-name canEcApiDecl ^
rem  --output-file-name cap_canCodec.h ^
rem    --template-file-name cap_canCodec_h.stg ^
rem    --template-name canCodec ^
rem  --output-file-name cap_canCodec.c ^
rem   --template-file-name cap_canCodec_c.stg ^
rem   --template-name canCodec ^
  

rem  --special-signal-name counter --re-special-signal Rolling_Counter.*^
rem --special-signal-name counter1 --re-special-signal RollingCounter.*^
rem  --special-signal-name counter2 --re-special-signal Rolling_counter.*^
rem  --special-signal-name counter3 --re-special-signal ALV_.*^
rem  --special-signal-name counter4 --re-special-signal ALIV_.*^
rem  --special-signal-name counter5 --re-special-signal ALIVE_.*^
rem  --special-signal-name counter6 --re-special-signal .*Alive^
rem  --special-signal-name counter7 --re-special-signal .*RollingCount^
rem  --special-signal-name counter8 --re-special-signal .*Alive.*^
rem  --special-signal-name checksum5 --re-special-signal Checksum.*^
rem  --special-signal-name checksum --re-special-signal .*Checksum^
rem  --special-signal-name checksum1 --re-special-signal CHKSM_.*^
rem  --special-signal-name checksum2 --re-special-signal CHSKM_.*^
rem  --special-signal-name checksum3 --re-special-signal SUM_.*^
rem  --special-signal-name checksum4  --re-special-signal CRC_.*^
rem  --special-signal-name Seed_Req  --re-special-signal SEED.*^
rem  --special-signal-name seccan  --re-special-signal SECCAN.*^  
  
%*

  
REM    --template-file-name cap_canEcApi.h.stg ^
REM -ex 1073741824 ^
REM   --output-file-name cap_canEcApi.c ^
REM     --template-file-name cap_canEcApi.h.stg ^
REM     --template-name canEcApiDef ^
rem SET /P var=Enter a value for var: