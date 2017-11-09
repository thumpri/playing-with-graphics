#include <iostream>
#include <stdio.h>
#include <graphics.h>

using namespace std;

void first_page();

int main()
{
int mx,my,y1,x1;
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "");

 mx=getmaxx();
 my=getmaxy();
 cout<<mx<<" "<<my;
 first_page();
 return 0;
}
void first_page()    //homepage function
{

 int poly[10],poly1[34];
 int x,y,i;
 setbkcolor(CYAN);
// This would make PlaySound return immediately, rather than waiting for the sound to finish playing
 PlaySound("policesiren2.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
 for(i=30;i<=630&&(!kbhit());i+=15)          //car display
 {

 setcolor(RED);
 setfillstyle(SOLID_FILL,4);
 poly1[0]=300;
 poly1[1]=20;
 poly1[2]=350;
 poly1[3]=70;
 poly1[4]=400;
 poly1[5]=20;
 poly1[6]=450;
 poly1[7]=70;
 poly1[8]=500;
 poly1[9]=70;
 poly1[10]=450;
 poly1[11]=120;
 poly1[12]=500;
 poly1[13]=170;
 poly1[14]=450;
 poly1[15]=170;
 poly1[16]=400;
 poly1[17]=220;
 poly1[18]=350;
 poly1[19]=170;
 poly1[20]=300;
 poly1[21]=220;
 poly1[22]=250;
 poly1[23]=170;
 poly1[24]=200;
 poly1[25]=170;
 poly1[26]=250;
 poly1[27]=120;
 poly1[28]=200;
 poly1[29]=70;
 poly1[30]=250;
 poly1[31]=70;
 poly1[32]=poly1[0];
 poly1[33]=poly1[1];
 drawpoly(17,poly1);
 fillpoly(17,poly1);
 setcolor(YELLOW);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
 outtextxy(200,105,"BANG BANG!!");
 setcolor(RED);
 line(5,0,5,480);
 line(6,0,6,480);
 setcolor(BLUE);
 line(10,0,10,480);
 line(11,0,11,480);
 setcolor(WHITE);
 line(15,0,15,480);
 line(16,0,16,480);
 setcolor(GREEN);
 line(20,0,20,480);
 line(21,0,21,480);
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,BLUE);
 rectangle(22,1,160,70);
 floodfill(23,35,BLUE);
 setcolor(BLACK);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy( 54,30,"START");
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,2);
 rectangle(0,409,640,480);
 floodfill(30,410,2);
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,1);
 poly[0]=i+20;    //point 1
 poly[1]=380;
 poly[2]=i+30;    //point2
 poly[3]=360;
 poly[4]=i+50;    //point 3
 poly[5]=360;
 poly[6]=i+60;    //point 4
 poly[7]=380;
 poly[8]=poly[0];
 poly[9]=poly[1];
 drawpoly(5,poly);
 fillpoly(5,poly);
 rectangle(i,380,i+90,400);
 floodfill(i+10,390,BLUE);
 setcolor(RED);
 circle(i+18,400,7);
 setfillstyle(SOLID_FILL, RED);
 floodfill(i+18,399,RED);
 circle(i+55,400,7);
 floodfill(i+55,399,RED);
 if(i==630)
 {
  i=30;
 }
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(150,420,"PRESS ANY KEY TO CONTINUE");
 delay(50);
 cleardevice();
}
}

