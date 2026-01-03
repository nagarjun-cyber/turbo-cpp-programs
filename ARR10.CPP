#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,a[100],m,i,j,c;
  printf("how many number");
  scanf("%d",&n);
  printf("Enter the n value=");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  for(i=0; i<n; i++)
  {
   c=1;
  for(j=0; j<n; j++)
  {
  if(i!=j && a[i]==a[j])
  c++;
  }
  if(c==1)
  printf("unique number=%d",a[i]);
  }
}