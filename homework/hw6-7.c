#include<stdio.h>
int sum(int num[6])
{
  int sum=0;
  for(int i=0;i<=5;i++)
  {
    sum+=num[i];
  }
  return sum;
}
int main()
{
 
  int num[6];
  int n,n1;
  int count=0;
  printf("\tA\tB\tC\tD\tE\tF\n");
  for(n=0;n<=63;n++)
  {
    n1=n;
    for(int i=0;i<=5;i++)
    {
      num[i]=n1%2;
      n1/=2;
    }
    if(sum(num)==3)
    {
      count++;
      printf("%d\t",count);
      for(int i=0;i<=5;i++)
      {
        if(num[i])
        {
          printf("black   ");
        }
        else
        {
          printf("white   ");
        }
      }
      printf("\n");
      
    }
  }
}