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

//O(n)
struct Node* insertAtEnd(struct Node *head, int data){

  struct Node* new_node;
  new_node = (struct Node*)malloc(sizeof(struct Node));

  struct Node* p = head;
  struct Node* c;
  /*
  Here also the complexity is O(n)
  because here pointer p moves from starting to the End
  so that's the worst case in itself.
  */
  /*
  while(p!=NULL){
    c = p;
    p = p->next;
  }
  */
//  or this loop can be applied also like where p->next != NULL
  while(p->next != NULL){
    p = p->next;

}

  new_node->data = data;
  //c->next = new_node;
  p->next = new_node;
  new_node->next = NULL;

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


  linkedlistTraversal(head);

  head = insertAtEnd(head,1);
  printf("After inserting element at the End\n");
  linkedlistTraversal(head);

  return 0;

}
