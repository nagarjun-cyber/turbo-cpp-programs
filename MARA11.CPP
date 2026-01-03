#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()

{
  clrscr();
  char paths[100],pattern[100];
  int n,m,i,j,count=0;
  cout<<"Enter the paths:";
  cin>>paths;

  cout<<"Enter the pattern:";
  cin>>pattern;

  n=strlen(paths);
  m=strlen(pattern);

  for(i=0; i<=n-m; i++)
  {
   j=0;
  while(j<m && paths[i+j]==pattern[j])
  {
  j++;
  }
  if(j==m)
  count++;
  }
   cout<<count;
  }