#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
//****************************************************************************
int que[10]={0,0,0,0,0,0,0,0,0,0};
int garbage1[20];
int milisec=100,sec=45,min=0;
int garbage[20];
int qn=0;
char qans[]={'A','C','B','D','D','D','C','A','D','C','D','C','B','D','A','A','D','B','A','D','A'};
int flagt=1,flagf=1,flage=1,flagp=1;
int c=0;
int life=3;
//****************************************************************************
//****************************************************************************
void playermenu();
void startup();
void menu();
void congrats();
void drawb(char c);
void drawb(int l);
void quiz();
void quit();
void credits();
void getans(int q);
void randomq();
void question();
void cr();
void wr(int,int);
void printu();
void expert(int q);
void audp(int q);
void rules();
void loading();
void end();
void esc();
void name();
void linfo();
void ty();
char timer();
void treset();

void q0(int y);
void q1(int y);
void q2(int y);
void q3(int y);
void q4(int y);
void q5(int y);
void q6(int y);
void q7(int y);
void q8(int y);
void q9(int y);
void q10(int y);
void q11(int y);
void q12(int y);
void q13(int y);
void q14(int y);
void q15(int y);
void q16(int y);
void q17(int y);
void q18(int y);
void q19(int y);
void q20(int y);
//****************************************************************************
class player
{
int age;
int rate;
public:
char fname[50];
char lname[50];
player()
{
strcpy(fname," ");
strcpy(lname," ");
age=0;
rate=0;
}
void get()
{
gotoxy(6,13);cout<<"Enter Your First Name : ";
gotoxy(6,14);cout<<"Enter Your Last Name : ";
gotoxy(6,15);cout<<"Enter Your Age : ";
gotoxy(30,13);gets(fname);
gotoxy(30,14);gets(lname);
gotoxy(30,15);cin>>age;
}
void getrate(int r)
{
rate=r;
}
}p;
//****************************************************************************
void main()
{
clrscr();
c=0;
startup();
}
//****************************************************************************
void startup()
{
name();
loading();
for(int o=0;o<33;++o)
{
clrscr();
drawb('d');
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
if(o==32){break;}
gotoxy(5,5); cout<<"               **        **     ** ** ** **     **            ";
gotoxy(5,6); cout<<"               **        **     **              **            ";
gotoxy(5,7); cout<<"               **        **     **              **            ";
gotoxy(5,8); cout<<"               **        **     ** **           **            ";
gotoxy(5,9); cout<<"               **   **   **     **              **            ";
gotoxy(5,10);cout<<"               ** **  ** **     **              **            ";
gotoxy(5,11);cout<<"               **        **     ** ** ** **     ** ** ** ** **";
gotoxy(5,14);cout<<"      ** ** ** **    ** ** ** **    **           **   ** ** ** **";
gotoxy(5,15);cout<<"      **             **       **    ** **     ** **   **         ";
gotoxy(5,16);cout<<"      **             **       **    **   **  **  **   **         ";
gotoxy(5,17);cout<<"      **             **       **    **     **    **   ** **      ";
gotoxy(5,18);cout<<"      **             **       **    **           **   **         ";
gotoxy(5,19);cout<<"      **             **       **    **           **   **         ";
gotoxy(5,20);cout<<"      ** ** ** **    ** ** ** **    **           **   ** ** ** **";
delay(100);
if(o==31){break;}
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
gotoxy(1,25);cout<<"Press Any Key To Continue..";
getch();
playermenu();
}
//**************************************************************************
void name()
{
int f=0;
top:
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(3);
settextstyle(10,0,7);
setcolor(12);
outtextxy(0,80,"K");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
setcolor(11);
outtextxy(70,80,"N");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
setcolor(10);
outtextxy(140,80,"O");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
setcolor(9);
outtextxy(200,80,"W");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
setcolor(14);
outtextxy(320,80,"L");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
setcolor(13);
outtextxy(390,80,"E");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
setcolor(2);
outtextxy(455,80,"D");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
setcolor(3);
outtextxy(519,80,"G");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
setcolor(4);
outtextxy(590,80,"E");
if(f==1)for(long int i=0;i<10000000;++i);
if(f==0){for(long int i=0;i<10000000;++i);cleardevice();  }
settextstyle(10,0,7);
setcolor(14);
outtextxy(110,220,"B");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
setcolor(2);
outtextxy(180,220,"U");
if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
setcolor(6);
outtextxy(250,220,"Z");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
setcolor(5);
outtextxy(320,220,"Z");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
setcolor(4);
outtextxy(390,220,"E");
if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
setcolor(1);
outtextxy(460,220,"R");
if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
f++;
if(f==1)goto top;
getch();
closegraph();
}
//************************************************************************
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
   else if(e<14){outtextxy(x+5,y+30,"Creating Music...");}
   else if(e<21){outtextxy(x+5,y+30,"Creating Questions And Options...");}
   else if(e<29){outtextxy(x+5,y+30,"Creating Answers...");}
   else if(e<36){outtextxy(x+5,y+30,"Rechecking Answers...");}
   else if(e<44){outtextxy(x+5,y+30,"Creating Lifelines...");}
   setcolor(3);
   circle(x,y,i);
   circle(x,y,c);
   c--;
   cleardevice();
}
 }
  setcolor(8);
  settextstyle(SMALL_FONT, HORIZ_DIR, 10);
   outtextxy(x-150,y-30,"Loading Complete");
  setcolor(0);
  gotoxy(1,25);cout<<"Press Any Key To Continue..";
