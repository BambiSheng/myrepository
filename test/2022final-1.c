#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
struct block{
  char c;
  int num;
};
typedef struct block block;
void swap(block* p1,block* p2){
  char tempc=p1->c;
  int tempn=p1->num;
  p1->c=p2->c;
  p1->num=p2->num;
  p2->c=tempc;
  p2->num=tempn;
}
int main(){
  int count=0;
  char* str=(char*)malloc(100*sizeof(char));
  scanf("%s",str);
  block* list=(block*)malloc(strlen(str)*sizeof(block));
  list[0].c=str[0];
  list[0].num=1;
  for(int i=1;i<=strlen(str)-1;i++){
    int creat=1;
    for(int j=0;j<=count;j++){
      if(list[j].c == str[i]){
        list[j].num=list[j].num+1;
        creat=0;
        break;
      }
    }
    if(creat){
      count++;
      list[count].c=str[i];
      list[count].num=1;
    }
  }
for(int i=0;i<=count-1;i++){
  for(int j=0;j<=count-i-1;j++){
    if(list[j].num<list[j+1].num){
      swap(list+j,list+j+1);
    }
  }
}

for(int i=0;i<=count;i++){
  for(int j=1;j<=list[i].num;j++){
    printf("%c",list[i].c);
  }
  
}
  return 0;
}
