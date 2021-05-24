@echo off

call %~dp0\vars.bat

start "" "%UE4_EDITOR_EXE%" "%UPROJECT_PATH%" %*