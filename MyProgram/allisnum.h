#ifndef LEFTRIGHT_ALLISNUM_H
#define LEFTRIGHT_ALLISNUM_H

#endif //LEFTRIGHT_ALLISNUM_H
#include <iostream>
#include <sstream>
using namespace std;
int AllIsNum(int all_num){
    string str;
    stringstream stream;
    cin>>str;
    for (int i=0;i<str.size();i++){
        int tmp=(int)str[i];
        if (tmp >= 48 && tmp <= 57) {
            break;
        }
    }
    stream << str;
    stream >> all_num;
    LineChoose();
    return all_num;
}