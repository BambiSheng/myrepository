//https://blog.csdn.net/yanggangclcsdn/article/details/49718131?ops_request_misc=%257B%2522request%255Fid%2522%253A%252216671436
#include<stdio.h>
int main()
{
  struct point
  {
    int x;
    int y;
  }p;
  struct point mypoint[]={{1,2},{2,3},{3,4}};
  printf("%d %d %d",mypoint[0],mypoint[1].y,mypoint[2].x);


}