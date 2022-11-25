#include<stdio.h>
void swap(int* p1,int* p2)
{
  int temp=*p1;
  *p1=*p2;
  *p2=temp;
}
int main()
{
  int num[10];
  for(int i=0;i<=9;i++)
  {
    scanf("%d",num+i);
  }
  int * point[10];
  for(int i=0;i<=9;i++)
  {
    point[i]=num+i;
  }
  for(int i=0;i<=8;i++)
  {
    for(int j=0;j<=8-i;j++)
    {
      if(*point[j]>*point[j+1])
      {
        swap(&point[j],&point[j+1]);
      }
    }
  }
  for(int i=0;i<=9;i++)
  {
    printf("%d ",*point[i]);
  }
  printf("\n");
  for(int i=0;i<=9;i++)
  {
    printf("%d ",point[i]-num);
  }
}
