#include<stdio.h>
int main()
{
  int a,b,c;
  int result;
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c&&a+c>b&&b+c>a)
  {
    if(a==b)
    {
      if(b==c)
      {
        result=1;
      }
      else
      {
        result=2;
      }
    }
    else
    {
      if(a==c)
      {
        result=2;
      }
      else
      {
        if(b==c)
        {
          result=2;
        }
        else
        {
          result=3;
        }
      }
    }
  }
  else
  {
    result=0;
  }
  switch(result)
  {
    case 1:
    printf("Equilateral triangle");
    break;
    case 2:
    printf("Isosceles triangle");
    break;
    case 3:
    printf("Triangle");
    break;
    case 0:
    printf("Not triangle");
  }
  return 0;  
}