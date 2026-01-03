#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,a[100],r,n,key;
  printf("How many elements");
  scanf("%d",&n);
  printf("Enter your elements");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("Enter your index value");
  scanf("%d",&r);
  key=0;
  for(i=0; i<n; i++)
  if(r==i)
  {
  printf("the index elements:%d\n",a[i]);
  key=1;
  break;
  }

  if(key==0)
  printf("Sorry... Invaild index");
  }
