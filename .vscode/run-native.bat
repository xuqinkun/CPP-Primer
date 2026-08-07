@echo off
setlocal EnableDelayedExpansion

set "COMPILER=%~1"
set "SRC_DIR=%~2"
set "SRC_FILE=%~3"
set "OUT_NAME=%~4"
set "ROOT=%~5"

if /i "%SRC_DIR%"=="." set "SRC_DIR=%CD%"

set "REL=!SRC_DIR!"
set "REL=!REL:%ROOT%\=!"

if "!REL!"=="" (
    set "OUT_DIR=%ROOT%\build"
) else (
    set "OUT_DIR=%ROOT%\build\!REL!"
)

if not exist "!OUT_DIR!" mkdir "!OUT_DIR!"

"%COMPILER%" -Wall -Wextra -Wpedantic -Wshadow -g3 -O0 "%SRC_DIR%\%SRC_FILE%" -o "!OUT_DIR!\%OUT_NAME%.exe"
if errorlevel 1 exit /b 1

"!OUT_DIR!\%OUT_NAME%.exe"
