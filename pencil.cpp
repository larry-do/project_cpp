#include<graphics.h>
#include<iostream>
#include<windows.h>
#define W 1200
#define H 600
int main(){
    initwindow(W,H,"PAINT");
    while(true){
        int a=-2,b=-2;
        getmouseclick(WM_LBUTTONDOWN,a,b);
        int q=a,p=b; // hai biến này dùng để lưu vị trí trước đó của hàm mousex() và mousey()
        if(a!=-1&&b!=-1){
            std::cout<<a<<' '<<b<<std::endl;
            while(true){
                int x=-2,y=-2;
                getmouseclick(WM_LBUTTONUP,x,y);
                if(x!=-1&&y!=-1){
                    std::cout<<x<<' '<<y<<std::endl<<std::endl;
                    break;
                }
                else{// mình xử lý chỗ này thông minh vãi =))
                    int m=mousex();//vị trí mới
                    int n=mousey();
                    setcolor(WHITE);
                    line(q,p,m,n);// nối 2 vị trí này với nhau
                    q=m;//gán lại mới thành cũ
                    p=n;
                }
            }
        }
        if(GetAsyncKeyState(VK_DELETE)) cleardevice();
    }
    getch();
    return 1;
}
/*
GIẢI THÍCH:
Vì hàm bắt tọa độ chuột bị ngắt quãng bởi thời gian chạy. Nếu bắt tọa độ thông thường thì sẽ bị chấm
liên tục. Ta có 2 cách để xử lý:
1. dự đoán hướng đi // chưa biết thế nào
2. lưu vị trí cuối gần nhất mà bắt được tọa độ chuột, nối điểm này với điểm mới.
*/
