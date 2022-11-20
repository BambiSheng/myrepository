#include<stdio.h>
int main()
{
int a,b;
int c;
scanf("%d%d",&a,&b);
c=10*a+b;
c=(c-c%19)/19;
printf("%d",c);
}