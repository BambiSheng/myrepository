#include<stdio.h>

int judge(int pile[],int method[][4],int n){
  int lose=0;
  int disable[n];
  for(int i=0;i<=n-1;i++){
    disable[i]=1;
    for(int j=0;j<=3;j++){
      if(method[i][j]>pile[j]){
      lose++;
      disable[i]=0;
      break;
      }
    }
  }
  if(lose == n)
    return 0;
  int ret=0;
  for(int i=0;i<=n-1;i++){
    if(!disable[i])
    continue;
    int pile1[4];
    for(int j=0;j<=3;j++){
      
      pile1[j]=pile[j]-method[i][j];
    }
    ret=(!judge(pile1,method,n)); 
    if(ret)
    return 1;
  }
  return 0;
}

int main(){
  int pile[4];
  int n;
  for(int i=0;i<=3;i++){
    scanf("%d",pile+i);
  }
  scanf("%d",&n);
  int method[n][4];
  for(int i=0;i<=n-1;i++){
    for(int j=0;j<=3;j++){
      scanf("%d",*(method+i)+j);
    }
  }  
  int res=judge(pile,method,n);
  if(res)
  printf("win");
  else
  printf("lose");
  return 0;
}