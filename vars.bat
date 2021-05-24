@echo off

set PROJECT=Venus
set PROJECT_DIR=%~dp0
set PROJECT_DIR=%PROJECT_DIR:~0,-1%
set UPROJECT_PATH=%PROJECT_DIR%\%PROJECT%.uproject

set UE4_DIR=D:\GameEngines\UE_4.26
set UE4_EDITOR_EXE=%UE4_DIR%\Engine\Binaries\Win64\UE4Editor.exe
set BUILD_BAT=%UE4_DIR%\Engine\Build\BatchFiles\Build.bat