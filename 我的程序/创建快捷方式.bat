@ECHO OFF&(PUSHD "%~DP0")&(REG QUERY "HKU\S-1-5-19">NUL 2>&1)||(
powershell -Command "Start-Process '%~sdpnx0' -Verb RunAs"&&EXIT)

ECHO.&ECHO ��ʼ������ݷ�ʽ

::������ݷ�ʽ
mshta VBScript:Execute("Set a=CreateObject(""WScript.Shell""):Set b=a.CreateShortcut(a.SpecialFolders(""Desktop"") & ""\�ҵĳ���.lnk""):b.TargetPath=""%~sdp0MyProgram.exe"":b.WorkingDirectory=""%~sdp0"":b.Save:close")

ECHO.
CLS

ECHO.&ECHO �������

ECHO.
CLS

ECHO.&ECHO LeftRight
ECHO.&ECHO ��� &TIMEOUT /t 2 >NUL&EXIT