
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

int main(){
  //Create Nodes
  struct Node * head;
  struct Node * second;
  struct Node * third;

  //Allocate memory for nodes in the linked list in the Heap
  head = (struct Node *) malloc(sizeof(struct Node));
  second = (struct Node *) malloc(sizeof(struct Node));
  third = (struct Node *) malloc(sizeof(struct Node));

  //Link First and second Nodes
  head->data = 12;
  head->next = second;

  //Link Second and Third nodes
  second->data = 7;
  second->next = third;

  //Link third to NULL
  third->data = 71;
  third->next = NULL;

  linkedlistTraversal(head);


  return 0;

  }
