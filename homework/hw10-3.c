#include<stdio.h>
void swap(char *x,char *y)
{
  int z=*x;
  *x=*y;
  *y=z;
}
int main()
{
  char word[30];
  int length=0;
  gets(word);
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
 
  printf("%s",word);
  return 0;
}