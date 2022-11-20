#include<stdio.h>
int main()
{
  long long n1=1,n2=1,n3;
  long long M,n;
  long long mod1=0,mod2=0;
  scanf("%lld",&M);
  for(n=1;mod1!=0||mod2!=1;n++)
  {
    n3=n1+n2;
    n1=n2;
    n2=n3;
    mod1=n1%M;
    mod2=n2%M;
  }
  printf("%lld",n);
  return 0;
}