#include<stdio.h>
#include<conio.h>
void main()


{
  clrscr();
  int n,i,a[100],big;
  printf("how many number");
  scanf("%d",&n);
  printf("enter the number");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("output\n");
  big=a[0];
  for(i=1; i<n; i++)
  {
  if(a[i]>big)
    big=a[i];
  }
  printf("%d\n",big);

}
