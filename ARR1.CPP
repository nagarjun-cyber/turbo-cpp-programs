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
  for(i=n-1; i>0; i++)
  printf("%d\n",a[i]);
}
