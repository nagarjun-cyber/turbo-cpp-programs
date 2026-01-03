#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,n,s=0,r;
  printf("Enter n value");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
   r=i%2;
   if(r==0)
    s=s-i;
   else
    s=s+i;
  }
  printf("%d",s);
}