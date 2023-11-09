#include <iostream>
#include<graphics.h>
using namespace std;
int main()
{
   int x1, y1, x2, y2, p, x, y, dx, dy;
    bool flag = true;
    cout << "Enter First Coordinate (x, y): ";
    cin >> x1 >> y1;
    cout << "Enter Second Coordinate (x, y): ";
    cin >> x2 >> y2;
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    dx = x2-x1;
    dy = y2-y1;
    x = x1;
    y = y1;
    cout<<" x " << " y "<< " P "<<endl;
    while (x <x2)
    {
        putpixel(x+200,y+200,WHITE);
        if (flag==true)
        {
            p = 2 * dy - dx;
            flag = false;
        }
        else if (p < 0)
        {
            p = p + 2  * dy;

        }
        else if (p >= 0)
        {
            p = p - 2 * (dx - dy);
        }

        if(p>0)
        {
            y=y + 1;
        }
        x = x + 1;
        cout <<" "<< x << "  " << y << "  " << p << endl;
    }
    getch();
    closegraph();
    return 0;
}
