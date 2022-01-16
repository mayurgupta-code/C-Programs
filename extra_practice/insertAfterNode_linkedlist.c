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

//O(1) : constant because here we don't need to traverse through the linked list
struct Node* insertAfterNode(struct Node* head, struct Node *prevNode, int data){
  struct Node * new_node;
  new_node = (struct Node*)malloc(sizeof(struct Node));

  new_node->data = data;
  new_node->next = prevNode->next;
  prevNode->next = new_node;

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

  head = insertAfterNode(head, second, 1);

  linkedlistTraversal(head);

  return 0;

}
