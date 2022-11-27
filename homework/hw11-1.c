#include<stdio.h>
int main()
{
  int arr1[10]={1,3,15,2,6,14,7,19,8,9};
  int arr2[10]={13,11,12,16,10,0,18,5,4,17};
  int arr3[20];
  printf("arr1:");
  for(int i=0;i<=9;i++)
  {
    printf("%d ",*(arr1+i));
  }
  printf("\narr2:");
  for(int i=0;i<=9;i++)
  {
    printf("%d ",*(arr2+i));
  }
  for(int i=0;i<=9;i++)
  {
    int count=0;
    for(int j=0;j<=9;j++)
    {
      if(*(arr1+i)>*(arr1+j))
      {
        count++;
      }
      if(*(arr1+i)>*(arr2+j))
      {
        count++;
      }
    }
    *(arr3+count)=*(arr1+i);
  }
  for(int i=0;i<=9;i++)
  {
    int count=0;
    for(int j=0;j<=9;j++)
    {
      if(*(arr2+i)>*(arr1+j))
      {
        count++;
      }
      if(*(arr2+i)>*(arr2+j))
      {
        count++;
      }
    }
    *(arr3+count)=*(arr2+i);
  }
  printf("\narr3:");
  for(int i=0;i<=19;i++)
  {
    printf("%d ",*(arr3+i));
  }
}