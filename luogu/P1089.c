#include<stdio.h>
int main()
{
  int save=0;
  int current=0;
  int cost;
  for(int i=1;i<=12;i++)
  {
    scanf("%d",&cost);
    current+=300;
    current-=cost;
    save=save+(current-current%100);
    current=current%100;
    if(current<0)
    {
      printf("%d",-i);
      goto out;
    }
  }
  printf("%.0f",save*1.2+current);
  out :
  return 0;
}