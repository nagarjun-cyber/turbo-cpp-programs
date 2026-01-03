#include<ctype.h>
#include<iostream.h>
#include<string.h>
void main()

{
  char s[100];
  int i,l,j,len;
  int count=0;
  cout<<"Enter the string:";
  cin>>s;
  len=0;
  while(s[len]!='\0')
  {
 // s[len]=tolower(s[len]); Did not use this program
  len++;
  }
  for(i=0; i<len; i++)
  {
  int same=0;
  for(j=0; j<len; j++)
  {
	 if(s[i]==s[j])
	 {
	 same++;
	 }
  }
	 if(same==1)
	 {
	 count++;
	 }
  }
  cout<<count;
  }



