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
     --output-file-name cap_canApi.a2l ^
   --template-file-name cap_canApi_a2l.stg ^
   --template-name canApi ^
    
  
%*

