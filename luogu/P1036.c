#include<stdio.h>
int main()
{
  int n,k;
  scanf("%d%d",&n,&k);
  int num[n+1];
  int count=0;
  int sum;
  int judge;
  
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&num[i]);
  }
  int choice[k+1],mark[k+2];
  mark[k+1]=0;
  for(int i=1;i<=k;i++)
  {
    mark[i]=i;
  }
  
  while(mark[1]<=n-k+1)
  {
    sum=0;
    judge=1;
    for(int i=1;i<=k;i++)
    {
      choice[i]=num[mark[i]];
      sum+=choice[i];
    }
    for(int i=2;i<=sum/2;i++)
    {
      if(sum%i==0)
      {
        judge=0;
        goto out;
      }
    }
    out:
    if(judge==1&&sum!=1)
    {
      count++;
    }
    if(mark[1]==n-k+1)
    {
      break;
    }
    for(int i=k;i>=1;i--)
    {
      if(mark[i]<n-k+i)
      {
        mark[i]++;
        for(int j=i;j<=k;j++)
        {
          mark[j+1]=mark[j]+1;
        }       
        break;
      }
    }
  }
  printf("%d",count);
}