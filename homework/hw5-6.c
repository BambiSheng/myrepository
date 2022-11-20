#include<stdio.h>

int main()
{
  int N;
  int count5=0,count6=0,count7=0;
  scanf("%d",&N);
  while(N>0)
  {
    if(N%10==5)
    count5++;
    else if(N%10==6)
    count6++;
    else if(N%10==7)
    count7++;
    N/=10;
  }
  printf("%d %d %d",count5,count6,count7);
  return 0;

}