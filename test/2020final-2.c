#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
int main(){
  int len;
  scanf("%d",&len);
  int* num=(int*)malloc(len*sizeof(int));
  for(int i=0;i<=len-1;i++){
    scanf("%d",num+i);
  }
  int happy=-1;
  for(int i=0;i<=len-1;i++){
    int count=0;
    for(int j=0;j<=len-1;j++){
      if(num[i]==num[j]){
        count++;
      }
    }
    if(count==num[i]){
      if(num[i]>happy){
        happy=num[i];
      }
    }
  }
  printf("%d",happy);
  return 0;
}
//7min