getch();
 closegraph();
}
//***************************************************************************
//***********************************************************************
void playermenu()
{
clrscr();
drawb('d');
gotoxy(10,11);cout<<"\t\t\t!Profile Menu!:";
gotoxy(6,12);cout<<"Enter Player Details: ";
p.get();
gotoxy(5,22);cout<<"Successful!";
gotoxy(1,25);cout<<"Press Any Key To Continue..";
getch();
menu();
}
//*************************************************************
void menu()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int choice;
settextstyle(4,1,15);
setcolor(10);
outtextxy(0,50,"MENU");
setlinestyle(0,1,2);
rectangle(0,0,639,479);
rectangle(5,5,634,474);
line(155,5,155,474);
line(150,5,150,474);
settextstyle(7,0,5);
    setcolor(10);
     outtextxy(200,50,"1. Start Game");
settextstyle(7,0,5);
    setcolor(10);
     outtextxy(200,100,"2. Game Rules");
settextstyle(7,0,5);
    setcolor(10);
     outtextxy(200,150,"3. Change Player");
settextstyle(7,0,5);
    setcolor(10);
     outtextxy(200,200,"4. Credits ");
settextstyle(7,0,5);
    setcolor(10);
     outtextxy(200,250,"5. Quit ");
settextstyle(7,0,3);
    setcolor(10);
     outtextxy(200,320,"Enter Your Choice : ");
gotoxy(56,22);
cin>>choice;
closegraph();
switch(choice)
{
case 1:quiz();
       break;
case 2:rules();
       menu();
       break;
case 3:playermenu();
       menu();
       break;
case 4:credits();
       menu();
       break;
case 5:end();
       break;
}
}
//**************************************************************************
void rules()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
settextstyle(7,0,3);
setcolor(10);
rectangle(0,0,639,479);
setcolor(11);
rectangle(3,3,636,476);
setcolor(12);
rectangle(6,6,633,473);
setcolor(4);
rectangle(9,9,630,470);
setcolor(13);
outtextxy(40,100,"1. The game consists of all the MCQ questions. ");
outtextxy(40,130,"2. Each correct answer will increase score by 1. ");
outtextxy(40,160,"3. Each wrong answer will reduce life by 1. ");
outtextxy(40,190,"4. Total no. of questions are 10.");
outtextxy(40,220,"5. You can quit the game anytime you want.");
outtextxy(40,250,"6. After each question choice will be asked,");
outtextxy(40,280,"   whether want to continue or not.");
outtextxy(40,310,"7. 45 sec are available to answer each question.");
setcolor(4);
getch();
closegraph();
}
//*********************************************
void drawb(char c)
{
int i,j;
char c1,c2,c3,c4,v,h;
c1=201;c2=187;c3=200;c4=188;h=205;v=186;
char s=176;
cout<<c1;
for(i=0;i<78;++i){cout<<h;}
cout<<c2;
for(i=0;i<22;++i){cout<<v;if(c=='d'){cout<<s;}
if(c=='d'){if(i==0){cout<<s;for(j=0;j<76;++j){cout<<s;}cout<<s;}
if(i==21){cout<<s;for(j=0;j<76;++j){cout<<s;}cout<<s;}
gotoxy(79,i+2);cout<<s; }
gotoxy(80,i+2);cout<<v;
}
cout<<c3;
for(i=0;i<78;++i){cout<<h;}
cout<<c4;
}
//****************************************
void drawb(int l)
{
int i,j;
char c1,c2,c3,c4,v,h,rh,lh;
c1=201;c2=187;c3=200;c4=188;h=205;v=186;rh=185;lh=204;
cout<<c1;
for(i=0;i<78;++i){cout<<h;}
cout<<c2;
for(i=0;i<22;++i)
{
if(i==l)
{cout<<lh;
for(j=0;j<78;++j){cout<<h;}
cout<<rh;
continue;}
cout<<v;
gotoxy(80,i+2);cout<<v;
}
cout<<c3;
for(i=0;i<78;++i){cout<<h;}
cout<<c4;
}
//****************************************************************************
//****************************************************************************
void quiz()
{
randomq();
}
//****************************************************************************
void randomq()
{
randomize();
long int a,b,d;
for(a=0,b=0;a<1000;a++)
{
d=0;
if(b==0)
{
que[b]=random(20);
b++;
}
else
{
que[b]=random(20);
for(int i=b-1;i>=0;i--)
{
if(que[b]==que[i])
d++;
}
if(d==0)
{
b++;
}
}
}
question();
}
//****************************
void question()
{
for(int i=0;i<10;++i)
{
switch(que[i])
 {
 case 0:{ q0(0);break;}
 case 1:{ q1(0);break;}
 case 2:{ q2(0);break;}
 case 3:{ q3(0);break;}
 case 4:{ q4(0);break;}
 case 5:{ q5(0);break;}
 case 6:{ q6(0);break;}
 case 7:{ q7(0);break;}
 case 8:{ q8(0);break;}
 case 9:{ q9(0);break;}
 case 10:{ q10(0);break;}
 case 11:{ q11(0);break;}
 case 12:{ q12(0);break;}
 case 13:{ q13(0);break;}
 case 14:{ q14(0);break;}
 case 15:{ q15(0);break;}
 case 16:{ q16(0);break;}
 case 17:{ q17(0);break;}
 case 18:{ q18(0);break;}
 case 19:{ q19(0);break;}
 case 20:{ q20(0);break;}
 default :{cout<<"!!!Sorry, Some Error In Run ,Please Re Run The Quiz!!!";}
 }
treset();
}
}

