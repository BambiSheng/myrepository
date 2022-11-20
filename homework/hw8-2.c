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
  for(int n=5;n<=35;n++)
  {
    start=clock();
    printf("n=%d\t%d\t",n,godown(n));
    end=clock();
    printf("%dms\n",end-start);
  }
}