#include<iostream.h>
#include<conio.h>
void main()

{
  int n,a[100],k,i,j,t;
  cout<<"How many elements:";
  cin>>n;

  cout<<"Enter the elements:";
  for(i=0; i<n; i++)
  cin>>a[i];

  cout<<"Enter the k value:";
  cin>>k;

  for(i=0; i<n; i++)
  {
  for(j=i+1; j<n; j++)
  {
  if(a[i]>a[j])
  {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
  }
  }
  }
  for(i=0; i<n; i++)
  {
  if(i==k-1)
  cout<<a[i];
  }
}