#include<iostream.h>
#include<conio.h>
void main()

{
   clrscr();
  int n,m,a[100],already,x,b[100],i,j,c[100],k=0,t;
  cout<<"How many element (n):";
  cin>>n;

  cout<<"Enter the element";
  for(i=0; i<n; i++)
  cin>>a[i];

  cout<<"How many elements(m)";
  cin>>m;

  cout<<"Enter the elemets";
  for(i=0; i<m; i++)
  cin>>b[i];

  k=0;
  for(i=0; i<n; i++)
  {
    for(j=0; j<m; j++)
    {
     if(a[i]==b[j])
      {
       already=0;
	for(x=0; x<k; x++)
	{
	if(c[x]==a[i])
	{
	already=1;
	break;
	}
	}
      if(already==0)
	 {
      c[k]=a[i];
      k++;
	 }
      break;
      }
    }
  }
  for(i=0; i<k; i++)
  {
  for(j=i+1; j<k; j++)
	{
   if(c[i]>c[j])
	 {
  t=c[i];
  c[i]=c[j];
  c[j]=t;
	 }
	}
  }

  for(i=0; i<k; i++)
  cout<<"Common Gems:"<<c[i];
  getch();
 }
