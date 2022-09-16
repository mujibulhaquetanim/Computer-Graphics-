#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int gd=DETECT,gm,a1,a2,b1,b2,c1,c2,Sx,Sy;
initgraph (&gd, &gm,"c:\\tc\\bgi"); 

printf("Enter the coordinate value for A,B,C points:\n");
scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
printf("Enter the value for Scaling-Sx & Sy:\n");
scanf("%d%d",&Sx,&Sy);
setcolor(GREEN);
line(a1,a2,b1,b2);
line(b1,b2,c1,c2);
line(c1,c2,a1,a2);
outtextxy(a1,a2+10,"Before Scaling");
a1=a1*Sx;
a2=a2*Sy;
b1=b1*Sx;
b2=b2*Sy;
c1=c1*Sx;
c2=c2*Sy;
setcolor(RED);
line(a1,a2,b1,b2);
line(b1,b2,c1,c2);
line(c1,c2,a1,a2);
outtextxy(b1+10,b2,"After Scaling");
getch();
closegraph();
return 0;
}