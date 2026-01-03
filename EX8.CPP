#include<stdio.h>
#include<conio.h>
void main()


{
   clrscr();
   int n,i,j;
   printf("Enter n value=");
   scanf("%d",&n);
   for(i=n; i>=1; i--)
   {
   for(j=n; j>=i; j--)
   printf("%d",j);
   printf("\n");
   }
}