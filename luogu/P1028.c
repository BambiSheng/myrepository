#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int t=n/2;
  int a[t];
  int sum;
  a[0]=1;
  a[1]=2;
  sum=1;
  for(int i=3;i<=t+1;i+=2)
  {
    a[i-1]=sum*2+a[i/2];
    a[i]=(sum+a[i/2])*2;
    sum+=a[i/2];
  }
  printf("%d",a[t]);
}