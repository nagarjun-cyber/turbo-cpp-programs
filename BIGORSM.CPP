#include<stdio.h>
void main()

{
  int a,b,c;
  printf("enter a value=\n");
  scanf("%d",&a);
  printf("enter b value=\n");
  scanf("%d",&b);
  printf("enter c value=\n");
  scanf("%d",&c);
  if(a>b && a>c)
	printf("%d is bigger than b and c",a);
  else
	if(b>c)
	   printf("%d is bigger than c",b);
	else
	   printf("%d is biggest ",c);

}