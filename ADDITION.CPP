#include<stdio.h>
#include<conio.h>
void main()


{
  clrscr();
  int i,n;
  printf("Enter n value");
  scanf("%d",&n);
  for(i=1; i<=20; i++)
  printf("%d+%d=%d\n",i,n,i+n);


}