#include <iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);
int main()
{
    int h,x,y;
    string point;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    point=checkPointPosition( h, x, y);
    cout << point;
}
string checkPointPosition(int h, int x, int y)
{
    string p;
    int x1,x2,y1;
    x1=3*h;
    x2=2*h;
    y1=4*h;
    if (y>0 && y<h && x>0 && x<x1 || y<y1 && x>h && x<x2)
    { 
        p ="Inside";
    }
    else if ((y==0 && x<x1) || (y==h && x<x1) || (x==0 && y<=h) || (x==h && y<=y1) || (x==x2 && y<=y1) || (x==x1 && y<=h ))
    { 
        p ="Border";
    }
    else
    {
        p="Outside";
    }
    return p;
}