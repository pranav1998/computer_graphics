#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd = DETECT, gm;
	int ch;
	float x1,x2,y1,y2,sx,sy;
	initgraph(&gd,&gm,"C:\\TURBOc3\\bgi");
	cout<<"Program for Translating Objects (Line and Rectangle)";

	cout<<endl<<"1. Line Translation";
	cout<<endl<<"2. Rectangle Translation";
	cout<<endl<<"Enter Your Choice :";
	cin>>ch;
	switch(ch)
	{
	case 1:
		cout<<endl<<endl<<"Enter 2 Point co ordinate for line :";
		cin>>x1>>y1>>x2>>y2;
		line(x1,y1,x2,y2);
		cout<<"Enter Translating Co-ordinates : ";
		cin>>sx>>sy;
		x1=(x1+sx);
		y1=(y1+sy);
		x2=(x2+sx);
		y2=(y2+sy);
		cout<<endl<<"Line After Translation : ";
		line(x1,y1,x2,y2);
		break;
	case 2:
		cout<<"Example for Rectangle Translation";
		rectangle(100,100,200,150);
		sx=90;
		sy=120;
		rectangle(100+sx,100+sy,200+sx,150+sy);
		break;
	default:
		cout<<"Invalid Choice!";
	}
	getch();
	closegraph();
}