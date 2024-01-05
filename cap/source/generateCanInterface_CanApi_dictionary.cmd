@echo off
setlocal
goto LStart
:LUsage
echo usage: generateIbs [-h] [--help]
echo   Run excelExporter and let it render the interface specification BSWIO_FD.xlsx as
echo an initial dummy implementation of the interface BSW to model.
echo   All command line arguments but -h are passed to the Java application excelExporter.
echo   Most arguments of the Java application are defined by this launch script but you may
echo still pass --help to get the usage message of the application.
goto :eof

:LStart
if /i "%1" == "-h" goto LUsage

setlocal

if "%EXCELEXPORTER_HOME%" == "" (
    set EXCELEXPORTER_HOME=..\..\..\..\tools\comFramework\excelExporter
)
:: The Java classpath is used to localize the StringTemplate V4 template files. Here, it's
:: sufficient to assign those paths, which hold the templates. The launcher script
:: excelExporter.cmd takes care that the actual Java search path is set, too.
set CLASSPATH=templates

:: Find the launcher script.
set PATH=%PATH%;%EXCELEXPORTER_HOME%\dist

:: Lauch the Java application excelExporter.
call excelExporter.cmd ^
  --input-file-name "..\Dbc\CILUserManualv07COMInterface.xls" ^
  		--open-worksheet-selection ^
			--worksheet-by-tab "BCAN" ^
			--worksheet-name BCAN ^
		 --open-worksheet-selection ^
			--worksheet-by-tab "PCAN" ^
			--worksheet-name PCAN ^
  		--open-worksheet-selection ^
			--worksheet-by-tab "CHS1" ^
			--worksheet-name CHS1 ^
		--open-worksheet-selection ^
			--worksheet-by-tab "CHS2" ^
			--worksheet-name CHS2 ^
  --output-file-name "templates\lib\CANTypeDict.stg" ^
    --template-file-name "can_canApi_typedictionary.stg" ^
	--template-name renderTable ^
  --open-worksheet-template ^
	--worksheet-template-name tmplfunc ^
	-ca -ct FunctionNameGroup --is-grouping-column ^
	--group Msgs ^

  %*
