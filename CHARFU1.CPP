#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()

{
  clrscr();
  char n;
  scanf("%c",&n);
  if(isalpha(n))
  printf("%c is a alphabet",n);
  else
  printf("%c is not a alphabet",n);



}