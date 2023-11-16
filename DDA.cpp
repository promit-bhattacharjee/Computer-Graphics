#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    float x1, y1, x2, y2, dx, dy, m, x, y;
    cout << "Enter First points(x,y): ";
    cin >> x1 >> y1;
    cout << "Enter Second points(x,y): ";
    cin >> x2 >> y2;

    cout << "\tx" << "\ty" << endl;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    dx = x2 - x1;
    dy = y2 - y1;

    if (dx != 0)
    {
        m = dy / dx;
    }
    else
    {
        m = 0;
    }
    x = x1;
    y = y1;

    while (x <= x2)
    {
        putpixel(x, y, WHITE);
        cout << "        " << x << "        " << y << endl;

        if (abs(dx) >= abs(dy))
        {
            x = x + 1;
            y = y + m;
        }
        else
        {
            x = x + 1 / m;
            y = y + 1;
        }
    }

    getch();
    closegraph();
    return 0;
}
