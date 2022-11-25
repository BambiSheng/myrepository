#include<stdio.h>
void swap(int*a,int*b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
void store(int *num,int n)
{
  for(int i=0;i<=3;i++)
  {
    num[i]=n%10;
    n/=10;
  }
}
int compute(int *num)
{
  int n=1000*num[0]+100*num[1]+10*num[2]+1*num[3];
  return n;
}
void f(int* num)
{
  int max[4];
  int min[4];
  for(int i=0;i<=3;i++)
  {
    max[i]=num[i];
    min[i]=num[i];
  }
  for(int i=0;i<=2;i++)
  {
    for(int j=0;j<=2-i;j++)
    {
      if(max[j]<max[j+1])
      swap(&max[j],&max[j+1]);
      if(min[j]>min[j+1])
      swap(&min[j],&min[j+1]);
    }
  }
    int n=compute(max)-compute(min);
    printf("%d-%d=%d\n",compute(max),compute(min),n);
    store(num,n);
  

}

int main()
{
  int n;
  scanf("%d",&n);
  int num[4];
  store(num,n);
  for(int i=1;i<=3;i++)
  {
    for(int j=0;j<i;j++)
    {
      if(num[i]==num[j])
      {
        printf("error");
        return 0;
      }
    }
  }
  while(compute(num)!=4716)
  {
    f(num);
  }
  return 0;
}