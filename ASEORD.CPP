#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,j,i,t,a[100];
  printf("How many elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

  for(i=0; i<n; i++)
  {
    for(j=i+1; j<n; j++)
     {
      if(a[i]>a[j])
      {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
      }
     }
  }
   printf("Asending order");
   for(i=0; i<n; i++)
   printf("%d\n",a[i]);
}

