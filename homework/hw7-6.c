#include<stdio.h>
#include<math.h>
int main()
{
  int color;
  int jumpout=0;
  int a,b,c,d,e;
  for(color=2;jumpout!=1;color++)
  {
    for(a=1;a<=color;a++)
    {
      for(b=1;b<=color;b++)
      {
        for(c=1;c<=color;c++)
        {
          for(d=1;d<=color;d++)
          {
            for(e=1;e<=color;e++)
            {
              if(a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&c!=d&&d!=e)
              {
                printf("min_color=%d\n",color);
                printf("A:%d\nB:%d\nC:%d\nD:%d\nE:%d",a,b,c,d,e);
                jumpout=1;
                goto out;
              }
            }
          }
        }
      }
    }
  out:;
  }
}