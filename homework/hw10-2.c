#include<stdio.h>
int main()
{
  char word[30];
  char aeiou[30];
  int num[30];
  scanf("%s",word);
  int count=0;
  for(int i=0;i<=29;i++)
  {
    if(word[i]=='a')
    {
      aeiou[count]=word[i];
      num[count]=i;
      count++;
      continue;
    }
    if(word[i]=='e')
    {
      aeiou[count]=word[i];
      num[count]=i;
      count++;
      continue;
    }
    if(word[i]=='i')
    {
      aeiou[count]=word[i];
      num[count]=i;
      count++;
      continue;
    }
    if(word[i]=='o')
    {
      aeiou[count]=word[i];
      num[count]=i;
      count++;
      continue;
    }
    if(word[i]=='u')
    {
      aeiou[count]=word[i];
      num[count]=i;
      count++;
      continue;
    }
  }
  for(int i=0;i<=count-1;i++)
  {
    word[num[i]]=aeiou[count-1-i];
  }
  printf("%s",word);
}