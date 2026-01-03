#include<stdio.h>
void main()
{
  float r,v;
  printf("Enter the radius=");
  scanf("%f%f",&r,&r);
  v=4/3*3.14*r*r*r;
  printf("volume of the sphere= %f\n",v);
  v=2/3*3.14*r*r*r;
  printf("volume of the hemisphere= %f",v);
}