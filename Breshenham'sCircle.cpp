#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int r,d,x,y,cx,cy,dpre;
    cout<<"Enter Radiuos: ";
    cin>>r;

    cout<<"Enter Center(x,y): ";
    cin>>cx>>cy;
    bool flag=true;
    x=0;
    y=r;
    cout<<" x " << " y "<< " d(i+1) "<<endl;
    cout <<" "<< x << "  " << y << "  "<< endl;

    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    while(x<y)
    {
        if(flag){
            d=3-2*r;
            flag=false;
        }
        else if(d<0)
        {
            d=d+4*x+6;
        }
        else if(d>=0)
        {
            d=d+4*(x-y)+10;

        }
        putpixel(x+cx,y+cy,WHITE);
        putpixel(x+cx,-y+cy,WHITE);
        putpixel(-x+cx,y+cy,WHITE);
        putpixel(-x+cx,-y+cy,WHITE);
        putpixel(y+cx,x+cy,WHITE);
        putpixel(y+cx,-x+cy,WHITE);
        putpixel(-y+cx,x+cy,WHITE);
        putpixel(-y+cx,-x+cy,WHITE);

        if(d>=0)
        {
            y--;
        }
        x++;
        cout <<" "<< x << "  " << y << "  " << d << endl;
    }
    getch();
    closegraph();

}
