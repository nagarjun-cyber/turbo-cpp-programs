#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();

  int n,r;
  printf("Enter the number=");
  scanf("%d",&n);
  r=n%2;
  if(r==0)
  printf("%d is even number ",n);
  else
  printf("%d is odd number",n);


}