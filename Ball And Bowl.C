#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void start();
void main()
{
int gd=DETECT,gm;
char a,b,c,d,e[35],n;
int i,j=425,k,l=1,x,y,z=30,level=1,chance=0,score=0,flag=0;
start();
printf("please enter your name:");
   scanf("%s",&e);
level:
x=2*random(620);
y=30;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
  i=294;
  j=425;

		       //////////////////////////////////////
  while(!kbhit())
	 {
	  if(y>=getmaxy()-30||y<=600)
	   {
	    flag=!flag;
	    setcolor(13);
	    setbkcolor(8);
	    setfillstyle(SOLID_FILL,13);
	    circle(x,y,15);
	    floodfill(x,y,13);
	    delay(z);
	    cleardevice();      ////////////////clear screen
	    if(flag)
	     {
	      y=y+5;
		setcolor(2);
		ellipse(i,j,18,10,70,18);
		ellipse(i,j+10,170,10,70,25);
	      if(y>=j+15)
		  {
		   x=2*random(620);
		   y=30;
		  }
	     }
	    else
	    {
	     y=y+5;
	     setcolor(2);
	     ellipse(i,j,18,10,70,18);
	     ellipse(i,j+10,170,10,70,25);
	    }
	  }
    }
			      //////////////////////////////
       ask:
       c=getkey();
       if(c=='n'||c=='N')
	 goto last;
       sam:
       if(c=='a'||c=='A'||c==75)
	 {
	 if(i<=-60)
	   {i=704;}
	 i=i-10;
				      ///////////////////////////////////
	      {

	       while(!kbhit())
		 {
			if(y>=getmaxy()-30||y<=600)
		  {
		    flag=!flag;
		    setcolor(13);
		    setbkcolor(8);
		    setfillstyle(SOLID_FILL,13);
		    circle(x,y,15);
		    floodfill(x,y,13);
		    delay(z);
		    cleardevice();   ////////////////clear screen
		    if(flag)
		     {
		      y=y+5;
		      setcolor(2);
		      ellipse(i,j,18,10,70,18);
		      ellipse(i,j+10,170,10,70,25);
		      if(y>=j+15)
			  {
			    if(i<=x+60&&i>=x-60)
			      {
				if(i<=x+30&&i>=x-30)
				   {
				    setcolor(10);
				    setbkcolor(8);
				    setfillstyle(SOLID_FILL,10);
				    circle(x,y,15);
				    floodfill(x,y,10);
				    delay(400);
				   }
				else
				    {
				     setcolor(3);
				     setbkcolor(8);
				     setfillstyle(SOLID_FILL,3);
				     circle(x,y,15);
				     floodfill(x,y,3);
				     delay(400);
				    }
			       score++;
				 if(score==10)
				  {
				   goto next;
				  }
			       x=random(620);
			       y=30;
			      }
			    else
			      {
				{
				  setcolor(4);
				  setbkcolor(8);
				  setfillstyle(SOLID_FILL,4);
				  circle(x,y,15);
				  floodfill(x,y,4);
				  delay(400);
				 }
				chance++;
				 if(chance==5)
				    {
				     goto exit;
				    }
				setfillstyle(SOLID_FILL,4);
				x=random(620);
				y=30;
			      }
			  }
		     }
		    else
		     {
		       y=y+5;
		       setcolor(2);
		       ellipse(i,j,18,10,70,18);
		       ellipse(i,j+10,170,10,70,25);
		     }
	      }
		   }
					//////////////////////////////
	      setcolor(2);
	      ellipse(i,j,18,10,70,18);
	      ellipse(i,j+10,170,10,70,25);
	      cleardevice();
     }
       setcolor(4);
       setcolor(2);
       ellipse(i,j,18,10,70,18);
       ellipse(i,j+10,170,10,70,25);
	 c=getkey();
	 if(c=='d'||c=='D'||c==77)
	      goto sandy;
	 else if(c=='a'||c=='A'||c==75)
	      goto sam;
	 else if(c=='w'||c=='W'||c==72)
	      goto up;
	 else if(c=='s'||c=='S'||c==80)
	      goto down;
	 else
	      goto ask;

	 }
       sandy:
       if(c=='d'||c=='D'||c==77)
	  {
	  if(i>=698)
	   {i=-64;}
	  i=i+10;
		{

				    /////////////////////////////////////

	      while(!kbhit())
		 {
		  if(y>=getmaxy()-30||y<=600)
		  {
		    flag=!flag;
		    setcolor(13);
		    setbkcolor(8);
		    setfillstyle(SOLID_FILL,13);
		    circle(x,y,15);
		    floodfill(x,y,13);
		    delay(z);
		    cleardevice();   ////////////////clear screen
		    if(flag)
		     {
		      y=y+5;
		      setcolor(2);
		      ellipse(i,j,18,10,70,18);
		      ellipse(i,j+10,170,10,70,25);
		      if(y>=j+15)
			  {
			    if(i<=x+60&&i>=x-60)
			      {
				if(i<=x+30&&i>=x-30)
				   {
				    setcolor(10);
				    setbkcolor(8);
				    setfillstyle(SOLID_FILL,10);
				    circle(x,y,15);
				    floodfill(x,y,10);
				    delay(400);
				   }
				else
				   {
				    setcolor(3);
				    setbkcolor(8);
				    setfillstyle(SOLID_FILL,3);
				    circle(x,y,15);
				    floodfill(x,y,3);
				    delay(400);
				   }
			       score++;
				 if(score==10)
				  {
				   goto next;
				  }
			       x=random(620);
			       y=30;
			      }
			    else
			      {
				{
				  setcolor(4);
				  setbkcolor(8);
				  setfillstyle(SOLID_FILL,4);
				  circle(x,y,15);
				  floodfill(x,y,4);
				  delay(400);
				 }
				 chance++;
				 if(chance==5)
				    {
				     goto exit;
				    }
				setfillstyle(SOLID_FILL,4);
				x=random(620);
				y=30;
			      }
			  }
		     }
		    else
		     {
		       y=y+5;
		       setcolor(2);
		       ellipse(i,j,18,10,70,18);
		       ellipse(i,j+10,170,10,70,25);
		     }
		    }
	      }

				  ///////////////////////////////////

			setcolor(2);
			ellipse(i,j,18,10,70,18);
			ellipse(i,j+10,170,10,70,25);
			cleardevice();
		}
       setcolor(4);
       setbkcolor(8);
       setcolor(2);
       ellipse(i,j,18,10,70,18);
       ellipse(i,j+10,170,10,70,25);
       c=getkey();
	  if(c=='d'||c=='D'||c==77)
	      goto sandy;
	  else if(c=='a'||c=='A'||c==75)
	      goto sam;
	  else if(c=='w'||c=='W'||c==72)
	      goto up;
	  else if(c=='s'||c=='S'||c==80)
	      goto down;
	  else
	      goto ask;
	   }
       up:
       if(c=='w'||c=='W'||c==72)
	 {
	 if(j<=245)
	   {j=245;}
	    j=j-10;
				      ///////////////////////////////////
	      {

	       while(!kbhit())
		 {
			if(y>=getmaxy()-30||y<=600)
		  {
		    flag=!flag;
		    setcolor(13);
		    setbkcolor(8);
		    setfillstyle(SOLID_FILL,13);
		    circle(x,y,15);
		    floodfill(x,y,13);
		    delay(z);
		    cleardevice();   ////////////////clear screen
		    if(flag)
		     {
		      y=y+5;
		      setcolor(2);
		      ellipse(i,j,18,10,70,18);
		      ellipse(i,j+10,170,10,70,25);
		      if(y>=j+15)
			  {
			    if(i<=x+60&&i>=x-60)
			      {
				if(i<=x+30&&i>=x-30)
				   {
				    setcolor(10);
				    setbkcolor(8);
				    setfillstyle(SOLID_FILL,10);
				    circle(x,y,15);
				    floodfill(x,y,10);
				    delay(400);
				   }
				else
				    {
				     setcolor(3);
				     setbkcolor(8);
				     setfillstyle(SOLID_FILL,3);
				     circle(x,y,15);
				     floodfill(x,y,3);
				     delay(400);
				    }
			       score++;
				 if(score==10)
				  {
				   goto next;
				  }
			       x=random(620);
			       y=30;
			      }
			    else
			      {
				{
				  setcolor(4);
				  setbkcolor(8);
				  setfillstyle(SOLID_FILL,4);
				  circle(x,y,15);
				  floodfill(x,y,4);
				  delay(400);
				 }
				chance++;
				 if(chance==5)
				    {
				     goto exit;
				    }
				setfillstyle(SOLID_FILL,4);
				x=random(620);
				y=30;
			      }
			  }
		     }
		    else
		     {
		       y=y+5;
		       setcolor(2);
		       ellipse(i,j,18,10,70,18);
		       ellipse(i,j+10,170,10,70,25);
		     }
	      }
		   }
					//////////////////////////////
	      setcolor(2);
	      ellipse(i,j,18,10,70,18);
	      ellipse(i,j+10,170,10,70,25);
	      cleardevice();
     }
       setcolor(4);
       setcolor(2);
       ellipse(i,j,18,10,70,18);
       ellipse(i,j+10,170,10,70,25);
	 c=getkey();
	 if(c=='d'||c=='D'||c==72)
	      goto sandy;
	 else if(c=='a'||c=='A'||c==75)
	      goto sam;
	 else if(c=='w'||c=='W'||c==77)
	      goto up;
	 else if(c=='s'||c=='S'||c==80)
	      goto down;
	 else
	      goto ask;
	 }
	 down:
	 if(c=='s'||c=='S'||c==80)
	 {
	 if(j>=445)
	   {j=445;}
	    j=j+10;
				      ///////////////////////////////////
	      {

	       while(!kbhit())
		 {
			if(y>=getmaxy()-30||y<=600)
		  {
		    flag=!flag;
		    setcolor(13);
		    setbkcolor(8);
		    setfillstyle(SOLID_FILL,13);
		    circle(x,y,15);
		    floodfill(x,y,13);
		    delay(z);
		    cleardevice();   ////////////////clear screen
		    if(flag)
		     {
		      y=y+5;
		      setcolor(2);
		      ellipse(i,j,18,10,70,18);
		      ellipse(i,j+10,170,10,70,25);
		      if(y>=j+15)
			  {
			    if(i<=x+60&&i>=x-60)
			      {
				if(i<=x+30&&i>=x-30)
				   {
				    setcolor(10);
				    setbkcolor(8);
				    setfillstyle(SOLID_FILL,10);
				    circle(x,y,15);
				    floodfill(x,y,10);
				    delay(400);
				   }
				else
				    {
				     setcolor(3);
				     setbkcolor(8);
				     setfillstyle(SOLID_FILL,3);
				     circle(x,y,15);
				     floodfill(x,y,3);
				     delay(400);
				    }
			       score++;
				 if(score==10)
				  {
				   goto next;
				  }
			       x=random(620);
			       y=30;
			      }
			    else
			      {
				{
				  setcolor(4);
				  setbkcolor(8);
				  setfillstyle(SOLID_FILL,4);
				  circle(x,y,15);
				  floodfill(x,y,4);
				  delay(400);
				 }
				chance++;
				 if(chance==5)
				    {
				     goto exit;
				    }
				setfillstyle(SOLID_FILL,4);
				x=random(620);
				y=30;
			      }
			  }
		     }
		    else
		     {
		       y=y+5;
		       setcolor(2);
		       ellipse(i,j,18,10,70,18);
		       ellipse(i,j+10,170,10,70,25);
		     }
	      }
		   }
					//////////////////////////////
	      setcolor(2);
	      ellipse(i,j,18,10,70,18);
	      ellipse(i,j+10,170,10,70,25);
	      cleardevice();
     }
       setcolor(4);
       setcolor(2);
       ellipse(i,j,18,10,70,18);
       ellipse(i,j+10,170,10,70,25);
	 c=getkey();
	 if(c=='d'||c=='D'||c==77)
	      goto sandy;
	 else if(c=='a'||c=='A'||c==75)
	      goto sam;
	 else if(c=='w'||c=='W'||c==72)
	      goto up;
	 else if(c=='s'||c=='S'||c==80)
	      goto down;
	 else
	      goto ask;
	 }
       else
	  goto ask;
next:
{
 printf("Dear %s\n",e);
 printf("Your Score=%d\n",score);
 printf("left balls=%d\n",chance);
 printf("level %d complete\n",level);
 printf("press y to next level\n ");
 printf("press n to leave game\n ");
 level++;
 back:
 n=getch();
 if(n=='y'||n=='Y')
  {

   z=z-5;
   score=0;
   chance=0;
   goto level;
  }
 if(n=='n'||n=='N')
  {
   goto last;
  }
 else
  goto back;
}

exit:
printf("Dear %s\n",e);
printf("try again\n");
printf("You miss %d ball in level %d\n",chance,level);
printf("Score=%d",score);
getch();
last:
}


void start()
{
int i,j;
char a[20];
clrscr();
textcolor(9);
for(i=1;i<=5;i++)
  {
   printf("\n\n\n\n\t\t\t");
   cprintf("Please Wait Loading");
   for(j=1;j<=5;j++)
   {
    delay(400);
    printf(".");
   }
  clrscr();
  }
}

int getkey()
{
  int ch;
  ch=getch();
   if(ch==0)
    {
     ch=getch();
     return ch;
    }
   return ch;
}
