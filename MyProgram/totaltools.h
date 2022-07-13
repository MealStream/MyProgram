#ifndef LEFTRIGHT_TOTALTOOLS_H
#define LEFTRIGHT_TOTALTOOLS_H

#endif //LEFTRIGHT_TOTALTOOLS_H
#include "colorchoose.h"
#include "shutdown.h"
#include "othertools.h"
#include "toolcollection.h"
void TotalChoice();
void TotalChoose(){
    while (0<1){
        TotalChoice();
        int total_num;
        total_num= AllIsNum(total_num);
        if (total_num==1) {
            ColorChoose();
        }else if (total_num==2) {
            CmdChoice();
            LineChoose();
        }else if (total_num==3) {
            ClearChoose();
        }else if (total_num==4){
            SleepChoose();
        }else if (total_num==5){
            ShutChoose();
        }else if (total_num==6){
            RestartChoose();
        }else if (total_num==7){
            CancelChoose();
        }else if (total_num==8){
            WebChoose();
            LineChoose();
        }else if (total_num==9){
            ToolChoose();
        }else if (total_num==10){
            ExplorerChoose();
        }else if (total_num==11){
            //LogoutChoose();
            CleanChoose();
        }else if (total_num==12){
            HostsChoose();
        }else if (total_num==99) {
            break;
        }else {
            continue;
        }
    }
}

void TotalChoice(){
    cout<<"请输入以下其中一个数字"<<endl;
    cout<<"01:颜色"<<endl;
    cout<<"02:命令提示符cmd(退出输入exit)"<<endl;
    cout<<"03:清屏"<<endl;
    cout<<"04:休眠"<<endl;
    cout<<"05:关机"<<endl;
    cout<<"06:重启"<<endl;
    cout<<"07:取消关机或重启"<<endl;
    cout<<"08:刷新DNS并重置网络"<<endl;
    cout<<"09:工具箱"<<endl;
    cout<<"10:重启资源管理器"<<endl;
    cout<<"11:磁盘清理"<<endl;
    cout<<"12:hosts编辑器"<<endl;
    cout<<"99:退出"<<endl;
    cout<<"请输入数字:";
}