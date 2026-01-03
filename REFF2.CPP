#include<conio.h>
#include<stdio.h>
void main()

{
   clrscr();
   float sales,comm,per;
   printf("Enter sales amount=");
   scanf("%f",&sales);

   if(sales<=5000)
   {
    per=0;
    comm=0;
   }
   else
	  if(sales<=8000)
	  {
	   per=5;
	   comm=sales/100*5;
	  }
	  else
		    if(sales<=15000)
		    {
		     per=10;
		     comm=sales/100*10;
		    }
		    else
			     if(sales<=25000)
			     {
			      per=12;
			      comm=sales/100*12;
			     }
			     else
					if(sales<=30000)
					{
					 per=15;
					 comm=sales/1000*15;
					 }
					 else
					 {
					 per=20;
					 comm=sales/100*20;
					 }

   printf("commission per= %f\n",per);
   printf("commission amount= %f\n",comm);

}