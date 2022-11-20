//recurrence
#include<stdio.h>
#include<time.h>
int main()
{
  clock_t start , end;
  start=clock();
  int num[99999];
  num[0]=1;
  int x=40000;
  for(int i=1;i<=x;i++)
  {
    num[i]=(num[i-1]+2)%(i+1)+1;
  }
  printf("%d",num[x]);
  end=clock();
  int t=end -start;
  printf("\n%dms",t);
}