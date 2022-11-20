#include<stdio.h>
int order[5];
int book[5];
int judge(int order[5])
{
  if((order[1]==2)+(order[0]==3)==1)
  {
    if((order[1]==2)+(order[4]==4)==1)
    {
      if((order[2]==1)+(order[3]==2)==1)
      {
        if((order[2]==5)+(order[3]==3)==1)
        {
          if((order[4]==4)+(order[0]==1)==1)
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
void dfs(int step)
{
  if(step==6)
  {
    if(judge(order))
    {
      printf("A:%d\nB:%d\nC:%d\nD:%d\nE:%d\n",order[0],order[1],order[2],order[3],order[4]);
    }
    return;
  }
  else
  {
    for(int i=1;i<=5;i++)
    {
      if(book[i]==0)
      {
        order[step-1]=i;
        book[i]=1;
        dfs(step+1);
        book[i]=0;
      }
    }
  }
}
int main()
{
  dfs(1);
  return 0;
}