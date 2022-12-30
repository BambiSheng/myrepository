#include<stdio.h>
int main(){
  FILE* fp;
  char ch;
  if((fp =fopen("upper.txt","w"))==NULL){
    printf("can not open file %s\n","upper.txt");
    return -1;
  }
  ch =getchar();
  while(ch!='#'){
    if(ch>='a'&&ch<='z'){
      ch=ch+'A'-'a';
    }
    fputc(ch,fp);
    ch=getchar();
  }
  fflush(fp);
  fclose(fp);
   if((fp =fopen("upper.txt","r"))==NULL){
    printf("can not open file %s\n","upper.txt");
    return -1;
  }
  ch=fgetc(fp);
  while(ch!= -1){
    putchar(ch);
    ch=fgetc(fp);
  }

  
  return 0;
}