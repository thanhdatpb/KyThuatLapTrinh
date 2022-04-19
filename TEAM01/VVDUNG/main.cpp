#include "stdio.h"
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

typedef struct _Node{
  int data;
  struct _Node *next;
}Node;
typedef struct _List{
  Node *head;
  Node *tail;
}List;

List _l;

void  InsertLast(List* l,int ele);
void  Delete(List* l, int pos);
int   Count(List* l);
void  Display(List* l);

int main(int argc, char const *argv[])
{  
  _l.head = NULL;
  _l.tail = NULL;

  LOG_WT("Simple List C/C++\n");
  InsertLast(&_l,1);
  InsertLast(&_l,2);
  InsertLast(&_l,3);
  InsertLast(&_l,4);
  LOG_IT("Count(): %d\n",Count(&_l));
  Display(&_l);
  Delete(&_l,7);
  Display(&_l);

  LOG_D("\n****************\n");
  return 0;
}

void  InsertLast(List* l,int ele){
  Node* p = new Node;
  p->data = ele;
  p->next = NULL;
  if (l->head == NULL) l->head = p;
  else l->tail->next = p;
  l->tail = p;  
  //LOG_E("[+] [%p]\n",p);
}
void  Delete(List* l, int pos){
  if (l == NULL || l->head == NULL || pos <= 0) return;
  int idx = 1;
  Node* prev = NULL;
  Node* p = l->head;
  while (p && idx < pos){
    ++idx;
    prev = p;
    p = p->next;
  }
  LOG_W("[%p]->[%p] idx:%d pos:%d\n",prev,p,idx,pos);
  if (!p) return;
  if (p == l->head) l->head = l->head->next;
  else{
    //prev # NULL
    prev->next = p->next;
    if (p == l->tail) l->tail = prev;    
  }
  delete p;
}

int   Count(List* l){
  int cnt = 0;
  if (l == NULL || l->head == NULL) return 0;
  Node* p = l->head;
  while (p != NULL){
    ++cnt;
    p = p->next;
  }
  return cnt;
}
void   Display(List* l){
  if (!l) return;
  Node* p = l->head;
  LOG_DT("LIST :"); //Display Hello in red.
  while (p != NULL){
    printf(" %d",p->data);
    p = p->next;
  }
  printf("\n");  
}