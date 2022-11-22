#include<stdio.h>
#include<math.h>
int main()
{
  double result=0;
  double expect=atan(1);
  for(double i=1;i<=9999;i++)
  {
    result+=9999/(9999*9999+i*i);
  }
  printf("%lf\n%lf",result,expect);
}