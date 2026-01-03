#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,s,r,p;
  printf("Enter the n value= ");
  scanf("%d",&n);
  s=0; p=n;
  while(n>0)
  {
   r=n%10;
   s=s*10+r;
   n=n/10;
  }
  if(p==s)
  printf("%d is a palindrome",s);
  else
  printf("%d is not a palindrome",p);

}
