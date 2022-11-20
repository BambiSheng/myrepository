#include<stdio.h>
int fib(int i)
{
  if(i==1||i==2)
  {
    return 1;
  }
  if(i>=2)
  {
    return fib(i-1)+fib(i-2);
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",fib(n));
  return 0;
}