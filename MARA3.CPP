#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()

{
  clrscr();
  char word[30][30];
  int len,i,n;

  cout<<"Enter number of words:";
  cin>>n;

  cout<<"Enter the words:";
  for(i=0; i<n; i++)
  cin>>word[i];

  for(i=0; i<n; i++)

  {
  len=strlen(word[i]);

  {
  if(0<len && word[i][0]==word[i][len-1])
  {

    cout<<"crown words:"<<word[i]<<"\t";
  }
  }
  }


}