#include<stdio.h>
int main()
{
  int k,n;
  double sn=0;
  scanf("%d",&k);
  for(n=1;sn<=k;n++)
  {
    sn+=1.0/n;
  }
  printf("%d",n-1);

}