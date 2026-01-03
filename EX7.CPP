#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,j,n;
  printf("Enter n value=");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
   {
  for(j=n; j>=i; j--)
	   printf("%d",i);
  printf("\n");
}
}