#include<stdio.h>
#include<math.h>
typedef struct point
{
  double x;
  double y;
}point;
point* closest(point *s,int n,point p)
{
  point* choice;
  double d=((s[0].x-p.x)*(s[0].x-p.x)+(s[0].y-p.y)*(s[0].y-p.y));
  for(int i=0;i<=n-1;i++)
  {
  }
}
