#include<iostream>
#include"bullet.h"
int main(){
    initwindow(W,H,"Bullet");
    bulletObzect bullet;
    bullet.initBullet(0+20,H-20,15,20,90);
    while(true){
        bullet.movementBullet();
        bullet.handleEvent();
        bullet.showBullet();
        delay(10);
        cleardevice();
    }
    getch();
    return 0;
}
