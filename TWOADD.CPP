#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,j,r,c,a[10][10],b[10][10],d[10][10];
  printf("Enter the rows and cols");
  scanf("%d%d",&r,&c);
  printf("Enter the elements");
  for(i=0; i<r; i++)
  for(j=0; j<c; j++)
  scanf("%d",&a[i][j]);

  printf("Enter the rows and cols");
  scanf("%d%d",&r,&c);
  printf("Enter the elements");
  for(i=0; i<r; i++)
  for(j=0; j<c; j++)
  scanf("%d",&b[i][j]);

  d[i][j]=a[i][j]+b[i][j];
  for(i=0; i<r; i++)
  {
  for(j=0; j<c; j++)
  printf("%d\t",d[i][j]);
  printf("\n");
  }
  }