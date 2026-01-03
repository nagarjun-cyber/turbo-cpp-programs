#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,j,s,r,n;
//  printf("Enter i value=");
 // scanf("%d",&i);
  printf("Enter n value=");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
   s=0; j=i;
   while(i>0)
   {
    r=i%10;
    s=s*10+r;
    i=i/10;
   }
    if(j==s)
    printf("%d\n",s);

  }
}
