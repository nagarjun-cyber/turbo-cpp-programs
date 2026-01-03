#include<iostream.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,i,a[50],s,j;
  cout<<"How many elements";
  cin>>n;
  cout<<"Enter the elements";
  for(i=0; i<n; i++)
  cin>>a[i];
  for(i=0; i<n; i++)
  {
  for(j=i+1; j<n; j++)
    {
      if(a[i]<a[j])
      {
       s=a[i];
       a[i]=a[j];
       a[j]=s;
      }
    }
  }
  cout<<"two largest number"<<a[0]<<"\n"<<a[1];
}