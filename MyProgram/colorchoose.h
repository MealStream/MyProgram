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
        if (color_num==1){
            system("color F0");
        }else if (color_num==2){
            system("color F4");
        }else if (color_num==3){
            system("color F5");
        }else if (color_num==4){
            system("color 0F");
        }else if (color_num==5){
            system("color 0A");
        }else if (color_num==6){
            system("color 0C");
        }else if (color_num == 99){
                break;
        }else {
            continue;
        }
    }
}

void ColorChoice(){
    cout<<"请输入以下其中一个数字"<<endl;
    cout<<"01:白色"<<"\t"<<"02:白色"<<"\t"<<"03:白色"<<endl;
    cout<<"04:黑色"<<"\t"<<"05:黑色"<<"\t"<<"06:黑色"<<endl;
    cout<<"99:退出"<<"\t"<<"99:退出"<<"\t"<<"99:退出"<<endl;
    cout<<"请输入数字:";
}
