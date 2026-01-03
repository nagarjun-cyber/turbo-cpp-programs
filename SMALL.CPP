#include<stdio.h>
void main()

{
  int a,b,c,d;
  printf("Enter a value");
  scanf("%d",&a);
  printf("Enter b value");
  scanf("%d",&b);
  printf("Enter c value");
  scanf("%d",&c);
  printf("Enter d value");
  scanf("%d",&d);

  if(a<b && a<c && a<d)
	printf("%d is smaller than b,c and d",a);
  else
	  if(b<c && b<d)
	       printf("%d is smaller than c and",b);
	  else
		if(c<d)
			printf("%d is smaller than d",c);
		else
			printf("%d is smaller",d);


}