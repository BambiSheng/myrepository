#include<stdio.h>
int main()
{
  int n,x,count=0;
  scanf("%d%d",&n,&x);
  for(int p=1;p<=n;p++)
  {
    int q=p;
    while(q>0)
    {
      if(q%10==x)
      {
        count++;
      }
      q/=10;
    }
  }
  printf("%d",count);
}