#include<stdio.h>
int book[6];
int num[6];
void fullpermutation(int n)
{
  
  if(n>6)
  {
    int chicken=num[0]*100+num[1]*10+num[2];
    int rabit=num[3]*100+num[4]*10+num[5];
    if(chicken*2==rabit&&chicken%2==0)
    {
      printf("只数:%d\n鸡脚:%d\n兔脚:%d\n",chicken/2,chicken,rabit);
      return ;
    }
  }
  else
  {
    for(int i=0;i<=5;i++)
    {
      if(book[i]==0)
      {
        num[n-1]=i;
        book[i]=1;
        fullpermutation(n+1);
        book[i]=0;
      }
    }
  }
}
int main()
{
  fullpermutation(1);
  return 0;
}