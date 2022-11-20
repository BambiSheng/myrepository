#include<stdio.h>
int main()
{
  int a;
  int a1;
  int temp;
  int digit;
  int digitnumber;
  scanf("%d",&a);
  digitnumber=0;
  temp=a;  
  while(temp>0)
  {
    digit=temp%10;
    a1=a1*10+digit;
    temp/=10;
    digitnumber++;
  }
  printf("数字为%d位\n",digitnumber);
  for(int i=1;i<=digitnumber;i++)
  {
    printf("%d\n",a1%10);
    a1/=10;
  }
  for(int i=1;i<=digitnumber;i++)
  {
    printf("%d",a%10);
    a/=10;
  }
  printf("\n\n");
}