#include<graphics.h>
#define w 600
#define h 600
struct coordinate{
    int x,y;
};
class analogClock{
private:
    tm *tizan;
    coordinate second,minute,hour,center;
    int clockRadius,sRadius,mRadius,hRadius,centerRadius;
public:
    void setCenterCoordinate(int,int);
    void getTime();
    void getSecondCoordinate();
    void getMinuteCoordinate();
    void getHourCoordinate();
    void initRadius(int,int,int,int,int);
    void showClock();
};
