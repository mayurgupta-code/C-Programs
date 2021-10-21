#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* prev;
  struct node* next;
};
struct node* head;
struct node* newnode(int data){
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data = data;
  temp->next = NULL;
  temp->prev = NULL;
  return temp;
};
void addatbegin(int data){
  struct node* temp = newnode(data);
  if(head == NULL){
      temp->next = NULL;
      head = temp;
      return;
  }
  temp->next = head;
  temp->prev = NULL;
  head->prev = temp;
  head = temp;
}
void print(){
  if(head == NULL){
    printf("the list is empty : \n");
  return;
}
  struct node* temp = head;
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}
void addatend(int data){
  struct node* temp = newnode(data);
  if(head == NULL){
    head = temp;
    return;
  }
  struct node* temp2 = head;
  while(temp2->next!=NULL){
    temp2 = temp2->next;
  }
  temp2->next = temp;
  temp->prev = temp2;
}
void ReversePrint() {
  struct node* temp = head;
  if(temp == NULL)
    return;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  printf("Reverse: ");
  while(temp != NULL) {
    printf("%d ",temp->data);
    temp = temp->prev;
  }
  printf("\n");
}

void enteratanIndex(int data ,int index){
    if(head == NULL){
        if(index == 1){
          struct node* temp = newnode(data);
          head = temp;
          return;
          }
        else{
          printf("Underflow\n");
          return;
          }
    }
    struct node* temp = newnode(data);
    struct node* temp2 = head;
    int i;
    for(i = 0;i<index-2;i++){
      temp2 = temp2->next;
      if(temp2 == NULL){
        printf("There are less elements\n");
        return;
      }
    }
    temp->next = temp2->next;
    temp2->next->prev= temp;
    temp->prev = temp2;
    temp2->next = temp;
}

void deleteatanIndex(int n){
    struct node* temp1 = head;
    if(head == NULL){
      printf("Empty list :\n");
      return;
    }
    if(n==1){
      if(temp1->next!=NULL){
        head = temp1->next;
        head->prev = NULL;
        free(temp1);
        return;
      }
      else{
        free(temp1);
        head = NULL;
        return;
      }
    }
    int i;
    for(i=0;i<n-2;i++){
      temp1 = temp1->next;
    }
    struct node* temp2 = temp1->next;
    temp1->next = temp2->next;
    temp2->next->prev = temp1;
    free(temp2);
}
void deleteatbegin(){
  if(head == NULL){
    printf("list empty\n");
  }
  struct node* temp1 = head;
  if(temp1->next!=NULL){
    head = temp1->next;
    head->prev = NULL;
    free(temp1);
    return;
  }
  else{
    free(temp1);
    head = NULL;
  }
}


void deleteatend(){
  struct node* temp1 = head;
  struct node* prev;
  if(head == NULL){
    printf("List Empty :\n");
    return;
  }
  if(temp1->next==NULL){
    free(temp1);
    head = NULL;
    return;
  }
  while(temp1->next!=NULL){
    prev = temp1;
    temp1 = temp1->next;
  }
  prev->next = NULL;
free(temp1);
}


int main(){
  head = NULL;
  while(1){
    int a,data,ind;
    printf("1 : To enter at begining\n");
    printf("2 : To enter at end\n");
    printf("3 : Enter at a particular index\n");
    printf("4 : print\n");
    printf("5 : exit\n");
    printf("6 : delete at n\n");
    printf("7 : delete at begining\n");
    printf("8 : delete at end\n");
    printf("Enter any choice : ");
    scanf("%d",&a);
      switch(a){
      case 1: printf("Enter value :\n");
      scanf("%d",&data);
      addatbegin(data);
      break;
      case 2: printf("Enter value :\n");
      scanf("%d",&data);
      addatend(data);
      break;
      case 3: printf("Enter value and index :\n");
      scanf("%d%d",&data,&ind);
      enteratanIndex(data,ind);
      break;
      case 4: print();
      break;
      case 5: exit(0);
      break;
      case 6: printf("Enter index :\n");
      scanf("%d",&data);
      deleteatanIndex(data);
      break;
      case 7: deleteatbegin();
      break;
      case 8: deleteatend();
      break;
      default : printf("Enter value input :\n");
    }
  }
}
