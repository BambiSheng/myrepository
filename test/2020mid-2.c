#include <math.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int judge(int n)
{
  int n1=n;
  int n2=0;
  while(n1>0)
  {
    n2=n2*10+n1%10;
    n1/=10;
  }
  if(n2==n)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int prime(int n)
{
	if(n==2)
		return 1;
	else
	{
		for(int i=2;i<=(int)sqrt((double)n);i++)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}
int main()
{
	int n;
	scanf_s("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(judge(i)&&prime(i))
		{
			printf("%d\n",i);
		}
	}
	system("pause");
}

