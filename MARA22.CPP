#include<iostream.h>
#include<conio.h>
void main()

{
   clrscr();
   int n,i,a,b,c;
   cout<<"Enter the number of steps:";
   cin>>n;

   if(n==0 || n==1)
   {
   cout<<"The result at position:"<<"1";
    return;
   }
   a=1;
   b=1;
   for(i=2; i<=n; i++)
   {
   c=a+b;
   a=b;
   b=c;
   }
   cout<<"The result at position:"<<b;
}