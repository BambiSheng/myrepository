#include<stdio.h>
#include<math.h>

struct point
{
double x;
double y;
};
typedef struct point point;
double dist(struct point a,struct point b)
{
  double d;
  d=pow((a.x-b.x),2)+pow((a.y-b.y),2);
  d=sqrt(d);
  return d;
}
struct point* closestdist(struct point mypoint[],struct point target)
{
  point* bestpoint;
  double d=99999;
  for(int i=0;i<=99;i++)
  {
    if(dist(mypoint[i],target)<d)
    {
      d=dist(mypoint[i],target);
      bestpoint=mypoint+i;
    }
  }
  return bestpoint;
}
int main()
{
  struct point mypoint[100];
  for(int i=0;i<=99;i++)
  {
    mypoint[i].x=i;
    mypoint[i].y=i;
  }
  point target;
  scanf("%lf %lf",&target.x,&target.y);
  point * bestpoint=closestdist(mypoint,target);
  printf("x=%lf y=%lf",(*bestpoint).x,(*bestpoint).y);

  printf(" x=%lf y=%lf",target.x/2+target.y/2,target.x/2+target.y/2);
  return 0;
}