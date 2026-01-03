#include<iostream.h>
#include<conio.h>
void main()

{
   clrscr();
  int a[100],n,i,t,j,dp[100],balance,newcount;
  cout<<"Enter number of coins:";
  cin>>n;

  cout<<"Enter the coins value";
  for(i=0; i<n; i++)
  cin>>a[i];

  cout<<"Enter the target amount";
  cin>>t;

  dp[0]=0;

  for(i=1; i<=t; i++)
  {
  dp[i]=9999;
  }
  for(i=1; i<=t; i++)
   {
   for(j=0; j<n; j++)
   {
   if(a[j]<=i)
   {
   balance=i-a[j];
   newcount=dp[balance]+1;

   if(newcount<dp[i])
   {
   dp[i]=newcount;
   }
   }
   }
   }
   if(dp[t]==9999)
   cout<<"-1";
   else
   cout<<"minimum coins needed"<<dp[t];
}
