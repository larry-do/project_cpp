#include<graphics.h>
#define WIDTH 800
#define HEIGHT 600
enum status {UP,DOWN,LEFT,RIGHT,STATIC,UPRIGHT,UPLEFT,DOWNRIGHT,DOWNLEFT};
class obzect {
private:
    int x,y;
    int radius;
    int speed;
    colors kolor;
    status steitus;
public:
    obzect(int a=0,int b=0,int zadius=0,colors kalor=WHITE,status steituz=DOWNLEFT);
    ~obzect();
    void show();
    void handleEvent();
    void controlBall();
    void moveObz();
};
