//nên sửa class ball này có thể kế thừa class trong Movement
#include<graphics.h>
#define W 800
#define H 600
enum statusEnum{UP,DOWN};
class ball {
private:
    int x,y,radius;
    float speed,acceleration;
    statusEnum status;
public:
    ball(int a = W/2,int b=H/2);
    ~ball();
    void initBall(int,int,int,int,int);
    void controlBall();
    void ballBounce();
    void showBall();
};
