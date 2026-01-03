#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,j,n,p,sum=0;
  printf("Enter n value");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
  p=1;
  for(j=1; j<=i;j++)
  p=p*j;
  sum=sum+p;
  }
  printf("%d",sum);


}