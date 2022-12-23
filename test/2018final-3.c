#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
void swap(char*p1,char*p2){
  char temp=*p1;
  *p1=*p2;
  *p2=temp;
}
char* order(char* str){
  int n=strlen(str);
  for(int i=0;i<=n-2;i++){
    for(int j=0;j<=n-2-i;j++){
      if(*(str+j)>*(str+j+1)){
        swap(str+j,str+j+1);
      }
    }
  }
  return str;
}

int main(){
  int exist=0;
  char *str1=(char*)malloc(100*sizeof(char));
  char *str2=(char*)malloc(100*sizeof(char));
  scanf("%s",str1);
  scanf("%s",str2);
  int n1=strlen(str1);
  int n2=strlen(str2);
  for(int i=0;i<=n2-1-n1;i++){
    char substr[n1+1],temp[n1+1];
    for(int j=0;j<=n1-1;j++){
      substr[j]=str2[i+j];
    }
    substr[n1]=0;
    strcpy(temp,substr);
    int res=strcmp(order(str1),order(substr));
    if(!res){
      printf("True\n%s",temp);
      exist=1;
      break;
    }
  }
  if(!exist){
    printf("False");
  }
  return 0;
}
//20min 尚可