#include<stdio.h>
typedef struct student{
  char * name;
  int age;
  int score;
}student;
int main()
{
  student gey;
  gey.name="aiqwe";
  printf("%c",gey.name[3]);
  
}