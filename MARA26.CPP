#include<iostream.h>
void main()

{
  int a[100][100],i,j,r,r1,r2,c,c1,c2,vaild,brow,bcol;
  cout<<"Enter sudoko numbers 1to9 ,use 0 for empty cells:";
  for(i=0; i<9; i++)
  for(j=0; j<9; j++)
  cin>>a[i][j];

  vaild=1;

  for(r=0; r<9; r++)
  {
  for(c1=0;  c1<9; c1++)
  {
  for(c2=c1+1; c2<9; c2++)
  {
  if(a[r][c1]==0||a[r][c2]==0)
  continue;
  if(a[r][c1]==a[r][c2])
  vaild=0;
  }
  }
  }
  for(c=0; c<9; c++)
  {
  for(r1=0; r1<9; r1++)
   {
   for(r2=r1+1; r2<9; r2++)
   {
   if(a[r1][c]==0||a[r2][c]==0)
   continue;
   if(a[r1][c]==a[r2][c])
   vaild=0;
 }
 }
 }
   for(brow=0; brow<9; brow=brow+3)
    {
    for(bcol=0; bcol<9; bcol=bcol+3)
    {
     for(i=0; i<9; i++)
     {
     r1=brow+i/3;
     c1=bcol+i%3;
     for(j=i+1; j<9; j++)
      {
      r2=brow+j/3;
      c2=bcol+j%3;
      if(a[r1][c1]==0 || a[r2][c2]==0)
      continue;
      if(a[r1][c1]==a[r2][c2])
      vaild=0;
      }
     }
     }
     }
   if(vaild==1)
    cout<<"true";
   else
    cout<<"false";
 }
