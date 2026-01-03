#include<stdio.h>
void main()
{
  int n,sum,total;
  printf("Enter the number");
  scanf("%d",&n);
  sum=n*(n+1)/2;
  total=sum*sum;
  printf("value of cube = %d",total);
}