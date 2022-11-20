#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int f(int sheep[100])
{
  int max=0;
  for(int i=0;i<=99;i++)
  {
    if(sheep[i]>=max)
    {
      max=sheep[i];
    }
  }
  return max;
}
int g(int sheep[100])
{
  for(int i=0;i<=99;i++)
  {
    int count=0;
    for(int j=0;j<=99;j++)
    {
      if(sheep[i]>=sheep[j])
      {
        count++;
      }
    }
    if(count==100)
    {
      return sheep[i];
    }
  }
}
int main()
{
  srand((unsigned int)time(0));
  int sheep[100];
  for(int i=0;i<=99;i++)
  {
    sheep[i]=rand()%1000+1;//1~1000
  }
  printf("algorithm1:%d\nalgorithm2:%d",f(sheep),g(sheep));


  return 0;
}