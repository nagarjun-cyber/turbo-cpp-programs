#include<iostream.h>
#include<conio.h>
void main()

{
  clrscr();
  int a[100],n,k,t,total=0,sum,count,i,j;
  cout<<"Enter number of badges:";
  cin>>n;

  cout<<"Enter badges score:";
  for(i=0; i<n; i++)
  cin>>a[i];

  cout<<"enter the targert score:";
  cin>>k;

  for(i=0; i<n; i++)
  total=total+a[i];

  if(k>total)
  {
   cout<<"-1";
  return;
   }
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
   sum=0; count=0;
   for(i=0; i<n; i++)
   {
   sum=sum+a[i];
    count++;
    if(sum>=k)
    break;
   }
   cout<<count;
}