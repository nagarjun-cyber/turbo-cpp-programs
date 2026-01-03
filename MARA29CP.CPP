#include<iostream.h>
#include<conio.h>
void main()

{
  int n,weights[100],value[100],i,w;
  cout<<"how many weights and value:";
  cin>>n;

  cout<<"Enter the weights:";
  for(i=0; i<n; i++)
  cin>>weights[i];

  cout<<"Enter the value";
  for(i=0; i<n; i++)
  cin>>value[i];

  cout<<"Enter the capacity:";
  cin>>c;

  dp[101]=0;
  for(i=0; i<n; i++)
  {
   for(w=c; w>=weights[i]; w--)
    {
    includevalue=value[i]+dp[w-weights[i]];
    excludevalue=dp[w];

    if(includevalue>exculdevalue)
       dp[w]=includevalue;
    else
       dp[w]=excludevalue;
    }
  }
  cout<<dp[c];
}