#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,treasures[100],t,i,k,num,sum,j,sum2;
  cout<<"How many number";
  cin>>n;

  cout<<"Enter the number";
  for(i=0; i<n; i++)
  cin>>treasures[i];

  cout<<"Enter your target";
  cin>>t;

  sum=0;
  for(i=0; i<n; i++)
  {
    for(j=i+1; j<n; j++)
    {
       if(treasures[i]+treasures[j]==t)
       {
       sum=1;
       break;
       }
     }
  }

 /* if(sum==0)
  {
   for(i=0; i<n; i++)
  {
    for(j=i+1; j<n; j++)
    {
       for(k=j+1; k<n; k++)
       {
       if(treasures[i]+treasures[j]+treasures[k]==t)
       {
       sum=1;
       break;
       }
       if(sum==1)
       break;
     }
     if(sum==1)
     break;
  }
  }
  }*/
  if(sum==1)
  cout<<"Yes";
  else
  cout<<"No";
  }

