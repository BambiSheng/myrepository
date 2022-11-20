#include<stdio.h>
int main()
{
  char m;
  double a,b,c,d;
  double result;
  scanf("%c %lf %lf %lf %lf",&m,&a,&b,&c,&d);
  if(b==0||d==0)
  {
    printf("input error");
  }
  else if(c==0&&m=='/')
  {
    printf("input error");    
  }
  else
  {
    if(m=='+')
    {
      result=(a/b)+(c/d);
    }
    else if(m=='-')
    {
      result=(a/b)-(c/d);
    }
    else if(m=='*')
    {
      result=(a/b)*(c/d);
    }
    else if(m=='/')
    {
      result=(a/b)/(c/d);
    }
    printf("%lf",result);
  }
  
  
  return 0;
}