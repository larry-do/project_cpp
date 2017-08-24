#include"ball.h"
#include<iostream>
ball::ball(int a,int b){ // tạo nhanh 1 ball
    x=a;
    y=b;
    radius=30;
    status=DOWN;
    speed=0;
    acceleration=1;
}
ball::~ball(){
    std::cout<<"The object has been deleted";
}
//hàm này dùng để tạo ball chính xác rõ nghĩa hơn.
void ball::initBall(int a,int b,int r,int spd,int acl){ //chỉ nhận speed, accl nguyên thôi.
    x=a;
    y=b;
    radius=r;
    speed=spd;
    acceleration=acl;
    status=DOWN;
}
void ball::controlBall(){
    if(kbhit()){
        char c=getch();
        //có thể viết gọn lại cái if ( nhét điều kiện vào 1 if )
        //nhưng để ra cho rõ nghĩa cũng được. tốc độ thực thi không khác nhau
        if(c=='a'||c=='A'){
            if(x-radius>0) x-=10;
        }
        if(c=='d'||c=='D'){
            if(x+radius<W) x+=10;
        }
        if(c=='s'||c=='S'){
            if(y+radius<H) y+=10;
        }
        if(c=='w'||c=='W'){
            if(y-radius>0) y-=10;
        }
        if(c=='z'||c=='Z') {
            if(radius<H/2-2) radius+=4;
        }
        if(c=='m'||c=='M') {
            if(radius>4) radius-=4;
        }
    }
}
void ball::showBall(){
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillellipse(x,y,radius,radius);
}
void ball::ballBounce(){
    if(status==DOWN){
        if(y+radius<H){
            speed=speed+acceleration;
            y+=speed; //float -> int
        }
        if(y+radius>=H){ //float -> int
            status=UP;
            speed=speed/100*80;
        }
    }
    if(status==UP){
        if(speed>=acceleration) speed=speed-acceleration;
        y-=speed;//float -> int
         //nếu hết năng lượng thì sẽ rơi xuống. Hết năng lượng thì speed về 0.
         //Nhung do speed là float, chia % sẽ ko bao giờ về được 0 cả. Lệnh dưới sẽ ko bao giờ được thực thi.
         //Tốt hơn hết là để speed<=1 như trên cho dễ tính cả tọa độ do số nguyên
        if(speed<=1||y-radius<=0){
            status=DOWN;
        }
    }
}
