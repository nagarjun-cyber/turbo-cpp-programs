#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()

{
  clrscr();
  int i=0,j=0,k=0,len1,len2;
  char s1[100];
  char s2[100],result[100];
  cout<<"Enter the first string:";
  cin>>s1;
  cout<<"Enter the second string:";
  cin>>s2;

  len1=strlen(s1);
  len2=strlen(s2);

  while(i<len1 || j<len2)
  {
  if(i<len1)
  {
  result[k++]=s1[i++];
  }
     if(j<len2)
     {
     result[k++]=s2[j++];
     }
  }

   result[k]='\0';

  cout<<"Woven strings="<<result;
  }
