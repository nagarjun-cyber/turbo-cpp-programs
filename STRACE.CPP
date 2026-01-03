 #include<stdio.h>
 #include<conio.h>
 void main()
  {
  char s[20],t;
  int i,j;
   scanf("%s",&s);
   for(i=0; s[i]!='\0'; i++)
   {
   for(j=i+1; s[j]!='\0'; j++)
   {
   if(s[i]>s[j])
   {
   t=s[i];
   s[i]=s[j];
   s[j]=t;
   }
   }
   }
   for(i=0; s[i]!='\0'; i++)
   printf("%s",s[i]);
   }