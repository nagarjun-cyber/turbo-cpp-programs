#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int t,e,m,s,ss,total;
  float avg;
  printf("enter the five subject marks");
  scanf("%d%d%d%d%d",&t,&e,&m,&s,&ss);
  total=t+e+m+s+ss;
  avg=total/5;
  printf("Total = %d\n",total);
  printf(" Average =%f\n",avg);
  if(t>34&&e>34&&m>34&&s>34&&ss>34)
  printf("result=Pass\n");
  else
  printf("result =Fail\n");
  if(avg>=80)
     printf("class=Distinction");
  else
       if(avg>=70)
	  printf("class=First");
       else
	       if(avg>=60)
		  printf("class=Second");
	       else
		  printf("class=Third");

}