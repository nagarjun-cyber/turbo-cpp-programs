#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,j,n,a[100],t;
  printf("How many elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

  for(i=0; i<n; i++)
  {
  for(j=i+1; j<n; j++)
    {
  if(a[i]>a[j])
    {
    a[i]=t;
    a[i]=a[j];
    a[j]=t;
    }
    }
  }

  printf("Ascending order\n");
  for(i=0; i<n; i++)
  printf("%d\n",a[i]);





}