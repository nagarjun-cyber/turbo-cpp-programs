#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int n,a[100],tot=0,i,avg;
  printf("How many subjects:");
  scanf("%d",&n);
  printf("Enter the your marks:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  for(i=0; i<n; i++)
  {
   tot=tot+a[i];
  }
  printf("Your total marks=%d\n",tot);
  avg=tot/n;
  printf("Your average= %d\n",avg);

  for(i=0; i<n; i++)
  {
  if(a[i]>34)
   printf("PASS\n");
  else
   printf("FAIL\n");
  }

  if(avg>=90)
    printf("DISTINSTION");
  else
  if(avg>=80)
   printf("FIRST CLASS");
  else
  if(avg>=70)
   printf("SECOND CLASS");
  else
   printf("THIRD CLASS");
}