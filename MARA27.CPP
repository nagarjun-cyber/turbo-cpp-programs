#include<iostream.h>
#include<string.h>
void main()

{
   int i,n,j;
   char types[10][10],grid[10][10][20];
   cout<<"How many words:";
   cin>>n;

   cout<<"Enter the words:";
   for(i=0; i<n; i++)
   cin>>types[i];

   for(i=0; i<n; i++)
   {
    for(j=0; j<n; j++)
    {
     strcpy(grid[i][j],types[(i+j)%n]);
     }
   }
   cout<<"[";
   for(i=0; i<n; i++)
   {
    cout<<"[";
    for(j=0; j<n; j++)
    {
     cout<<"\""<<grid[i][j]<<"\"";
     if(j!=n-1)
     cout<<",";
     }
     cout<<"]";
     if(i!=n-1)
     cout<<",";
     }
     cout<<"]";

}