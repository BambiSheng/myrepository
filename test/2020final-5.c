#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#include<stdio.h>
int judge(char*str){
  int len=strlen(str);
  for(int i=0;i<=len/2;i++){
    if(str[i]!=str[len-1-i])
    return 0;
  }
  return 1;
}
int main(){
  int n;
  scanf("%d",&n);
  char* str=(char*)malloc((n+1)*sizeof(char));
  char* buffer=(char*)malloc((n+1)*sizeof(char));
  char* ans=(char*)malloc((n+1)*sizeof(char));
  scanf("%s",str);
  int len=strlen(str);
  int max=0;
  for(int i=0;i<=len-1;i++){
    for(int j=len-1;j>=i;j--){
      for(int k=i;k<=j;k++){
        buffer[k-i]=str[k];
      }
      buffer[j+1-i]=0;
      if(judge(buffer)){
        int temp=strlen(buffer);
        if(temp>max){
          strcpy(ans,buffer);
          max=temp;
          break;
        }
      }
    }
  }
  printf("%s",ans);
  return 0;

}
//15min