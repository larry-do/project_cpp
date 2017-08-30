#include<graphics.h>
#define W 1300
#define H 700
#define ACCELERATION 0.5
#define Pi 3.14
#define CANON_BULLET 100
class bulletObzect{
private:
    double x,y;
    int radius;
    double speed,speedX,speedY;
    double angle;
public:
    void initBullet(double,double,int,double,double);
    void movementBullet();
    void handleEvent();
    void showBullet();
};
