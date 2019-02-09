#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
//************************************************************
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
char fname[20],sname[30];
int chwin();
void congrats();
void b();
void start();
void details();
void menu();
void grule();
void loading();
void name();
void thank();
//*************************************************************
void main()
{
clrscr();
start();
clrscr();
loading();
clrscr();
name();
clrscr();
menu();
int player=1,i=9,c;
char sym;
while(i>=1)
{
b();
player=(player%2) ? 1 : 2;
printf("\n\nPlayer %d , Enter a number where you want to insert your symbol:",player);
scanf("%d",&c);
sym=(player==1) ? 'X' : '0';
{
if(c==1 && square[1]=='1')
   square[1]=sym;
else if(c==2 && square[2]=='2')
   square[2]=sym;
else if(c==3 && square[3]=='3')
   square[3]=sym;
else if(c==4 && square[4]=='4')
   square[4]=sym;
else if(c==5 && square[5]=='5')
   square[5]=sym;
else if(c==6 && square[6]=='6')
   square[6]=sym;
else if(c==7 && square[7]=='7')
   square[7]=sym;
else if(c==8 && square[8]=='8')
   square[8]=sym;
else if(c==9 && square[9]=='9')
   square[9]=sym;
else
   printf("\n INVALID MOVE!!!!");
}
if(player==1)
++player;
else
--player;
--i;
if(chwin()==1)
{
   --player;
   if(player==0)
   player=2;
   printf("\t\t\t==>>>>>>>\a Player %d win <<<<<<<==\n",player);
   if(player==1)
   printf("\t\t\t	 Congrats %s\n",fname);
   if(player==2)
   printf("\t\t\t	 Congrats %s\n",sname);
   getch();
   congrats();
   break;
}
if(chwin()==0)
{
   printf("\t\t==>>>>>>>\a Game tie between the players<<<<<<<==\n");
   getch();
   thank();
}
}
}

//********************************************************************


void start()
{
for(int o=0;o<11;++o)
{
clrscr();
if(o%11==0){textcolor(14);}
if(o%11==1){textcolor(13);}
if(o%11==2){textcolor(3);}
if(o%11==3){textcolor(4);}
if(o%11==4){textcolor(5);}
if(o%11==5){textcolor(6);}
if(o%11==6){textcolor(10);}
if(o%11==7){textcolor(9);}
if(o%11==8){textcolor(14);}
if(o%11==9){textcolor(11);}
if(o%11==10){textcolor(12);}
if(o==11){break;}
gotoxy(5,5); printf("               **        **     ** ** ** **     **            ");
gotoxy(5,6); printf("               **        **     **              **            ");
gotoxy(5,7); printf("               **        **     **              **            ");
gotoxy(5,8); printf("               **        **     ** **           **            ");
gotoxy(5,9); printf("               **   **   **     **              **            ");
gotoxy(5,10);printf("               ** **  ** **     **              **            ");
gotoxy(5,11);printf("               **        **     ** ** ** **     ** ** ** ** **");
gotoxy(5,14);printf("      ** ** ** **    ** ** ** **    **           **   ** ** ** **");
gotoxy(5,15);printf("      **             **       **    ** **     ** **   **         ");
gotoxy(5,16);printf("      **             **       **    **   **  **  **   **         ");
gotoxy(5,17);printf("      **             **       **    **     **    **   ** **      ");
gotoxy(5,18);printf("      **             **       **    **           **   **         ");
gotoxy(5,19);printf("      **             **       **    **           **   **         ");
gotoxy(5,20);printf("      ** ** ** **    ** ** ** **    **           **   ** ** ** **");
delay(100);
if(o==10){break;}
clrscr();
delay(100);
}
for(int j=0;j<50;++j)
{
sound(5*random(100));
delay(95);
nosound();
} 
textcolor(7);
textbackground(0);
gotoxy(1,25);printf("Press Any Key To Continue..");
getch();
}
//******************************************************************



