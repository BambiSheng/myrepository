#include<stdio.h>
int main()
{
  double a[10000]; 
  scanf("%lf",a);
  for(int i=1;i<=9999;i++)
  {
    a[i]=a[i-1]+a[i-1]*a[i-1]/i/i;
  }
  printf("%lf",a[9999]);
}