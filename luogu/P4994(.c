#include<stdio.h>
int main()
{
  long long n1=1,n2=1,n3;
  long long M,n;
  long long mod1=0,mod2=0;
  scanf("%lld",&M);
  n=1;
  while(1){
    if(n1==0&&n2==1){
      break;
    }
    n3=(n1+n2)%M;
    n1=n2;
    n2=n3;
    n++;
  }
  printf("%lld",n);
}