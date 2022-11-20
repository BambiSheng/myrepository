#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  int n1=99999,n2=99999;
  scanf("%d",&n);
  int num[5];
  int order[5];
  if(n>=10000&&n<=99999)
  {
    for(int i=0;i<=4;i++)
    {
      num[i]=n%10;
      n/=10;
    }
    int k=0,k1=0;
   
    for(;k<=pow(5,5);k++)
    {
      k1=k;
      for(int i=0;i<=4;i++)
      {
        order[i]=k1%5;
        k1/=5;
        if(i!=0)
        {
          for(int j=0;j<i;j++)
          {
            if(order[j]==order[i])
            goto out;
          }
        }  
      }
      n=0;
      for(int i=0;i<=4;i++)
      {
        n+=pow(10,order[i])*num[i];
      }
      if(fabs(n-40000)<=fabs(n1-40000))
      n1=n;
      if(fabs(n-60000)<=fabs(n2-60000))
      n2=n;
      out:;
    }
  printf("%d %d",n1,n2);
  }
  else
  {
    printf("input error");
  }
}