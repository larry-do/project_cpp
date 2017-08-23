#include"ball.h"
#include<iostream>
ball::ball(int a,int b,int r,statusEnum s){
    x=a;
    y=b;
    radius=r;
    status=s;
}
ball::~ball(){
    std::cout<<"The object has been deleted";
}
void ball::initBall(int a,int b,int r,statusEnum s){
    x=a;
    y=b;
    radius=r;
    status=s;
}
void ball::controlBall(){
    if(kbhit()){
        char c=getch();
        if(c=='a'||c=='A') x-=6;
        if(c=='d'||c=='D') x+=6;
        if(c=='s'||c=='S') y+=6;
        if(c=='w'||c=='W') y-=6;
        if(c=='z'||c=='Z') {
            if(radius<H/2-2) radius+=4;
        }
        if(c=='m'||c=='M') {
            if(radius>4) radius-=4;
        }
    }
}
void ball::showBall(){
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillellipse(x,y,radius,radius);
}
void ball::ballBounce(){

}
