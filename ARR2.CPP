#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,a[100],n;
  printf("how many number");
  scanf("%d",&n);
  printf("Enter the number");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("Output\n");
  for(i=0; i<n; i++)
  if(a[i]>0)
  printf(" %d is positive number\n",a[i]);
  else
  printf("%d is negative number\n",a[i]);
}
