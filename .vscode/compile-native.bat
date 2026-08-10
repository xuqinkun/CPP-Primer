@echo off
setlocal EnableDelayedExpansion

set "SRC_FILE=%~1"
set "SRC_DIR=%~2"
set "OUT_NAME=%~3"
set "ROOT=%~4"
set "SRC_BASE=%~nx1"

if "!SRC_FILE!"=="" (
    echo [compile-native] missing source file
    exit /b 1
)

taskkill /F /IM "!OUT_NAME!.exe" >nul 2>&1

set "REL=!SRC_DIR!"
call set "REL=%%REL:!ROOT!\=%%"

if "!REL!"=="" (
    set "OUT_DIR=!ROOT!\build"
) else (
    set "OUT_DIR=!ROOT!\build\!REL!"
)

if not exist "!OUT_DIR!" (
    mkdir "!OUT_DIR!" 2>nul
)

set "OUT_EXE=!OUT_DIR!\!OUT_NAME!.exe"

echo [compile-native] cwd=!SRC_DIR!
echo [compile-native] g++ !SRC_BASE! -o !OUT_EXE!

pushd "!SRC_DIR!" || exit /b 1
g++ -Wall -Wextra -Wpedantic -Wshadow -g3 -O0 "!SRC_BASE!" -o "!OUT_EXE!"
set "RC=!ERRORLEVEL!"
popd

if not "!RC!"=="0" (
    echo [compile-native] compile failed
    exit /b 1
)

echo [compile-native] ok: !OUT_EXE!
exit /b 0