void details()
{
textcolor(4);
fflush(stdin);
printf("\n\n");
printf("\n                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
printf("\n                ENTER PLAYER NAME WHO WANT TO PLAY FOR 'X':");
gets(fname);
printf("\n                ENTER PLAYER NAME WHO WANT TO PLAY FOR '0':");
gets(sname);
}
//*************************************************************************



void menu()
{
char ch;
textcolor(9);
printf("\n\n\n\n\n\n\n\n");
printf("\n            $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
printf("\n            DO YOU WANT TO START THE GAME??");
l:printf("\n            Enter 'y' for yes and 'n' for no!!");
printf("\n            Enter your choice::");
scanf("%c",&ch);
printf("\n            $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
clrscr();
if(ch=='y' || ch=='Y')
{
	  printf("\n \n\n\n\n            @@@@@@      WELCOME TO THE GAME      @@@@@@\n");
	  details();
	  clrscr();
	  grule();
}
else if(ch=='n'|| ch=='N')
{
	  thank();
	  exit(0);
}
else
{	 printf("\n ENTER A VALID CHOICE PLEASE!!!");
	  goto l;
}
getch();
}

//*******************************************************************


void congrats()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
settextstyle(10,1,6);
setcolor(11);
outtextxy(0,50,"GREETING");
setlinestyle(0,1,2);
rectangle(0,0,639,479);
rectangle(3,3,636,476);
line(153,3,153,476);
line(150,3,150,476);
settextstyle(7,0,5);
    setcolor(11);
    outtextxy(200,125,"*********************");
settextstyle(7,0,5);
    setcolor(11);
     outtextxy(200,175,"Congratulations!");
settextstyle(7,0,5);
    setcolor(11);
     outtextxy(200,225,"Well played!!");
settextstyle(7,0,5);
    setcolor(11);
     outtextxy(200,275,"See you back soon!!");
settextstyle(7,0,5);
    setcolor(11);
     outtextxy(200,325,"*********************");
	 getch();
    closegraph();
    thank();
}

//*******************************************************************



void grule()
{
printf("\n\n\n\n\n");
printf("\n          &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&");
printf("\n\n   Rules and Regulations for the game are as follows:");
printf("\n\n 1. The game is played on a grid that's 3 squares by 3 squares.");
printf("\n\n 2. Players take turns putting their marks in empty squares.");
printf("\n\n 3. The first player to get 3 of their marks in a row or column (up,down,across,diagonally) is the winner.");
printf("\n\n 4. When all 9 squares are full, the game is over.If no player has 3 marks in a row or column , the game ends in a tie.");
printf("\n\n        &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&");
}

//**********************************************************************


int chwin()
{
if(square[1]==square[2] && square[2]==square[3])
   return 1;
else if(square[4]==square[5] && square[5]==square[6])
	return 1;
else if(square[7]==square[8] && square[8]==square[9])
	return 1;
else if(square[1]==square[4] && square[4]==square[7])
	return 1;
else if(square[2]==square[5] && square[5]==square[8])
	return 1;
else if(square[3]==square[6] && square[6]==square[9])
	return 1;
else if(square[1]==square[5] && square[5]==square[9])
	return 1;
else if(square[3]==square[5] && square[5]==square[7])
	return 1;
else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
	return 0;
else
	return -1;
}

//***********************************************************************


void b()
{
clrscr();
printf("\n\n\t\t\t\tTIC TAC TOE GAME\n\n");
printf("\n \t\t\tPlayer 1:(X) -- Player 2:(0)\n\n\n");
printf("\t\t\t 	|        | \n");
printf("\t\t\t    %c   |   %c	 |   %c  \n",square[1],square[2],square[3]);
printf("\t\t\t________|________|________\n");
printf("\t\t\t	|	 |	 \n");
printf("\t\t\t   %c    |   %c	 |   %c  \n",square[4],square[5],square[6]);
printf("\t\t\t________|________|________\n");
printf("\t\t\t	|	 |	 \n");
printf("\t\t\t   %c    |   %c	 |   %c  \n",square[7],square[8],square[9]);
printf("\t\t\t	|	 | 	  \n\n");
}


//***********************************************************************


void loading()
{
int gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 int x,y,i;
 cleardevice();
 x=getmaxx()/2;
 y=getmaxy()/2;
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 setbkcolor(0);
 setcolor(0);
 int c=150;
for(int e=0;e<45;e++)
 {for(int i=50;i<100;i++)
  {settextstyle(SMALL_FONT, HORIZ_DIR, 10);
   setcolor(5);
   outtextxy(x,y-10,"Loading...");
   setcolor(7);
   settextstyle(SMALL_FONT, HORIZ_DIR, 5);
   if(e<7){outtextxy(x+5,y+30,"Creating Graphics...");}
   else if(e<14){outtextxy(x+5,y+30,"Creating startup...");}
   else if(e<21){outtextxy(x+5,y+30,"Creating rules and regulations...");}
   else if(e<29){outtextxy(x+5,y+30,"Creating gameboard...");}
   else if(e<36){outtextxy(x+5,y+30,"Rechecking ...");}
   else if(e<44){outtextxy(x+5,y+30,"Creating game...");}
   setcolor(3);
   circle(x,y,i);
   circle(x,y,c);
   c--;
   cleardevice();
}
 }
  setcolor(8);
  settextstyle(SMALL_FONT, HORIZ_DIR, 100);
   outtextxy(x-150,y-30,"Loading Complete");
  setcolor(0);
  gotoxy(1,25);printf("Press Any Key To Continue..");
getch();
 closegraph();
}


//*************************************************************************
void name()
{
int f=0;
top:
int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    setcolor(3);
    settextstyle(1,0,10);
    setcolor(12);
     outtextxy(170,0,"T");
      if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
      setcolor(7);
      outtextxy(270,0,"I");
      if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
      setcolor(2);
      outtextxy(340,0,"C");
      if(f==1)for(long int i=0;i<10000000;++i);
      if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
      settextstyle(1,0,10);
      setcolor(7);
      outtextxy(170,150,"T");
      if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
      setcolor(2);
      outtextxy(270,150,"A");
      if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
      setcolor(12);
      outtextxy(340,150,"C");
      if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
      if(f==1)for(long int i=0;i<10000000;++i);
      if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
      settextstyle(1,0,10);
      setcolor(2);
      outtextxy(170,300,"T");
      if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
      setcolor(12);
      outtextxy(270,300,"0");
      if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
      setcolor(7);
      outtextxy(340,300,"E");
      if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
      f++;
      if(f==1)goto top;
  getch();
closegraph();
}


//************************************************************************
void thank()
{
int i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
settextstyle(7,0,50);
setcolor(5);
outtextxy(90,50,"T");
delay(500);
outtextxy(150,50,"H");
delay(500);
outtextxy(240,50,"A");
delay(500);
outtextxy(320,50,"N");
delay(500);
outtextxy(410,50,"K");
delay(500);
outtextxy(150,220,"Y");
delay(500);
outtextxy(240,220,"O");
delay(500);
outtextxy(320,220,"U");
getch();
closegraph();
}

//***********************************************************************