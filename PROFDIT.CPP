#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int s,n,r;
  printf("Enter n value=");
  scanf("%d",&n);
  s=1;
  while(n>0)
  {
   r=n%10;
   s=s*r;
   n=n/10;
  }
 printf("product of digit= %d",s);
}