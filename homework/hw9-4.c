#include<stdio.h>
int main()
{
  int num[9999];
  int n;
  scanf("%d",&n);
  num[0]=n;
  for(int i=0;n!=1;i++)
  {
    int n1=n;
    n=0;
    while(n1>0)
    {
      n+=(n1%10)*(n1%10);
      n1/=10;
    }
    num[i+1]=n;
    if(n==1)
    {
      printf("%d",1);
    }
    for(int j=0;j<i+1;j++)
    {
      if(num[j]==num[i+1])
      {
        printf("%d",0);
        n=1;
      }
    }
  }
}