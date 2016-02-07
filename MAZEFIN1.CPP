#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>
#include<fstream.h>
#include<dos.h>
#include<string.h>
#include<math.h>
clock_t st,rt,et;

void start()
{ int c,r=300;
  clrscr();
  cleardevice();
  setbkcolor(BLUE);
  setcolor(WHITE);
  rectangle(40,200,565,260);
  for(c=40;c<565;c+=5)
  { setfillstyle(1,WHITE);
    bar(c,200,c+5,260);
    settextstyle(1,0,5);
    setcolor(BLACK);
    outtextxy(50,200,"TIME TO PLAY THE GAME");
    sound(5*c);
    r=300+(5*sin(c));
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    pieslice(c,r,0,360,5);
    delay(25);
  }
  delay(500);
  nosound();
  getch();
  cleardevice();
}

void Lmenu(int l,int f)
{ int c=250;
  setbkcolor(LIGHTGREEN);
if(f==0)
{ setfillstyle(1,BLUE);
  bar(c,40,c+150,80);
  setfillstyle(1,LIGHTBLUE);
  bar(c,120,c+150,160);
  bar(c,200,c+150,240);
  setfillstyle(1,BROWN);
  bar(c-50,300,c+200,350);
}
else if(f==1)
{ setfillstyle(1,BLUE);
  bar(c,120,c+150,160);
  setfillstyle(1,LIGHTBLUE);
  bar(c,40,c+150,80);
  bar(c,200,c+150,240);
  setfillstyle(1,BROWN);
  bar(c-50,300,c+200,350);
}
else if(f==2)
{ setfillstyle(1,BLUE);
  bar(c,200,c+150,240);
  setfillstyle(1,LIGHTBLUE);
  bar(c,40,c+150,80);
  bar(c,120,c+150,160);
  setfillstyle(1,BROWN);
  bar(c-50,300,c+200,350);
}
else if(f==3)
{ setfillstyle(1,RED);
  bar(c-50,300,c+200,350);
  setfillstyle(1,LIGHTBLUE);
  bar(c,40,c+150,80);
  bar(c,120,c+150,160);
  bar(c,200,c+150,240);
}
if(l==1)
{ setfillstyle(4,BROWN);
  bar(c,120,c+150,160);
  bar(c,200,c+150,240);
}
else if(l==2)
{ setfillstyle(4,BROWN);
  bar(c,200,c+150,240);
}
  else if(l==3)
  {
  }
  setcolor(WHITE);
  settextstyle(1,0,3);
  outtextxy(c+33,45,"LEVEL 1");
  outtextxy(c+33,125,"LEVEL 2");
  outtextxy(c+33,205,"LEVEL 3");
  //mainmenu
  setcolor(WHITE);
  settextstyle(1,0,4);
  outtextxy(c-15,300,"MAIN MENU");
  if(l==1)
  { //lock 1
    setcolor(RED);
    setfillstyle(1,RED);
    bar(410,135,436,155);
    sector(423,155,180,360,13,5);
    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    pieslice(423,145,0,360,3);
    bar(422,147,424,157);
    setfillstyle(1,RED);
    setcolor(RED);
    sector(423,134,0,180,10,15);
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    sector(423,134,0,180,8,12);
    //lock 2
    setcolor(RED);
    setfillstyle(1,RED);
    bar(410,215,436,235);
    sector(423,235,180,360,13,5);
    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    pieslice(423,225,0,360,3);
    bar(422,227,424,237);
    setfillstyle(1,RED);
    setcolor(RED);
    sector(423,214,0,180,10,15);
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    sector(423,213,0,180,8,12);
  }
  else if(l==2)
  {  //lock 2
    setcolor(RED);
    setfillstyle(1,RED);
    bar(410,215,436,235);
    sector(423,235,180,360,13,5);
    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    pieslice(423,225,0,360,3);
    bar(422,227,424,237);
    setfillstyle(1,RED);
    setcolor(RED);
    sector(423,214,0,180,10,15);
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    sector(423,213,0,180,8,12);
  }
}

