#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,m,a[100],i,c,j;
  printf("How many number=");
  scanf("%d",&n);
  printf("Enter the elements value");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("Enter the searching elements");
  scanf("%d",&m);
   c=0;
   for(j=0; j<n; j++)
   {
   if(m==a[j])
   c++;
   }
	if(c==0)
	   printf("%d is not found",m);
	else
	   printf("%d is present %d times",m,c);
}