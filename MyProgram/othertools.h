#ifndef LEFTRIGHT_OTHERTOOLS_H
#define LEFTRIGHT_OTHERTOOLS_H

#endif //LEFTRIGHT_OTHERTOOLS_H
#include <iostream>
void CleanChoose();
void HostsChoose();
void ExplorerChoose();
void WebChoose();
void ClearChoose();
void CmdChoice(){
    system("cmd");
}

void ClearChoose(){
    system("cls");
}

void WebChoose(){
    system("ipconfig /flushdns");
    system("netsh winsock reset");
}

void ExplorerChoose(){
    system("taskkill /f /im explorer.exe & start explorer.exe");
}

void HostsChoose(){
    system("notepad C:\\Windows\\System32\\drivers\\etc\\hosts");
}

void CleanChoose(){
    system("cleanmgr");
}