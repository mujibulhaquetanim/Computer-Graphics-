#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
    
    int driver = DETECT, mode=0;
    int gd=DETECT,gm;  
    initgraph (&gd, &gm,"c:\\tc\\bgi"); 

	circle(300, 100, 40);

	setcolor(WHITE);
	setfillstyle(SOLID_FILL, WHITE);

	fillellipse(310, 85, 2, 6);
	fillellipse(290, 85, 2, 6);
    arc(300,110,200,340,10);
	
	getch();
	closegraph();

	return 0;
}
