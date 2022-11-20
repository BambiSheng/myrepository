#include<stdio.h>
int main()

{
  char a[99];
  int word=0;
  int count=0;
  gets(a);
  puts(a);
  for(int i=0;i<=98;i++)
  {
    if((a[i])==' ')
    {
      word=0;
    }
    else
    {
      if(word==0)
      {
        count++;
      }
      word=1;
    }
  }
  printf("%d",count);
  return 0;
}