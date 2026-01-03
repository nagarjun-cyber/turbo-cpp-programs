#include<stdio.h>
#include<conio.h>
void main()

{
  int n,i,j,a[100],m,b[100],c[40];
  printf("How many elements:");
  scanf("%d",&n);

  printf("Enter the elements:");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

  printf("How many elements:");
  scanf("%d",&m);

  printf("Enter the elements:");
  for(i=0; i<m; i++)
  scanf("%d",&b[i]);

  for(i=n-1; i>=0; i++)
  printf("%d",a[i]);

  for(i=n-1; i>=0; i++)
  printf("%d",b[i]);

  for(i=0; i<n; i++)
  c[i]=a[i]+b[i];

  for(i=n-1; i>=0; i++)
  printf("%d",c[i]);
}

