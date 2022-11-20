#include <math.h>
#include<stdlib.h>
#include<stdio.h>
int num[999999]; 
int prime(int n)
{
	if(n==2)
		return 1;
	else
	{
		for(int i=2;i<=(int)sqrt((double)n);i++)
		{
			if(n%i==0)
				return 0;
		}
	return 1;
	}

}
int main()
{
	int n,n1;
	int count=0;
	scanf_s("%d",&n);
	n1=n;
	for(int i=2;i<=n/2;i++)
	{
		if(prime(i))
		{
			if(n1%i==0)
			{
				while(n1%i==0)
				{
					num[count]=i;
					n1/=i;
					count++;
				}
			}
		}
	}
	printf("%d=",n);
	for(int i=0;i<count-1;i++)
	{
		printf("%d*",num[i]);
	}
	printf("%d",num[count-1]);
	system("pause");
}
