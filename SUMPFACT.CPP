#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,i,p,sum;
  printf("Enter n value");
  scanf("%d",&n);
  p=1; sum=0;
  for(i=1; i<=n; i++)
  {
   p=p*i;
   sum=sum+p;
  }
  printf("product= %d\n",p);
  printf("sum= %d",sum);
}