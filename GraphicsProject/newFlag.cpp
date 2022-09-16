#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int flag(){  
setcolor(2);

rectangle(200,150,400,250);
setfillstyle(1,2);
floodfill(325,225,2);

setcolor(4);

circle(300,200,30);
setfillstyle(1,4);
floodfill(300,200,4);

setcolor(3); 
rectangle(190,150,200,400);
setfillstyle(1,5);
floodfill(190,350,3);


rectangle(180,400,210,410);

setcolor(15); 
outtextxy(210,450,"National Flag of Bangladesh");
getch();
}

int main(){
int driver = DETECT, mode=0;
int gd=DETECT,gm;  
initgraph (&gd, &gm,"c:\\tc\\bgi"); 
    flag();
    getch();
}