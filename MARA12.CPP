#include<iostream.h>
#include<string.h>
void main()

{
   char recipe[100];
   int i,len,count=0;
   cout<<"Enter the string";
   cin>>recipe;

   len=strlen(recipe);

   for(i=0; i<len; i++)
   {
     if(recipe[i]=='(')
	count++;
     else
	     if(recipe[i]==')')//
		count--;

     if(count<0)
       break;
   }

   if(count==0)
   cout<<"True";
   else
   cout<<"False";
}