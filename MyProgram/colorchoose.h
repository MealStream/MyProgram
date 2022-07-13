#ifndef LEFTRIGHT_COLORCHOOSE_H
#define LEFTRIGHT_COLORCHOOSE_H

#endif //LEFTRIGHT_COLORCHOOSE_H
#include "allisnum.h"
void ColorChoice();
void ColorChoose(){
    while (0<1){
        ColorChoice();
        int color_num;
        color_num = AllIsNum(color_num);
        if (color_num==1) {
            system("color E0");
        }else if (color_num==2){
            system("color E1");
        }else if (color_num==3){
            system("color E2");
        }else if (color_num==4){
            system("color E3");
        }else if (color_num==5){
            system("color E4");
        }else if (color_num==6){
            system("color E5");
        }else if (color_num==7){
            system("color 0A");
        }else if (color_num==8){
            system("color 0B");
        }else if (color_num==9){
            system("color 0C");
        }else if (color_num==10){
            system("color 0D");
        }else if (color_num==11){
            system("color 0E");
        }else if (color_num==12){
            system("color 0F");
        }else if (color_num==13){
            system("color FC");
        }else if (color_num==14){
            system("color FD");
        }else if (color_num==15){
            system("color F0");
        }else if (color_num == 99){
                break;
        }else {
            continue;
        }
    }
}

void ColorChoice(){
    cout<<"请输入以下其中一个数字"<<endl;
    cout<<"01:浅黄"<<"\t"<<"02:浅黄"<<"\t"<<"03:浅黄"<<endl;
    cout<<"04:浅黄"<<"\t"<<"05:浅黄"<<"\t"<<"06:浅黄"<<endl;
    cout<<"07:黑色"<<"\t"<<"08:黑色"<<"\t"<<"09:黑色"<<endl;
    cout<<"10:黑色"<<"\t"<<"11:黑色"<<"\t"<<"12:黑色"<<endl;
    cout<<"13:白色"<<"\t"<<"14:白色"<<"\t"<<"15:白色"<<endl;
    cout<<"99:退出"<<"\t"<<"99:退出"<<"\t"<<"99:退出"<<endl;
    cout<<"请输入数字:";
}