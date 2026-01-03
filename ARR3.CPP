#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,a[100],r,n,s=0;
  printf("how many number");
  scanf("%d",&n);
  printf("Enter the number");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("Output\n");
  for(i=0; i<n; i++)
   //if(n>0)
  s=s+a[i];
  printf("%d",s);

}
