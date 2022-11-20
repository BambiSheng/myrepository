#include<stdio.h>
#include<math.h>
int main()
{
  double x;
  double fx;
  printf("x=");
  scanf("%lf",&x);
  const double pi=3.1415926;
  fx=-1.0/2.0*x*x;
  fx=exp(fx);
  fx=1.0/(sqrt(2.0*pi))*fx;
  printf("fx=%lf",fx);
  return 0;
  //x=2 fx=0.053991
}