#include<stdio.h>
int main()
{
  int num[3000];
  num[0]=1;
  for(int i=1;i<3000;i++)
  {
    num[i]=0;
  }
  int digit=1;
  for(int i=2;i<=1000;i++)
  {
    for(int j=0;j<=digit+3;j++)
    {
      num[j]*=i;
    }
    for(int j=0;j<=digit+3;j++)
    {
      int k=num[j];
      if(k>=1000)
      {
        num[j+3]+=k/1000;
        num[j]=num[j]%1000;
        k%=1000;
      }
      if(k>=100)
      {
        num[j+2]+=k/100;
        num[j]=num[j]%100;
        k%=100;
      }
      if(k>=10)
      {
        num[j+1]+=k/10;
        num[j]=num[j]%10;
        
      }

    }
    for(int j=2999;j>=0;j--)
    {
      if(num[j]!=0)
      {
        digit=j+1;
        break;
      }
    }
  }
  printf("%d",digit);
}