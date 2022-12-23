#include<stdio.h>
int book[10];
int count=0;
void dfs(int step,int num){
  if(step==4){
    printf("%d\n",num);
    count++;
    return;
  }
  else{
    for(int i=1;i<=9;i++){
      if(book[i]){
      --(book[i]);
      num=num*10+i;
      dfs(step+1,num);
      num=(num-i)/10;
      ++(book[i]);
      }
    }
    return;
  }
}
int main(){
  while(1){
    int buffer;
    scanf("%d",&buffer);
    if(buffer==0){
      break;
    }
    else
    (book[buffer])++;
  }
  dfs(1,0);
  printf("%d",count);
  return 0;
}
//10min