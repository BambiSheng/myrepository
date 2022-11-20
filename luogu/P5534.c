#include<stdio.h>
int main()
{
  int a1,a2,n;
  scanf("%d%d%d",&a1,&a2,&n);
  long long d;
  long long an;
  d=a2-a1;
  an=a1+d*(n-1);
  printf("%lld",(a1+an)*n/2);
}