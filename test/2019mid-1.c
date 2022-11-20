#include<stdio.h>
int judge(int n)
{
  int sum=0;
  for(;n>0;n/=10)
  {
    sum+=n%10;
  }
  if(sum==10)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  int n;
  int yes=0;
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    if(judge(i))
    {
      yes=1;
      printf("%d ",i);
    }
  }
  if(yes==0)
  {
    printf("NO");
  }
  return 0;
}