int menumove(int l)
{ int f=0;
  char key;
  if(l==3)
  { key=getch();
    while(key!=27)
    { key=getch();
    if(key==72)
    { if(f==0)
      { Lmenu(3,3);
	f=3;
      }
      else if(f==1)
      { Lmenu(3,0);
	f=0;
      }
      else if(f==2)
      { Lmenu(3,1);
	f=1;
      }
      else if(f==3)
      { Lmenu(3,2);
	f=2;
      }
    }
    else if(key==80)
    { if(f==0)
      { Lmenu(3,1);
	f=1;
      }
      else if(f==1)
      { Lmenu(3,2);
	f=2;
      }
      else if(f==2)
      { Lmenu(3,3);
	f=3;
      }
      else if(f==3)
      { Lmenu(3,0);
	f=0;
      }
    }
    else if(key==13)
    { break;
    }
  }
 }
 else if(l==2)
  { key=getch();
    while(key!=27)
    { key=getch();
    if(key==72)
    { if(f==0)
      { Lmenu(2,3);
	f=3;
      }
      else if(f==1)
      { Lmenu(2,0);
	f=0;
      }
      else if(f==3)
      { Lmenu(2,1);
	f=1;
      }
    }
    else if(key==80)
    { if(f==0)
      { Lmenu(2,1);
	f=1;
      }
      else if(f==1)
      { Lmenu(2,3);
	f=3;
      }
      else if(f==3)
      { Lmenu(2,0);
	f=0;
      }
    }
    else if(key==13)
    { break;
    }
  }
 }
 else if(l==1)
 { key=getch();
   while(key!=27)
   { key=getch();
      if(key==72)
    { if(f==0)
      { Lmenu(1,3);
	f=3;
      }
      else if(f==3)
      { Lmenu(1,0);
	f=0;
      }
    }
    else if(key==80)
    { if(f==0)
      { Lmenu(1,3);
	f=3;
      }
      else if(f==3)
      { Lmenu(1,0);
	f=0;
      }
    }
   if(key==13)
   { break; }
  }
 }
 return f;
}
int LEVEL1()
{ int c=200,r=150;
  clrscr();
  cleardevice();
  setbkcolor(BLUE);
  setcolor(WHITE);
  settextstyle(8,0,6);
  outtextxy(222,30,"MAZE");
  settextstyle(1,0,3);
  outtextxy(245,100,"LEVEL 1");
  setfillstyle(1,YELLOW);
  bar(c-5,r-5,c+185,r);
  bar(c-5,r+220,c+185,r+225);
  bar(c-5,r-5,c,r+220);
  bar(c+180,r-5,c+185,r+220);
  setcolor(YELLOW);
  rectangle(c,r,c+180,r+220);
  setfillstyle(1,GREEN);  //start
  bar(c+1,r+1,c+19,r+19);
  setfillstyle(1,RED);       //end
  bar(c+161,r+201,c+179,r+219);
  //HORIZONTAL LINES
  setcolor(YELLOW);
  line(c+20,r+20,c+120,r+20);
    line(c+160,r+20,c+180,r+20);
    line(c+20,r+40,c+100,r+40);
    line(c+120,r+40,c+160,r+40);
    line(c+40,r+60,c+60,r+60);
    line(c+80,r+60,c+100,r+60);
    line(c+120,r+60,c+160,r+60);
    line(c+20,r+80,c+80,r+80);
    line(c+100,r+80,c+140,r+80);
    line(c+160,r+80,c+180,r+80);
    line(c+20,r+100,c+60,r+100);
    line(c+80,r+100,c+100,r+100);
    line(c+140,r+100,c+160,r+100);
    line(c,r+120,c+20,r+120);
    line(c+60,r+120,c+80,r+120);
    line(c+100,r+120,c+120,r+120);
    line(c+80,r+140,c+100,r+140);
    line(c+120,r+140,c+140,r+140);
    line(c+60,r+160,c+120,r+160);
    line(c+140,r+160,c+180,r+160);
    line(c+60,r+180,c+100,r+180);
    line(c+120,r+180,c+160,r+180);
    line(c+80,r+200,c+120,r+200);
    line(c+140,r+200,c+160,r+200);
    // VERTICAL LINES
    line(c+20,r+60,c+20,r+100);
    line(c+20,r+120,c+20,r+200);
    line(c+40,r+40,c+40,r+60);
    line(c+40,r+100,c+40,r+180);
    line(c+40,r+200,c+40,r+220);
    line(c+60,r+120,c+60,r+160);
    line(c+60,r+180,c+60,r+220);
    line(c+80,r+60,c+80,r+120);
    line(c+100,r+40,c+100,r+60);
    line(c+100,r+120,c+100,r+160);
    line(c+120,r+80,c+120,r+120);
    line(c+120,r+160,c+120,r+200);
    line(c+120,r+20,c+120,r+60);
    line(c+140,r,c+140,r+20);
    line(c+140,r+100,c+140,r+160);
    line(c+140,r+200,c+140,r+220);
    line(c+160,r+60,c+160,r+80);
    line(c+160,r+100,c+160,r+140);
    line(c+160,r+180,c+160,r+200);
    cout<<"\n PRESS 'A' TO GO TO START";
  //MOVEMENT
  int c0=200,r0=150,f=0,c1,r1,RC;
  char key,rc[10];
  c=c0;
  r=r0;
  st=clock();
  setfillstyle(1,YELLOW);
  bar(200,400,380,440);
  setcolor(RED);
  outtextxy(200,400," TIME :  ");
  outtextxy(350,400,"s");
 // ball moving
  while(key!=27)
  {  ENTER:
   if(!kbhit())
   { rt=clock();
      RC=(rt-st)/CLK_TCK;
     itoa(RC, rc, 10);
     setfillstyle(1,YELLOW);
     bar(320,400,345,440);
     settextstyle(1,0,3);
     setcolor(RED);
     outtextxy(320,400,rc);
     continue;
   }
   else
   { rt=clock();
      RC=(rt-st)/CLK_TCK;
     itoa(RC, rc, 10);
     setfillstyle(1,YELLOW);
     bar(320,400,345,440);
     settextstyle(1,0,3);
     setcolor(RED);
     outtextxy(320,400,rc);}
     key=getch();
     if(key==72)       //UP
     {if((c>=c0+20 && c<c0+120) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+180) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+100) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+160) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+60) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+160) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+80) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+140) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+180) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+60) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+160) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0 && c<c0+20) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+80) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+120) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+140) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+120) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+180) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+100) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+160) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+120) && r==r0+200)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+160) && r==r0+200)
      { goto ENTER; }
      r-=20;
      f=1;
     }
     else if(key==80)  // DOWN
     { if((c>=c0+20 && c<c0+120) && r==r0)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+180) && r==r0)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+100) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+160) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+60) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+160) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+80) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+140) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+180) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+60) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+160) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0 && c<c0+20) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+80) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+120) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+140) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+120) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+180) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+100) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+160) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+120) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+160) && r==r0+180)
      { goto ENTER; }
       r+=20;
       f=2;
     }
     else if(key==77)    // RIGHT
     { if((r>=r0+60 && r<r0+100) && c==c0)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+200) && c==c0)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+60) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+180) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+200 && r<r0+220) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+160) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+220) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+120) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+60) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+160) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+120) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+200) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+60) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0 && r<r0+20) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+160) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+200 && r<r0+220) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+80) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+140) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+200) && c==c0+140)
       { goto ENTER; }
       c+=20;
       f=3;
     }
     else if(key==75)     // LEFT
     { if((r>=r0+60 && r<r0+100) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+200) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+60) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+180) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+200 && r<r0+220) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+160) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+220) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+120) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+60) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+160) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+120) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+200) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+60) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0 && r<r0+20) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+160) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+200 && r<r0+220) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+80) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+140) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+200) && c==c0+160)
       { goto ENTER; }
       c-=20;
       f=4;
     }
     else if(key==65 || key==97)
     { 	setcolor(BLACK);
	circle(c+10,r+10,8);
	c=c0;
	r=r0;
	f=6;
     }
     //BORDER
     if(c<c0)
     { c=c0;
       goto ENTER;
     }
     if(c>c0+160)
     { c=c0+160;
      goto ENTER;
    }
    if(r<r0)
    { r=r0; goto ENTER;
    }
    if(r>r0+200)
    { r=r0+200;
      goto ENTER;
    }
    //finish
    if(c==c0+160&&r==r0+200)
    { setfillstyle(1,GREEN);
      bar(c+1,r+1,c+19,r+19);
      setcolor(YELLOW);
      settextstyle(7,0,3);
      outtextxy(400,200,"YOU");
      outtextxy(400,225,"MADE");
      outtextxy(400,250,"IT !!");
      f=5; }
    setcolor(WHITE);
    circle(c+10,r+10,8);
    sound(800);
    delay(20);
    nosound();
    c1=c;
    r1=r;
    //black
if (f==1)
{       r1+=20;
	setcolor(BLACK);
	circle(c1+10,r1+10,8);
}
else if(f==2 ||f==5)
{       r1-=20;
	setcolor(BLACK);
	circle(c1+10,r1+10,8);
	if(f==5)
	{ break; }
   }
