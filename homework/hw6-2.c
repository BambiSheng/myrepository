#include<stdio.h>
int main()
{
  int n;
  int gap,len;
  scanf("%d",&n);
  if(n%2==1&&n>2)
  {
    for(int i=1;i<=n;i+=2)
    {
      gap=(n-i+1)/2;
      len=i;
      for(int i=1;i<=gap;i++)
      {
        printf(" ");
      }
      for(int i=1;i<=len;i++)
      {
        printf("*");
      }
      printf("\n");
      
    }
     for(int i=3;i<=n;i+=2)
    {
      gap=i/2;
      len=n+1-i;
      for(int i=1;i<=gap;i++)
      {
        printf(" ");
      }
      for(int i=1;i<=len;i++)
      {
        printf("*");
      }
      printf("\n");
      
    }

  }
  else
  {
    printf("Input Error");
  }
}