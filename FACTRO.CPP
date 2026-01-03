 #include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,i,p;
  printf("Enter n value");
  scanf("%d",&n);
  p=1;
  for(i=1; i<=n; i++)
  {
    p=p*i;
    printf("%d\n",p);
  }
}