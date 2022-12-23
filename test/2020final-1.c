#include<stdio.h>
#include<math.h>
int prime(int n){
  if(n==2)
  return 1;
  else{
    for(int i=2;i<(int)sqrt((double)n)+1;i++){
      if(n%i==0)
      return 0;
    }
    return 1;
  }
}
int judge(int n){
  int num[6];
  int len=0;
  int temp=n;
  while(temp>0){
    len++;
    num[len]=temp%10;
    temp/=10;
  }

  for(int i=1;i<=len/2;i++){
    if(num[i]!=num[1+len-i])
    return 0;
  }
  return 1;
}



int main(){
  int n;
  scanf("%d",&n);
  for(int i=n;;i++){
    if(prime(i)*judge(i)){
      printf("%d",i);
      break;
    }
  }
  return 0;
}
//10min