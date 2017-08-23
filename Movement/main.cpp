#include<iostream>
#include"a.h"
int main(){
    initwindow(WIDTH,HEIGHT,"Motion");
    obzect b(200,200,50,LIGHTGREEN,DOWNLEFT);
    b.show();
    while(true)
    {
        b.moveObz();
        b.controlBall();
        b.show();
        b.handleEvent();
        delay(1);
        cleardevice();
    }
    getch();
    return 0;
}
