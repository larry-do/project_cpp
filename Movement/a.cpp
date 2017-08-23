#include"a.h"
#include<iostream>
obzect::obzect(int a,int b,int zadius,colors kalor, status steituz){
    x=a;
    y=b;
    radius=zadius;
    kolor=kalor;
    steitus = steituz;
    speed=1;
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
void obzect::controlBall(){
    if(kbhit()){
        char c=getch();
        if(c=='s') speed+=1;
        if(c=='d') {
            if(speed>=1) speed-=1;
        }
        if(c=='z'){
            if(2*radius<HEIGHT) radius+=2;
        }
        if(c=='x'){
            if(radius>2) radius-=2;
        }
    }
}
void obzect::moveObz(){
    if(steitus==LEFT) x-=speed;
    else if(steitus==RIGHT) x+=speed;
    else if(steitus==UP) y-=speed;
    else if(steitus==DOWN) y+=speed;
    else if(steitus==DOWNLEFT){x-=speed;y+=speed;}
    else if(steitus==DOWNRIGHT){x+=speed;y+=speed;}
    else if(steitus==UPLEFT){x-=speed;y-=speed;}
    else if(steitus==UPRIGHT){x+=speed;y-=speed;}
}
