#include<stdio.h>
#include<conio.h>
void main()

{
   clrscr();
   int cus,pre,cur,unit;
   float amount;
   printf("Enter customer code");
   scanf("%d",&cus);
   printf("Enter previous reading");
   scanf("%d",&pre);
   printf("Enter current reading");
   scanf("%d",&cur);
   unit=cur-pre;
   printf(" unit= %d\n",unit);

   if(unit<=100)
     amount=unit*1.25;
   else
	if(unit<=200)
	  amount=unit*1.50;
	else
		if(unit<=300)
		  amount=unit*2;
		else
			if(unit<=400)
			  amount=unit*2.50;
			else
			  amount=unit*3;

    printf("EB amount= %f",amount);




}