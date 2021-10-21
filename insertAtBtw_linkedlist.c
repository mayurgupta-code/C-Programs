#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;

};

void linkedlistTraversal(struct Node *ptr){
  int i = 0;
  while(ptr != NULL){
    printf("Element at index %d is %d\n",i,ptr->data);
    i++;
    ptr = ptr->next;
}

}

//O(n) : because here we have to traverse through the Linked list
struct Node* insertAtindex(struct Node* head, int data, int index){

  struct Node* new_node;
  new_node = (struct Node*)malloc(sizeof(struct Node));

  struct Node* p = head;
  int i = 0;
  while(i != index-1){
    p = p->next;
    i++;

  }

  new_node->data = data;
  new_node->next = p->next;
  p->next = new_node;

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

  head = insertAtindex(head, 40, 2);

  printf("After inserting element at index \n");
  linkedlistTraversal(head);

  return 0;

}
