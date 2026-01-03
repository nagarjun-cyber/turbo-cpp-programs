#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,p,s,r;
  printf("Enter n value=");
  scanf("%d",&n);
  s=0; p=n;
  while(n>0)
  {
   r=n%10;
   s=s+r*r*r;
   n=n/10;
  }
  if(p==s)
  printf("%d is armstrong number",s);
  else
  printf("%d is not armstrong number",p);

}