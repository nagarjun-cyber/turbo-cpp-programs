#include<iostream.h>
#include<conio.h>
void main()

{
  int weights[100],value[100],includevalue,n,i,w,c,dp[201];
  cout<<"Enter number of bones";
  cin>>n;

  cout<<"Enter the weights of bone:";
  for(i=0; i<n; i++)
  cin>>weights[i];

  cout<<"Enter the magical value of bone";
  for(i=0; i<n; i++)
  cin>>value[i];

  cout<<"Enter the maximum carrying capacity:";
  cin>>c;

  for(i=0; i<=c; i++)
  dp[i]=0;

  for(i=0; i<n; i++)
  {
   for(w=c; w>=weights[i]; w--)
    {
    includevalue=value[i]+dp[w-weights[i]];   // ooru bone vara apparam
						 //mithi evlo space irukkum
    if(includevalue>dp[w])                       //kandu pidikka motha weight
       dp[w]=includevalue;                        //- bone weight w-weight[i]
    }
  }                                             //d[w] means d[w] la than
						//biggest value irukkum
  cout<<dp[c];
}