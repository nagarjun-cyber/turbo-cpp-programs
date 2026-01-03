#include<stdio.h>
void main()

{
   int n,i,j,a[100],t,c1=0,c2=0,first,second;
   printf("How many number:");
   scanf("%d",&n);
   printf("Enter the number:");
   for(i=0; i<n; i++)
   scanf("%d",&a[i]);

   for(i=0; i<n; i++)
    {
     for(j=i+1; j<n; j++)
     {
      if(a[i]<a[j])
      {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
      }
    }
   }
   first=a[0];
   for(i=1; i<n; i++)
   {
    if(first!=a[i])
    {
     second=a[i];
     break;
    }
   }
   for(i=0; i<n; i++)
   {
    if(first==a[i])
     c1++;
     else
	if(second!=a[i])
	 c2++;
   }
    printf("[[\"%d,%d\"]",first,c1);
    if(c2>0)
    printf("[\"%d,%d\"]",second,c2);
    printf("]");
}
