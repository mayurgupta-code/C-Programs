#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;

};

void linkedlistTraversal(struct Node *ptr){
  int i = 1;
  while(ptr != NULL){
    printf("Element %d is %d\n",i,ptr->data);
    i++;
    ptr = ptr->next;
}

}

//Case 1: Deleting element from the first
struct Node* deleteFirst(struct Node* head){

  struct Node* ptr = head;
  head = head->next;
  free(ptr);

  return head;

}

//Case 2 : Deleting a node in between or at index

struct Node* deleteIndex(struct Node* head, int index){

  struct Node * p = head;

  int i = 0;
  while(i != index-1){
    p = p->next;

    i++;
  }
  struct Node* c = p->next;

  p->next = c->next;

  free(c);

  return head;
}

//Case 3 : Deleting element from last

struct Node* deleteEnd(struct Node* head){

  struct Node * p = head;

  while ((p->next)->next != NULL){
    p = p->next;
  }
  struct Node * c = p->next;
  p->next = NULL;

  free(c);

  return head;

}

//Case 4 : Deleting a node with a given value

struct Node * deleteGivenNode(struct Node* head, struct Node* givenNode){

  struct Node * p = head;

  while(p->next != givenNode){
    p = p->next;
  }
    p->next = givenNode->next;

    return head;
}

int main(){

  //Five Nodes are created
  //Can also initialize by the NULL
  //struct Node * head = NULL;
  struct Node * head;
  struct Node * second;
  struct Node * third;
  struct Node * fourth;
  struct Node * fifth;



  //Allocate memory for nodes in the linked list in the Heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));
  fifth = (struct Node *)malloc(sizeof(struct Node));



  //Link first and second nodes
  head->data = 7;
  head->next = second;

  //Link second and third nodes
  second->data = 11;
  second->next = third;

  //Link third and fourth nodes
  third->data = 41;
  third->next = fourth;

  //Link fourth and fifth nodes
  fourth->data = 45;
  fourth->next = fifth;

  //Terminate the list at the fifth node
  fifth->data = 66;
  fifth->next = NULL;

  printf("Linked list before deletion\n");
  linkedlistTraversal(head);

  //head = deleteFirst(head);

  //head = deleteIndex(head, 2);

  //head = deleteEnd(head);

  head = deleteGivenNode(head,second);

  printf("Linked list after deletion\n");
  linkedlistTraversal(head);

  return 0;

}
