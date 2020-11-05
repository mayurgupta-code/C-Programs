#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node * next;
};

void linkedlistTraversal(struct Node *ptr){
  while(ptr != NULL){
    printf("Element is %d\n",ptr->data);
    ptr = ptr->next;

  }
}
//This is a function that makes the new_node
//which is joined at the starting of the linked list
// O(1)
struct Node* insertAtFirst(struct Node* head, int data){
  struct Node * new_node;
  new_node = (struct Node*)malloc(sizeof(struct Node));

  new_node->next = head;
  new_node->data = data;

  return new_node;

}

int main(){

  //struct Node * insertAtFirst;
  struct Node * head;
  struct Node * second;
  struct Node * third;

  //insertAtFirst = (struct Node*)malloc(sizeof(struct Node));
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));

/*
 //Insert at the beginning inside the main()
 //without making another function
  insertAtFirst->data = 8;
  insertAtFirst->next = head;
*/
  head->data = 11;
  head->next = second;

  second->data = 18;
  second->next = third;

  third->data = 40;
  third->next = NULL;

  linkedlistTraversal(head);

  //Due to this head will be the head will be the new node
  //that is returned by the function
  head = insertAtFirst(head, 56);

  printf("New element is inserted at the beginning\n");

  linkedlistTraversal(head);


  return 0;


}
