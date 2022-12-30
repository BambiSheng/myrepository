#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct tagNode{
  int index;
  int value;
  struct tagNode* prev;
  struct tagNode* next;
}NODE,*PNODE;

PNODE insert(PNODE* phead,int index,int value){
  PNODE head=*phead;
  int exit=0;
  PNODE temphead=head;
  while(temphead!=NULL){
    if(temphead->index==index){
      temphead->value=value;
      exit=1;
      break;
      
    }
    else
    temphead=temphead->next;
  }
  if(exit)
  return head;
  else{
    PNODE temp=(PNODE)malloc(sizeof(NODE));
    temp->index=index;
    temp->value=value;
    temp->next=head;
    if(head!=NULL)
    head->prev=temp;
    temp->prev=NULL;
    *phead=temp;
  }
  return *phead;
}

void delete_by_index(PNODE* phead,int index){
  PNODE temp=*phead;
  int error=1;
  while(temp!=NULL){
    if(temp->index==index){
      if(temp==*phead)
      *phead=(*phead)->next;
      PNODE prev=temp->prev;
      PNODE next=temp->next;
      if(prev!=NULL)
      prev->next=next;
      if(next!=NULL)
      next->prev=prev;
      error=0;
      break;
    } 
    temp=temp->next;
  }
  if(error)
  printf("invalid index!\n");
  return;
}
void printnode(PNODE head){
  printf("index\tvalue\n");
  PNODE temp=head;
  while(temp!=NULL){
    printf("%d\t%d\n",temp->index,temp->value);
    temp=temp->next;
  }
  return;
}



int main(){
  PNODE head=NULL;
  printf("initializing...\n");

  int index;
  int value;
  scanf("%d %d",&index,&value);
  while(index!=-1){
    insert(&head,index,value);
    scanf("%d %d",&index,&value);
  }
  int mode;
  printf("print -> 1\ndelete by index ->2\ninsert by index ->3\nexit -> 0");
  printf("\nenter:\n");
  scanf("%d",&mode);
  while(mode!=0){ 
    int temp=0;
    int tempindex=0;
    int tempvalue=0;
    switch (mode){
    case 1:
      printnode(head);
      break;
    case 2:
      printf("enter the index:\n");
      scanf("%d",&temp);
      delete_by_index(&head,temp);
      break;
    case 3:
      
      printf("enter the index and value:\n");
      scanf("%d%d",&tempindex,&tempvalue);
      insert(&head,tempindex,tempvalue);
      break;
    default:
      break;
    }      
    printf("print -> 1\ndelete by index ->2\ninsert by index ->3\nexit -> 0");
    printf("\nenter:\n");
    scanf("%d",&mode);

  }
}