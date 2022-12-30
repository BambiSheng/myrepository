#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
  char str[80];
  FILE* fp;
  fp=fopen(*(argv+1),"r");
  char ch=fgetc(fp);
  int len=0;
  while(ch!= -1){
    len++;
    ch=fgetc(fp);
  }
  rewind(fp);
  fgets(str,len+1,fp);
  str[len]=0;
  printf("str=%s\nlen=%d",str,len);
  fclose(fp);
}