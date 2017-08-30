#include<iostream>
#include"a.h"
int main(){
    initwindow(WIDTH,HEIGHT,"Motion");
    obzect b(200,200,50);
    b.show();
    while(true)
    {
        b.moveObz();
        b.controlBall();
        b.handleEvent();
        b.show();
        delay(1);
        cleardevice();
    }
    getch();
    return 0;
}
