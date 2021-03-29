#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gdriver = DETECT,gmode,x,i,k;
char a,b,c;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	{
		i=294;
		ellipse(i,410,16,10,70,18);
		ellipse(i,420,170,10,70,40);
	}
       getch();
}
