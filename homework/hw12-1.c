#include<stdio.h>
#include<string.h>
#include<malloc.h>

void swap(char ** str1,char** str2){
  char *temp;
  temp=*str1;
  *str1=*str2;
  *str2=temp;
}
void strin(char* list[],int n){
  for(int i=0;i<=n-1;i++){
  char *buffer = (char*)malloc(80*sizeof(char));
  scanf("%s",buffer);
  list[i]=(char*)malloc(strlen(buffer)+1);
  strcpy(list[i],buffer);
  free(buffer);
  }
}
void freestr(char* list[],int n){
  for(int i=0;i<=n-1;i++){
    free(list[i]);
  }
}
void printstr(char* list[],int n){
  for(int i=0;i<=n-1;i++){
    printf("%s\n",list[i]);
  }
}

void order(char*list[],int n){
  for(int i=n-2;i>=0;i--){
    for(int j=0;j<=i;j++){
      if(strlen(list[j])>strlen(list[j+1])){
        swap(&(list[j]),&(list[j+1]));
      }
    }
  }
}


int main()
{
  int n;
  scanf("%d",&n);
  char* list[n];
  strin(list,n);
  order(list,n);
  printf("-----------------\n");
  printstr(list,n);
  freestr(list,n);
  return 0;
}