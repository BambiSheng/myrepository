#include<stdio.h>
#include<string.h>
void swap(char *x,char *y)
{
  int z=*x;
  *x=*y;
  *y=z;
}
void f(char word[30])
{
  int length=0;
  for(int i=0;i<=29;i++)
  {
    if(word[i]!='\0')
    {
      length++;
    }
    else
    {
      break;
    }
  }
  for(int j=1;j<=length-1;j++)
  {
    for(int i=0;i<=length-1-j;i++)
    {
      if(word[i]<word[i+1])
      {
        swap(word+i,word+i+1);
      }
    }
  }
}
int main()
{
  char word1[30],word2[30];
  gets(word1);
  gets(word2);
  f(word1);
  f(word2);
  int i=strcmp(word1,word2);
  if(i==0)
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
  return 0;
}