#include"clockclass.h"
#include<ctime>
#include<cmath>
#include<iostream>
#define pi 3.14159
void analogClock::getTime(){
    time_t secondNow=time(0);
    tizan=localtime(&secondNow);
}
void analogClock::initRadius(int sR,int mR, int hR, int clockR,int centerR){
    sRadius=sR;
    mRadius=mR;
    hRadius=hR;
    clockRadius=clockR;
    centerRadius=centerR;
}
void analogClock::setCenterCoordinate(int a,int b){
    center.x=a;
    center.y=b;
}
void analogClock::getSecondCoordinate(){
    second.x=center.x+int(sin(tizan->tm_sec*pi/30)*double(sRadius));
    second.y=center.y-int(cos(tizan->tm_sec*pi/30)*double(sRadius));
}
void analogClock::getMinuteCoordinate(){
    minute.x=center.x+int(sin(tizan->tm_min*pi/30)*(double)mRadius);
    minute.y=center.y-int(cos(tizan->tm_min*pi/30)*(double)mRadius);
}
void analogClock::getHourCoordinate(){
    hour.x=center.x+int(sin(tizan->tm_hour*pi/12)*(double)hRadius);
    hour.y=center.y-int(cos(tizan->tm_hour*pi/12)*(double)hRadius);
}
void analogClock::showClock(){
    circle(center.x,center.y,clockRadius);
    fillellipse(center.x,center.y,centerRadius,centerRadius);
    line(center.x,center.y,second.x,second.y);
    line(center.x,center.y,minute.x,minute.y);
    line(center.x,center.y,hour.x,hour.y);
}