else if(f==3)
{      c1-=20;
       setcolor(BLACK);
	circle(c1+10,r1+10,8);

}
else if(f==4)
{       c1+=20;
	setcolor(BLACK);
	circle(c1+10,r1+10,8);
}
else if(f==6)
{ goto ENTER; }
}
et=clock();
sound(600);
delay(400);
sound(800);
delay(400);
sound(1000);
delay(400);
nosound();
int ck;
ck=(et-st)/CLK_TCK;
itoa(ck, rc, 10);
settextstyle(1,0,3);
setcolor(BLUE);
outtextxy(200,400," TIME :  ");
outtextxy(320,400,rc);
outtextxy(350,400,"s");
cout<<"\n PRESS ESC TO END";
while(key!=27)
{ key=getch();
}
return ck;
}

int LEVEL2()
{ int c=200,r=150;
  clrscr();
  cleardevice();
  setbkcolor(BLUE);
  settextstyle(8,0,6);
  setcolor(WHITE);
  outtextxy(230,30,"MAZE");
  settextstyle(1,0,3);
  outtextxy(250,100,"LEVEL 2");
  cout<<" PRESS 'A' TO GO TO STARTING POSITION";
  setcolor(YELLOW);
  rectangle(c,r,c+200,r+200);
  setfillstyle(1,YELLOW);
  bar(c-5,r-5,c+205,r);
  bar(c-5,r+200,c+205,r+205);
  bar(c-5,r,c,r+200);
  bar(c+200,r,c+205,r+200);
  setfillstyle(1,GREEN);//Start
  bar(c+1,r+1,c+9,r+9);
  setfillstyle(1,RED); //FINISH
  bar(c+191,r+191,c+199,r+199);
  //HORIZONTAL LINES
  setcolor(YELLOW);
  line(c+0,r+10,c+110,r+10);
  line(c+120,r+10,c+190,r+10);
  line(c+10,r+20,c+100,r+20);
  line(c+130,r+20,c+170,r+20);
  line(c+20,r+30,c+60,r+30);
  line(c+70,r+30,c+100,r+30);
  line(c+130,r+30,c+160,r+30);
  line(c+30,r+40,c+60,r+40);
  line(c+80,r+40,c+110,r+40);
  line(c+120,r+40,c+170,r+40);
  line(c+40,r+50,c+70,r+50);
  line(c+80,r+50,c+170,r+50);
  line(c+50,r+60,c+170,r+60);
  line(c+10,r+70,c+30,r+70);
  line(c+40,r+70,c+160,r+70);
  line(c+20,r+80,c+40,r+80);
  line(c+50,r+80,c+180,r+80);
  line(c+30,r+90,c+50,r+90);
  line(c+60,r+90,c+150,r+90);
  line(c+160,r+90,c+180,r+90);
  line(c+40,r+100,c+60,r+100);
  line(c+80,r+100,c+180,r+100);
  line(c+40,r+110,c+60,r+110);
  line(c+70,r+110,c+120,r+110);
  line(c+40,r+120,c+70,r+120);
  line(c+30,r+130,c+80,r+130);
  line(c+30,r+140,c+70,r+140);
  line(c+80,r+140,c+110,r+140);
  line(c+20,r+150,c+60,r+150);
  line(c+80,r+150,c+120,r+150);
  line(c+180,r+150,c+200,r+150);
  line(c+10,r+160,c+40,r+160);
  line(c+60,r+160,c+130,r+160);
  line(c+20,r+170,c+50,r+170);
  line(c+70,r+170,c+150,r+170);
  line(c+10,r+180,c+70,r+180);
  line(c+80,r+180,c+110,r+180);
  line(c+0,r+190,c+80,r+190);
  line(c+90,r+190,c+120,r+190);
  line(c+160,r+190,c+190,r+190);

  //VERTICAL LINES
  line(c+10,r+20,c+10,r+180);
  line(c+20,r+30,c+20,r+60);
  line(c+20,r+80,c+20,r+150);
  line(c+30,r+50,c+30,r+70);
  line(c+30,r+90,c+30,r+120);
  line(c+40,r+50,c+40,r+80);
  line(c+40,r+100,c+40,r+120);
  line(c+50,r+80,c+50,r+90);
  line(c+50,r+160,c+50,r+180);
  line(c+60,r+30,c+60,r+40);
  line(c+60,r+90,c+60,r+100);
  line(c+60,r+150,c+60,r+170);
  line(c+70,r+30,c+70,r+40);
  line(c+70,r+100,c+70,r+120);
  line(c+70,r+140,c+70,r+150);
  line(c+70,r+170,c+70,r+180);
  line(c+80,r+110,c+80,r+140);
  line(c+80,r+180,c+80,r+190);
  line(c+90,r+120,c+90,r+140);
  line(c+100,r+20,c+100,r+30);
  line(c+100,r+110,c+100,r+130);
  line(c+110,r+10,c+110,r+40);
  line(c+110,r+120,c+110,r+140);
  line(c+120,r+10,c+120,r+40);
  line(c+120,r+110,c+120,r+150);
  line(c+120,r+170,c+120,r+190);
  line(c+130,r+20,c+130,r+30);
  line(c+130,r+100,c+130,r+160);
  line(c+130,r+180,c+130,r+200);
  line(c+140,r+110,c+140,r+190);
  line(c+150,r+100,c+150,r+160);
  line(c+150,r+170,c+150,r+200);
  line(c+160,r+110,c+160,r+190);
  line(c+170,r+20,c+170,r+40);
  line(c+170,r+50,c+170,r+80);
  line(c+170,r+100,c+170,r+180);
  line(c+180,r+10,c+180,r+70);
  line(c+180,r+80,c+180,r+180);
  line(c+190,r+10,c+190,r+140);
  line(c+190,r+160,c+190,r+200);

  int c0=200,r0=150,f=0,c1,r1,RC;
  char key,rc[10];
  c=c0;
  r=r0;
  setfillstyle(1,YELLOW);
  bar(220,380,380,420);
  setcolor(RED);
  outtextxy(230,380," TIME :  ");
  outtextxy(355,380,"s");
  st=clock();
    // ball moving
  while(key!=27)
  { ENTER:
    if(!kbhit())
    {  rt=clock();
       RC=(rt-st)/CLK_TCK;
       itoa(RC, rc, 10);
       setfillstyle(1,YELLOW);
       bar(320,380,345,420);
       settextstyle(1,0,3);
       setcolor(RED);
       outtextxy(320,380,rc);
       continue;
   }
   else
   {   rt=clock();
       RC=(rt-st)/CLK_TCK;
       itoa(RC, rc, 10);
       setfillstyle(1,YELLOW);
       bar(320,380,345,420);
       settextstyle(1,0,3);
       setcolor(RED);
       outtextxy(320,380,rc);
   }

   key=getch();
   if(key==72)       //UP
   { if((c>=c0+0 && c<c0+110) && r==r0+10)
     { goto ENTER; }
     else if((c>=c0+120 && c<c0+190) && r==r0+10)
     { goto ENTER; }
     else if((c>=c0+10 && c<c0+100) && r==r0+20)
     { goto ENTER; }
     else if((c>=c0+130 && c<c0+170) && r==r0+20)
     { goto ENTER; }
     else if((c>=c0+20 && c<c0+60) && r==r0+30)
     { goto ENTER; }
     else if((c>=c0+70 && c<c0+100) && r==r0+30)
     { goto ENTER; }
     else if((c>=c0+130 && c<c0+160) && r==r0+30)
     { goto ENTER; }
     else if((c>=c0+30 && c<c0+60) && r==r0+40)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+110) && r==r0+40)
     { goto ENTER; }
     else if((c>=c0+120 && c<c0+170) && r==r0+40)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+70) && r==r0+50)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+170) && r==r0+50)
     { goto ENTER; }
     else if((c>=c0+50 && c<c0+170) && r==r0+60)
     { goto ENTER; }
     else if((c>=c0+10 && c<c0+30) && r==r0+70)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+160) && r==r0+70)
     { goto ENTER; }
     else if((c>=c0+20 && c<c0+40) && r==r0+80)
     { goto ENTER; }
     else if((c>=c0+50 && c<c0+180) && r==r0+80)
     { goto ENTER; }
     else if((c>=c0+30 && c<c0+50) && r==r0+90)
     { goto ENTER; }
     else if((c>=c0+60 && c<c0+150) && r==r0+90)
     { goto ENTER; }
     else if((c>=c0+160 && c<c0+180) && r==r0+90)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+60) && r==r0+100)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+180) && r==r0+100)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+60) && r==r0+110)
     { goto ENTER; }
     else if((c>=c0+70 && c<c0+120) && r==r0+110)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+70) && r==r0+120)
     { goto ENTER; }
     else if((c>=c0+30 && c<c0+80) && r==r0+130)
     { goto ENTER; }
     else if((c>=c0+30 && c<c0+70) && r==r0+140)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+110) && r==r0+140)
     { goto ENTER; }
     else if((c>=c0+20 && c<c0+60) && r==r0+150)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+120) && r==r0+150)
     { goto ENTER; }
     else if((c>=c0+180 && c<c0+200) && r==r0+150)
     { goto ENTER; }
     else if((c>=c0+10 && c<c0+40) && r==r0+160)
     { goto ENTER; }
     else if((c>=c0+60 && c<c0+130) && r==r0+160)
     { goto ENTER; }
     else if((c>=c0+20 && c<c0+50) && r==r0+170)
     { goto ENTER; }
     else if((c>=c0+70 && c<c0+150) && r==r0+170)
     { goto ENTER; }
     else if((c>=c0+10 && c<c0+70) && r==r0+180)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+110) && r==r0+180)
     { goto ENTER; }
     else if((c>=c0+0 && c<c0+80) && r==r0+190)
     { goto ENTER; }
     else if((c>=c0+90 && c<c0+120) && r==r0+190)
     { goto ENTER; }
     else if((c>=c0+160 && c<c0+190) && r==r0+190)
     { goto ENTER; }
      r-=10;
      f=1;
     }
     else if(key==80)     //DOWN
     { if((c>=c0+0 && c<c0+110) && r==r0+0)
      { goto ENTER; }
     else if((c>=c0+120 && c<c0+190) && r==r0+0)
     { goto ENTER; }
     else if((c>=c0+10 && c<c0+100) && r==r0+10)
     { goto ENTER; }
     else if((c>=c0+130 && c<c0+170) && r==r0+10)
     { goto ENTER; }
     else if((c>=c0+20 && c<c0+60) && r==r0+20)
     { goto ENTER; }
     else if((c>=c0+70 && c<c0+100) && r==r0+20)
     { goto ENTER; }
     else if((c>=c0+130 && c<c0+160) && r==r0+20)
     { goto ENTER; }
     else if((c>=c0+30 && c<c0+60) && r==r0+30)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+110) && r==r0+30)
     { goto ENTER; }
     else if((c>=c0+120 && c<c0+170) && r==r0+30)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+70) && r==r0+40)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+170) && r==r0+40)
     { goto ENTER; }
     else if((c>=c0+50 && c<c0+170) && r==r0+50)
     { goto ENTER; }
     else if((c>=c0+10 && c<c0+30) && r==r0+60)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+160) && r==r0+60)
     { goto ENTER; }
     else if((c>=c0+20 && c<c0+40) && r==r0+70)
     { goto ENTER; }
     else if((c>=c0+50 && c<c0+180) && r==r0+70)
     { goto ENTER; }
     else if((c>=c0+30 && c<c0+50) && r==r0+80)
     { goto ENTER; }
     else if((c>=c0+60 && c<c0+150) && r==r0+80)
     { goto ENTER; }
     else if((c>=c0+160 && c<c0+180) && r==r0+80)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+60) && r==r0+90)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+180) && r==r0+90)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+60) && r==r0+100)
     { goto ENTER; }
     else if((c>=c0+70 && c<c0+120) && r==r0+100)
     { goto ENTER; }
     else if((c>=c0+40 && c<c0+70) && r==r0+110)
     { goto ENTER; }
     else if((c>=c0+30 && c<c0+80) && r==r0+120)
     { goto ENTER; }
     else if((c>=c0+30 && c<c0+70) && r==r0+130)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+110) && r==r0+130)
     { goto ENTER; }
     else if((c>=c0+20 && c<c0+60) && r==r0+140)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+120) && r==r0+140)
     { goto ENTER; }
     else if((c>=c0+180 && c<c0+200) && r==r0+140)
     { goto ENTER; }
     else if((c>=c0+10 && c<c0+40) && r==r0+150)
     { goto ENTER; }
     else if((c>=c0+60 && c<c0+130) && r==r0+150)
     { goto ENTER; }
     else if((c>=c0+20 && c<c0+50) && r==r0+160)
     { goto ENTER; }
     else if((c>=c0+70 && c<c0+150) && r==r0+160)
     { goto ENTER; }
     else if((c>=c0+10 && c<c0+70) && r==r0+170)
     { goto ENTER; }
     else if((c>=c0+80 && c<c0+110) && r==r0+170)
     { goto ENTER; }
     else if((c>=c0+0 && c<c0+80) && r==r0+180)
     { goto ENTER; }
     else if((c>=c0+90 && c<c0+120) && r==r0+180)
     { goto ENTER; }
     else if((c>=c0+160 && c<c0+190) && r==r0+180)
     { goto ENTER; }
       r+=10;
       f=2;
     }
     else if(key==77)    // RIGHT
     { if((r>=r0+20 && r<r0+180) && c==c0+0)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+60) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+150) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+70) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+120) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+80) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+120) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+90) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+180) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+40) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+170) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+40) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+120) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+140 && r<r0+150) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+180) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+140) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+190) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+140) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+30) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+130) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+40) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+140) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+40) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+150) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+190) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+30) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+160) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+200) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+190) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+160) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+200) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+190) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+40) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+80) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+180) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+70) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+180) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+140) && c==c0+180)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+200) && c==c0+180)
       { goto ENTER; }
       c+=10;
       f=3;
     }
     else if(key==75)     // LEFT
     { if((r>=r0+20 && r<r0+180) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+60) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+150) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+70) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+120) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+80) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+120) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+90) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+180) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+40) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+170) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+40) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+120) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+140 && r<r0+150) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+180) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+140) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+190) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+140) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+30) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+130) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+40) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+140) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+40) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+150) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+190) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+30) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+160) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+200) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+190) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+160) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+200) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+190) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+40) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+80) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+180) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+70) && c==c0+180)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+180) && c==c0+180)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+140) && c==c0+190)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+200) && c==c0+190)
       { goto ENTER; }
       c-=10;
       f=4;
     }
     else if(key==65 || key==97)
     { 	setcolor(BLACK);
	circle(c+5,r+5,4);
	c=c0;
	r=r0;
	f=6;
     }
    //BORDER
    if(c<c0)
    {  c=c0;
       goto ENTER;
    }
    if(c>c0+190)
    { c=c0+190;
      goto ENTER;
    }
    if(r<r0)
    { r=r0; goto ENTER;
    }
    if(r>r0+190)
    { r=r0+190;
      goto ENTER;
    }
    //finish
    if(c==c0+190 && r==r0+190)
    { setfillstyle(1,GREEN);
      bar(c+1,r+1,c+9,r+9);
      setcolor(YELLOW);
      settextstyle(7,0,3);
      outtextxy(450,200,"YOU");
      outtextxy(450,225,"MADE");
      outtextxy(450,250,"IT !!");
      f=5;
    }
    setcolor(WHITE);
    circle(c+5,r+5,4);
    sound(800);
    delay(20);
    nosound();
    c1=c;
    r1=r;
    //black
  if (f==1)
  {     r1+=10;
	setcolor(BLACK);
	circle(c1+5,r1+5,4);
  }
  else if(f==2 || f==5)
  {     r1-=10;
	setcolor(BLACK);
	circle(c1+5,r1+5,4);
	 if(f==5)
       { break; }
  }
  else if(f==3)
  {    c1-=10;
       setcolor(BLACK);
       circle(c1+5,r1+5,4);
  }
  else if(f==4)
  {     c1+=10;
	setcolor(BLACK);
	circle(c1+5,r1+5,4);
  }
  else if(f==6)
 { goto ENTER; }
 }
