#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()

{
  clrscr();
  char a[100][100];
  int i,n,j,count=0;
  cout<<"Enter number of drinks:";
  cin>>n;

  cout<<"Enter the drinks:";
  for(i=0; i<n; i++)
  cin>>a[i];


  for(i=0; i<n; i++)
  {
   for(j=i+1; j<n; j++)
   {
    count++;
    if(strcmp(a[i],a[j])==0)
     count--;
   }
 }
  cout<<count;
 }