#include<stdio.h>
#include<math.h>
//result=1.4936482656
double f(double);
double s(double,double,int);
int main()
{
  int m;
  double a,b;
  printf("enter m:");
  scanf("%d",&m);
  printf("enter a&b:");
  scanf("%lf%lf",&a,&b);
  double result;
  const double ans=1.4936482656;
  double h;
  h=(b-a)/m;
  result=(f(a)/2+f(b)/2+s(a,b,m))*h;
  printf("result=%.10lf",result);
  printf("\nans=%.10lf\n",ans);
  m=0;
  do 
  {
    m++;
    h=(b-a)/m;
    result=(f(a)/2+f(b)/2+s(a,b,m))*h;
  } while(fabs(result-ans)>pow(10,-4));
  printf("min_m=%d",m);
  return 0;
}
double f(double x)
{
  double fx;
  fx=exp(-x*x);
  return fx;
}
double s(double a,double b,int m)
{
  double sigma=0;
  double h;
  h=(b-a)/m;
  for(int i=1;i<=m-1;i++)
  { 
    sigma+=f(a+i*h);
  }
  return sigma;
}