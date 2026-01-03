#include<stdio.h>
#include<conio.h>
void main()
					// n=3
{
  clrscr();				// 2 2 3
  int n,a[100],i,value,result[100];     // | | |
  printf("Enter number of elements");   // 0 1 2
  scanf("%d",&n);
				       // i=0 0<5(T)         i=1 1<5(T)
  printf("Enter the elements");         //  value=a[0]=2       value=a[1]=2
  for(i=0; i<n; i++)                   // 2>0(T) 2<=5(T)      2>0(T) 2<=5(T)
  scanf("%d",&a[i]);                   //  result[2-1]         result[2-1]
				       //   result[1]           result[2]
  for(i=0; i<n; i++)
  result[i]=0;                         //  i=2 2<5(T)
				       // value=a[2]=3
  for(i=0; i<n; i++)                  // 3>0(T) 3<=5(T)
  {                                  //  result[3-1][2]++
   value=a[i];
   if(value>0 && value<=n)
   {
     result[value-1]++;
   }
  }
  for(i=0; i<n; i++)
  printf("%d",result[i]);


}