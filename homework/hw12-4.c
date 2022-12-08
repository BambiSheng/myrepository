#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int mat[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",*(mat+i)+j);
    }
  }
  for(int i=0;i<=2*n-2;i++){
    if(i%2 == 0){
      for(int j=0;j<=i;j++){
        if(i-j<n && j<n)
        printf("%d ",*(*(mat+i-j)+j));
      }
    }
    else{
      for(int j=i;j>=0;j--){
        if(j<n && i-j<n)
        printf("%d ",*(*(mat+i-j)+j));
      }
    }
    
  }
}
/*1  2  3  4
  5  6  7  8
  9  10 11 12
  13 14 15 16
*/