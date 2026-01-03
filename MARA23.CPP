#include<iostream.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,i,a,b,c;
  cout<<"Enter the number of the firefly:";
  cin>>n;

  if(n<1)
  {
   cout<<"INvaild input";
   return;
  }

  if(n==1 || n==2)
  {
  cout<<"The brightness of firefly:"<<"1";
  return;
  }

  a=1;
  b=1;
  for(i=3; i<=n; i++)
  {
  c=a+b;
  a=b;
  b=c;
  }
  cout<<"The brightness of firefly:"<<b;
}