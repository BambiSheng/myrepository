#include<stdio.h>
int main()
{
  
  int n;
  int a1,a2,b1,b2,c1,c2;
  int t1,t2,t3;
  int t;
  scanf("%d%d%d%d%d%d%d",&n,&a1,&a2,&b1,&b2,&c1,&c2);
  t1=n/a1+(n%a1!=0);
  t1*=a2;
  t2=n/b1+(n%b1!=0);
  t2*=b2;
  t3=n/c1+(n%c1!=0);
  t3*=c2;

  if(t1<t2)
  {
    if(t1<t3)
    {
      t=t1;
    }
    else
    {
      t=t3;
    }
  }
  else
  {
    if(t2<t3)
    {
      t=t2;
    }
    else
    {
      t=t3;
    }
  }
  printf("%d",t);
}
