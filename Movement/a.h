#include<graphics.h>
#define WIDTH 800
#define HEIGHT 600
class obzect {
private:
    double x,y;
    double radius;
    double speedX,speedY;
public:
    obzect(double a=0,double b=0,double r=20);
    ~obzect();
    void show();
    void handleEvent();
    void controlBall();
    void moveObz();
};
