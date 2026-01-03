#include<stdio.h>
#include<conio.h>
void main()


{
  clrscr();
  int n,i,a[100],small;
  printf("how many number");
  scanf("%d",&n);
  printf("enter the number");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("output\n");
  small=a[0];
  for(i=1; i<n; i++)
  {
  if(a[i]<small)
    small=a[i];
  }
  printf("%d\n",small);

}
