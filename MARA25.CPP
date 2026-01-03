#include<iostream.h>
#include<conio.h>
void main()

{
  clrscr();
  int start[100],end[100],n,i,j,t,t2,s,e;
  cout<<"How many elements:";
  cin>>n;

  cout<<"Enter the elements:";
  for(i=0; i<n; i++)
  cin>>start[i]>>end[i];

  for(i=0; i<n; i++)
   {
  for(j=i+1; j<n; j++)
  {
  if(start[i]>start[j])
   {
   t=start[i];
   start[i]=start[j];
   start[j]=t;

   t2=end[i];
   end[i]=end[j];
   end[j]=t2;
   }
  }
  }

  s=start[0];
  e=end[0];

  for(i=1; i<n; i++)
   {
  if(start[i]<=e)
   {
  // if(end[i]>e)
   e=end[i];
   }
  else
  {
   cout<<"["<<s<<","<<e<<"]";
  s=start[i];
  e=end[i];
  }
  }
  cout<<"["<<s<<","<<e<<"]";
}