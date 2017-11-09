#include<iostream>
#include<stdio.h>
#include<graphics.h>

using namespace std;
int main()
{
int mx,my,y1,x1;
int gdriver = DETECT, gmode;

int array[]={320,240,340,220,360,240,360,280,320,280,320,240};
initgraph(&gdriver, &gmode, "");
drawpoly(6,array);
system("PAUSE");
 return 0;
}
