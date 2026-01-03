#include<stdio.h>
#include<conio.h>
void main()


{
  clrscr();
  int n,s,p,r,total;
  printf("Enter the n value=");
  scanf("%d",&n);

  s=0; p=1;
  while(n>0)
  {
   r=n%10;
   s=s+r;
   p=p*r;
   n=n/10;
  }
  total=p-s;
  printf(" Result=%d",total);
}