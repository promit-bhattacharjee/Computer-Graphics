#include<bits/stdc++.h>
#include<graphics.h>
#include<string>
using namespace std;
struct data{
string cordinates;
float value;
};
int main()
{
    float x1,x2,y1,y2,dx,dy,x,y;
    data a[2][2];
    float xwmax,xwmin,ywmax,ywmin;
    float p1,p2,p3,p4,q1,q2,q3,q4;
    float t1,t2;
    float frag=0,frag2=1;
    cout<<"Enter (X_1,Y_1) cordinates: ";
    cin>>x1>>y1;

    cout<<"Enter (X_2,Y_2) cordinates: ";
    cin>>x2>>y2;


    cout<<"Enter ( XWMax, XWMin , YWMax , YWMin ) cordinates: ";
    cin>>xwmax>>xwmin>>ywmax>>ywmin;

    dx=x2-x1;
    dy=y2-y1;

    p1=-dx;
    p2=dx;
    p3=-dy;
    p4=dy;

    q1=x1-xwmin;
    q2=xwmax-x1;
    q3=y1-ywmin;
    q4=ywmax-y1;
    cout<<"q1: \t"<<q1<<"\tq2\t"<<q2<<"\tq3\t"<<q3<<"\tq4\t"<<q4<<endl;

    float pk[]={p1,p2,p3,p4};
    float qk[]={q1,q2,q3,q4};

    for(int i=0;i<4;i++)
    {
        if(pk[i]==0)
        {
            if(qk<0)
            {
                cout<<" Parallel and Out size. ";
            }
            else{
            cout<<"parallel";
            }

        }
        else if(pk[i]<0){
            t1=max(frag,qk[i]/pk[i]);
            frag=t1;
            cout<<"frag\t"<<i<<"\tR:\t"<<frag<<" "<<t1<<endl;
        }
        else if(pk[i]>0){
            t2=min(frag2,qk[i]/pk[i]);
            frag2=t2;
            cout<<"frag2\t"<<i<<"\tR:\t"<<frag2<<" "<<t2<<endl;
        }
    }
    if(t1<t2)
    {
        x=x1+t1*dx;
        y=y1+t1*dy;

        a[0][0]={"X'_1",x};
        a[0][1]={"y'_1",y};

        x=x1+t2*dx;
        y=y1+t2*dy;
        a[1][0]={"X'_2",x};
        a[1][1]={"y'_2",y};
    }

    cout<<a[0][0].cordinates<<"\t"<<a[0][0].value<<endl;
    cout<<a[0][1].cordinates<<"\t"<<a[0][1].value<<endl;
    cout<<a[1][0].cordinates<<"\t"<<a[1][0].value<<endl;
    cout<<a[1][1].cordinates<<"\t"<<a[1][1].value<<endl;

    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    setcolor(WHITE);
    rectangle(xwmin,ywmin,xwmax,ywmax);
    setcolor(RED);
    line(x1,y1,x2,y2);
    setcolor(GREEN);
    line(a[0][0].value,a[0][1].value,a[1][0].value,a[1][1].value);
    getch();
    closegraph();



}
