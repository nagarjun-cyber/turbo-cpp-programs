#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,i,j,a,b,c;
  printf("Enter the row:");
  scanf("%d",&n);
   a=0; b=1;
  for(i=1; i<=n; i++)
   {
   for(j=1; j<=i; j++)
   {
   printf("%d\t",a);
   c=a+b;
   a=b;
   b=c;
   }
   printf("\n");
   }
}