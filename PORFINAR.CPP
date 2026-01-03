#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,n,a[100],tot=0,avg,f=0,p=0;
  printf("How many subject");
  scanf("%d",&n);
  printf("Enter the subject marks");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  for(i=0; i<n; i++)
  tot=tot+a[i];
  printf("total=%d\n",tot);
  avg=tot/n;
  printf("Average=%d\n",avg);
  for(i=0; i<n; i++)
  if(a[i]>34)
  {
  p++;
  }
  else
  {
  f++;
  }
  if(f==1)
  printf("result=fail");
  else
  printf("result=pass");
}