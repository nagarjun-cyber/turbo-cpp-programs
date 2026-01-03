#include<stdio.h>
#include<conio.h>
void main()


{
   clrscr();
   int a;
   printf("enter your age");
   scanf("%d",&a);

   if(a>17)
      printf("eligible for vote");
   else
      printf("not eligible for vote");


}