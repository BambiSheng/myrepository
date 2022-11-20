//ABCD
#include<stdio.h>
int main()
{
  int a,b,c,d;
  for(a=0;a<=1;a++)
  {
    for(b=0;b<=1;b++)
    {
      for(c=0;c<=1;c++)
      {
        for(d=0;d<=1;d++)
        {
          if((b!=d&&b!=c&&a!=b)&&(a+b+c+d==1))
          printf("%d%d%d%d\n",a,b,c,d);
        }
      }
    }
  }
  return 0;
}