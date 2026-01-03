#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,i;
  printf("Enter n value=");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  printf("%d\n",i*i);
}