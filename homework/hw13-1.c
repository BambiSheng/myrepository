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
int main(){
  printf("enter the info:");
  STU stuinfo[10];
  for(int i=0;i<10;i++){
    scanf("%lld %s %c %lld %lf",&(stuinfo+i)->id,(stuinfo+i)->name,&(stuinfo+i)->sex,&(stuinfo+i)->birthday,&(stuinfo+i)->score);
  }
  int exit=1;
  while(exit){
    int mode;
    printf("1 -> print all info\n2 -> average score\n3 -> sort by score\n4 -> exit\nplease enter:\n");
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
      default:
        break;
    }
  }
  return 0;
}