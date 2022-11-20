#include<stdio.h>
int aton(const char str[])
{
  int i=0;
  long long result=0;
  while(str[i]!='\0')
  {
    if(str[i]=='.')
    {
      i++;
      continue;
    }
    else
    {
      result=result*10+(int)(str[i])-48;
    }
    i++;
  }    
  if(result>2147483647)
  {
    return 0;
  }
  else
  {
    return (int)result;
  }
}
int main()
{
  char str[99];
  gets(str);
  printf("%d",aton(str));
}