#include<stdio.h>
int judge(int n)
{
  if(n==2)
  return 1;
  int i=2;
  int s=(int)sqrt(n);
  for(;i<=s;i++)
  {
    if(n%i==0)
    return 0;
  }
  return 1;
}
int main()
{
  int n1,n2;
  for(n1=10,n2=12;n2<=200;n1++,n2++)
  {
    if(judge(n1)&&judge(n2))
    printf("%4d%4d\n",n1,n2);
  }
  return 0;
}