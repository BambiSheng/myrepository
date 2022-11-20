#include<stdio.h>
int main()
{
  int a,b,n;
  printf("please enter a,b,n:");
  scanf("%d%d%d",&a,&b,&n);
  int result=0;
  for(int i=n;i>0;i--)
  {
    result+=a*b;
    a-=1;
    b-=1;
  }
  printf("the all number of cans is:%d",result);
}
