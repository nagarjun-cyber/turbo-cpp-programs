#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,j,n,a,b;
  printf("Enter the row and column:");
  scanf("%d%d",&a,&b);
  for(i=1; i<=a; i++)
  {
   for(j=1; j<=b; j++)
   {
   if(i==1 || i==a || j==1 || j==b)
   printf("*");
   else
   printf(" ");
   }
   printf("\n");
   }

}