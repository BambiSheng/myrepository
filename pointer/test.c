#include<stdio.h>
int main()
{
  float f = 3.14;
int * p = (int *) &f;  // generally a bad idea!
printf("%d\n", *p);
}