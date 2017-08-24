#include"ball.h"
#include<ctime>
int main(){
    initwindow(W,H,"Bounce");
    ball a(W/2,0);
    srand(time(NULL));
    while(true){
        a.controlBall();
        a.ballBounce();
        a.showBall();
        delay(10);
        cleardevice();
    }
    getch();
    return 0;
}
