#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()

{
  clrscr();
  char s[100];
  int i,n,l,t,len,start=0,bestlen=1,r;
  cout<<"Enter the string:";
  cin>>s;

  n=strlen(s);
  t=n%2;

  if(t!=0)
  {
  for(i=0; i<n; i++)
  {
  l=i;
  r=i;
  while(l>=0 && r<n && s[l]==s[r])
  {
   len=r-l+1;
    if(len>bestlen)
     {
     bestlen=len;
     start=l;
     }
   l--; r++;
  }
  }
  }
  else
  {
  for(i=0; i<n; i++)
  {
  l=i;
  r=i+1;
  while(l>=0 && r<n && s[l]==s[r])
  {
   len=r-l+1;
    if(len>bestlen)
     {
     bestlen=len;
     start=l;
     }
   l--; r++;
  }
  }
  }
   cout<<"Longest Palindrome:";
  for(i=start; i<start+bestlen; i++)
  cout<<s[i];
}