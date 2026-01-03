#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int c,r,s;
  printf("Enter the radius");
  scanf("%d",&r);

  printf("1.circum of circle\n");
  printf("2. area of circle\n");

  printf("Enter your choice");
  scanf("%d",&c);

  switch(c)
  {
  case 1:
    s=3.14*r*r;
    break;

  case 2:
    s=2*3.14*r;
    break;

  default:
    printf("wrong choice\n");

  }
  printf("sum %d",s);
}
