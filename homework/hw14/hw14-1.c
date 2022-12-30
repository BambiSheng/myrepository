#include<stdio.h>
enum sex{male,female};
struct stu{
  long long id;
  char name[20];
  char sex;
  long long birthday;
  double score;
};
typedef struct stu STU;
void PRINT(STU* stuinfo){
  printf("id\t\tname\t\tsex\t\tbirthday\t\tscore\n");
  for(int i=0;i<10;i++){
    printf("%lld\t%s\t\t%c\t\t%lld\t\t%.2lf\n",(*(stuinfo+i)).id,(*(stuinfo+i)).name,(*(stuinfo+i)).sex,(*(stuinfo+i)).birthday,(*(stuinfo+i)).score);
  }
}
void score(STU* stuinfo){
  double score;
  for(int i=0;i<10;i++){
    score+=(*(stuinfo+i)).score;
  }
  printf("average score:%.2lf\n",score/10);
}
void swap(STU* p1,STU* p2){
  STU temp=*p1;
  *p1=*p2;
  *p2=temp;
}
void sort(STU* stuinfo){
  STU stuinfo1[10];
  for(int i=0;i<10;i++){
    stuinfo1[i]=stuinfo[i];
  }
  for(int i=0;i<10;i++){
    for(int j=0;j<9-i;j++){
      if(stuinfo1[j].score<stuinfo1[j+1].score){
        swap(stuinfo1+j,stuinfo1+j+1);
      }
    }
  }
  printf("rank\tid\t\tname\t\tsex\t\tbirthday\t\tscore\n");
   for(int i=0;i<10;i++){
    printf("%d\t%lld\t%s\t\t%c\t\t%lld\t\t%.2lf\n",i+1,(*(stuinfo1+i)).id,(*(stuinfo1+i)).name,(*(stuinfo1+i)).sex,(*(stuinfo1+i)).birthday,(*(stuinfo1+i)).score);
  }
}
int save(STU* stuinfo){
  FILE* fp;

  if((fp =fopen("stu.dat","wb"))==NULL){
  printf("can not open file \n");
  return -1;
 }
        
for(int i=0;i<10;i++){
  if(fwrite(stuinfo+i,sizeof(STU),1,fp)==0)
  printf("error\n");
}

fclose(fp);
return 0;
}


void search(void){
  long long id;
  char filename[10];
  printf("enter the id:\n");
  scanf("%lld",&id);
  
  FILE* fp;
  STU stuinfo[10];
  int find=0;
  fp=fopen("stu.dat","rb");
  for(int i=0;i<=9;i++){
    fread(stuinfo+i,sizeof(STU),1,fp);
    if((stuinfo[i]).id==id){
    printf("id\t\tname\t\tsex\t\tbirthday\t\tscore\n");
  
    printf("%lld\t%s\t\t%c\t\t%lld\t\t%.2lf\n",(*(stuinfo+i)).id,(*(stuinfo+i)).name,(*(stuinfo+i)).sex,(*(stuinfo+i)).birthday,(*(stuinfo+i)).score);
    find =1;
    break;   
    }
    
  }
  if(!find)
  printf("invalid id\n");
  fclose(fp);
  return;
}
int main(){
  printf("enter the info:\n");
  STU stuinfo[10];
  for(int i=0;i<10;i++){
    scanf("%lld %s %c %lld %lf",&(stuinfo+i)->id,(stuinfo+i)->name,&(stuinfo+i)->sex,&(stuinfo+i)->birthday,&(stuinfo+i)->score);
  }
  int exit=1;
  FILE* fp;
  char filename[10];
  while(exit){
    int mode;
    printf("1 -> print all info\n2 -> average score\n3 -> sort by score\n4 -> exit\n5 -> save\n6 ->search\nplease enter:\n");
    scanf("%d",&mode);
    switch (mode)
    {
      case 1:
        PRINT(stuinfo);
        break;
      case 2:
        score(stuinfo);
        break;
      case 3:
        sort(stuinfo);
        break;
      case 4:
        exit=0;
        break;
      case 5:
        save(stuinfo)==0;
        break;
      case 6:
        search();
        break;
      default:
        break;
    }
  }
  return 0;
}