et=clock();
sound(600);
delay(400);
sound(800);
delay(400);
sound(1000);
delay(400);
nosound();
int ck;
ck=(et-st)/CLK_TCK;
itoa(ck, rc, 10);
settextstyle(1,0,3);
setcolor(BLUE);
outtextxy(230,380," TIME :  ");
outtextxy(320,380,rc);
outtextxy(355,380,"s");
cout<<"\n PRESS ESC TO END";
key=getch();
while(key!=27)
{ key=getch();
}
return ck;
}

int LEVEL3()
{ int c=220,r=150;
  clrscr();
  cleardevice();
  setbkcolor(BLUE);
  setcolor(WHITE);
  settextstyle(8,0,6);
  outtextxy(250,30,"MAZE");
  settextstyle(1,0,3);
  outtextxy(270,100,"LEVEL 3");
  setfillstyle(1,YELLOW);
  bar(c-5,r-5,c+195,r);
  bar(c-5,r+200,c+195,r+205);
  bar(c-5,r-5,c,r+200);
  bar(c+190,r-5,c+195,r+200);
  setcolor(YELLOW);
  rectangle(c,r,c+190,r+200);
  setfillstyle(1,GREEN);  //start
  bar(c+1,r+1,c+9,r+9);
  setfillstyle(1,RED);       //end
  bar(c+141,r+191,c+149,r+199);
  //HORIZONTAL LINES
  setcolor(YELLOW);
  line(c+30,r+10,c+60,r+10);
  line(c+80,r+10,c+100,r+10);
  line(c+120,r+10,c+130,r+10);
  line(c+140,r+10,c+150,r+10);
  line(c+180,r+10,c+190,r+10);
  line(c+20,r+20,c+30,r+20);
  line(c+50,r+20,c+60,r+20);
  line(c+70,r+20,c+80,r+20);
  line(c+100,r+20,c+110,r+20);
  line(c+130,r+20,c+170,r+20);
  line(c,r+30,c+20,r+30);
  line(c+40,r+30,c+50,r+30);
  line(c+80,r+30,c+110,r+30);
  line(c+120,r+30,c+140,r+30);
  line(c+160,r+30,c+180,r+30);
  line(c+30,r+40,c+40,r+40);
  line(c+60,r+40,c+70,r+40);
  line(c+80,r+40,c+100,r+40);
  line(c+120,r+40,c+130,r+40);
  line(c+150,r+40,c+160,r+40);
  line(c+10,r+50,c+30,r+50);
  line(c+40,r+50,c+50,r+50);
  line(c+60,r+50,c+90,r+50);
  line(c+130,r+50,c+140,r+50);
  line(c+150,r+50,c+170,r+50);
  line(c+0,r+60,c+20,r+60);
  line(c+50,r+60,c+70,r+60);
  line(c+80,r+60,c+110,r+60);
  line(c+30,r+60,c+40,r+60);
  line(c+120,r+60,c+130,r+60);
  line(c+20,r+70,c+30,r+70);
  line(c+40,r+70,c+60,r+70);
  line(c+70,r+70,c+80,r+70);
  line(c+110,r+70,c+140,r+70);
  line(c+160,r+70,c+170,r+70);
  line(c+60,r+80,c+70,r+80);
  line(c+80,r+80,c+90,r+80);
  line(c+100,r+80,c+130,r+80);
  line(c+150,r+80,c+160,r+80);
  line(c+170,r+80,c+190,r+80);
  line(c+20,r+90,c+30,r+90);
  line(c+40,r+90,c+80,r+90);
  line(c+90,r+90,c+100,r+90);
  line(c+110,r+90,c+120,r+90);
  line(c+140,r+90,c+150,r+90);
  line(c+160,r+90,c+170,r+90);
  line(c+10,r+100,c+60,r+100);
  line(c+70,r+100,c+90,r+100);
  line(c+100,r+100,c+120,r+100);
  line(c+140,r+100,c+150,r+100);
  line(c+180,r+100,c+190,r+100);
  line(c+50,r+110,c+100,r+110);
  line(c+110,r+110,c+130,r+110);
  line(c+150,r+110,c+160,r+110);
  line(c+170,r+110,c+180,r+110);
  line(c+20,r+120,c+30,r+120);
  line(c+40,r+120,c+70,r+120);
  line(c+90,r+120,c+110,r+120);
  line(c+130,r+120,c+170,r+120);
  line(c+180,r+120,c+190,r+120);
  line(c+10,r+130,c+20,r+130);
  line(c+50,r+130,c+60,r+130);
  line(c+70,r+130,c+80,r+130);
  line(c+100,r+130,c+120,r+130);
  line(c+140,r+130,c+180,r+130);
  line(c+10,r+140,c+20,r+140);
  line(c+30,r+140,c+50,r+140);
  line(c+60,r+140,c+70,r+140);
  line(c+80,r+140,c+100,r+140);
  line(c+150,r+140,c+160,r+140);
  line(c+0,r+150,c+20,r+150);
  line(c+40,r+150,c+80,r+150);
  line(c+100,r+150,c+120,r+150);
  line(c+130,r+150,c+170,r+150);
  line(c+30,r+160,c+40,r+160);
  line(c+50,r+160,c+60,r+160);
  line(c+80,r+160,c+110,r+160);
  line(c+140,r+160,c+160,r+160);
  line(c+170,r+160,c+180,r+160);
  line(c+30,r+170,c+50,r+170);
  line(c+70,r+170,c+80,r+170);
  line(c+90,r+170,c+100,r+170);
  line(c+130,r+170,c+140,r+170);
  line(c+0,r+180,c+10,r+180);
  line(c+20,r+180,c+30,r+180);
  line(c+50,r+180,c+60,r+180);
  line(c+80,r+180,c+100,r+180);
  line(c+110,r+180,c+160,r+180);
  line(c+180,r+180,c+190,r+180);
  line(c+20,r+190,c+90,r+190);
  line(c+100,r+190,c+130,r+190);
  line(c+160,r+190,c+180,r+190);
    // VERTICAL LINES
  line(c+10,r+10,c+10,r+30);
  line(c+10,r+40,c+10,r+50);
  line(c+10,r+70,c+10,r+140);
  line(c+10,r+160,c+10,r+180);
  line(c+10,r+190,c+10,r+200);
  line(c+20,r+0,c+20,r+20);
  line(c+20,r+30,c+20,r+40);
  line(c+20,r+60,c+20,r+80);
  line(c+20,r+110,c+20,r+120);
  line(c+20,r+150,c+20,r+180);
  line(c+30,r+10,c+30,r+60);
  line(c+30,r+70,c+30,r+90);
  line(c+30,r+100,c+30,r+150);
  line(c+40,r+20,c+40,r+30);
  line(c+40,r+60,c+40,r+80);
  line(c+40,r+100,c+40,r+110);
  line(c+40,r+120,c+40,r+130);
  line(c+40,r+150,c+40,r+180);
  line(c+50,r+10,c+50,r+20);
  line(c+50,r+30,c+50,r+60);
  line(c+50,r+80,c+50,r+90);
  line(c+50,r+130,c+50,r+150);
  line(c+50,r+180,c+50,r+190);
  line(c+60,r+20,c+60,r+30);
  line(c+60,r+70,c+60,r+80);
  line(c+60,r+90,c+60,r+100);
  line(c+60,r+120,c+60,r+130);
  line(c+60,r+160,c+60,r+180);
  line(c+70,r+0,c+70,r+50);
  line(c+70,r+60,c+70,r+70);
  line(c+70,r+100,c+70,r+110);
  line(c+70,r+130,c+70,r+140);
  line(c+70,r+150,c+70,r+180);
  line(c+80,r+10,c+80,r+20);
  line(c+80,r+50,c+80,r+60);
  line(c+80,r+70,c+80,r+90);
  line(c+80,r+110,c+80,r+130);
  line(c+80,r+140,c+80,r+150);
  line(c+80,r+170,c+80,r+190);
  line(c+90,r+20,c+90,r+30);
  line(c+90,r+60,c+90,r+70);
  line(c+90,r+90,c+90,r+100);
  line(c+90,r+120,c+90,r+140);
  line(c+90,r+150,c+90,r+170);
  line(c+100,r+10,c+100,r+20);
  line(c+100,r+40,c+100,r+50);
  line(c+100,r+70,c+100,r+90);
  line(c+100,r+100,c+100,r+110);
  line(c+100,r+140,c+100,r+150);
  line(c+110,r+10,c+110,r+20);
  line(c+110,r+30,c+110,r+70);
  line(c+110,r+110,c+110,r+120);
  line(c+110,r+130,c+110,r+140);
  line(c+110,r+160,c+110,r+190);
  line(c+120,r+20,c+120,r+60);
  line(c+120,r+90,c+120,r+100);
  line(c+120,r+120,c+120,r+170);
  line(c+130,r+10,c+130,r+20);
  line(c+130,r+80,c+130,r+170);
  line(c+140,r+0,c+140,r+10);
  line(c+140,r+30,c+140,r+80);
  line(c+140,r+90,c+140,r+100);
  line(c+140,r+110,c+140,r+120);
  line(c+140,r+130,c+140,r+140);    //
  line(c+140,r+160,c+140,r+200);
  line(c+150,r+20,c+150,r+40);
  line(c+150,r+50,c+150,r+90);
  line(c+150,r+100,c+150,r+110);
  line(c+150,r+170,c+150,r+180);
  line(c+160,r+0,c+160,r+20);
  line(c+160,r+60,c+160,r+70);
  line(c+160,r+30,c+160,r+40);
  line(c+160,r+80,c+160,r+90);
  line(c+160,r+100,c+160,r+110);
  line(c+160,r+130,c+160,r+140);
  line(c+160,r+160,c+160,r+170);
  line(c+170,r+0,c+170,r+10);
  line(c+170,r+40,c+170,r+60);
  line(c+170,r+70,c+170,r+80);
  line(c+170,r+90,c+170,r+120);
  line(c+170,r+140,c+170,r+150);
  line(c+170,r+160,c+170,r+190);
  line(c+180,r+20,c+180,r+70);
  line(c+180,r+90,c+180,r+100);
  line(c+180,r+120,c+180,r+160);
  line(c+180,r+170,c+180,r+180);
  line(c+150,r+190,c+150,r+200);
  cout<<"\n PRESS 'A' TO GO TO START";

  int c0=220,r0=150,f=0,c1,r1,RC;
  char key,rc[10];
  c=c0;
  r=r0;
  setfillstyle(1,YELLOW);
  bar(240,380,400,420);
  setcolor(RED);
  outtextxy(250,380," TIME :  ");
  outtextxy(370,380,"s");
  st=clock();
    // ball moving
  while(key!=27)
  {ENTER:
   if(!kbhit())
   {  rt=clock();
      RC=(rt-st)/CLK_TCK;
     itoa(RC, rc, 10);
     setfillstyle(1,YELLOW);
     bar(340,380,365,420);
     settextstyle(1,0,3);
     setcolor(RED);
     outtextxy(340,380,rc);
     continue;
   }
   else
   { rt=clock();
      RC=(rt-st)/CLK_TCK;
     itoa(RC, rc, 10);
     setfillstyle(1,YELLOW);
     bar(340,380,365,420);
     settextstyle(1,0,3);
     setcolor(RED);
     outtextxy(340,380,rc);
   }
     key=getch();
     if(key==72)       //UP
     {if((c>=c0+30 && c<c0+60) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+130) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+150) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+180 && c<c0+190) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+60) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+80) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+110) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+170) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+0 && c<c0+20) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+50) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+110) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+140) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+180) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+40) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+70) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+130) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+160) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+10 && c<c0+30) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+50) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+90) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+140) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+170) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+0 && c<c0+20) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+40) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+70) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+110) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+130) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+60) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+80) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+110 && c<c0+140) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+170) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+70) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+90) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+130) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+160) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+170 && c<c0+190) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+80) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+90 && c<c0+100) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+110 && c<c0+120) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+150) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+170) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+10 && c<c0+60) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+90) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+120) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+150) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+180 && c<c0+190) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+100) && r==r0+110)
      { goto ENTER; }
      else if((c>=c0+110 && c<c0+130) && r==r0+110)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+160) && r==r0+110)
      { goto ENTER; }
      else if((c>=c0+170 && c<c0+180) && r==r0+110)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+70) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+90 && c<c0+110) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+170) && r==r0+120)
      { goto ENTER; }
      if((c>=c0+180 && c<c0+190) && r==r0+120)
      { goto ENTER; }
      if((c>=c0+10 && c<c0+20) && r==r0+130)
      { goto ENTER; }
      if((c>=c0+50 && c<c0+60) && r==r0+130)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+80) && r==r0+130)
      { goto ENTER; }
     if((c>=c0+100 && c<c0+120) && r==r0+130)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+180) && r==r0+130)
      { goto ENTER; }
      else if((c>=c0+10 && c<c0+20) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+50) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+70) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+160) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+0 && c<c0+20) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+80) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+120) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+170) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+40) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+60) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+110) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+160) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+170 && c<c0+180) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+50) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+80) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+90 && c<c0+100) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+140) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+0 && c<c0+10) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+60) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+110 && c<c0+160) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+180 && c<c0+190) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+90) && r==r0+190)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+130) && r==r0+190)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+180) && r==r0+190)
      { goto ENTER; }
      r-=10;
      f=1;
     }
     else if(key==80)  // DOWN
     {if((c>=c0+30 && c<c0+60) && r==r0+0)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+0)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+130) && r==r0+0)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+150) && r==r0+0)
      { goto ENTER; }
      else if((c>=c0+180 && c<c0+190) && r==r0+0)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+60) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+80) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+110) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+170) && r==r0+10)
      { goto ENTER; }
      else if((c>=c0+0 && c<c0+20) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+50) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+110) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+140) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+180) && r==r0+20)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+40) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+70) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+130) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+160) && r==r0+30)
      { goto ENTER; }
      else if((c>=c0+10 && c<c0+30) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+50) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+90) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+140) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+170) && r==r0+40)
      { goto ENTER; }
      else if((c>=c0+0 && c<c0+20) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+70) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+110) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+120 && c<c0+130) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+40) && r==r0+50)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+60) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+80) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+110 && c<c0+140) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+170) && r==r0+60)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+70) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+90) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+130) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+160) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+170 && c<c0+190) && r==r0+70)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+80) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+90 && c<c0+100) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+110 && c<c0+120) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+150) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+170) && r==r0+80)
      { goto ENTER; }
      else if((c>=c0+10 && c<c0+60) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+90) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+120) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+150) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+180 && c<c0+190) && r==r0+90)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+100) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+110 && c<c0+130) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+160) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+170 && c<c0+180) && r==r0+100)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+110)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+70) && r==r0+110)
      { goto ENTER; }
      else if((c>=c0+90 && c<c0+110) && r==r0+110)
      { goto ENTER; }
      if((c>=c0+130 && c<c0+170) && r==r0+110)
      { goto ENTER; }
      if((c>=c0+180 && c<c0+190) && r==r0+110)
      { goto ENTER; }
      if((c>=c0+10 && c<c0+20) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+60) && r==r0+120)
      { goto ENTER; }
      if((c>=c0+70 && c<c0+80) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+120) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+180) && r==r0+120)
      { goto ENTER; }
      else if((c>=c0+10 && c<c0+20) && r==r0+130)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+50) && r==r0+130)
      { goto ENTER; }
      else if((c>=c0+60 && c<c0+70) && r==r0+130)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+130)
      { goto ENTER; }
      else if((c>=c0+150 && c<c0+160) && r==r0+130)
      { goto ENTER; }
      else if((c>=c0+0 && c<c0+20) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+40 && c<c0+80) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+120) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+170) && r==r0+140)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+40) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+60) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+110) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+140 && c<c0+160) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+170 && c<c0+180) && r==r0+150)
      { goto ENTER; }
      else if((c>=c0+30 && c<c0+50) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+70 && c<c0+80) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+90 && c<c0+100) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+130 && c<c0+140) && r==r0+160)
      { goto ENTER; }
      else if((c>=c0+0 && c<c0+10) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+30) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+50 && c<c0+60) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+80 && c<c0+100) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+110 && c<c0+160) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+180 && c<c0+190) && r==r0+170)
      { goto ENTER; }
      else if((c>=c0+20 && c<c0+90) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+100 && c<c0+130) && r==r0+180)
      { goto ENTER; }
      else if((c>=c0+160 && c<c0+180) && r==r0+180)
      { goto ENTER; }
       r+=10;
       f=2;
     }
     else if(key==77)    // RIGHT
     { if((r>=r0+10 && r<r0+30) && c==c0+0)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+50) && c==c0+0)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+140) && c==c0+0)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+180) && c==c0+0)
       { goto ENTER; }
       else if((r>=r0+190 && r<r0+200) && c==c0+0)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+20) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+40) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+80) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+120) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+180) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+60) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+90) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+150) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+30) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+80) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+130) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+180) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+60) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+90) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+150) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+190) && c==c0+40)
       { goto ENTER; }
       if((r>=r0+20 && r<r0+30) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+80) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+130) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+180) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+50) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+70) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+140) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+180) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+60) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+90) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+130) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+140 && r<r0+150) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+190) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+30) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+70) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+140) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+170) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+50) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+90) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+140 && r<r0+150) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+100)
       { goto ENTER; }
       if((r>=r0+30 && r<r0+70) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+120) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+140) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+190) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+60) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+170) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+170) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+10) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+80) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+120) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+140) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+200) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+40) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+90) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+180) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+190 && r<r0+200) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+20) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+40) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+70) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+90) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+140) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+170) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+10) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+60) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+80) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+120) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+140 && r<r0+150) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+190) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+70) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+160) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+180) && c==c0+170)
       { goto ENTER; }
       c+=10;
       f=3;
     }
     else if(key==75)     // LEFT
     { if((r>=r0+10 && r<r0+30) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+50) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+140) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+180) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+190 && r<r0+200) && c==c0+10)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+20) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+40) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+80) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+120) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+180) && c==c0+20)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+60) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+90) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+150) && c==c0+30)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+30) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+80) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+130) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+180) && c==c0+40)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+60) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+90) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+150) && c==c0+50)
       { goto ENTER; }
       else if((r>=r0+180 && r<r0+190) && c==c0+50)
       { goto ENTER; }
       if((r>=r0+20 && r<r0+30) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+80) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+130) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+180) && c==c0+60)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+50) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+70) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+140) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+180) && c==c0+70)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+60) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+90) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+130) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+140 && r<r0+150) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+190) && c==c0+80)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+30) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+70) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+140) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+150 && r<r0+170) && c==c0+90)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+50) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+90) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+140 && r<r0+150) && c==c0+100)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+110)
       { goto ENTER; }
       if((r>=r0+30 && r<r0+70) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+120) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+140) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+190) && c==c0+110)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+60) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+170) && c==c0+120)
       { goto ENTER; }
       else if((r>=r0+10 && r<r0+20) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+170) && c==c0+130)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+10) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+80) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+110 && r<r0+120) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+140) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+200) && c==c0+140)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+40) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+50 && r<r0+90) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+180) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+190 && r<r0+200) && c==c0+150)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+20) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+30 && r<r0+40) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+60 && r<r0+70) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+80 && r<r0+90) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+100 && r<r0+110) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+130 && r<r0+140) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+170) && c==c0+160)
       { goto ENTER; }
       else if((r>=r0+0 && r<r0+10) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+40 && r<r0+60) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+70 && r<r0+80) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+120) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+140 && r<r0+150) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+160 && r<r0+190) && c==c0+170)
       { goto ENTER; }
       else if((r>=r0+20 && r<r0+70) && c==c0+180)
       { goto ENTER; }
       else if((r>=r0+90 && r<r0+100) && c==c0+180)
       { goto ENTER; }
       else if((r>=r0+120 && r<r0+160) && c==c0+180)
       { goto ENTER; }
       else if((r>=r0+170 && r<r0+180) && c==c0+180)
       { goto ENTER; }
       c-=10;
       f=4;
     }
     else if(key==65 || key==97)
     { 	setcolor(BLACK);
	circle(c+5,r+5,4);
	c=c0;
	r=r0;
	f=6; }
     //BORDER
     if(c<c0)
     { c=c0;
       goto ENTER;
     }
     if(c>c0+180)
     { c=c0+180;
      goto ENTER;
    }
    if(r<r0)
    { r=r0; goto ENTER;
    }
    if(r>r0+190)
    { r=r0+190;
      goto ENTER;
    }
    //finish
    if(c==c0+140&&r==r0+190)
    { setfillstyle(1,GREEN);
      bar(c+1,r+1,c+9,r+9);
      setcolor(YELLOW);
      settextstyle(7,0,3);
      outtextxy(450,200,"YOU");
      outtextxy(450,225,"MADE");
      outtextxy(450,250,"IT !!");
      f=5; }
    setcolor(WHITE);
    circle(c+5,r+5,4);
    sound(800);
    delay(20);
    nosound();
    c1=c;
    r1=r;
    //black
