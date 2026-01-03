#include<stdio.h>
#include<conio.h>
#include<math.h>
int rev(int);
void main()

{
   int n,i,h,p,k;
   printf("Enter the number");
   scanf("%d",&n);
   p=n*n;
   k=rev(p);
   i=sqrt(k);
   h=rev(i);
   if(n==h)
    printf("%d is a adam number",n);
   else
    printf("%d is not a adam number",n);
}

 int rev(int x)
{
 int s=0,r;
 while(x>0)
 {
  r=x%10;
  s=s*10+r;
  x=x/10;
 }
 return s;
}