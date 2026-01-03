#include<iostream.h>
#include<conio.h>
void main()

{
  clrscr();
  int slots[100],cars[100],n,m,i,canpark,totalpark,c,s,start,k;
  cout<<"Enter number of slots:";
  cin>>n;

  cout<<"Enter the slot values (0=empty, 1=occupied)";
  for(i=0; i<n; i++)
  cin>>slots[i];

  cout<<"Enter number of cars:";
  cin>>m;

  cout<<"Enter car lenghts";
  for(i=0; i<m; i++)
  cin>>cars[i];

  totalpark=0;
  for(c=0; c<m; c++)
  {
   k=cars[c];
  for(start=0; start<=n-k; start++)
   {
    canpark=1;
   for(s=start; s<start+k; s++)
    if(slots[s]==1)
    {
     canpark=0;
     break;
    }
    if(canpark==1 && start>0 &&  slots[start-1]==1)
     canpark=0;

    if(canpark==1 && start+k<n &&  slots[start+k]==1)
     canpark=0;

    if(canpark==1)
     {
     for(s=start; s<start+k; s++)
     slots[s]=1;
     totalpark++;
     break;
     }
     }
     }
     cout<<totalpark;
}
