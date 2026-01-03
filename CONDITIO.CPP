#include<stdio.h>
void main()
{
  int a;
  printf("Enter your age");
  scanf("%d",&a);
  if(a>17)
  printf("eligible for vote= %d",a);
  else
  printf(" not eligible for vote = %d",a);

}