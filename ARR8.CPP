#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,a[100],m,i;
  printf("how many number");
  scanf("%d",&n);
  printf("Enter the n value=");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("Enter the m value");
  scanf("%d",&m);
  for(i=0; i<n; i++)
  if(m==a[i])
  printf("%d available in %d index",m,i);
 // else
 // printf("%d not available in array\n",a[i]);



}