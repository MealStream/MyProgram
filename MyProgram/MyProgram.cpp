#include "oneline.h"
#include "totaltools.h"
#include <iostream>
#include <windows.h>
using namespace std;
VOID ManagerChoose(LPCSTR exe,LPCSTR parameter,INT manager_show=SW_SHOW);
int main(int argc,char *argv[]){
    if (argc == 1){
        ShowWindow(GetConsoleWindow(),SW_HIDE);//隐藏控制台
        ManagerChoose(argv[0],"2");
        return 1;
    }else if (argc == 2){
        system("chcp 65001");
        system("color E0");
        LineChoose();
        cout<<"欢迎来的我的程序"<<endl;
        LineChoose();
        TotalChoose();
        system("pause");
    }
    return 0;
}

VOID ManagerChoose(LPCSTR exe,LPCSTR parameter,INT manager_show){
    SHELLEXECUTEINFO shell_info;
    shell_info.cbSize = sizeof(SHELLEXECUTEINFO);
    shell_info.fMask = SEE_MASK_NOCLOSEPROCESS;
    shell_info.hwnd = NULL;
    shell_info.lpVerb = "runas";
    shell_info.lpFile = exe;
    shell_info.lpParameters = parameter;
    shell_info.lpDirectory = NULL;
    shell_info.nShow = manager_show;
    shell_info.hInstApp = NULL;
    BOOL open_cmd = ShellExecuteEx(&shell_info);//保证控制台打开
    CloseHandle(shell_info.hProcess);
    return;
}