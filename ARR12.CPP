#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,a[100],n,r,s;
  printf("How many number=");
  scanf("%d",&n);

  printf("Enter the n value=");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);

  printf("Enter search element=");
  scanf("%d",&s);

  printf("Enter replacement number=");
  scanf("%d",&r);

     if(a[i]==s)
     for(i=0; i<n; i++)
     {
     a[i]=r;
     break;
     }

  printf("After replacement\n");
  for(i=0;i<n;i++)
  printf("%d\n",a[i]);
  }
