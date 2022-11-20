#include<stdio.h>
int main()
{
  double mat[4][5]={{1.1161,0.1254,0.1397,0.1490,1.5471},{0.1582,1.1675,0.1768,0.1871,1.6471},{0.2368,0.2471,0.2568,1.2671,1.8471},{0.1968,0.2071,1.2168,0.2271,1.7471}};
  
  for(int i=0;i<=3;i++)
  {
    for(int j=i+1;j<=3;j++)
    {
      double c1=-mat[j][i]/mat[i][i];
      for(int k=0;k<=4;k++)
      {
        mat[j][k]+=c1*mat[i][k];
      }
    }
  }
  for(int i=3;i>=0;i--)
  {
    for(int j=i-1;j>=0;j--)
    {
      double c2=-mat[j][i]/mat[i][i];
      for(int k=0;k<=4;k++)
      {
        mat[j][k]+=c2*mat[i][k];
      }
    }
  }
  double ans[4];
  for(int i=0;i<=3;i++)
  {
    ans[i]=mat[i][4]/mat[i][i];
    printf("x%d=%lf\n",i+1,ans[i]);
  }
  return 0;
  
}