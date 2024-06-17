#include<stdio.h>

#include<conio.h>

#include<graphics.h>

#include<dos.h>

#include<stdlib.h>

#include<math.h>

void text();

void children();

void graphic();

void main()


{
	   int gd=DETECT,gmode,i=0,j,x,y,color;
initgraph(&gd,&gmode,"C:\\TurboC3\\bgi");




graphic();

text();

children();

while(!kbhit())

{

putpixel(rand()%700,rand()%700,YELLOW);

delay(1);

}

closegraph();

graphic();



setlinestyle(0,0,1);

while(kbhit())

{

color=rand()%15+1;

settextstyle(8,0,6);

setcolor(color+3);

outtextxy(0,(getmaxy()/2)-100,"Happy Valentine Day");

outtextxy(0,(getmaxy()/2)-30,"--HARSH SRIVASTAVA");

x=rand()%1366;

y=rand()%768;

for(i=768;i!=y;i--)

{

if(i%50==0)

delay(1);

putpixel(x,i,14);

}

for(i=768;i!=y;i--)

{

if(i%70==0)

delay(1);

putpixel(x,i,0);

}

for(j=0;j!=100;j+=5)

{

for(i=0;i!=360;i+=15)

{

setcolor(color);

line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));

}

}

setcolor(0);

for(j=0;j!=100;j++)

{

for(i=0;i!=360;i+=15)

line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));

}

}

getch();

closegraph();

}

void graphic()

{

int gd=DETECT,gm;

initgraph(&gd,&gm,"C:\\TC\\BGI");

}

void text()

{

setcolor(RED);

settextstyle(0,EMPTY_FILL,1);

outtextxy(250,420,"HARSH");

outtextxy(350,420,"VALENTINE");

setcolor(MAGENTA);

settextstyle(0,EMPTY_FILL,4);

outtextxy(50,20,"HAPPY VALENTINE'S");

outtextxy(270,70,"DAY");

}

void children()

{

setcolor(76);

ellipse(306,310,0,360,5,10);

ellipse(306,310,0,360,10,5);

circle(306,310,5);

circle(306,310,3);

line(306,355,306,315);

setcolor(WHITE);

line(0,415,700,415);

//boy

circle(250,300,20);

rectangle(225,325,275,375);

line(243,320,243,325);

line(255,320,255,325);

line(275,375,300,375);

line(300,375,300,405);

line(250,390,285,390);

line(285,390,285,405);

rectangle(285,405,310,415);

line(235,375,235,400);

line(250,375,250,415);

line(210,400,235,400);

line(210,400,210,415);

line(275,335,300,335);

line(275,345,300,345);

line(275,355,300,355);

line(300,335,300,355);

line(300,335,305,335);

line(300,337,305,337);

line(300,339,305,339);

line(300,341,305,341);

line(300,343,305,343);

line(300,345,305,345);

line(300,347,305,347);

line(300,349,305,349);

line(300,351,305,351);

line(300,353,305,353);

line(300,355,305,355);



//girl

circle(390,285,20);

line(395,305,395,310);

line(385,305,385,310);

line(385,310,355,365);

line(395,310,425,365);

line(355,365,425,365);

line(370,365,370,405);

line(385,365,385,405);

line(390,365,390,405);

line(405,365,405,405);

rectangle(360,405,385,415);

rectangle(385,405,405,415);

line(345,325,375,325);

line(345,335,370,335);

line(345,345,364,345);

line(345,325,345,345);

line(340,325,345,325);

line(340,327,345,327);

line(340,329,345,329);

line(340,331,345,331);

line(340,333,345,333);

line(340,335,345,335);

line(340,337,345,337);

line(340,339,345,339);

line(340,341,345,341);

line(340,343,345,343);

line(340,345,345,345);

}