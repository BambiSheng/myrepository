#include<stdio.h>
#include<math.h>
int main()
{
  float i=1;
  double k=1;
  while(i==k)
  {
    i=i/2;
    k=k/2;
    printf("%f\n%.16lf\n",i,k);
  }
}