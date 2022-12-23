//16:32
#include<stdio.h>
int f(int n,int k,int max){
  int res;
  
  if(n < k){
    res=0;
  }
  else if(k==1){
    if(n<=max)
    res = 1;
    else
    res = 0;
  }
  else{
    res = 0;    
    for(int i=max;i>0;i--){
      res+=f(n-i,k-1,i);
    }
  }
  return res;
}
int main()
{
  int n,k;
  scanf("%d%d",&n,&k);
  printf("%d",f(n,k,n-k+1));
}