#include<stdio.h>
int f(int i,int n,int N){
  if(i+n<=N){
    return (i+n);
  }
  else{
    return (i+n)%N;
  }
}

int main(){
  int mat[10][10];
  for(int i=0;i<=9;i++){
    for(int j=0;j<=9;j++){
      mat[i][j]=i*10+j;
    }
  }
  int n;
  int N=10;
  int sn=0;
  scanf("%d",&n);
  for(int i=1;i<=N;i++){
    sn+=*(*(mat+i-1)+f(i,n,N)-1);
  }
  printf("%d",sn);
  return 0;
}