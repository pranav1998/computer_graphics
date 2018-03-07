#include<graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "C:\\TURBOC3\\bgi");
    circle(50,100,20);
    getch();
    return(0);
}
