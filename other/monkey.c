//test
#include<stdio.h>
int main()
{
  int n,n1;
  int k;
  int m;
  int apple;
  int gotit=0;
  scanf("%d %d",&n,&k);
  for(m=n;gotit==0;m++)
  {
  	gotit=1;
    n1=n;
    for(apple=m;n1>0;n1--)
    {
      if((apple%n)!=k)
      {         
        gotit=0;
        break;
      }
      apple=(apple-k)/n*(n-1);
    }
  }
  printf("%d",m-1);
  return 0; 
}