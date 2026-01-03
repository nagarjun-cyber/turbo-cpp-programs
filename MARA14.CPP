#include<iostream.h>
#include<conio.h>
void main()


{
  clrscr();
  int a[100],n,i,j,sum,s,target,found=0;
  cout<<"Enter the value";
  cin>>n;

  cout<<"Enter the weights";
  for(i=0; i<n; i++)
  cin>>a[i];

  sum=0;
  for(i=0; i<n; i++)
  sum=sum+a[i];

  if(sum%2==0)

  {
   target=sum/2;
   for(i=0; i<n; i++)
   {
    s=0;
   for(j=i; j<n; j++)
   {
    s=s+a[j];
    if(s==target)
    {
     found=1;
     break;
    }
    }
    if(found==1)
    break;
    }

    if(found==1)
    cout<<"True";
    else
    cout<<"False";
}
}