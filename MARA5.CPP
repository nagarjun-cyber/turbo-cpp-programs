#include<iostream.h>
#include<conio.h>
void main()

{
   int i,j,result,sightings[100],count,m;
   clrscr();
   int n;
   cout<<"Enter the number:";
   cin>>n;
   cout<<"enter the number:";
   for(i=0; i<n; i++)
   cin>>sightings[i];
   m=0; result=sightings[0];
   for(i=0; i<n; i++)
   {
   count=0;
   for(j=0; j<n; j++)
   {
   if(sightings[i]==sightings[j])
   {
   count++;
   }                 //m--minimum repeat value

   }
	 if(count>m || count==m && sightings[i]<result)
	{
	m=count;
	result=sightings[i];
	}
    }
    cout<<result;
  }