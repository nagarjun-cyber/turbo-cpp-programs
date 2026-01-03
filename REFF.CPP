#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  long int sales;
  float comm,per;

  printf("Enter the sales amount=");
  scanf("%ld",&sales);

  if(sales<=10000)
  {
    per=0;
    comm=0;
  }
  else
	 if(sales<=20000)
	 {
	   per=10;
	   comm=sales/100*10;
	 }
	 else
		  if(sales<=30000)
		  {
		    per=20;
		    comm=sales/100*20;
		  }
		  else
			if(sales<=40000)
			   {
			     per=30;
			     comm=sales/100*30;
			    }
			 else
			    {
			     per=45;
			     comm=sales/100*45;
			    }

    printf("commission per= %f\n",per);
    printf("commission amount= %f\n",comm);



}