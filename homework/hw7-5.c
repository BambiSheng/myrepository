#include<stdio.h>
int main()
{
  int num[6];
  int num2[6];
  int num3[6];
  for(int n=100000;n<=333333;n++)
  {
    
    int judge1=0,judge2=0;
    int temp=n;
    for(int i=0;i<=5;i++)
    {
      num[i]=temp%10;
      temp/=10;
    }
    for(int i=0;i<=5;i++)
    {
      for(int j=0;j<=5;j++)
      {
        if(num[i]==num[j]&&i!=j)
        {
          goto out;
        }
      }
    }
    temp=2*n;
    for(int i=0;i<=5;i++)
    {
      num2[i]=temp%10;
      temp/=10;
    }
    temp=3*n;
    for(int i=0;i<=5;i++)
    {
      num3[i]=temp%10;
      temp/=10;
    }
    for(int i=0;i<=5;i++)
    {
      for(int j=0;j<=5;j++)
      {
        if(num[i]==num2[j])
        {
          judge1+=1;
          break;
        }
      }
    }
    if(judge1!=6)
    {
      continue;
    }
    for(int i=0;i<=5;i++)
    {
      for(int j=0;j<=5;j++)
      {
        if(num[i]==num3[j])
        {
          judge2+=1;
          break;
        }
      }
    }
    if(judge2!=6)
    {
      continue;
    }
    printf("%d\n",n);
    out:;
  }
}