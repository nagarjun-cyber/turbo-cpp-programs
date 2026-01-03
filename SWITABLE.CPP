#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int c,i,n;
  printf("Enter the n value");
  scanf("%d",&n);

  printf("1.Addition table\n");
  printf("2.Subrastion table \n");
  printf("3.Multipication table\n ");

  printf("Enter your choice");
  scanf("%d",&c);

  switch(c)
  {
  case 1:
    for(i=1; i<=20; i++)
    printf("%d+%d=%d\n",i,n,i+n);
    break;

  case 2:
    for(i=1; i<=20; i++)
    printf("%d-%d=%d\n",i,n,i-n);
    break;

  case 3:
    for(i=1; i<=20; i++)
    printf("%d*%d=%d\n",i,n,i*n);
    break;

  default:
    printf("wrong choice\n");

  }
}
