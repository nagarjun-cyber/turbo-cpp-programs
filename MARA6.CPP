#include<iostream.h>
void main()

{
  int i,n,k,arr[100];
  cout<<"Enter the number";
  cin>>n;

  cout<<"Enter the number";
  for(i=0; i<n; i++)
  cin>>arr[i];

  cout<<"enter the k value";
  cin>>k;
  k=k%n;

  for(i=n-k; i<n; i++)
  {
  cout<<arr[i]<<"\t";
  }
  for(i=0; i<n-k; i++)
  {
  cout<<arr[i]<<"\t";
  }
  }
