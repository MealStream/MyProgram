@ECHO OFF&(PUSHD "%~DP0")&(REG QUERY "HKU\S-1-5-19">NUL 2>&1)||(
powershell -Command "Start-Process '%~sdpnx0' -Verb RunAs"&&EXIT)

::删除快捷方式
del /q "%Public%\Desktop\我的程序.lnk" >NUL 2>NUL
del /q "%UserProfile%\Desktop\我的程序.lnk" >NUL 2>NUL

ECHO.&ECHO 完成 &TIMEOUT /t 2 >NUL&EXIT