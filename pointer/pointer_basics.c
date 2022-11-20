#include<stdio.h>
int main()
{
  long long n=1;
  long long *ptr_n;
  ptr_n=&n+1;
  //*ptr_n=2;
  //*ptr_n++;
  //(*ptr_n)++;
  printf("*ptr_n=%d\n",*ptr_n);
  printf("ptr_n=%d\n",ptr_n);
  printf("n=%d\n",n);
  printf("&n=%d\n",&n);
}