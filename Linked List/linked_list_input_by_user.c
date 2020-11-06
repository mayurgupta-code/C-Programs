//this is like inserting element to the end of the linked list
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

void linkedlistTraversal(struct Node *ptr){
  int i = 1;
  while (ptr!=NULL){
    printf("Element %d is %d\n",i , ptr->data);
    ptr = ptr->next;
    i++;
  }
}

struct Node *  Enterlinkedlist(struct Node * head, int n){
  //struct Node * head;
  //head = (struct Node *) malloc(sizeof(struct Node));
  int data;

  printf("Enter data of the 1 element : ");
  scanf("%d",&data);

  head->data = data;
  head->next = NULL;

  for (int i=2; i<=n; i++){
    struct Node * p = head;
    //every time one new_node is created that inserts at the end
    struct Node * new_node;
    new_node = (struct Node *) malloc(sizeof(struct Node));

    printf("Enter data of the %d element : ", i);
    scanf("%d",&data);

    while (p->next != NULL){
      p = p->next;
    }
    new_node->data = data;
    new_node->next = NULL;
    p->next = new_node;

  }

  return head;


}

int main(){
  int n;

  printf("\nEnter the number of elements in the linked list : ");
  scanf("%d",&n);
  //here head is allocated inside main but its data is also entered inside function
  
  struct Node * head;
  head = (struct Node *) malloc(sizeof(struct Node));

  head = Enterlinkedlist(head, n);

  linkedlistTraversal(head);


  return 0;
}