//****************************************************************************
void credits()
{
int gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 rectangle(0,0,639,479);
setcolor(3);
    settextstyle(4,0,9.5);
    setcolor(11);
      outtextxy(150,20,"Credits");
      settextstyle(0,0,1);
    setcolor(11);
      outtextxy(0,120,"_________________________________________________________________________________________________");
 settextstyle(7,0,5);
    setcolor(12);
      outtextxy(70,220,"SPECIAL THANKS TO :");
  delay(1000);
  settextstyle(7,0,5);
    setcolor(13);
      outtextxy(150,270,"Mr.Ajay Kumar");
   delay(1000);
   settextstyle(7,0,3);
   outtextxy(80,340,"For guidance in this entire project");
getch();
cleardevice();
setcolor(11);
rectangle(0,0,639,479);
settextstyle(4,0,9.5);
    setcolor(11);
      outtextxy(150,20,"Credits");
      settextstyle(0,0,1);
    setcolor(11);
      outtextxy(0,120,"_________________________________________________________________________________________________");
 settextstyle(7,0,4);
    setcolor(12);
      outtextxy(90,220,"MADE AND PRESENTED BY:");
  delay(1000);
  settextstyle(7,0,3);
    setcolor(13);
      outtextxy(270,270,"GROUP:7");
      outtextxy(270,300,"Batch:A2");
   getch();
   closegraph();
}
//****************************************************************************
//****************************************************************************
void getans(int q)
{
linfo();
char z;
getan:
gotoxy(34,13);cout<<" ";
char ch;
gotoxy(6,13);cout<<"Please Enter Your Choice : ";
z=timer();
if(z=='u'){wr(q,0);}
else{ch=z;

if(ch==qans[q]||ch==(qans[q]+32))
{cr();}

else if((ch=='a')||(ch=='b')||(ch=='c')||(ch=='d')||(ch=='A')||(ch=='B')||(ch=='C')||(ch=='D'))
{wr(q,0);}

else if(ch=='t')
{
if(flagt==0)
{
gotoxy(5,22);cprintf("                    ");
gotoxy(5,23);cprintf("                                                                        ");
gotoxy(5,23);cout<<"Sorry ! You Can Use Lifelines Once Only  ";
goto getan;
}
else
{
char c1,c2;
flagt=0;
s1:
gotoxy(6,13);cout<<"                                                          ";
gotoxy(6,13);cout<<"Enter First Option : ";
z=timer();
if(z=='u'){wr(q,0);}
else{c1=z;
 if(c1==qans[q]||c1==(qans[q]+32))
 { gotoxy(6,15);cout<<"                                   ";
   cr();}
 else if((c1=='a')||(c1=='b')||(c1=='c')||(c1=='d')||(c1=='A')||(c1=='B')||(c1=='C')||(c1=='D'))
 { gotoxy(6,15);cout<<"                                   ";
  wr(q,1);
  s2:
  gotoxy(6,13);cout<<"                                      ";
  gotoxy(6,13);cout<<"Enter Second Option : ";
  z=timer();
  if(z=='u'){wr(q,0);}
  else{c2=z;
   if(c2==qans[q]||c2==(qans[q]+32))
    {gotoxy(6,15);cout<<"                                   ";
     cr();}
    else if((c2=='a')||(c2=='b')||(c2=='c')||(c2=='d')||(c2=='A')||(c2=='B')||(c2=='C')||(c2=='D'))
    {gotoxy(6,15);cout<<"                                   ";
     wr(q,0);}
    else
    {
    gotoxy(6,15);cout<<"                                   ";
    gotoxy(6,15);cout<<"Sorry ! Please Enter Correct Choice              ";
    goto s2;} } }
 else
 {
 gotoxy(6,15);cout<<"Sorry ! Please Enter Correct Choice               ";
 goto s1;
 } }  } }

else if(ch=='f')
{
if(flagf==0)
{
gotoxy(5,22);cprintf("                    ");
gotoxy(5,23);cprintf("                                                                        ");
gotoxy(5,23);cout<<"Sorry ! You Can Use Lifelines Once Only                   ";
goto getan;
}
else
{
flagf=0;

switch(q)
 {
 case 0:{ q0(1);break;}
 case 1:{ q1(1);break;}
 case 2:{ q2(1);break;}
 case 3:{ q3(1);break;}
 case 4:{ q4(1);break;}
 case 5:{ q5(1);break;}
 case 6:{ q6(1);break;}
 case 7:{ q7(1);break;}
 case 8:{ q8(1);break;}
 case 9:{ q9(1);break;}
 case 10:{ q10(1);break;}
 case 11:{ q11(1);break;}
 case 12:{ q12(1);break;}
 case 13:{ q13(1);break;}
 case 14:{ q14(1);break;}
 case 15:{ q15(1);break;}
 case 16:{ q16(1);break;}
 case 17:{ q17(1);break;}
 case 18:{ q18(1);break;}
 case 19:{ q19(1);break;}
 case 20:{ q20(1);break;}
  default :{cout<<"!!!Sorry, Some Error In Run ,Please Re Run The Quiz!!!";}
 }
}
}

else if(ch=='e')
{
if(flage==0)
{
gotoxy(5,22);cprintf("                    ");
gotoxy(5,23);cprintf("                                                                        ");
gotoxy(5,23);cout<<"Sorry ! You Can Use Lifelines Once Only ";
goto getan;
}
else
{flage=0;
expert(q); }
}

else if(ch=='p')
{
if(flagp==0)
{
gotoxy(5,22);cprintf("                    ");
gotoxy(5,23);cprintf("                                                                        ");
gotoxy(5,23);cout<<"Sorry ! You Can Use Lifelines Once Only ";
goto getan;
}
else
{flagp=0;
audp(q);
 }
}
else
{
gotoxy(33,12);cout<<" ";
gotoxy(6,14);cout<<"Sorry ! Please Enter Correct Choice";goto getan;}
}
printu();
esc();
}
//****************************************************************************
void esc()
{
char t;
gotoxy(1,25);cout<<"Press Any Key To Continue, Esc to Quit... ";
t=getch();
if(t==char(27)){end();}
}
//****************************************************************************
void printu()
{
gotoxy(3,2);cout<<"                                                                             ";
gotoxy(3,3);cout<<"                                                                             ";
textcolor(RED);
gotoxy(3,2);cprintf("PLAYER : ");
textcolor(5);
gotoxy(3,3);cprintf(p.fname);
gotoxy(13,1);cout<<char(203);
gotoxy(13,2);cout<<char(186);
gotoxy(13,3);cout<<char(186);
gotoxy(13,4);cout<<char(202);
textcolor(RED);
gotoxy(15,2);cprintf("LIFELINE : ");
textcolor(5);
gotoxy(15,3);
if(flagt==1){cprintf("Double Tick|");}
if(flagf==1){cprintf("50-50|");}
if(flage==1){cprintf("Expert Advise|");}
if(flagp==1){cprintf("Audience Poll");}
gotoxy(63,1);cout<<char(203);
gotoxy(63,2);cout<<char(186);
gotoxy(63,3);cout<<char(186);
gotoxy(63,4);cout<<char(202);
textcolor(RED);
gotoxy(65,2);cprintf("SCORE :");
textcolor(5);
gotoxy(65,3);cprintf("%d",c);
gotoxy(72,1);cout<<char(203);
gotoxy(72,2);cout<<char(186);
gotoxy(72,3);cout<<char(186);
gotoxy(72,4);cout<<char(202);
textcolor(RED);
gotoxy(74,2);cprintf("LIFE :");
textcolor(5);
gotoxy(74,3);cprintf("%d",life);
}
//****************************************************************************
void cr()
{
textcolor(GREEN);
for(int j=0;j<5;++j)
{
sound(5*random(100));
delay(95);
nosound();
}
textattr(2+BLINK);
gotoxy(55,9);cprintf("              ***  ");
gotoxy(55,10);cprintf("             ***    ");
gotoxy(55,11);cprintf("            ***     ");
gotoxy(55,12);cprintf("           ***      ");
gotoxy(55,13);cprintf(" ***      ***       ");
gotoxy(55,14);cprintf("  ***   ***         ");
gotoxy(55,15);cprintf("    *****           ");
gotoxy(55,16);cprintf("     ***            ");
textcolor(7);
c=c+1;
}
//****************************************************************************
void wr(int q,int d)
{
textcolor(RED);
for(int p=0;p<5;++p)
{
sound(5*random(100));
delay(95);
nosound();
}
textattr(4+BLINK);
gotoxy(55,9);cprintf(" ***      ***  ");
gotoxy(55,10);cprintf("  ***    ***   ");
gotoxy(55,11);cprintf("   ***  ***    ");
gotoxy(55,12);cprintf("     ****      ");
gotoxy(55,13);cprintf("   ***  ***    ");
gotoxy(55,14);cprintf("  ***    ***   ");
gotoxy(55,15);cprintf( " ***      ***  ");
gotoxy(55,16);cprintf("***        *** ");
textcolor(15);
for(int j=0;j<5;++j)
{
sound(7*random(100));
delay(95);
nosound();
}
if(d==0)
{
char f='y';
life--;
if(life>=0)
{
gotoxy(6,14);cout<<"Correct Answer Is "<<qans[q];
gotoxy(6,15);
cout<<"Sorry!You Gave A Wrong Answer.";
gotoxy(6,16);
cout<<"Do You Want To Continue(y/n) : ";
cin>>f;
if(f=='n'){end();}
}
else
{
life=0;
gotoxy(6,14);
cout<<"Sorry! Your All Lifes Are Over.";
gotoxy(6,15);
cout<<"You Cannot Continue !!!";
gotoxy(1,25);cout<<"Press Any Key To Continue..";
getch();
end();
}}}
//****************************************************************************
void expert(int q)
{
gotoxy(6,20);
cout<<"The Expert Says :";
cout<<"I Think The Answer Is ";
switch(q)
 {
 case 0:{ cout<<"A";break;}
 case 1:{ cout<<"C";break;}
 case 2:{ cout<<"B"; break;}
 case 3:{ cout<<"D";break;}
 case 4:{ cout<<"D";break;}
 case 5:{ cout<<"A Or D";break;}
 case 6:{ cout<<"C";break;}
 case 7:{ cout<<"A";break;}
 case 8:{ cout<<"D";break;}
 case 9:{ cout<<"A";break;}
 case 10:{ cout<<"D";break;}
 case 11:{ cout<<"C";break;}
 case 12:{ cout<<"D";break;}
 case 13:{ cout<<"D";break;}
 case 14:{ cout<<"A";break;}
 case 15:{ cout<<"A Or C";break;}
 case 16:{ cout<<"A Or D";break;}
 case 17:{ cout<<"B";break;}
 case 18:{ cout<<"A";break;}
 case 19:{ cout<<"D";break;}
 case 20:{ cout<<"A";break;}
  default :{cout<<"!!!Sorry, Some Error In Run ,Please Re Run The Quiz!!!";}
 }
getans(q);
}
//****************************************************************************
void audp(int q)
{
textcolor(7);
gotoxy(6,16);
cout<<"AUDIENCE POLL : ";
switch(q)
 {
 case 0:{ gotoxy(6,17);cout<<"A:ллллл 50%";
	  gotoxy(6,18);cout<<"B:ллл 20%";
	  gotoxy(6,19);cout<<"C:лл 10%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 1:{ gotoxy(6,17);cout<<"A:лл 10%";
	  gotoxy(6,18);cout<<"B:лл 10%";
	  gotoxy(6,19);cout<<"C:ллллллл 60%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 2:{ gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:ллллллл 60%";
	  gotoxy(6,19);cout<<"C:лл 20%";
	  gotoxy(6,20);cout<<"D:л 10%";
	  break;}
 case 3:{ gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:лл20%";
	  gotoxy(6,19);cout<<"C:л 10%";
	  gotoxy(6,20);cout<<"D:ллллллл 60%";
	  break;}
 case 4:{ gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:лл20%";
	  gotoxy(6,19);cout<<"C:л 10%";
	  gotoxy(6,20);cout<<"D:ллллллл 60%";
	  break;}
 case 5:{ gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:лл20%";
	  gotoxy(6,19);cout<<"C:л 10%";
	  gotoxy(6,20);cout<<"D:ллллллл 60%";
	  break;}
 case 6:{ gotoxy(6,17);cout<<"A:лл 10%";
	  gotoxy(6,18);cout<<"B:лл 10%";
	  gotoxy(6,19);cout<<"C:ллллллл 60%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 7:{ gotoxy(6,17);cout<<"A:ллллл 50%";
	  gotoxy(6,18);cout<<"B:ллл 20%";
	  gotoxy(6,19);cout<<"C:лл 10%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 8:{ gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:лл20%";
	  gotoxy(6,19);cout<<"C:л 10%";
	  gotoxy(6,20);cout<<"D:ллллллл 60%";
	  break;}
 case 9:{ gotoxy(6,17);cout<<"A:лл 10%";
	  gotoxy(6,18);cout<<"B:лл 10%";
	  gotoxy(6,19);cout<<"C:ллллллл 60%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 10:{gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:лл20%";
	  gotoxy(6,19);cout<<"C:л 10%";
	  gotoxy(6,20);cout<<"D:ллллллл 60%";
	  break;}
 case 11:{gotoxy(6,17);cout<<"A:лл 10%";
	  gotoxy(6,18);cout<<"B:лл 10%";
	  gotoxy(6,19);cout<<"C:ллллллл 60%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 12:{gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:ллллллл 60%";
	  gotoxy(6,19);cout<<"C:лл 20%";
	  gotoxy(6,20);cout<<"D:л 10%";
	  break;}
 case 13:{gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:лл20%";
	  gotoxy(6,19);cout<<"C:л 10%";
	  gotoxy(6,20);cout<<"D:ллллллл 60%";
	  break;}
 case 14:{gotoxy(6,17);cout<<"A:ллллл 50%";
	  gotoxy(6,18);cout<<"B:ллл 20%";
	  gotoxy(6,19);cout<<"C:лл 10%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 15:{gotoxy(6,17);cout<<"A:ллллл 50%";
	  gotoxy(6,18);cout<<"B:ллл 20%";
	  gotoxy(6,19);cout<<"C:лл 10%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 16:{gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:ллллллл 60%";
	  gotoxy(6,19);cout<<"C:лл 20%";
	  gotoxy(6,20);cout<<"D:л 10%";
	  break;}
 case 17:{gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:ллллллл 60%";
	  gotoxy(6,19);cout<<"C:лл 20%";
	  gotoxy(6,20);cout<<"D:л 10%";
	  break;}
 case 18:{gotoxy(6,17);cout<<"A:ллллл 50%";
	  gotoxy(6,18);cout<<"B:ллл 20%";
	  gotoxy(6,19);cout<<"C:лл 10%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
 case 19:{gotoxy(6,17);cout<<"A:л 10%";
	  gotoxy(6,18);cout<<"B:лл20%";
	  gotoxy(6,19);cout<<"C:л 10%";
	  gotoxy(6,20);cout<<"D:ллллллл 60%";
	  break;}
 case 20:{gotoxy(6,17);cout<<"A:ллллл 50%";
	  gotoxy(6,18);cout<<"B:ллл 20%";
	  gotoxy(6,19);cout<<"C:лл 10%";
	  gotoxy(6,20);cout<<"D:ллл 20%";
	  break;}
  default :{cout<<"!!!Sorry, Some Error In Run ,Please Re Run The Quiz!!!";}
 }
getans(q);
}
//****************************************************************************
//****************************************************************************
void end()
{
int gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int r;
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(10,10,"You Gave : ");
gotoxy(3,4);cout<<c;
outtextxy(25,38," Correct Answers ");
gotoxy(3,6);cout<<qn-c;
outtextxy(25,70," Wrong Answers ");
outtextxy(10,102,"Out Of ");
gotoxy(13,8);cout<<qn;
outtextxy(110,102," Question.");
outtextxy(10,134,"How Would You Rate Our Program (Out Of 5) : ");
gotoxy(73,10);
cin>>r;
p.getrate(r);
closegraph();
congrats();
exit(0);
}
//****************************************************************************
//****************************************************************************
void linfo()
{
textcolor(6);
gotoxy(5,22);cprintf("Keys For Life Line :");
gotoxy(5,23);cprintf("Double Tick ->'t', 50-50 ->'f', Expert Advise ->'e', Audience Poll ->'p'");
}
//****************************************************************************
//****************************************************************************
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
    ty();
}
//****************************************************
void ty()
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
//****************************************************************************
void treset()
{
milisec=100;
sec=45;
min=0;
}
//****************************************************************************
char timer()
{
char z;
gotoxy(30+35,17);cout<<char(201);
gotoxy(30+35,18);cout<<char(186);gotoxy(41+35,18);cout<<char(186);
gotoxy(41+35,19);cout<<char(186);gotoxy(41+35,20);cout<<char(200);
gotoxy(30+35,19);cout<<char(186);gotoxy(30+35,20);cout<<char(200);
for(int i=0;i<10;++i){gotoxy(31+i+35,20);cout<<char(205);}
for(i=0;i<10;++i){gotoxy(31+i+35,17);cout<<char(205);}
gotoxy(41+35,20);cout<<char(188);
gotoxy(41+35,17);cout<<char(187);
while(!kbhit())
{
if(milisec==0)
{--sec;
milisec=100;
}
gotoxy(33+35,18);cout<<"TIMER";
gotoxy(32+35,19);cout<<min<<":"<<sec<<":"<<milisec;
--milisec;
delay(10);
if(sec==0){textattr(4+BLINK);gotoxy(43+5,19);cprintf("SORRY TIME IS UP");milisec=0;
gotoxy(32+35,19);cout<<min<<":"<<sec<<":"<<milisec; break;}
gotoxy(34,13);
}
if(sec==0){return 'u';}
cin>>z;
return z;
}
//*************************************************************************
void q0(int y)
{
textcolor(3);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": The Father Of Computer Is : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)Charles Babbage";
gotoxy(12,10);cout<<"(B)John Von Neumann ";
gotoxy(12,11);cout<<"(C)John Napier";
gotoxy(12,12);cout<<"(D)Prof. Howard Aiken ";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)Charles Babbage";
gotoxy(12,11);cout<<"(C)John Napier";
}
getans(0);
}
//############################################################################
void q1(int y)
{
textcolor(5);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<":If Dog means Lion,Lion means Deer,Deer means Rabbit,then King of";
gotoxy(12,7);cout<<"Jungle is :";

if(y==0)
{
gotoxy(12,9);cout<<"(A)Dog";
gotoxy(12,10);cout<<"(B)Lion";
gotoxy(12,11);cout<<"(C)Deer";
gotoxy(12,12);cout<<"(D)Rabbit";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)Dog";
gotoxy(12,11);cout<<"(C)Deer";
}
getans(1);
}
//############################################################################
void q2(int y)
{
textcolor(6);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<":Mr.Mohan is Reena's Mother's real brother.Disha is Reena's Sister.";
gotoxy(12,7);cout<<"Then Mr. Mohan is Disha's :";

if(y==0)
{
gotoxy(12,9);cout<<"(A)Father";
gotoxy(12,10);cout<<"(B)Maternal Uncle";
gotoxy(12,11);cout<<"(C)Brother";
gotoxy(12,12);cout<<"(D)Nephew";
}
if(y==1)
{
gotoxy(12,10);cout<<"(B)Maternal Uncle";
gotoxy(12,11);cout<<"(C)Brother";
}
getans(2);
}
//############################################################################
void q3(int y)
{
textcolor(9);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<":If the Code of MOTHER is 693571 and the Code of AUNTY is 84209.";
gotoxy(12,7);cout<<"Then the Code of MARRY is :"<<"\ ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)47661";
gotoxy(12,10);cout<<"(B)68102";
gotoxy(12,11);cout<<"(C)62180";
gotoxy(12,12);cout<<"(D)68119";
}
if(y==1)
{
gotoxy(12,10);cout<<"(B)68102";
gotoxy(12,12);cout<<"(D)68119";
}
getans(3);
}
//############################################################################
void q4(int y)
{
textcolor(11);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<":If Blue is called Yellow ,Yellow is called Green and Green is called";
gotoxy(12,7);cout<<"Red. Then the Colour of Turmeric is : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)Blue";
gotoxy(12,10);cout<<"(B)Red";
gotoxy(12,11);cout<<"(C)Yellow";
gotoxy(12,12);cout<<"(D)Green";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)Blue";
gotoxy(12,12);cout<<"(D)Green";
}
getans(4);
}
//############################################################################
void q5(int y)
{
textcolor(13);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<":A River Flows West To East And On The Turns Left And Goes In A ";
gotoxy(12,7);cout<<"Semicircle Round The Hilllock And Then Turns Left At Right Angles.";
gotoxy(12,8);cout<<"In Which Direction Is The River Finally Flowing : ";

if(y==0)
{
gotoxy(12,9);cout<<"(A)North";
gotoxy(12,10);cout<<"(B)South ";
gotoxy(12,11);cout<<"(C)West ";
gotoxy(12,12);cout<<"(D)East ";
}
if(y==1)
{
gotoxy(12,11);cout<<"(C)West";
gotoxy(12,12);cout<<"(D)East";
}
getans(5);
}
//############################################################################
void q6(int y)
{
textcolor(14);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": You Go North Turn Right Then Right Again And Then Go To Left.";
gotoxy(12,7);cout<<"In Which Direction Are You Now : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)North";
gotoxy(12,10);cout<<"(B)South";
gotoxy(12,11);cout<<"(C)East";
gotoxy(12,12);cout<<"(D)West";
}
if(y==1)
{
gotoxy(12,11);cout<<"(C)East";
gotoxy(12,12);cout<<"(D)West";
}
getans(6);
}
//############################################################################
void q7(int y)
{
textcolor(3);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": There Are 16 Members In A Cricket Team Each Player Gets Daily ";
gotoxy(12,7);cout<<"Allowance Of Rs 5x. Find How Much Expenditure Is Made On Whole Team:";
if(y==0)
{
gotoxy(12,9);cout<<"(A)Rs 80x";
gotoxy(12,10);cout<<"(B)Rs (15+x) ";
gotoxy(12,11);cout<<"(C)Rs (15-x)";
gotoxy(12,12);cout<<"(D)Rs (80+x)";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)Rs 80x";
gotoxy(12,12);cout<<"(D)Rs (80+x)";
}
getans(7);
}
//############################################################################
void q8(int y)
{
textcolor(5);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": Introducing A Man, A Women Said He Is The Only Son Of My Mother's ";
gotoxy(12,7);cout<<"Mother.How Is The Women related To That Man: ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)Mother";
gotoxy(12,10);cout<<"(B)Aunt";
gotoxy(12,11);cout<<"(C)Sister";
gotoxy(12,12);cout<<"(D)Niece";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)Mother";
gotoxy(12,12);cout<<"(D)Niece";
}
getans(8);
}
//############################################################################
void q9(int y)
{
textcolor(6);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": If (p-q) Is 6 More Than (r+s) And (p+q) Is 3 Less Than (r-s) ";
gotoxy(12,7);cout<<"than (p-r) Is: ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)1";
gotoxy(12,10);cout<<"(B)3";
gotoxy(12,11);cout<<"(C)1.5";
gotoxy(12,12);cout<<"(D)-1.5";
}
if(y==1)
{
gotoxy(12,11);cout<<"(C)1.5";
gotoxy(12,12);cout<<"(D)-1.5";
}
getans(9);
}
//############################################################################
void q10(int y)
{
textcolor(9);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": The Length Of A Rectangle With Area 12,Is 3 Times The Rectangle's";
gotoxy(12,7);cout<<" Width. What Is The Perimeter Of Rectangle: ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)8";
gotoxy(12,10);cout<<"(B)11";
gotoxy(12,11);cout<<"(C)15";
gotoxy(12,12);cout<<"(D)16";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)8";
gotoxy(12,12);cout<<"(D)16";
}
getans(10);
}
//############################################################################
void q11(int y)
{
textcolor(11);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": In A Certain Code BRAIN Is Written As *%@#x and TIER Is Written";
gotoxy(12,7);cout<<"As $#+%.How Is RENT Written In That Code : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)%x#$";
gotoxy(12,10);cout<<"(B)%#x$";
gotoxy(12,11);cout<<"(C)%+x$";
gotoxy(12,12);cout<<"(D)+x%$";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)%x#$";
gotoxy(12,11);cout<<"(C)%+x$";
}
getans(11);
}
//############################################################################
void q12(int y)
{
textcolor(13);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": If Rain Is Water,Water Is Road,Road Is Cloud,Cloud Is Sky,Sky Is";
gotoxy(12,7);cout<<"Sea And Sea Is Path .Where Do Aeroplanes Fly : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)Road";
gotoxy(12,10);cout<<"(B)Sea";
gotoxy(12,11);cout<<"(C)Cloud";
gotoxy(12,12);cout<<"(D)Path";
}
if(y==1)
{
gotoxy(12,10);cout<<"(B)Sea";
gotoxy(12,12);cout<<"(D)Path";
}
getans(12);
}
//############################################################################
void q13(int y)
{
textcolor(14);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": A Watch Reads 4:30 If The Minute Hand Points East .In What ";
gotoxy(12,7);cout<<"Direction Will The Hour Hand Point : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)North ";
gotoxy(12,10);cout<<"(B)North-West";
gotoxy(12,11);cout<<"(C)South-East";
gotoxy(12,12);cout<<"(D)North-East";
}
if(y==1)
{
gotoxy(12,11);cout<<"(C)South-East";
gotoxy(12,12);cout<<"(D)North-East";
}
getans(13);
}
//############################################################################
void q14(int y)
{
textcolor(3);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": If X(X+Y+Z)=20;Y(X+Y+Z)=30 And Z(X+Y+Z)=50 Then Th Value Of";
gotoxy(12,7);cout<<" 2(X+Y+Z) Is: ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)20";
gotoxy(12,10);cout<<"(B)-10";
gotoxy(12,11);cout<<"(C)15";
gotoxy(12,12);cout<<"(D)18";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)20";
gotoxy(12,11);cout<<"(C)15";
}
getans(14);
}
//############################################################################
void q15(int y)
{
textcolor(5);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": What Is The Sum Of 2 Consecutive Even No.,The Difference Of Whose ";
gotoxy(12,7);cout<<" Square Is 84 : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)42";
gotoxy(12,10);cout<<"(B)44";
gotoxy(12,11);cout<<"(C)48";
gotoxy(12,12);cout<<"(D)40";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)42";
gotoxy(12,12);cout<<"(D)40";
}
getans(15);
}
//############################################################################
void q16(int y)
{
textcolor(6);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<":If The sum Of X And X+3 Is Greater Than 20,Which Is The Possible ";
gotoxy(12,7);cout<<"value Of X: ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)-10";
gotoxy(12,10);cout<<"(B)-8";
gotoxy(12,11);cout<<"(C)8";
gotoxy(12,12);cout<<"(D)10";
}
if(y==1)
{
gotoxy(12,11);cout<<"(C)8";
gotoxy(12,12);cout<<"(D)10";
}
getans(16);
}
//############################################################################
void q17(int y)
{
textcolor(9);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": If Amar Will Be A Years old In Three Years,Then In Terms Of A,";
gotoxy(12,7);cout<<" How Old Was Amar 5 Years Ago : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)A-5";
gotoxy(12,10);cout<<"(B)A-8";
gotoxy(12,11);cout<<"(C)A-3";
gotoxy(12,12);cout<<"(D)A+5";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)A-5";
gotoxy(12,10);cout<<"(B)A-8";
}
getans(17);
}
//############################################################################
void q18(int y)
{
textcolor(11);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": Neha's Income Is 60% More Than ravi's Income,And Ravi's Income Is";
gotoxy(12,7);cout<<" 40% Less Than Ankit's Income.";
gotoxy(12,8);cout<<" What % Of Ankit's Income Is Neha's Income: ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)121%";
gotoxy(12,10);cout<<"(B)110%";
gotoxy(12,11);cout<<"(C)96%";
gotoxy(12,12);cout<<"(D)20%";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)96%";
gotoxy(12,11);cout<<"(C)20%";
}
getans(18);
}
//############################################################################
void q19(int y)
{
textcolor(13);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": Victory:Encouragement::Failure:? ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)Sadness";
gotoxy(12,10);cout<<"(B)Defeat";
gotoxy(12,11);cout<<"(C)Anger";
gotoxy(12,12);cout<<"(D)Frustration";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)Sadness";
gotoxy(12,12);cout<<"(D)Frustration";
}
getans(19);
}
//############################################################################
void q20(int y)
{
textcolor(14);
cout<<" ";
clrscr();
drawb(2);
printu();
if(y==0)qn++;
gotoxy(6,6);cout<<"@ue "<<qn<<": Newton:Gravitational Force:: ?:Neutron : ";
if(y==0)
{
gotoxy(12,9);cout<<"(A)Chandwick";
gotoxy(12,10);cout<<"(B)Rutherford";
gotoxy(12,11);cout<<"(C)Einstien";
gotoxy(12,12);cout<<"(D)J.J. Thomson";
}
if(y==1)
{
gotoxy(12,9);cout<<"(A)Chandwick";
gotoxy(12,12);cout<<"(D)J.J. Thomson";
}
getans(20);
}
//****************************************************************************
