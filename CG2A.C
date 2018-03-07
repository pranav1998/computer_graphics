#include<graphics.h>
#include<conio.h>
main()
{
int gd = DETECT,gm,left=400,top=100,right=600,bottom=150,x=100,y=150,radius=40;
initgraph(&gd, &gm,"C://TURBOC3/BGI");
rectangle(left, top, right, bottom);
circle(x, y, radius);
//bar(left + 300, top, right + 300, bottom);
//line(left + 10, top + 150, left + 410, top + 150);
ellipse(150, 350 , 0, 360, 100, 50);
ellipse(500, 400 , 0, 180, 100, 50);
outtextxy(left + 70, top + 70, "Rectangle in CG! ");
outtextxy(x + 10, y + 70, "Circle in CG! ");
outtextxy(100, 425, "Ellipse in CG! ");
outtextxy(400, 425, "Half Ellipse in CG! ");
getch();
//closegraph();
return 0;
}

