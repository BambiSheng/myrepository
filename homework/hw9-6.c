//X=88
#include<stdio.h>
int main()
{
  int num[18];
  for(int i=0;i<=17;i++)
  {
    num[i]=(int)getchar()-48;
  }
  int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  int s=0;
  for(int i=0;i<17;i++)
  {
    s+=num[i]*w[i];
  }
  int d=(12-s%11)%11;
  if(d==10)
  {
    d=40;
  }
  if(num[17]==d)
  {
    printf("legal");
  }
  else{
    printf("illegal.d18=%c",d+48);
  }


}