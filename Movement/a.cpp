#include"a.h"
#include<iostream>
obzect::obzect(int a,int b,int zadius,colors kalor, status steituz){
    x=a;
    y=b;
    radius=zadius;
    kolor=kalor;
    steitus = steituz;
}
obzect::~obzect(){
    std::cout<<"The object has been deleted";
}
void obzect::show(){
    setfillstyle(SOLID_FILL,kolor);
    setcolor(kolor);
    fillellipse(x,y,radius,radius);
}
void obzect::handleEvent(){
    if(x+radius>=WIDTH){
        if(steitus==RIGHT) steitus=LEFT;
        else if(steitus==DOWNRIGHT) steitus=DOWNLEFT;
        else if(steitus==UPRIGHT) steitus=UPLEFT;
    }
    if(y+radius>=HEIGHT){
        if(steitus==DOWN) steitus=UP;
        else if(steitus==DOWNRIGHT) steitus=UPRIGHT;
        else if(steitus==DOWNLEFT) steitus=UPLEFT;
    }
    if(x-radius<=0){
        if(steitus==LEFT) steitus=RIGHT;
        else if(steitus==DOWNLEFT) steitus=DOWNRIGHT;
        else if(steitus==UPLEFT) steitus=UPRIGHT;
    }
    if(y-radius<=0){
        if(steitus==UP) steitus=DOWN;
        else if(steitus==UPRIGHT) steitus=DOWNRIGHT;
        else if(steitus==UPLEFT) steitus=DOWNLEFT;
    }
}
void obzect::zoomOut(){
    if(2*radius<HEIGHT) radius+=2;
}
void obzect::zoomIn(){
    if(radius>2) radius-=2;
}
void obzect::moveObz(){
    if(steitus==LEFT) x-=3;
    else if(steitus==RIGHT) x+=3;
    else if(steitus==UP) y-=3;
    else if(steitus==DOWN) y+=3;
    else if(steitus==DOWNLEFT){x-=3;y+=3;}
    else if(steitus==DOWNRIGHT){x+=3;y+=3;}
    else if(steitus==UPLEFT){x-=3;y-=3;}
    else if(steitus==UPRIGHT){x+=3;y-=3;}
}
