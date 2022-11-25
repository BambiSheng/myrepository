#include<stdio.h>
void del(int *p,int m)
{
  int exit=m;
  int i=0;
  while(exit!=1)//设置退出条件
  {
    if(*(p+i)==3)//删除机制
    {
      *(p+i)=0;
      exit--;
    }
    int temp=*(p+i);
    do//搜索下一个没有退出的人
    {
      if(i<=m-2)
      {
        i++;
      }
      else
      {
        i=0;
      }
    } while (*(p+i)==0);
  *(p+i)=temp+1;//为这个人报数
  }
  printf("%d",i+1);//打印最后一个人的编号
}
int main()
{
  int num[50];
  int n;
  scanf("%d",&n);
  for(int i=0;i<=n-1;i++)
  {
    num[i]=1;
  }
  del(num,n);
  return 0;
}