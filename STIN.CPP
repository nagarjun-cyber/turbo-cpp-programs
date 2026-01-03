#include<stdio.h>
#include<string.h>
void main()
{
  char a[100];
  int i,l;
  printf("Enter the string:");
  scanf("%s",&a);

  l=strlen(a);
  for(i=l-1; a[i]!='\0'; i++)
  printf("%c",a[i]);


}