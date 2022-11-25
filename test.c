#include<stdio.h>
#include<math.h>
void swap(int* p1,int* p2)
{
  int *p=p1;
  p1=p2;
  p2=p1;
}


int main()
{
  int a=1,b=2;
  int *p1=&a,*p2=&b;
  swap(p1,p2);
  printf("%d %d",*p1,*p2);
  return 0;
}