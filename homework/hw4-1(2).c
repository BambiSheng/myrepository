#include<stdio.h>
#include<math.h>
int main()
{
  double x,y;
  double fxy;
  printf("x=");
  scanf("%lf",&x);
  printf("y=");
  scanf("%lf",&y);
  fxy=1.0/3.0*sin(x*x+y*y)*cos(x+y);
  printf("fxy=%lf",fxy);
  return 0;
  //x=1 y=2 fxy=0.316443
}