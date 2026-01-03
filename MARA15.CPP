#include<iostream.h>
#include<conio.h>
void main()

{
  clrscr();
  int a[100],n,t,i,j;
  cout<<"Enter number of scraps";
  cin>>n;

  cout<<"Enter the size of each scrap";
  for(i=0; i<n; i++)
  cin>>a[i];

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
 cout<<a[i]<<"\t";
}
