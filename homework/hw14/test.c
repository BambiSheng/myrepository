#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE* fp;
  char c[21];
  int i;
  if((fp=fopen("1.txt","w+"))==NULL){
    printf("cannot open");
  }
  for(i=0;i<2;i++)
    fputs("huang yong",fp);
    fseek(fp,-15L,SEEK_CUR);
    fputs("YONG",fp);
    fflush(fp);
    fgets(c,21,fp);
    c[20]=0;
    puts(c);
    fclose(fp);


  
}