#include<stdio.h>
int main(){
  int num[10];
  int i;
  for( i=0;i<10;i++){
    int n;
    scanf("%d",&n);    
    if(n==-1)
    break;
    else{
      num[i]=n;
    }
  }
  int c;
  int exist=0;
  scanf("%d",&c);
  int count=i;
  for(int i=0;i<=count;i++){
    for(int j=0;j<=count;j++){
      if(j!=i){
        if(num[i]-num[j]==c){
          printf("%d-%d=%d\n",num[i],num[j],c);
          exist=1;
        }
      }
    }
  }
  if(!exist)
  printf("No such pairs!");
  return 0;
}
//6mins