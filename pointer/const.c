#include<stdio.h>
int main()
{
  int y=3;
  const int *p=&y;
  y=7;
  printf("%d",*p);
}