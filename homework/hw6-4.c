#include<stdio.h>
int judge(float n)
{
  if((int)n==n)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
int main()
{
  float A,B,C,D,E;
  float all;
  for(all=11;judge(A)||judge(B)||judge(C)||judge(D)||E!=11;all++)
  {
    float all1=all;
    A=all1/2+0.5;
    all1-=A;
    B=(all1+1)/3;
    all1-=B;
    C=(all1+1)/4;
    all1-=C;
    D=(all1+1)/5;
    all1-=D;
    E=all1;
  }
  printf("all=%.0f\nA=%.0f\nB=%.0f\nC=%.0f\nD=%.0f\nE=%.0f",all-1,A,B,C,D,E);
}