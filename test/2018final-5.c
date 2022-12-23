#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
int judge(char*str1,char*str2,int n){
  char* s1=str1+strlen(str1)-n;
  char* s2=str2;
  char temp=s2[n];
  s2[n]=0;
  int res=strcmp(s1,s2);
  s2[n]=temp;
  if(!res){
    
    printf("%s%s",str1,str2+n);
    return 1;
  }
    else
    return 0;
}
int min(int a,int b){
  if(a>b)
  return b;
  else
  return a;
}
int main(){
  char* str1=(char *)malloc(100*sizeof(char));
  char* str2=(char *)malloc(100*sizeof(char));
  scanf("%s %s",str1,str2);
  int len1=strlen(str1);
  int len2=strlen(str2);
  int len=min(len1,len2);
  for(int i=len;i>=0;i--){
    if(judge(str1,str2,i)==1){
      break;
    }
  }
  return 0;
}
//20min