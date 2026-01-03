
#include<iostream.h>
void markgang(int,int);
int a[100][100];
int m,n;
void main()

{
  int a[100][100],m,n,i,j,gangs;
  cout<<"Enter row and cols:";
  cin>>m>>n;

  cout<<"Enter the elements";
  for(i=0; i<m; i++)
  for(j=0; j<n; j++)
  cin>>a[i][j];

  gangs=0;
  for(i=0; i<m; i++)
  {
   for(j=0; j<n; j++)
   {
   if(a[i][j]==1)
   {
   gangs++;
   markgang(i,j);
   }
   }
   }
   cout<<gangs;
   }

   void markgang(int i, int j)
   {
   int a[100][100],m,n;
   if(i<0 || i>=m || j<0 || j>=n)
   return;
   if(a[i][j]==0)
   return;
   a[i][j]=0;
   markgang(i-1,j-1);
   markgang(i-1,j);
   markgang(i-1,j+1);
   markgang(i,j-1);
   markgang(i,j+1);
   markgang(i+1,j-1);
   markgang(i+1,j);
   markgang(i+1,j+1);
   }