#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,n,j,s,s1,r;
  printf("Enter the n value=");
  scanf("%d",&n);
  s=0; s1=0;
  for(i=1;i<=n;i++)
  {
  for(j=i;j<=i;j++)
   {
     r=j%2;
    if(r==0)
     s1=s1-j;
    else
     s=s+j;
   }
   }
  printf("%d\n",s);
  printf("%d",s1);

}