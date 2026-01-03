#include<stdio.h>
#include<conio.h>
void main()

{
   clrscr();
   int a,b;
   printf("enter a value");
   scanf("%d",&a);
   printf("enter b value");
   scanf("%d",&b);

   if(a>b)
      printf("%d is biggest than %d",a,b);
   else
      printf("%d is biggest than %d",b,a);
}