
#include<stdio.h>
int left(int num[40])
{
  int alive=0;
  for(int i=0;i<=39;i++)
  {
    alive+=num[i];
  }
  if(alive==10)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
int main()
{
  int num[40];
  for(int i=0;i<=39;i++)
  {
    num[i]=1;
  }
  int count=0;
  for(int i=0;left(num);i++)
  {
    if(num[i%40]==1)
    {
      count++;
      if(count==11)
      {
        num[i%40]=0;
        count=0;
      }
    }
  }
  for(int i=0;i<=39;i++)
  {
    if(num[i]==1)
    {
      printf("%d ",i);
    }
  }
  return 0;
}