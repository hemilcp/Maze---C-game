#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void menuinit()
{       setbkcolor(BLUE);
	setcolor(WHITE);
	setfillstyle(1,WHITE);
	for(int i=0;i<=360;i++)
	{
		pieslice(320,240,0,i,99);
		delay(10);
	}
	for(i=0;i<=50;i++)
	{
		setcolor(LIGHTRED);
		setfillstyle(1,LIGHTRED);
		pieslice(100,240,0,360,i);
		pieslice(540,240,0,360,i);
		setcolor(BLUE);
		setfillstyle(1,BLUE);
		pieslice(320,240,0,360,100);
		delay(10);
	}
}


void rootmenu(int f)
{
	setcolor(BLUE);
	setfillstyle(1,BLUE);
	pieslice(320,240,0,360,100);
	setcolor(RED);
	setfillstyle(1,RED);
	pieslice(100,240,0,360,50);
	pieslice(540,240,0,360,50);
	setcolor(WHITE);
	if(f==0)
	{
		settextstyle(1,0,5);
		outtextxy(260,210,"START");
		settextstyle(1,0,4);
		outtextxy(90,220,"H");
		outtextxy(530,220,"E");
	}
	else if(f==1)
	{
		settextstyle(1,0,5);
		outtextxy(270,195,"HIGH");
		outtextxy(250,230,"SCORES");
		settextstyle(1,0,4);
		outtextxy(90,220,"E");
		outtextxy(530,220,"S");
	}
	else if(f==2)
	{
		settextstyle(1,0,5);
		outtextxy(280,210,"EXIT");
		settextstyle(1,0,4);
		outtextxy(90,220,"S");
		outtextxy(530,220,"H");
	}
}

int key;
void transleft();
void transright();
void transmenu()
{
	cleardevice();
	if(key==75)
		transleft();
	if(key==77)
		transright();
	delay(200);
	cleardevice();
}

void transleft()
{
	setcolor(BLUE);
	setfillstyle(1,BLUE);
	pieslice(240,240,0,360,83);
	setcolor(RED);
	setfillstyle(1,RED);
	pieslice(470,240,0,360,67);
	delay(200);
	cleardevice();
	setcolor(RED);
	setfillstyle(1,RED);
	pieslice(170,240,0,360,67);
	setcolor(BLUE);
	setfillstyle(1,BLUE);
	pieslice(400,240,0,360,83);
}

void transright()
{
	setcolor(RED);
	setfillstyle(1,RED);
	pieslice(170,240,0,360,67);
	setcolor(BLUE);
	setfillstyle(1,BLUE);
	pieslice(400,240,0,360,83);
	delay(200);
	cleardevice();
	setcolor(BLUE);
	setfillstyle(1,BLUE);
	pieslice(240,240,0,360,83);
	setcolor(RED);
	setfillstyle(1,RED);
	pieslice(470,240,0,360,67);
}

int mazemenu()
{
	int f=0;
	clrscr();
	cleardevice();
	setbkcolor(WHITE);
	rootmenu(f);
	while(key!=27)
	{
		key=getch();
		if(key==75 || key==77)
		{
			if(key==75)
			{   f--;
			    if(f<0)
				f=2;
			}
			if(key==77)
			{
			    f++;
			    if(f>2)
				f=0;
			}
		transmenu();
		rootmenu(f);
		}
		else if(key==13)
		{  break; }
	}
	return f;
}