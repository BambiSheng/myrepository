#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d/%d",&a,&b);
  int num[200];
  int i;
  for( i=0;i<=199;i++)
  {
    num[i]=a*10/b;
    a=a*10%b;
    if(a==0)
    {
      i++;
      break;
    }
  }
  printf("0.");
  for(int j=0;j<=i-1;j++)
  {
    printf("%d",num[j]);
  }
}