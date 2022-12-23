#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
int judge(char c){
  if(c>='a'&&c<='z')
  return 1;
  else if (c>='A'&&c<='Z')
  return 1;  
  else
  return 0;
}
void swap(char*p1,char*p2){
  char temp=*p1;
  *p1=*p2;
  *p2=temp;
}
int main(){
  char* str=(char*)malloc(999*sizeof(char));
  scanf("%s",str);
  int count=-1;
  char* list[999];
  for(int i=0;i<=strlen(str)-1;i++){
    if(judge(str[i])){
      count++;
      list[count]=str+i;
      
    }
  }
  for(int i=0;i<=count/2;i++){
    swap(list[i],list[count-i]);
  }
  printf("%s",str);
  return 0;
}
//13min