#include<stdio.h>
int sumarray(int *array,int n)
{
  int answer=0;
  for(int i=0;i<=n-1;i++)
  {
    answer+=array[i];
  }
  return answer;
}
int main()
{
  int n;
  scanf("%d",&n);
  int num[n];
  for(int i=0;i<=n-1;i++)
  {
    num[i]=i+1;
  }
  printf("%d",sumarray(num,n));
  return 0;
}