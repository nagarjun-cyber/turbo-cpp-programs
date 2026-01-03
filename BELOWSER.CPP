#include<stdio.h>
#include<conio.h>
void main()


{
    clrscr();
    int n,i,s,r;
    s=0;
    printf("Enter n value=");
    scanf("%d",&n);
    for(i=1; i<=n; i++)

    {
      r=i%2;
      if(r==1)
       s=s+i;
      else
       s=s-i;

      printf("sum=%d\n",s);

    }
}