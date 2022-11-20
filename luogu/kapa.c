#include<stdio.h>
#include<math.h>
int main()
{
  int N;
  int x=0;
  int n;
  scanf("%d",&N);
  for(n=sqrt(N*2)+1,(int)n;x<=0||x>n+1;n--)
  {
    x=N-1.0/2*n*(n-1);
  }
  n++;
  if(n%2==0)
  printf("%d/%d",x,n+1-x);
  else
  printf("%d/%d",n+1-x,x);
  return 0;
  
}