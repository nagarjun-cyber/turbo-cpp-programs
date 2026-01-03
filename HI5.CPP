#include<iostream.h>
#include<conio.h>
void main()

{
   int n,a[100],i,first,second;
   clrscr();
   cin>>n;

   for(i=0; i<n; i++)
   cin>>a[i];

   first=a[0];
   second=-100000;
   for(i=1; i<n; i++)
   {
   if(a[i]>first)
   {
   first=a[i];
   second=first;
   }
   else
   if(a[i]>second && a[i]!=first)
   {
   second=a[i];
   }
   }
   cout<<first<<second;
 }