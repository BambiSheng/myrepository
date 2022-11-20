#include <math.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
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
int sum(int n)
{
	int sum1=0;
	while(n>0)
	{
		sum1+=n%10;
		n/=10;
	}
	return sum1;
}
int main()
{
	int count=0;
	int add=0;
	for(int i=2;i<=50;i++)
	{
		if(prime(sum(i)))
		{
			printf("%d %d\n",i,sum(i));
			count++;
			add+=sum(i);
		}
	}
	printf("%d\n%d",count,add);
	system("pause");
	
}