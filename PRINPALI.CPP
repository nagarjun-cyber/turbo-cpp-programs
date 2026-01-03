#include<stdio.h>
#include<conio.h>
void main()


{
  clrscr();
  int n,s,i,r,j;
  printf("Enter the n value=");
  scanf("%d",&n);
  printf("Enter i value=");
  scanf("%d",&i);
  for(i;i<=n;i++)
  {
  s=0;
  j=i;

  while(j>0)
  {
   r=j%10;
   s=s*10+r;
   j=j/10;
  }
  if(i==s)
  printf("%d\n",s);
}
}