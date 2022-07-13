@ECHO OFF&(PUSHD "%~DP0")&(REG QUERY "HKU\S-1-5-19">NUL 2>&1)||(
powershell -Command "Start-Process '%~sdpnx0' -Verb RunAs"&&EXIT)

ECHO.&ECHO 开始清理快捷方式

del /q "%Public%\Desktop\我的程序.lnk" >NUL 2>NUL
del /q "%UserProfile%\Desktop\我的程序.lnk" >NUL 2>NUL
del /q "%UserProfile%\桌面\我的程序.lnk" >NUL 2>NUL
del /q "%AllUsersProfile%\桌面\我的程序.lnk" >NUL 2>NUL

ECHO.
CLS

ECHO.&ECHO 清理完成

ECHO.
CLS

ECHO.&ECHO LeftRight
ECHO.&ECHO 完成 &TIMEOUT /t 2 >NUL&EXIT