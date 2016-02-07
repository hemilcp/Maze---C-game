#include"C:\TC\BIN\MAZEMENU.CPP"
#include"C:\TC\BIN\MAZEFIN1.CPP"


class Score
{ char na[20];
  int ck;
  public:
  void input()
  { clrscr();
    cleardevice();
    setbkcolor(BLACK);
    cout<<"\n ENTER YOUR NAME : ";
    cin>>na;
  }
  char* get_na()
  { return na;
  }
  void gettime(int a)
  {  ck=a; }
  int get_time()
  { return ck; }
};

void highscore(int ls)
{ Score F;
  fstream file;
  char name[10][10];
  int r,i,scr[10];
  cleardevice();
  setbkcolor(BLUE);
  setfillstyle(1,LIGHTGRAY);
  bar(150,30,500,420);
  settextstyle(1,0,5);
  setcolor(RED);
  outtextxy(180,50," HIGH SCORE");
  settextstyle(1,0,3);
  outtextxy(200,120," NAME");
  outtextxy(330,120," SCORE");
  if(ls==1)
  { int c1=0;
   file.open("LEVEL1.CPP",ios::binary | ios::in);
   while(!file.eof())
   { file.read((char*)&F,sizeof(F));
     c1++;
   }
   file.close();
   file.open("LEVEL1.CPP",ios::binary | ios::in);
   for(i=0;i<c1;i++)
   { file.read((char*)&F,sizeof(F));
     scr[i]=F.get_time();
     strcpy(name[i],F.get_na());
   }
   file.close();
   int j,t;
  char te[10];
  for(i=0;i<c1-2;i++)
  { for(j=i+1;j<=c1-2;j++)
    { if(scr[i]>scr[j])
      { t=scr[i];
	scr[i]=scr[j];
	scr[j]=t;
	strcpy(te,name[i]);
	strcpy(name[i],name[j]);
	strcpy(name[j],te);
      }
    }
  }
  r=150;
  for(i=0;i<5;i++)
  {
  settextstyle(1,0,3);
  setcolor(BLUE);
  outtextxy(235,r,name[i]);
  itoa(scr[i],te,10);
  outtextxy(360,r,te);
  r+=50;
    if(i==c1-2)
    { break; }
  }
  }
  else if(ls==2)
  {int c2=0;
   file.open("LEVEL2.CPP",ios::binary | ios::in);
   while(!file.eof())
   { file.read((char*)&F,sizeof(F));
     c2++;
   }
   file.close();
   file.open("LEVEL2.CPP",ios::binary | ios::in);
   for(i=0;i<c2;i++)
   { file.read((char*)&F,sizeof(F));
     scr[i]=F.get_time();
     strcpy(name[i],F.get_na());
   }
   file.close();
   int j,t;
  char te[10];
  for(i=0;i<c2-2;i++)
  { for(j=i+1;j<=c2-2;j++)
    { if(scr[i]>scr[j])
      { t=scr[i];
	scr[i]=scr[j];
	scr[j]=t;
	strcpy(te,name[i]);
	strcpy(name[i],name[j]);
	strcpy(name[j],te);
      }
    }
  }
  r=150;
  for(i=0;i<5;i++)
  {
  settextstyle(1,0,3);
  setcolor(BLUE);
  outtextxy(235,r,name[i]);
  itoa(scr[i],te,10);
  outtextxy(360,r,te);
  r+=50;
    if(i==c2-2)
    { break; }
  }
  }
  else if(ls==3)
  {int c3=0;
   file.open("LEVEL3.CPP",ios::binary | ios::in);
   while(!file.eof())
   { file.read((char*)&F,sizeof(F));
     c3++;
   }
   file.close();
   file.open("LEVEL3.CPP",ios::binary | ios::in);
   for(i=0;i<c3;i++)
   { file.read((char*)&F,sizeof(F));
     scr[i]=F.get_time();
     strcpy(name[i],F.get_na());
   }
   file.close();
   int j,t;
  char te[10];
  for(i=0;i<c3-2;i++)
  { for(j=i+1;j<=c3-2;j++)
    { if(scr[i]>scr[j])
      { t=scr[i];
	scr[i]=scr[j];
	scr[j]=t;
	strcpy(te,name[i]);
	strcpy(name[i],name[j]);
	strcpy(name[j],te);
      }
    }
  }
  r=150;
  for(i=0;i<5;i++)
  {
  settextstyle(1,0,3);
  setcolor(BLUE);
  outtextxy(235,r,name[i]);
  itoa(scr[i],te,10);
  outtextxy(360,r,te);
  r+=50;
    if(i==c3-2)
    { break; }
  }
  }
 getch();
}

void Gameon(Score &S)
{ fstream file;
  int flag,t[3],i;
  for(i=1;i<4;)
  { clrscr();
  cleardevice();
  Lmenu(i,0);
  flag=menumove(i);
  if(flag==0)
  { file.open("LEVEL1.CPP",ios::app | ios::binary);
    t[0]=LEVEL1();
    S.gettime(t[0]);
    file.write((char*)&S,sizeof(S));
    file.close();
    i=2;
  }
  else if(flag==1)
  { file.open("LEVEL2.CPP",ios::app | ios::binary);
    t[1]=LEVEL2();
    S.gettime(t[1]);
    file.write((char*)&S,sizeof(S));
    file.close();
    i=3;
  }
  else if(flag==2)
  {  file.open("LEVEL3.CPP",ios::app | ios::binary);
     t[2]=LEVEL3();
     S.gettime(t[2]);
     file.write((char*)&S,sizeof(S));
     file.close();
     i=4;
  }
  else if(flag==3)
  {  break; }
}
 while(flag!=3)
 { clrscr();
   cleardevice();
   Lmenu(3,0);
   flag=menumove(3);
  if(flag==0)
  {  file.open("LEVEL1.CPP",ios::app | ios::binary);
    t[0]=LEVEL1();
    S.gettime(t[0]);
    file.write((char*)&S,sizeof(S));
    file.close();
  }
  else if(flag==1)
  {  file.open("LEVEL2.CPP",ios::app | ios::binary);
    t[1]=LEVEL2();
    S.gettime(t[1]);
    file.write((char*)&S,sizeof(S));
    file.close();
  }
  else if(flag==2)
  { file.open("LEVEL3.CPP",ios::app | ios::binary);
    t[2]=LEVEL3();
    S.gettime(t[2]);
    file.write((char*)&S,sizeof(S));
    file.close();
  }
 else if(flag==3)
 { break; }
 }
}
void main()
{ int gd=DETECT,gm;
  initgraph(&gd,&gm,"..//bgi");
  Score S;
  int hs,M=0;
  cleardevice();
  menuinit();
//  M=mazemenu();
  while(M!=3)
  { M=mazemenu();
  if(M==0)
  { cleardevice();
    S.input();
    start();
    Gameon(S);
  }
  else if(M==1)
  { cleardevice();
    Lmenu(3,0);
    hs=menumove(3);
    switch(hs)
    { case 0 : highscore(1); break;
      case 1 : highscore(2); break;
      case 2 : highscore(3); break;
      default : break;
    }
  }
  else if(M==2)
  { break; }
}
 end();
 getch();
 closegraph();
}

