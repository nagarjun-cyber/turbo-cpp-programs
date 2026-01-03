#include<iostream.h>
void main()
{
  int n,s[100],i,j,c=0,m=0,r;
  cout<<"enter number of sightings";
  cin>>n;

  for(i=0; i<n; i++)
  cin>>s[i];

  r=s[0];
  for(i=0; i<n; i++)
  {
  for(j=0; j<n; j++)
  {
   c=0;
   if(s[i]==s[j])
   {
    c++;
   }
  }
  if(c>m || (c==m && s[i]<r))
  {
  m=c;
  r=s[i];
  }
 }
 cout<<r;

}