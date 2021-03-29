#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int i,x,y,flag=0;
       initgraph(&gd,&gm,"C:\\TC\\BGI");
x=getmaxx()/2;
y=30;
while(!kbhit())
  {
   if(y>=getmaxy()-30||y<=600)
   {
   flag=!flag;
   setcolor(4);
   setfillstyle(SOLID_FILL,4);
   circle(x,y,15);
   floodfill(x,y,4);
   delay(50);
   cleardevice();   ////////////////clear screen
   if(flag)
     {
      y=y+5;
       if(y>=440)
       {
	y=30;
	x=x+100;
	if(x>=620)
	x=15;
       }
     }
   else
     {
      y=y+5;
     }
  }}
getch();
closegraph();
return 0;
}
