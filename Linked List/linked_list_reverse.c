
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

struct Node * insertAtFirst(struct Node *head, int data){
  struct Node * new_node;
  new_node = (struct Node *) malloc(sizeof(struct Node));

  new_node->data = data;
  new_node->next = head;

  return new_node;

}

struct Node * insertAtindex(struct Node *head, int data, int index){
  struct Node * new_node;
  new_node = (struct Node * ) malloc(sizeof(struct Node));

  struct Node * p = head;

  for(int i=0; i<index; i++){
    p = p->next;
  }

  new_node->data = data;
  new_node->next = p->next;
  p->next = new_node;

  return head;

}

struct Node * insertAtend(struct Node * head, int data){
  struct Node * new_node;
  new_node = (struct Node * ) malloc(sizeof(struct Node));

  struct Node *p = head;
  while( p->next != NULL ){
    p = p->next;

  }
  new_node->data = data;
  new_node->next = NULL;
  p->next = new_node;

  return head;

}


struct Node * deleteFirst(struct Node * head){
  struct Node * ptr = head;
  head = head->next;

  free(ptr);
  return head;

}

struct Node * deleteIndex(struct Node * head, int index){
  struct Node * p = head;

  for (int i=0; i<(index-1); i++){
    p = p->next;
  }
  p->next = (p->next)->next;

  free(p);
  return head;

}

struct Node * deleteEnd(struct Node * head){
  struct Node * p = head;

  while( (p->next)->next != NULL ){
    p = p->next;
  }
  p->next = NULL;

  free(p);
  return head;

}

struct Node * deleteGivenNode(struct Node * head, struct Node * givenNode){
  struct Node * p = head;

  while( p->next != givenNode ){
    p = p->next;
  }

  p->next = givenNode->next;
  free(p);

  return head;

}

struct Node * reverse(struct Node * head){
  struct Node * p = head->next;
  struct Node * q = NULL;
  struct Node * c = head;


  while ( p != NULL ){
    c->next = q;
    q = c;
    c = p;
    p = p->next;
  }

  c->next = q;

  free(p);
  free(q);

  return c;

}

int main(){
  //Create Nodes
  struct Node * head;
  struct Node * second;
  struct Node * third;
  struct Node * fourth;

  //Allocate memory for nodes in the linked list in the Heap
  head = (struct Node *) malloc(sizeof(struct Node));
  second = (struct Node *) malloc(sizeof(struct Node));
  third = (struct Node *) malloc(sizeof(struct Node));
  fourth = (struct Node *) malloc(sizeof(struct Node));


  //Link First and second Nodes
  head->data = 19;
  head->next = second;

  //Link Second and Third nodes
  second->data = 45;
  second->next = third;

  //Link third to fourth
  third->data = 71;
  third->next = fourth;

  //Link Fourth to NULL
  fourth->data = 66;
  fourth->next = NULL;


  // Insertion in Linked List
  /*

  printf("\nLinked List before the insertion : \n");
  linkedlistTraversal(head);

  //insertion at beginning
  //head = insertAtFirst(head, 1);


  //insert in btw or after a particular index
  //head = insertAtindex(head, 1, 1);


  //insert at end
  head = insertAtend(head, 1);

  printf("\nLinked List after the insertion : \n");
  linkedlistTraversal(head);

  */

  /*
  // Deletion in Linked list

  printf("\nLinked List before the Deletion : \n");
  linkedlistTraversal(head);

  //Deleting element from the first
  //head = deleteFirst(head);

  //Deleting a node in between or at index
  //head = deleteIndex(head, 2);

  //Deleting the last node
  //head = deleteEnd(head);

  //Deleting the particular node
  head = deleteGivenNode(head, third);


  printf("\nLinked List after the Deletion : \n");
  linkedlistTraversal(head);
  */

  head = reverse(head);
  linkedlistTraversal(head);


  return 0;

  }
