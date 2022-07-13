#ifndef LEFTRIGHT_SHUTDOWN_H
#define LEFTRIGHT_SHUTDOWN_H

#endif //LEFTRIGHT_SHUTDOWN_H
#include <iostream>
using namespace std;
//void LogoutChoose();
void CancelChoose();
void RestartChoice();
void RestartChoose();
void ShutChoice();
void ShutChoose();
void SleepChoice();
void SleepChoose(){
    while (0<1){
        SleepChoice();
        int sleep_num;
        sleep_num= AllIsNum(sleep_num);
        if (sleep_num==1){
            system("rundll32.exe powrProf.dll,SetSuspendState");
        }else if (sleep_num==2){
            system("powercfg -h off");
            system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0");
            system("powercfg -h on");
        }else if (sleep_num==99){
            break;
        }else {
            continue;
        }
    }
}
void SleepChoice(){
    cout<<"请输入以下其中一个数字"<<endl;
    cout<<"01:休眠"<<endl;
    cout<<"02:睡眠"<<endl;
    cout<<"99:退出"<<endl;
    cout<<"请输入数字:";
}

void ShutChoose(){
    while (0<1){
        ShutChoice();
        int shut_num;
        shut_num= AllIsNum(shut_num);
        if (shut_num==1){
            system("shutdown -f -s -t 0");
        }else if (shut_num==2){
            system("shutdown -f -s -t 60");
        }else if (shut_num==3){
            system("shutdown -f -s -t 120");
        }else if (shut_num==4){
            system("shutdown -f -s -t 300");
        }else if (shut_num==5){
            system("shutdown -f -s -t 600");
        }else if (shut_num==6){
            system("shutdown -f -s -t 900");
        }else if (shut_num==7){
            system("shutdown -f -s -t 1800");
        }else if (shut_num==99){
            break;
        }else {
            continue;
        }
    }
}
void ShutChoice(){
    cout<<"请输入以下其中一个数字"<<endl;
    cout<<"01:立刻关机"<<endl;
    cout<<"02:一分钟后关机"<<endl;
    cout<<"03:二分钟后关机"<<endl;
    cout<<"04:五分钟后关机"<<endl;
    cout<<"05:十分钟后关机"<<endl;
    cout<<"06:十五分钟后关机"<<endl;
    cout<<"07:三十分钟后关机"<<endl;
    cout<<"99:退出"<<endl;
    cout<<"请输入数字:";
}

void RestartChoose(){
    while (0<1){
        RestartChoice();
        int restart_num;
        restart_num= AllIsNum(restart_num);
        if (restart_num==1){
            system("shutdown -f -r -t 0");
        }else if (restart_num==2){
            system("shutdown -f -r -t 60");
        }else if (restart_num==3){
            system("shutdown -f -r -t 120");
        }else if (restart_num==4){
            system("shutdown -f -r -t 300");
        }else if (restart_num==5){
            system("shutdown -f -r -t 600");
        }else if (restart_num==6){
            system("shutdown -f -r -t 900");
        }else if (restart_num==7){
            system("shutdown -f -r -t 1800");
        }else if (restart_num==99){
            break;
        }else{
            continue;
        }
    }
}
void RestartChoice(){
    cout<<"请输入以下其中一个数字"<<endl;
    cout<<"01:立刻重启"<<endl;
    cout<<"02:一分钟后重启"<<endl;
    cout<<"03:二分钟后重启"<<endl;
    cout<<"04:五分钟后重启"<<endl;
    cout<<"05:十分钟后重启"<<endl;
    cout<<"06:十五分钟后重启"<<endl;
    cout<<"07:三十分钟后重启"<<endl;
    cout<<"99:退出"<<endl;
    cout<<"请输入数字:";
}

void CancelChoose(){
    system("shutdown -a");
}

/*void LogoutChoose(){
    system("logoff");
}*/