#include<stdio.h>
#include<conio.h>
void main()

{  clrscr();
   float comm,sales;
   printf("Enter sales amount=");
   scanf("%f",&sales);

   if(sales<=5000)
     comm=0;
   else
	 if(sales<=8000)
	   comm=sales/100*5;
	 else
		if(sales<=15000)
		  comm=sales/100*10;
		else
		      if(sales<=25000)
			comm= sales/100*12;
		       else
			     if(sales<=30000)
				 comm=sales/100*15;
			     else
				 comm=sales/100*20;

    printf("comm amount %f",comm);
    }