#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()

{
  clrscr();
  int n,sq,r,k,l,b,s;
  l=0; s=0;
  printf("Enter n value");
  scanf("%d",&n);
  sq=n*n;
  printf("square= %d\n",sq);

  while(sq>0)
   {
    r=sq%10;
    s=s*10+r;
    sq=sq/10;
   }
   printf("reverse 1= %d\n",s);

  k=sqrt(s);
  printf("square root=%d\n",k);

  while(k>0)
   {
    r=k%10;
    l=l*10+r;
    k=k/10;
   }
   printf("reverse 2=%d\n",l);

   if(n==l)
   printf("%d is a adam number",n);
   else
   printf("%d is not a adam number",n);
}