#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;

};

void linkedlistTraversal(struct Node *head){
  struct Node * ptr = head;
  int i = 1;
  //In do while loop, loop will runs first time always then
  //further it will run after checking the condition of the loop
  do{
    printf("Element %d is %d\n",i,ptr->data);
    i++;
    ptr = ptr->next;
}while(ptr != head);

}

//Case 1 : Insertion at the beginning

struct Node * insertAtFirst(struct Node * head, int data){

  struct Node * new_node;
  new_node = (struct Node *)malloc(sizeof(struct Node));

  struct Node * ptr = head;

  new_node->data = data;
  new_node->next = head;

  return new_node;

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

  head = insertAtFirst(head,1);

  //Terminate the list at the fifth node
  fifth->data = 66;
  fifth->next = head;

  //head = insertAtFirst(head,1);

  linkedlistTraversal(head);

  return 0;

}
