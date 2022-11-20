//recursion
#include<stdio.h>
#include<time.h>
int f(int n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
    return ((f(n-1)+2)%n+1);
  }
}
int main()
{
  clock_t start , end;
  start=clock(); 
  printf("%d",f(40000));
  end=clock();
  int t=end-start;
  printf("\n%dms",t);

}