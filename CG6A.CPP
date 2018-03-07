#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd = DETECT, gm;
	int ch;
	float x1,x2,y1,y2,sx,sy;
	initgraph(&gd,&gm,"C:\\TURBOc3\\bgi");
	cout<<"Program for Scaling Objects (Line and Rectangle)";

	cout<<endl<<"1. Line Scaling";
	cout<<endl<<"2. Rectangle Scaling";
	cout<<endl<<"Enter Your Choice :";
	cin>>ch;
	switch(ch)
	{
	case 1:
		cout<<endl<<endl<<"Enter 2 Point co ordinate for line :";
		cin>>x1>>y1>>x2>>y2;
		line(x1,y1,x2,y2);
		cout<<"Enter Scaling Co-ordinates : ";
		cin>>sx>>sy;
		x1=(x1*sx);
		y1=(y1*sy);
		x2=(x2*sx);
		y2=(y2*sy);
		cout<<endl<<"Line After Scaling : ";
		line(x1,y1,x2,y2);
		break;
	case 2:
		cout<<"Example for Rectangle Scaling";
		rectangle(100,100,200,150);
		sx=2.5;
		sy=1.9;
		rectangle(100*sx,100*sy,200*sx,150*sy);
		break;
	default:
		cout<<"Invalid Choice!";
	}
	getch();
	closegraph();
}