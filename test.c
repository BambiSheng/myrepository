#include<stdio.h>
#include<string.h>
#include<malloc.h>
void printstr(char*str){
  char* str1=(char*)malloc(strlen(str));
  int j=0;
  for(int i=0;i<strlen(str);i++){
    if(*(str+i)!='.'){
    *(str1+j)=*(str+i);
    j++;
    }
    
  }
  *(str1+j)=0;
  printf("%s",str1);
  free(str1);
}
void g(char*str ,int start,int end){
  char*str1=(char*)malloc(-start+end);
  for(int i=0;i<(-start+end-1);i++){
    *(str1+i)=*(str+end-i-1);
  }
  for(int i=0;i<(-start+end-1);i++){
    *(str+start+1+i)=*(str1+i);
  }
  *(str+start)='.';
  *(str+end)='.';
  free(str1);
}
void f(char*str){
  int start,end;
  do{
    start=-1;
    end=-1;
    for(int i=0;i<strlen(str);i++){
      if(*(str+i) == '('){
        for(int j=1;j<strlen(str)-i;j++){
          if(*(str+i+j)=='(')
          break;
          if(*(str+i+j)==')'){
            start=i;
            end=i+j;
            g(str,start,end);
            break;
          }
        }
      }
    }
  }while(start!=-1||end!=-1);
}
int main(){
  char* str=(char *)malloc(99);
  gets(str);
  f(str);
  printstr(str);
  free(str);
  return 0;
}