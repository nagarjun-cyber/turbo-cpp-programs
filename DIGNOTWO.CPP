#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,j,r,c,a[100][100];
  printf("Enter the rows and cols");
  scanf("%d%d",&r,&c);
  printf("Enter the elements");
  for(i=0; i<r; i++)
  for(j=0; j<c; j++)
  scanf("%d",&a[i][j]);

  for(i=0; i<r; i++)
  {
  for(j=0; j<c; j++)
	 {
	   if(i==j)
	   printf("%d\n",a[i][j]);
	  }
  }
  }