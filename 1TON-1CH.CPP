#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,big,n,a[100];
  printf("How many number:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

  big=a[1];
  for(i=2; i<n-1; i++)
  if(big<a[i])
  {
  big=a[i];
  }
  printf("%d is biggest number",big);
}