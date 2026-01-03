#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()

{
  clrscr();
  char n;
  scanf("%c",&n);
  if(isdigit(n))
  printf("%c is a number",n);
  else
  printf("%c is not a number",n);

}