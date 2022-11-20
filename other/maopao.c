#include<stdio.h>
void swap(int *x,int *y)
{
  int z=*x;
  *x=*y;
  *y=z;
}
int main()
{
  int num[6];
  for(int i=0;i<=5;i++)
  {
    scanf("%d",&num[i]);
  }
  for(int j=1;j<=5;j++)
  {
    for(int i=0;i<=5-j;i++)
    {
      if(num[i]>num[i+1])
      {
        swap(num+i,num+i+1);
      }
    }
  }
  for(int i=0;i<=5;i++)
  {
    printf("%d ",num[i]);
  }
  return 0;
}