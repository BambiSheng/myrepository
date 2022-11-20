//甲乙丙 发帖者=1 其余=0
#include<stdio.h>
int main()
{
  int x,y,z;
  for(x=0;x<=1;x++)
  {
    for(y=0;y<=1;y++)
    {
      for(z=0;z<=1;z++)
      {
        if((x+y+z==1)&&(y==1)+(z==1)+(z==0)==2)
        printf("%d%d%d\n",x,y,z);
      }
    }
  }
  return 0;
}