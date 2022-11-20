#include<stdio.h>
void judge(int,int,int);
int main()
{
  int num[3][3];
  for(int i=0;i<=2;i++)
  {
    for(int j=0;j<=2;j++)
    {
      scanf("%d",&num[i][j]);
    }
  }  
  
  for(int i=0;i<=2;i++)
  {
    int rowO=0;
    int columnO=0;
    int j;
    for(j=0;j<=2;j++)
    {
      if(num[i][j]==0)
      {
        rowO++;
      }
      if(num[j][i]==0)
      {
        columnO++;
      }
    }
    if(rowO==0||columnO==0)
    {
      printf("X win!");;
      break;
    }
    else if(columnO==3||rowO==3)
    {
      printf("O win!");
      break;
    }
    else if(i==2&&j==3)
    {
      printf("nobody win");
    }
  }
}

