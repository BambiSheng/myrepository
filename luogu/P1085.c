#include<stdio.h>
int main()
{
  int a,b;
  int day=0;
  int temp=0;
  for(int i=1;i<=7;i++)
  {
    scanf("%d%d",&a,&b);
    if(a+b>8&&a+b>temp)
    {
      day=i;
      temp=a+b;
    }

  }
  printf("%d",day);
}