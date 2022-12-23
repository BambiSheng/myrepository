#include<stdio.h>
int main(){
  int res=0;
  int buffer=0;
  int mode=1;
  while(1){
    char c;
    scanf("%c",&c);
    if(c>='0'&&c<='9'){
      buffer=buffer*10+c-48;
      continue;
    }
    if(c=='+'){
      if(mode)
      res+=buffer;
      else
      res-=buffer;
      buffer=0;
      mode=1;
      continue;
    }
    if(c=='-'){
      if(mode)
      res+=buffer;
      else
      res-=buffer;
      buffer=0;
      mode=0;
      continue;
    }
    if(c=='='){
      if(mode)
      res+=buffer;
      else
      res-=buffer;
      break;
    }
  }
  printf("%d",res);
  return 0;
}
//15min