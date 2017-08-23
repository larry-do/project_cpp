#include"ball.h"
int main(){
    initwindow(W,H,"Bounce");
    ball a(W/2,H/2,10,DOWN);
    while(true){
        a.controlBall();
        a.ballBounce();
        a.showBall();
        delay(1);
        cleardevice();
    }
    getch();
    return 0;
}
