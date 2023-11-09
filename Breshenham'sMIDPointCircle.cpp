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
            d=1-r;
            flag=false;
        }
        else if(d<0)
        {
            d=d+2*x+3;
        }
        else if(d>=0)
        {
            d=d+2*(x-y)+5;

        }
        putpixel(x+cx,y+cy,RED);
        putpixel(x+cx,-y+cy,RED);
        putpixel(-x+cx,y+cy,RED);
        putpixel(-x+cx,-y+cy,RED);
        putpixel(y+cx,x+cy,RED);
        putpixel(y+cx,-x+cy,RED);
        putpixel(-y+cx,x+cy,RED);
        putpixel(-y+cx,-x+cy,RED);
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