if (f==1)
{       r1+=10;
	setcolor(BLACK);
	circle(c1+5,r1+5,4);
}
else if(f==2 ||f==5)
{       r1-=10;
	setcolor(BLACK);
	circle(c1+5,r1+5,4);
	if(f==5)
	{
	break; }
   }
else if(f==3)
{      c1-=10;
       setcolor(BLACK);
	circle(c1+5,r1+5,4);

}
else if(f==4)
{       c1+=10;
	setcolor(BLACK);
	circle(c1+5,r1+5,4);
}
else if(f==6)
{ goto ENTER; }
}
int ck;
et=clock();
sound(600);
delay(400);
sound(800);
delay(400);
sound(1000);
delay(400);
nosound();
ck=(et-st)/CLK_TCK;
itoa(ck, rc, 10);
settextstyle(1,0,3);
setcolor(BLUE);
outtextxy(250,380," TIME :  ");
outtextxy(340,380,rc);
outtextxy(370,380,"s");
cout<<"\n PRESS ESC TO END";
key=getch();
while(key!=27)
{ key=getch();
}
return ck;
}
void end()
{  clrscr();
  cleardevice();
  setbkcolor(BLACK);
  int r=0;
  for(r=600;r>0;r-=5)
  { cleardevice();
    settextstyle(1,0,5);
    setcolor(WHITE);
    outtextxy(100,r,"THANKS FOR PLAYING");
    settextstyle(1,0,4);
    outtextxy(210,r+80,"CREATED BY");
    settextstyle(1,0,3);
    outtextxy(150,r+150,"575   SWAPNIL H. SHUKLA");
    outtextxy(150,r+180,"561   VISMAY  N. PARMAR");
    outtextxy(150,r+210,"570   HEMIL   C. PARMAR");
    outtextxy(100,r+250,"CLASS :- F.S. OF BE-II COMPUTER SCIENCE");
    outtextxy(100,r+300,"YEAR :- 2011-12");
    delay(25);
  }
  char key;
  while(key!=13)
  { key=getch(); }
  getch();
}