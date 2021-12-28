#include <graphics.h>
#include <conio.h>
 
int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:/TURBOC3/BGI");
   
	int pentagon[12] = {340,150,320,110,360,70,400,110,380,150,340,150};
	drawpoly(6,pentagon);


   
   getch();
}
