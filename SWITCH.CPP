#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,s,c,t;
  printf("Enter the no ");
  scanf("%d",&n);

  printf("1.sum of natural\n");
  printf("2.sum of square of natural\n");
  printf("3.sum of cube of natural\n");

  printf("Enter your choice");
  scanf("%d",&c);

  switch(c)
  {
  case 1:
    s=n*(n+1)/2;
    break;

  case 2:
    s=n*(n+1)*(2*n+1)/6;
    break;

  case 3:
    t=n*(n+1)/2;
    s=t*t;
    break;

  default:
    printf("wrong choice\n");

  }
  printf("sum %d",s);
}
