#include<iostream.h>
void main()

{
  int n,jumps[100],i;
  cout<<"Enter number of jumps";
  cin>>n;

  cout<<"Enter the jumps heights";
  for(i=0; i<n; i++)
  cin>>jumps[i];

  cout<<"after reverse the array";
  for(i=n-1; i>=0; i--)
  cout<<jumps[i]<<"\n";

}