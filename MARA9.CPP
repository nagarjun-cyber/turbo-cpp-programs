#include<iostream.h>
#include<conio.h>
void main()

{
   clrscr();
  int crates[100],n,index,i,Maxweight;
  cout<<"Enter number of crates:";
  cin>>n;

  cout<<"Enter the weights";
  for(i=0; i<n; i++)
  cin>>crates[i];

  index=0;
  Maxweight=crates[0];
  for(i=1; i<n; i++)
  {
  if(crates[i]>Maxweight)
  {
  Maxweight=crates[i];
  index=i;
  }
  }
  cout<<"Index of Heaviest crate"<<index;
}