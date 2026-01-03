#include<stdio.h>
#include<conio.h>
void main()

{
   clrscr();
   int n,r,i,s;
   printf("Enter n value=");
   scanf("%d",&n);
   r=n%2;
   if(r==0)
    printf("%d is even number",n);
   else
    printf("%d is odd number",n);
   for(i=1; i<=n; i++)
   {
     s=0;
     s=s+i;
     s=s-i;
   }
   printf("%d",s);


}