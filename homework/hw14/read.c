#include<stdio.h>
int main(){
  FILE* fp;
  char ch;
  fp=fopen("text.txt","r");
  if(fp==NULL){
    printf("cant open text\n");
    return -1;
  }
  ch=fgetc(fp);
  while(ch!= -1){
    putchar(ch);
    ch=fgetc(fp);
  }
  fclose(fp);
  return 0;
}