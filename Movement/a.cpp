#include"a.h"
#include<iostream>
obzect::obzect(double a,double b,double r){
    x=a;
    y=b;
    radius=r;
    speedX=speedY=3;
}
obzect::~obzect(){
    std::cout<<"The object has been deleted";
}
void obzect::show(){
    fillellipse(x,y,radius,radius);
}
void obzect::handleEvent(){
    if(x+radius+speedX>=WIDTH || x-radius+speedX<=0) speedX=0-speedX;
    if(y+radius+speedY>=HEIGHT || y-radius+speedY<=0) speedY=0-speedY;
}
void obzect::controlBall(){
    if(kbhit()){
        char key=getch();
        if(key=='a' && radius>1) radius--;
        if(key=='d' && radius<HEIGHT/2) radius++;
        if(key=='w'){
            speedX=(speedX<0?--speedX:++speedX);
            speedY=(speedY<0?--speedY:++speedY);
        }
        if(key=='s'){
            speedX=(speedX<0?++speedX:--speedX);
            speedY=(speedY<0?++speedY:--speedY);
        }

    }
}
void obzect::moveObz(){
    x+=speedX;
    y+=speedY;
}
