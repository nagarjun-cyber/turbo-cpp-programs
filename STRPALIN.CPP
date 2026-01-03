#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()

{
   char s[20],t[20];
   printf("Enter the string:");
   scanf("%s",&s);
   strcpy(t,s);
   strrev(t);
   if(strcmp(t,s)==0)
    printf("%s is a palindrome",s);
   else
    printf("%s is not a palindrome",s);
}