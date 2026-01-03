#include<iostream.h>
#include<conio.h>
void main()

{
  clrscr();
  int a[100],first,second,n,i,j,t,c1=0,c2=0;
  cout<<"Enter the number of elements:";
  cin>>n;

  cout<<"Enter the elements:";
  for(i=0; i<n; i++)
  cin>>a[i];

  for(i=0; i<n; i++)
  {
  for(j=i+1; j<n; j++)
  {
  if(a[i]<a[j])
   {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
   }
  }
  }
  first=a[0];

  for(i=1; i<n; i++)
   {
   if(a[i]!=first)
   {
   second=a[i];
   break;
   }
   }


  for(i=0; i<n; i++)
  {
  if(first==a[i])
  c1++;
  else
  if(second==a[i])
  c2++;
  }
  cout<<"[["<<first<<","<<c1<<"]";
  if(c2>0)
  cout<<",["<<second<<","<<c2<<"]";
  cout<<"]";
}
