#include<stdio.h>
int prime(int a)
{
  int isprime=1;
  for(int i=2;i<=(int)sqrt(a);i++)
  {
    if(a%i==0)
    {
      isprime=0;
      break;
    }

  }
  return isprime;
}
int main()
{
  int n,m;
  int count=-1;
  scanf("%d%d",&n,&m);
  int num[m];
  for(int i=2;;i++)
  {
    if(prime(i))
    {
      count++;
      num[count]=i;
    }
    if(count+1==m)
    {
    break;
    }
  }
  int sum=0;
  for(int j=n-1;j<=m-1;j++)
  {
    sum+=num[j];
  }
  printf("%d",sum);
}