#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
int main()
{
int gd=DETECT,gm,a1,a2,b1,b2,c1,c2,angle;
initgraph (&gd, &gm,"c:\\tc\\bgi"); 
double r, pi=3.1416;
printf("Enter the coordinate value for A,B,C points:\n");
scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
printf("Enter The Angle:\n");
scanf("%d",&angle);
line(a1,a2,b1,b2);
line(b1,b2,c1,c2);
line(c1,c2,a1,a2);
outtextxy(c1,c2,"Before Rotation");
r=(pi*angle)/180;
a1=(a1*cos(r))-(a2*sin(r));
a2=(a1*sin(r))+(a2*cos(r));
b1=(b1*cos(r))-(b2*sin(r));
b2=(b1*sin(r))+(b2*cos(r));
c1=(c1*cos(r))-(c2*sin(r));
c2=(c1*sin(r))+(c2*cos(r));
line(a1,a2,b1,b2);
line(b1,b2,c1,c2);
line(c1,c2,a1,a2);
outtextxy(c1,c2,"After Rotation");
getch();
closegraph();
return 0;
}