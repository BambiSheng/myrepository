#include<stdio.h>
#include<string.h>
void emoji(char start,char* p){
  *p=0;
  int i=1;
  while(*(p-i)!=start){
    i++;
  }
  printf("%s\n",p-i+1);
}

int main(){
  char start;
  char end;
  scanf("%c\n",&start);
  scanf("%c\n",&end);
  char text[140];
  gets(text);
  int len=strlen(text);
  for(int i=0;i<=len-1;i++){
    if(*(text+i) == end){
      emoji(start,text+i);
    }

  }

}