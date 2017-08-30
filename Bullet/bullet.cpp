#include"bullet.h"
#include<cmath>
#include<iostream>
//bullet
void bulletObzect::initBullet(double a,double b,int r,double spd,double agl){
    x=a;
    y=b;
    radius=r;
    speed=spd;
    angle=agl;
    speedX=speed*cos(angle/180*Pi);
    speedY=speed*sin(angle/180*Pi);
}
void bulletObzect::showBullet(){
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    setcolor(LIGHTGREEN);
    fillellipse(x,y,radius,radius);
}
void bulletObzect::movementBullet(){
    x+=speedX;
    y-=speedY;
    speedY-=ACCELERATION;
}
void bulletObzect::handleEvent(){
    if(y+radius-speedY>=H){
        speedX=speedX/10*9;
        speedY=speedY/2;
        speedY=0-speedY;
    }
}
