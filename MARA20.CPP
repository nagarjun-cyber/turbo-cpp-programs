#include<iostream.h>
#include<string.h>
#include<conio.h>
void sort(char s[]);
void main()

{
   clrscr();
   char a[10][20],s1[20],s2[20];
   int i,n,j,used[20]={0};
   cout<<"How many object:";
   cin>>n;

   cout<<"Enter the objects";
   for(i=0; i<n; i++)
   cin>>a[i];

   cout<<"\n[";
   for(i=0; i<n; i++)
    {
   if(used[i])
   continue;
   used[i]=1;
   strcpy(s1,a[i]);
   sort(s1);
   cout<<"[\""<<a[i]<<"\"";

   for(j=i+1; j<n; j++)
    {
   if(!used[j])
     {
   strcpy(s2,a[j]);
   sort(s2);
   if(!strcmp(s1,s2))
     {
   cout<<",\""<<a[j]<<"\"";
   used[j]=1;
     }
    }
   }
   cout<<"]";
  /* if(i<n-1)
   cout<<","; */
   }
   cout<<"]";
}

  void sort(char s[])
  {
  char t;
  int i,j;

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
   }