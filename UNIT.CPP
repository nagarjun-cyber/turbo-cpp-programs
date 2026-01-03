#include<stdio.h>
#include<conio.h>
void main()

{
   clrscr();
   int cus,pre,cur,unit,type;
   double amount;
   printf("Enter customer code=");
   scanf("%d",&cus);
   arjun: printf("Enter previous reading=");
   scanf("%d",&pre);
   printf("Enter current reading=");
   scanf("%d",&cur);

   if(pre>cur)
   {
    printf("Sorry.....your input reading is wrong\n");

    goto arjun; //unconditional statement arjun label;

   }

    unit=cur-pre;

    printf("Enter your type=");
    scanf("%d",&type);

   if(type==1)
   {
   if(unit<=100)
      amount=unit*1.25;
   else
	 if(unit<=200)
	    amount=100*1.25+(unit-100)*1.50;
	 else
		if(unit<=300)
		   amount=100*1.25+100*1.50+(unit-200)*2;
		else
			if(unit<=400)
			  amount=100*1.25+100*1.50+100*2+(unit-300)*2.50;
			else
			  amount=100*1.25+100*1.50+100*2+100*2.50+(unit-400)*3;
     }

     else
     {
	if(unit<=500)
	   amount=unit*10;
	else
	      if(unit<=1000)
		  amount=unit*15;
	      else
		       if(unit<=2000)
			  amount=unit*20;
		       else
			  amount=unit*30;

     }
   printf("Unit=%d\n",unit);
   printf("EB amount= %lf",amount);
}







