#include<stdio.h>
#include<conio.h>
void main()

{
   clrscr();
   int n,i;
   printf("Enter the n value=");
   scanf("%d",&n);
   for(i=1; i<=20; i++)
   printf("%d*%d=%d\n",i,n,i*n);

}