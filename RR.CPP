#include<iostream.h>
void main()

{
  int i,r,n,s,j;
  cin>>n;
  for(i=1; i<=n; i++)
  {
  s=0; i=j;
  while(i>0)
  {
  r=i%10;
  s=s*10+r;
  i=i/10;
  }
  if(j==s)
  cout<<s;
  }

}