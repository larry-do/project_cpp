#include<iostream>
#include"clockclass.h"
int main(){
    initwindow(w,h,"Analog Clock");
    analogClock b;
    b.setCenterCoordinate(w/2,h/2);
    b.initRadius(230,200,170,270,10);
    while(true)
    {
        b.getTime();
        b.getHourCoordinate();
        b.getMinuteCoordinate();
        b.getSecondCoordinate();
        b.showClock();
        delay(500);
        cleardevice();
    }
    getch();
    return 0;
}
