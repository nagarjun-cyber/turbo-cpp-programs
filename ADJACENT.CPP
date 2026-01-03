#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,a[100],n,adj_count;
  printf("How many number:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  adj_count=0;
  for(i=0; i<n; i++)
  {
   if(a[i]==a[i+1])
   {
    printf("%d is adjacent elements\n",a[i]);
    adj_count=adj_count+1;
    }
  }
  printf("number of adjacent elements%d",adj_count);
}