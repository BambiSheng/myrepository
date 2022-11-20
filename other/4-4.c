//鸡
#include<stdio.h>
int main()
{
  int x,y,z;//小鸡=x 公鸡=y 母鸡=z
  int jumpout=0;
  for(z=1000/15;z>0;z--)
  {
    for(x=99-z,y=1;x>=1&&y<=99-z;x--,y++)
    {
      if(5*x+10*y+15*z<=1000&&x>0&&y>0&&z>0)
      {
        jumpout=1;
        printf("小鸡%d只 公鸡%d只 母鸡%d只\n",x,y,z);
      }  
    }
  if (jumpout==1)
  break;
  }
  return 0;
}