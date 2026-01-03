#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int a[100],n,i,j,s=0,s1=0,big;
  printf("how many number");
  scanf("%d",&n);
  printf("Enter family A income");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  for(i=0; i<n; i++)
  s=s+a[i];
  printf("Enter family B income");
  for(j=0; j<n; j++)
  scanf("%d",&a[j]);
  for(j=0; j<n; j++)
  s1=s1+a[j];
  if(s>s1)
  printf("high income in a family= %d",a[i]);
  else
  printf("high income in b family=%d",a[j]);
  printf("A family income=%d\n",s);
  printf("B family income= %d\n",s1);
  }
