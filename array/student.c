#include<stdio.h>
#include<time.h>
#include<stdlib.h>
typedef struct student{
   char name[4];
  int age;
  int score;
}student;
void rand_name(student gey[],int n)
{
  
  for(int i=0;i<=n-1;i++)
  {
    for(int j=1;j<=3;j++)
    {
      gey[i].name[j-1]=(char)(rand()%26+97);
    }
    gey[i].name[3]=0;
  }
}
void rand_age(student gey[],int n)
{
  for(int i=0;i<=n-1;i++)
  {
    gey[i].age=rand()%100+1;
  }
}
void rand_score(student gey[],int n)
{
  for(int i=0;i<=n-1;i++)
  {
    gey[i].score=rand()%100+1;
  }
}
void print(student gey[],int n)
{
  for(int i=0;i<=n-1;i++)
  {
    printf("\ncount=%d\nname=%s\nage=%d\nscore=%d\n",i+1,gey[i].name,gey[i].age,gey[i].score);
  }
}
int main()
{
  srand((unsigned int)time(0));
  int n;
  scanf("%d",&n);
  student gey[n];
  rand_name(gey,n);
  rand_age(gey,n);
  rand_score(gey,n);
  print(gey,n);
  return 0;
}
