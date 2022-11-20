#include<stdio.h>
int main()
{
  int old;
  int standing;
  int lying;
  int count=0;
  for(old=3;old<=98;old+=3)
  {
    for(standing=1;standing<=99;standing++)
    {
      lying=100-standing-old;
      int sum;
      sum=old/3+standing*5+lying*3;
      if(lying>0&&sum==100)
      {
        count++;
        printf("case %d:\n     old=%d\nstanding=%d\n   lying=%d\n",count,old,standing,lying);
        
      }
    }
  }
  return 0;
}