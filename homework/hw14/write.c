#include<stdio.h>
int main(){
  FILE* fp;
  char ch;
  char filename[10];
  printf("Input filename\n");
  scanf("%s\n",filename);
  if((fp =fopen(filename,"w"))==NULL){
    printf("can not open file %s\n",filename);
    return -1;
  }
  ch =getchar();
  while(ch!='#'){
    fputc(ch,fp);
    ch=getchar();
  }
  fclose(fp);
  
  return 0;
}