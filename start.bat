:: NOTE: This is a file when you can in one click compile a game. No need to write in terminal all these commands using hands. Just run a file 
:: and open game.exe file. 

:: NOTE: @echo off to not show excess garbage in console
@echo off

echo Compiling game...
g++ .\src\CBaseEnemy.cpp .\src\CBaseEntity.cpp .\src\CBasePlayer.cpp .\src\game.cpp .\src\UserInterface.cpp -o game.exe

:: Check if compilation was successful
if %errorlevel% neq 0 (
    echo Compilation FAILED! Fix your errors, soldier.
    pause
    exit /b %errorlevel%
)

color 2
echo Compilation succesfull! Starting game.exe...
echo ============================================

timeout 5
:: NOTE: automatically run the compiled game
start game.exe