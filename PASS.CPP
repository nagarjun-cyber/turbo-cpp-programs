#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int t,e,m,s,ss;
 printf("Enter the five subject marks");
 scanf("%d%d%d%d%d",&t,&e,&m,&s,&ss);
 if(t>=35&&e>=35&&m>=35&&s>=35&&ss>=35)
  printf("pass");
 else
  printf("fail");


}