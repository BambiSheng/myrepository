#include<stdio.h>
#include<math.h>
int main()

{
  int x=0,y=0;
  int m,n;
  int c1,c2;
  int count=0;
  scanf("%d %d %d %d",&m,&n,&c1,&c2);
  
  while(x!=m&&y!=n)
  {
    if(x<m)
    {
      x++;
    }    
    else if(y<n)
    {
      y++;  
    }
    if(fabs(x-c1)+fabs(y-c2)==3&&x!=c1&&y!=c2)
    {
      count--;
      break;
    }
  
  }
  printf("%d",count);
}