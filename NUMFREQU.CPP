#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,a[100],i,value,result[100];
  printf("Enter number of elements");
  scanf("%d",&n);

  printf("Enter the elements");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

  for(i=0; i<n; i++)
  result[i]=0;

  for(i=0; i<n; i++)
  {
   value=a[i];
   if(value>=0 && value<=n)
   {
     result[value]++;
   }
  }
  for(i=0; i<=n; i++)
  printf("%d->%d\n",i,result[i]);


}