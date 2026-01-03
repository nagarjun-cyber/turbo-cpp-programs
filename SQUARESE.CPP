#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n;
  float i,s;
  printf("Enter n value=");
  scanf("%d",&n);
   s=0;
  for(i=1;  i<=n; i++)
  s=s+i/(i*i);
  printf("sum= %d",s);
}