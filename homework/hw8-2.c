//stairs
#include<stdio.h>
#include<time.h>
int godown(int n)
{
  if(n==1)
  {
    return 1;
  }
  if(n==2)
  {
    return 2;
  }
  if(n==3)
  {
    return 4;
  }
  else
  {
    return godown(n-1)+godown(n-2)+godown(n-3);
  }
}
int main()
{
  clock_t start,end;
  for(int i=1;i<=3;i++)
  {
    int n=35;
    start=clock();
    printf("n=%d\t%d",n,godown(n));
    end=clock();
    printf("\t%dms\n",end-start);
  }
}