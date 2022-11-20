#include<stdio.h>
int main()
{
  double mat[2][3]={{1,1,15},{2,4,40}};
  for(int i=0;i<=1;i++)
  {
    for(int j=i+1;j<=1;j++)
    {
      double c1=-mat[j][i]/mat[i][i];
      for(int k=0;k<=2;k++)
      {
        mat[j][k]+=c1*mat[i][k];
      }
    }
  }
  for(int i=1;i>=0;i--)
  {
    for(int j=i-1;j>=0;j--)
    {
      double c2=-mat[j][i]/mat[i][i];
      for(int k=0;k<=2;k++)
      {
        mat[j][k]+=c2*mat[i][k];
      }
    }
  }
  double ans[2];
  for(int i=0;i<=1;i++)
  {
    ans[i]=mat[i][2]/mat[i][i];
    printf("x%d=%.lf\n",i+1,ans[i]);
  }

}