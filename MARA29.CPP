#include<iostream.h>
void main()

{
  int n,st[100],end[100],i,j,t1,t2,prevend,count=1;
  cout<<"Enter number of classes:";
  cin>>n;

  cout<<"Enter the start and end time";
  for(i=0; i<n; i++)
  cin>>st[i]>>end[i];

  for(i=0; i<n; i++)
   {
   for(j=i+1; j<n; j++)
    {
     if(end[i]>end[j])
     {
      t1=st[i];
      st[i]=st[j];
      st[j]=t1;

      t2=end[i];
      end[i]=end[j];
      end[j]=t2;

     }
   }
  }
     prevend=end[0];
     for(i=1; i<n; i++)           //st[i]>=prevend means puthi aramban
			       //munthaya class mudintha piraku vanthal
			    //overlap illai count++
      {
       if(st[i]>=prevend)
       {
	 prevend=end[i];
	 count++;
      }
      }
   cout<<"Maximun number of non-overlapping classes:"<<count;
}