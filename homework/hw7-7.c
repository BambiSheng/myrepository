#include<stdio.h>

int num[10];
int book[10];
int judge;
int count;
void check(int a,int b, int c)
{
	if(a+b+c!=15)
		judge=0;
}
void fullpermutation(int step)
{
	if(step==10)
	{
		
		judge=1;
		for(int i=1;i<=7;i+=3)
		{
			check(num[i],num[i+1],num[i+2]);
		}
		for(int i=1;i<=3;i++)
		{
			check(num[i],num[i+3],num[i+6]);
		}
		check(num[1],num[5],num[9]);
		check(num[3],num[5],num[7]);
		if(judge)
		{
			count++;
			printf("-----\n");
			printf("case:%d\n",count);
			printf("%d %d %d\n%d %d %d\n%d %d %d\n",num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
			
		}
		return;
	}
	for(int i=1;i<=9;i++)
	{
		if(book[i]==0)
		{
			num[step]=i;
			book[i]=1;
			fullpermutation(step+1);
			book[i]=0;
		}
	}
	return;

}
int main()
{
	fullpermutation(1);
	return 0;
}