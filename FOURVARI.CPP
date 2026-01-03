#include<stdio.h>
void main ()
{
 int a,b,c,d;
 printf("Enter the a value=");
 scanf("%d",&a);
 printf("Enter the b value=");
 scanf("%d",&b);
 printf("Enter the c value=");
 scanf("%d",&c);
 printf("Enter the d value=");
 scanf("%d",&d);
 if(a>b && a>c && a>d)
	 printf("%d is bigger than b,c and d",a);
 else
	if(b>c && b>d)
		printf("%d is bigger than c and d",b);
	else
		if(c>d)
			printf("%d is bigger than d",c);
		else
			printf("%d is biggest",d);

}






