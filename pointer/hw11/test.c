#include<stdio.h>
int main()
{
  int *a;
  int b;
  //a=&b;
  a= NULL;
  *a=3;
  printf("%d",*a);
}