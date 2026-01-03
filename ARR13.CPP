#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,a[100],n,r,s,key;
  printf("How many number=");
  scanf("%d",&n);
  printf("Enter the element=");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("Enter search element=");
  scanf("%d",&s);

  key=0;
  for(i=0; i<n; i++)
  if(s==a[i])
  {
   key=1;
   break;
  }

  if(key==1)
  {
   printf("Enter the replacement elements");
   scanf("%d",&r);

   for(i=0; i<n; i++)
   if(a[i]==s)
   {
   a[i]=r;
   break;
   }
   for(i=0; i<n; i++)
   printf("%d\n",a[i]);
   }
  else
  printf("Sorry...Your searching elements %d is not present",s);
  }