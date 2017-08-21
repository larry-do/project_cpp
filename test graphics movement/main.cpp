#include<iostream>
#include"a.h"
int main(){
    initwindow(WIDTH,HEIGHT,"Motion");
    obzect b(200,200,50,LIGHTGREEN,DOWNLEFT);
    b.show();
    while(true)
    {
        if(kbhit()){
            char c=getch();
            if(c=='z') b.zoomIn();
            else if(c=='x') b.zoomOut();
        }
        b.moveObz();
        b.show();
        b.handleEvent();
        delay(10);
        cleardevice();
    }
    getch();
    return 0;
}
