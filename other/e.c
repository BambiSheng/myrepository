//e=2.7182818284590452353602874713526624977572
#include<stdio.h>
#include<math.h>
int factorial(int n)
{
  int result=1;
  while (n>0)
  {
    result*=n;
    n-=1;
  }
  return result;
}
int main()
{ 
  double e=0;
  int n=0;
  int digit;
  scanf("%d",&digit);
  while(1.0/factorial(n)>pow(10,-digit))
  {
    e+=1.0/factorial(n);
    n++;
  }
  printf("%.16lf",e);
}