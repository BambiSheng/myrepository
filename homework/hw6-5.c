#include<stdio.h>
int fac(int n)
{
  int result=1;
  while (n>0)
  {
    result*=n;
    n-=1;
  }
  return result;
}
int main()
{
  int n;
  int sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    sum+=fac(i);
  }
  printf("%d",sum);
}