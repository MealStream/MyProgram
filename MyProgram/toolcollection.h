#ifndef LEFTRIGHT_TOOLCOLLECTION_H
#define LEFTRIGHT_TOOLCOLLECTION_H

#endif //LEFTRIGHT_TOOLCOLLECTION_H
#include <iostream>
using namespace std;
void ToolChoice();
void ToolChoose(){
    while (0<1){
        ToolChoice();
        int tool_num;
        tool_num = AllIsNum(tool_num);
        if (tool_num==1){
            system("snippingtool");
        }else if (tool_num==2){
            system("notepad");
        }else if (tool_num==3){
            system("control");
        }else if (tool_num==4){
            system("msconfig");
        }else if (tool_num==5){
            system("rundll32 sysdm.cpl,EditEnvironmentVariables");
        }else if (tool_num==6){
            system("sysdm.cpl");
        }else if (tool_num==7){
            system("taskmgr");
        }else if (tool_num==8){
            system("msinfo32");
        }else if (tool_num==9){
            system("winver");
        }else if (tool_num==10){
            system("regedit");
        }else if (tool_num==11){
            system("compmgmt.msc");
        }else if (tool_num==12){
            system("gpedit.msc");
        }else if (tool_num==13){
            system("services.msc");
        }else if (tool_num==14){
            system("Odbcad32");
        }else if (tool_num==15){
            system("write");
        }else if (tool_num==16){
            system("mspaint");
        }else if (tool_num==99){
            break;
        }else{
            continue;
        }
    }
}

void ToolChoice(){
    cout<<"请输入以下其中一个数字"<<endl;
    cout<<"01:截图工具"<<endl;
    cout<<"02:记事本"<<endl;
    cout<<"03.控制面板"<<endl;
    cout<<"04:系统配置"<<endl;
    cout<<"05:环境变量"<<endl;
    cout<<"06:系统属性"<<endl;
    cout<<"07:任务管理器"<<endl;
    cout<<"08:系统信息"<<endl;
    cout<<"09:显示版本"<<endl;
    cout<<"10:注册表"<<endl;
    cout<<"11:计算机管理"<<endl;
    cout<<"12:本地组策略编辑器"<<endl;
    cout<<"13:本地服务"<<endl;
    cout<<"14:ODBC数据源管理器"<<endl;
    cout<<"15:写字板"<<endl;
    cout<<"16:画图板"<<endl;
    cout<<"99:退出"<<endl;
    cout<<"请输入数字:";
}