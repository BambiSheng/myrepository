#include<stdio.h>
int main()
{
  char sa[30];
  char sb[30];
  scanf("%s%s",sa,sb);
  int lb=0;
  int match=0;
  for(int i=0;i<=29;i++)
  {
    if(sb[i]!='\0')
    {
      lb++;
    }
    else
    {
      break;
    }
  }
  for(int i=0;i<=30-lb;i++)
  {
    int judge=1;
    for(int j=0;j<=lb-1;j++)
    {
      if(sb[j]=='?')
      {
        continue;
      }
      else
      {
        if(sa[i+j]==sb[j])
        {
          continue;
        }
        else
        {
          judge=0;
          break;
        }
      }
    }
    if(judge)
    {
      printf("%d ",i);
      match=1;
    }
  }
  if(match==0)
  {
    printf("No match found");
  }
  return 0;
}