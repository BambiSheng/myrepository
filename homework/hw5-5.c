#include<stdio.h>
#include<math.h>
int main()
{
  double x,y;
  double d1,d2,d3,d4;
  int height=0;
  scanf("%lf%lf",&x,&y);
  d1=(x-2)*(x-2)+(y-2)*(y-2);
  d2=(x+2)*(x+2)+(y-2)*(y-2);
  d3=(x+2)*(x+2)+(y+2)*(y+2);
  d4=(x-2)*(x-2)+(y+2)*(y+2);
  if(d1<=1)
  height=10;
  else if(d2<=1)
  height=9;
  else if(d3<=1)
  height=8;
  else if(d4<=1)
  height=7;
  printf("%d",height);
  return 0;
}