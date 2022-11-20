#include<stdio.h>
#include<math.h>
int main()
{
  int n,k;
  scanf("%d%d",&n,&k);
  int s[n+1];
  for(int i=1;i<=k;i++)
  {
    s[i]=1;
    if(i>=2)
    { for(int j=1;j<=i-1;j++)
      {
        s[i]=s[i]*2%100003;
      }
    }
  }
  for(int i=k+1;i<=n;i++)
  {
    s[i]=0;
    for(int j=1;j<=k;j++)
    {
      s[i]=(s[i]+s[i-j])%100003;
    }
  }
  printf("%d",s[n]);
}

