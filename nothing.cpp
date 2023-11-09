#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    circle(400,60,RED);
    getch();
    closegraph();
}
