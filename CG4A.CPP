#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int x,y,x1,y1,x2,y2,dx,dy,l;
	int i=0, gd=DETECT,gm;
	initgraph(&gd,&gm,"c://turboc3//bgi");
	cout<<"Enter the value of x1:";
	cin>>x1;
	cout<<"Enter the value of y1:";
	cin>>y1;
	cout<<"Enter the value of x2:";
	cin>>x2;
	cout<<"Enter the value of y2:";
	cin>>y2;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx >= dy)
	{
		l=dx;
	}
	else
	{
		l=dy;
	}
	dx=(x2-x1)/l;
	dy=(y2-y1)/l;
	x=x1+0.5;
	y=y1+0.5;
	i=1;
	while(i <= l)
	{
		putpixel(x,y,WHITE);
		x=x+dx;
		y=y+dy;
		i=i++;
	}
	getch();
}