#include<stdio.h>
int main()
{
  int time=0;
  
  for(int i=1;i<=1000;i++)
  {
    int count=0;
    int j;
    
    for( j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        count++;
      }
      
    }
    
    if(count==5)
      { 
        time++;
        if(time==1)
        printf("these numbers are:\n");
        printf("%6d:",i);
        for(int j=1;j<=i;j++)
        {
          if(i%j==0)
          {
            printf("%6d",j);
          }
      
        }
        printf("\n");
     }
  }
}