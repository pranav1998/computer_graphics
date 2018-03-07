#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<process.h>
void DrawX()
{
	//putpixel(360,240,4);
	outtextxy(360,242,"40");
	//putpixel(400,240,4);
	outtextxy(400,242,"80");
	outtextxy(440,242,"120");
	outtextxy(480,242,"160");
	outtextxy(520,242,"200");
	outtextxy(560,242,"240");
	outtextxy(600,242,"280");

	outtextxy(40,242,"-280");
	outtextxy(80,242,"-240");
	outtextxy(120,242,"-200");
	outtextxy(160,242,"-160");
	outtextxy(200,242,"-120");
	outtextxy(240,242,"-80");
	outtextxy(280,242,"-40");
}
void DrawY()
{
	outtextxy(318,280,"-40");
	outtextxy(318,320,"-80");
	outtextxy(318,360,"-120");
	outtextxy(318,400,"-160");
	outtextxy(318,440,"-180");
	outtextxy(318,40,"180");
	outtextxy(318,80,"160");
	outtextxy(318,120,"120");
	outtextxy(318,160,"80");
	outtextxy(318,200,"40");

}

void main()
{
	int gdriver=DETECT,gmode,errorcode,ch;
	initgraph(&gdriver,&gmode,"C://turboc3//bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics error : %s\n",grapherrormsg(errorcode));
		printf("Press any key to halt");
		getch();
		exit(1);
	}
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	DrawX();
	DrawY();
	getch();
}
