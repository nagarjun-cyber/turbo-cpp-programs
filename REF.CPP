#include<stdio.h>
#include<conio.h>
void main()

{
clrscr();

    float comm,sales;
    printf("Enter sales amount=\n");
    scanf("%f",&sales);
    if(sales<=10000)
	 comm=0;
    else
	if(sales<=20000)
	   comm=sales/100*10;
	      else
		if(sales<=30000)
		   comm=sales/100*20;
		     else
		       if(sales<=40000)
			  comm=sales/100*30;
			   else
			     comm=sales/100*45;
    printf("comm amount = %f",comm);





}