#include<stdio.h>
#include<conio.h>
void main()

{
  int r,c;
  float s;
  clrscr();
  printf("Enter the radius");
  scanf("%d",&r);

  printf("1.circum of circle\n");
  printf("2. area of circle\n");

  printf("Enter the choice");
  scanf("%d",&c);

  switch(c)
  {
  case 1:
    s=2*3.14*r;
    printf("circumference of circle=%f",s);
    break;
  case 2:
    s=3.14*r*r;
    printf("area of circle= %f",s);
    break;

   default:
    printf("wrong choice");
  }


}