#include<stdio.h>
#include<math.h>
int judge(int n)
{
  if(n==2)
  return 1;
  int i=2;
  int s=(int)sqrt(n);
  for(;i<=s;i++)
  {
    if(n%i==0)
    return 0;
  }
  return 1;
}
int main()
{
  int n;
  scanf("%d",&n);
  if(n>=4&&n%2==0)
  {
    for(int p1=2;p1<=n;p1++)
    {
      if(judge(p1))
      {
        if(judge(n-p1))
        {
          printf("%d=%d+%d",n,p1,n-p1);
          break;
        }
      }
    }
  }
  else
  {
    printf("input error");
  }
  return 0;
}