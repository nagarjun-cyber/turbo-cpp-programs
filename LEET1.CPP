#include<stdio.h>
#include<conio.h>
void main()

{
  int n,a[100],t,i,j;
  printf("How many elements:");
  scanf("%d",&n);

  printf("Enter the elements:");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

  printf("Enter the target:");
  scanf("%d",&t);

  for(i=0; i<n; i++)
   {
   for(j=i+1; j<n; j++)
   {
    if(a[i]+a[j]==t)
    {
    printf("[%d,%d]",i,j);
    }
    }
    }
  }
