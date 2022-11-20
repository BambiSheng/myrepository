#include<stdio.h>
int main()
{
  int a,b,c;
  for(a=1;a<=27;a++)
  {
    for(b=a+1;b<=28;b++)
    {
      for(c=b+1;c<=29;c++)
      {
        if(a*a+b*b==c*c)
        {
          printf("0<%d<%d<%d<40\n",a,b,c);
        }
      }
    }
  }
}