//��
#include<stdio.h>
int main()
{
  int x,y,z;//С��=x ����=y ĸ��=z
  int jumpout=0;
  for(z=1000/15;z>0;z--)
  {
    for(x=99-z,y=1;x>=1&&y<=99-z;x--,y++)
    {
      if(5*x+10*y+15*z<=1000&&x>0&&y>0&&z>0)
      {
        jumpout=1;
        printf("С��%dֻ ����%dֻ ĸ��%dֻ\n",x,y,z);
      }  
    }
  if (jumpout==1)
  break;
  }
  return 0;
}