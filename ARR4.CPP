#include<stdio.h>
#include<conio.h>
void main()


{
  clrscr();
  int a[100],n,i,r;
  printf("how many number=");
  scanf("%d",&n);
  printf("Enter the number");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("output\n");
  for(i=0; i<n; i++)
  {
  r=a[i]%2;
  if(r==0)
  printf("%d is even number\n",a[i]);
  else
  printf("%d is odd number\n",a[i]);
  }



}