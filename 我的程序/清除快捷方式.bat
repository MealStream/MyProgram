@ECHO OFF&(PUSHD "%~DP0")&(REG QUERY "HKU\S-1-5-19">NUL 2>&1)||(
powershell -Command "Start-Process '%~sdpnx0' -Verb RunAs"&&EXIT)

ECHO.&ECHO ��ʼ�����ݷ�ʽ

del /q "%Public%\Desktop\�ҵĳ���.lnk" >NUL 2>NUL
del /q "%UserProfile%\Desktop\�ҵĳ���.lnk" >NUL 2>NUL
del /q "%UserProfile%\����\�ҵĳ���.lnk" >NUL 2>NUL
del /q "%AllUsersProfile%\����\�ҵĳ���.lnk" >NUL 2>NUL

ECHO.
CLS

ECHO.&ECHO �������

ECHO.
CLS

ECHO.&ECHO LeftRight
ECHO.&ECHO ��� &TIMEOUT /t 2 >NUL&EXIT