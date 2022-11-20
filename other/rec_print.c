#include<stdio.h>
void print(int n)
{
  if(n<=9)
  {
    printf("%d",n);
  }
  else
  {
    printf("%d",n%10);
    print(n/10);
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  print(n);
}