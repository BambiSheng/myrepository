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
  if(head==NULL)
  printf("NULL\tNULL\t");
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
  printnode(head);
  while(head!=NULL){
    int min=head->value;
    int index=head->index;
    PNODE temp=head->next;
    while(temp!=NULL){
      if(temp->value<min){
        min=temp->value;
        index=temp->index;
      }
      temp=temp->next;
    }
    printf("index:%d value:%d\ndeleting...\n",index,min);
    delete_by_index(&head,index);
    printnode(head);
  }
  return 0;
}