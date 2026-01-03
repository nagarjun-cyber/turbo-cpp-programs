#include<iostream.h>
#include<conio.h>
void main()

{
  clrscr();
  int a[100][100],n,i,j,sd,pd,diff;
  cout<<"Enter the size of the square matrix";
  cin>>n;

  cout<<"Enter the elements of the matrix";
  for(i=0; i<n; i++)
  for(j=0; j<n; j++)
  cin>>a[i][j];

  pd=0;
  sd=0;

  for(i=0; i<n; i++)
  {
   pd=pd+a[i][i];
   sd=sd+a[i][n-i-1];
  }
  diff=pd-sd;

  if(diff<0)
  {
  diff=-diff;
  }
  cout<<"Absolute Difference:"<<diff;
  }