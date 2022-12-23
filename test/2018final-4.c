#include<stdio.h>
int main(){
  int num[100];
  int count=0;
  for(int i=0;i<=99;i++){
    int buffer;
    scanf("%d",&buffer);
    if(buffer==-1){
      break;
    }
    else 
    {
      num[count]=buffer;
      count++;
    }
  }
  int len=0;
  for(int i=0;i<=count;i++){
    int temp=0;
    for(int j=0;j<=count;j++){
      if(num[j]==num[i]){
        temp++;
      }
    }
    if(temp>len){
      len=temp;
    }
  }
  printf("%d",len);
  return 0;
}
//5min