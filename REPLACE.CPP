#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,a[100],r,s,n;
  printf("How many number");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("Enter the searching elements");
  scanf("%d",&s);
  printf("Enter the replacements elements");
  scanf("%d",&r);

  for(i=0; i<n; i++)

  {
   if(a[i]==s)
   {
   a[i]=r;
   break;
   }
  }
  printf("After replacements elements");
  for(i=0; i<n; i++)
  printf("%d",a[i]);

  }