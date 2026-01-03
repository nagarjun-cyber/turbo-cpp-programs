#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()

{
  clrscr();
  char paths[100],pattern[100];
  int k,i,j,count=0;
  cout<<"Enter the paths";
  cin>>paths;

  cout<<"Enter the pattern";
  cin>>pattern;

  for(i=0; paths[i]!='\0'; i++)
  {
  j=0;
  k=i;
  while(pattern[j]!='\0' && paths[k]==pattern[j])
  {
  j++;
  k++;
  }

  if(pattern[j]=='\0')
  {
  count++;
  }
  }
  cout<<count;
  }
