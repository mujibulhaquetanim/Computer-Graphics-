#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int gd=DETECT,gm,a1,a2,b1,b2,c1,c2,Tx,Ty;
initgraph (&gd, &gm,"c:\\tc\\bgi"); 

printf("Enter the coordinate value for A,B,C points:\n");
scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
printf("Enter the value for Translation Sx & Sy:\n");
scanf("%d%d",&Tx,&Ty);
setcolor(GREEN);
line(a1,a2,b1,b2);
line(b1,b2,c1,c2);
line(c1,c2,a1,a2);
outtextxy(a1,a2+10,"Before Traslation: ");
a2=a2+Ty;
a1=a1+Tx;
b1=b1+Tx;
b2=b2+Ty;
c1=c1+Tx;
c2=c2+Ty;
setcolor(RED);
line(a1,a2,b1,b2);
line(b1,b2,c1,c2);
line(c1,c2,a1,a2);
outtextxy(b1+10,b2,"After Traslation: ");
getch();
closegraph();
return 0;
}