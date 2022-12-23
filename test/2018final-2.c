#include<stdio.h>
int book[10];
int exist=0;
int dfs(int *num,int step,int n){
  if(step==n+1){
    int sum1=0,sum2=0;
    int count=0;
    for(int i=0;i<n;i++){
      if(book[i]){
        count++;
        sum1+=num[i];
      }
      else
      sum2+=num[i];
    }
    int count1=n-count;
    if(sum1==sum2){
      if(!exist){
      printf("True\n");
      exist=1;
      printf("(");
      for(int i=0;i<n;i++){
        if(book[i]){
          if(count>1){
            printf("%d,",num[i]);
            count--;
          }
          else
          printf("%d)\n",num[i]);
        }
      }
       printf("(");
       for(int i=0;i<n;i++){
        if(book[i]==0){

          if(count1>1){
            printf("%d,",num[i]);
            count1--;
          }
          else
          printf("%d)\n",num[i]);
        }
      }
      }
    }
    return ;
  }
  else{
    book[step-1]=1;
    dfs(num,step+1,n);
    book[step-1]=0;
    dfs(num,step+1,n);
    return ;
  }
}
int main(){
  int n;
  int num[10];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",num+i);
  }
  dfs(num,1,n);
  if(!exist){
    printf("False");
  }
  return 0;
}
//45min 严重失误