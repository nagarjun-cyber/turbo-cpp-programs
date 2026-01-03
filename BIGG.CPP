#include<stdio.h>
#include<conio.h>
void main()

{
  clrscr();
  int i,a[100],n,ind;
  printf("How many elements");
  scanf("%d",&n);
  printf("Enter your elements");
  for(i=0; i<n; i++)
  scanf("%d",&a[i]);
  printf("Enter your index value");
  scanf("%d",&ind);

  if(ind==0)
     printf("Previous index is not present");
  else
       if(ind==n-1)
	  printf("Next index is not present");
       else

		  if(ind>0 && ind<n-1)
		    {
		   if(a[ind-1]>a[ind+1])
		   printf("%d is biggest no",a[ind-1]);
		   else
		   printf("%d is biggest no",a[ind+1]);
		   }
		   else
		   printf("Sorry...Invaild Index");
 }