#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<dos.h>
#include<graphics.h>
#include<iostream.h>
#include<process.h>
#define MAX 300
int t[MAX];
int count1;
void name();
void welcome();
void naive();
void horsalgo();
int horspool( char [], char []);
void bad_table(char []);
//**********************************************
void main()
{
clrscr();
welcome();
clrscr();
name();
clrscr();
while(1)
{
clrscr();
int ch;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(12);
rectangle(0,0,639,479);
gotoxy(6,6);printf("1.Naive algorithm");
gotoxy(6,7);printf("2.Horspool algoritm");
gotoxy(6,8);printf("3.Exit");
gotoxy(6,9);printf("Enter your choice:");
gotoxy(25,9);scanf("%d",&ch);
switch(ch)
{
case 1:naive();
	break;
case 2:horsalgo();
	break;
case 3:exit(0);
	break;
default:gotoxy(6,12);printf("\nEnter a valid choice:");
}
}
getch();
closegraph();
}
//************************************************
void welcome()
{
int f=0;
top:
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//setcolor(3);
settextstyle(10,0,7);
setcolor(12);
outtextxy(50,140,"W");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
setcolor(2);
outtextxy(160,140,"E");
if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
setcolor(6);
outtextxy(220,140,"L");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
setcolor(5);
outtextxy(280,140,"C");
if(f==0){for(long int i=0;i<10000000;++i);cleardevice(); }
setcolor(4);
outtextxy(340,140,"O");
if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
setcolor(1);
outtextxy(400,140,"M");
if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
setcolor(6);
outtextxy(480,140,"E");
if(f==0){for(long int i=0;i<10000000;++i); cleardevice();}
f++;
if(f==1)goto top;
getch();
closegraph();
}

//************************************************
void name()
{
clrscr();
int f=1;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
settextstyle(7,0,5);
setcolor(10);
rectangle(0,0,639,479);
setcolor(11);
rectangle(3,3,636,476);
setcolor(12);
rectangle(6,6,633,473);
setcolor(4);
rectangle(9,9,630,470);
setcolor(13);
top:outtextxy(200,50,"Comparative ");
setcolor(12);
if(f==1)delay(300);
outtextxy(230,100,"Analysis ");
setcolor(1);
if(f==1)delay(300);
outtextxy(240,150,"between ");
setcolor(2);
if(f==1)delay(300);
outtextxy(250,200,"Naive");
setcolor(3);
if(f==1)delay(300);
outtextxy(260,250,"And");
setcolor(5);
if(f==1)delay(300);
outtextxy(220,300,"Horspool");
setcolor(14);
if(f==1)delay(300);
outtextxy(200,350,"Algorithm");
if(f==1)
{
delay(300);
f=0;
goto top;
}
getch();
closegraph();
}

//*************************************************
void naive()
{
int count=0;
int c=0;
int i,m,n,s;
 double diff1;
 time_t end1,beg1;
 char t[100], p[100];
 fflush(stdin);
 setcolor(4);
 gotoxy(6,11);cout<<"Enter text : ";
 gotoxy(25,11);gets(t);
 fflush(stdin);
 gotoxy(6,12);cout<<"Enter pattern : ";
 gotoxy(25,12);gets(p);
 fflush(stdin);
 m=strlen(t);
 n=strlen(p);
 gotoxy(6,14);printf("length of text:%d",m);
 gotoxy(6,15);printf("length of pattern:%d",n);
 beg1=clock();
for(s=0;s<m;s++)
{ int a=0,i=s;
c=0;
delay(100);
  while((a<n)&&(i<m))
  {
  count++;
   if(p[a]==t[i])
   {
    a++;
    i++;
    c++;
   }
  else
  {
   break;
  }
  }
 if(c==n)
 break;
}
end1=clock();
diff1=(double)((end1-beg1)/CLOCKS_PER_SEC);
gotoxy(6,16);printf("Time taken:%lf",diff1);
gotoxy(6,17);printf("No of comparisions:%d",count);
if(c==n)
{
 gotoxy(6,18);printf("Pattern exist at position:%d",s+1);
}
else
{
 gotoxy(6,18);printf("Pattern doesnot exist in the text");
}
getch();
}

//*************************************************
void horsalgo()
{
char p[100];
char text[100];
int position;
 double diff;
 time_t beg,end;
 fflush(stdin);
 gotoxy(6,11);printf("Enter text:");
 gotoxy(25,11);gets(text);
 fflush(stdin);
 gotoxy(6,12);printf("Enter pattern:");
 gotoxy(25,12);gets(p);
 fflush(stdin);
 bad_table(p);
 beg=clock();
 delay(100);
 position=horspool(text,p);
 end=clock();
 diff=(double)((end-beg)/CLOCKS_PER_SEC);
 gotoxy(6,16);printf("Time taken:%lf",diff);
 gotoxy(6,17);printf("No of comparisions:%d",count1);
 if(position>=0)
 {
  gotoxy(6,18);printf("Pattern exist at position:%d",position+1);
 }
 else
 {
 gotoxy(6,18);printf("Pattern doesnot exist in the text");
 }
 getch();
}
//**********************************************
void bad_table(char p[])
{
 int m,i,j,k;
 m=strlen(p);
 for(i=0;i<MAX;i++)
 {
   t[i]=m;
 }
 for(j=0;j<m-1;j++)
 {
  t[p[j]]=m-1-j;
 }
}
//**********************************************
int horspool( char text[], char p[])
{
count1=0;
 int i,j,k,m,n;
 n=strlen(text);
 m=strlen(p);
 gotoxy(6,14);printf("Length of text:%d",n);
 gotoxy(6,15);printf("Length of pattern:%d",m);
 i=m-1;
 while(i<n)
 {
  k=0;
  count1++;
  while((k<m)&&(p[m-1-k]==text[i-k]))
  {
   k++;
  }
  if(k==m)
   return(i-m+1);
  else
  i+=t[text[i]];
 }
 return(-1);
}
//*********************************************
