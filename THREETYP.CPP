#include<stdio.h>
void main()
{
   int n,sum1,sum2,sum3,total;
   printf("Enter the n value= \n");
   scanf("%d",&n);
   sum1=n*(n+1)/2;
   scanf("%d",&n);
   sum2=n*(n+1)*(2*n+1)/6;
   scanf("%d",&n);
   sum3=n*(n+1)/2;
   total=sum3*sum3;
   printf("value of natural number=  %d\n",sum1);
   printf("value of square number= %d\n",sum2);
   printf("value of cube number= %d\n",total);




}