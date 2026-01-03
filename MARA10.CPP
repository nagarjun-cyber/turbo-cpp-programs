#include<iostream.h>
void main()

{
   int n,rooms[100],max_Sum,cur_Sum,i;
   cout<<"Enter number of rooms";
   cin>>n;

   cout<<"Enter the rooms";
   for(i=0; i<n; i++)
   cin>>rooms[i];

   cur_Sum=rooms[0];
   max_Sum=rooms[0];

   for(i=1; i<n; i++)
   {
    if(cur_Sum + rooms[i] > rooms[i])
    cur_Sum=cur_Sum+rooms[i];
    else
    cur_Sum=rooms[i];

    if(cur_Sum>max_Sum)
    max_Sum=cur_Sum;
    }
    cout<<"Maximum sum:"<<max_Sum;

}