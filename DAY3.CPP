#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()

{
  clrscr();
  char str[30][30],ch[30][30];
  int len,i,n,t,count;

  cout<<"Enter number of words:";
  cin>>n;

  cout<<"Enter the words:";
  for(i=0; i<n; i++)
  cin>>str[i];
  count=0;

  for(i=0; i<n; i++)
  {
  strcpy(ch[i],str[i]);
  strrev(str[i]);

  t=strcmp(str[i],ch[i]);
  if(t==0)
  count++;
  }
  count<<"output"<<count;
}