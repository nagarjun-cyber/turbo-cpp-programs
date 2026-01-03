#include<stdio.h>
#include<conio.h>
void main()


{
  clrscr();
  int i,j,n;
  printf("Enter the n value=");
  scanf("%d",&n);
  for(i=n; i>=1; i--)
  {
   for(j=n; j>=i; j--)
   printf("%d",i);
   printf("\n");
  }
}