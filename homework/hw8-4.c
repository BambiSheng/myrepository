#include<stdio.h>
int S(int k)
{
  int result=0;
  for(int i=1;i<=k;i++)
  {
    result+=i*i;
  }
  result*=k;
  return result;
}
int NS(int n)
{
  long long result;
  result=(long long)n*(n+1)*(n+2)*(8*n*n+11*n+1);
  result/=120;
  (int)result;
  return result;
}
int main()
{
  int s=0;
  int ns=0;
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    s+=S(i);
  }
  ns=(int)NS(n);
  printf("%d\n%d\n",s,ns);
  if(s>ns)
  {
    printf("1");
  }
  else if(s<ns)
  {
    printf("-1");
  }
  else
  {
    printf("0");
  }
}