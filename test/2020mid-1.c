#include <math.h>
#include<stdio.h>
#include<time.h>
void f(int n,int *x)
{
	while((*x)%n==0)
	{
		*x/=n;
	}
}
int main()
{
	int n;
	scanf_s("%d",&n);
	clock_t start,end;
  start=clock();
  int num[1690];
	int count=0;
	for(int j=1;count<=n-1;j++)
	{
		int i=j;
		f(2,&i);
		f(3,&i);
		f(5,&i);
		if(i==1)
		{
			num[count]=j;
      printf("%d\n",num[count]);
			count++;
		}
	}
  end=clock();
  printf("%d",end-start);	
}

