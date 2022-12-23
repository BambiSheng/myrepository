#include<stdio.h>
int gcd(int a,int b){
  int c=a%b;
  while(c!=0){
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}
int main(){
  int a;
  scanf("%d",&a);
  int count=0;
  for(int i=1;i<a;i++){
    if(gcd(a,i)==1)
    count++;
  }
  printf("%d",count);
  return 0;
}
//6min