#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()

{
  clrscr();
  char n;
  scanf("%c",&n);
  if(isalnum(n))
     printf("%c is not a special char",n);
  else
     printf("%c is special char",n);
}