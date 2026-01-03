#include<iostream.h>
#include<conio.h>
void main()

{
   clrscr();
   int i,n,a[100];
   cout<<"How many elemets";
   cin>>n;
   cout<<"enter the elements";
   for(i=0; i<n; i++)
   cin>>a[i];
   cout<<"output\n";
   for(i=n-1; i>=0; i--)
   cout<<a[i]<<"\n";
}