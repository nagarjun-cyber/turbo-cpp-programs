#include<stdio.h>
#include<string.h>
void main()

{
   char a[100];
   int l,i;
   printf("Enter the string:");
   gets(a);
   l=strlen(a);
   for(i=l; i>=0; i--)
   printf("%c",a[i]);
}













































