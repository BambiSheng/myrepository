#include<stdio.h>
void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  swap(&a,&b);//& is crucial.
  printf("%d %d",a,b);
}