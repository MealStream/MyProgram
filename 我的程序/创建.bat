@ECHO OFF&(PUSHD "%~DP0")&(REG QUERY "HKU\S-1-5-19">NUL 2>&1)||(
powershell -Command "Start-Process '%~sdpnx0' -Verb RunAs"&&EXIT)

::������ݷ�ʽ
mshta VBScript:Execute("Set a=CreateObject(""WScript.Shell""):Set b=a.CreateShortcut(a.SpecialFolders(""Desktop"") & ""\�ҵĳ���.lnk""):b.TargetPath=""%~sdp0MyProgram.exe"":b.WorkingDirectory=""%~sdp0Bin"":b.Save:close")

ECHO.&ECHO LeftRight
ECHO.&ECHO ������� &TIMEOUT /t 2 >NUL&EXIT