//this is like inserting element at the beginning of the linked list
//then reversing the whole linked list
//this is more efficient way of doing work against previous one.
//time complexity is less in this
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

struct Node *  Enterlinkedlist(struct Node * head, int n){

  int data;

  printf("Enter data of the 1 element : ");
  scanf("%d",&data);

  head->data = data;
  head->next = NULL;

  for (int i=2; i<=n; i++){
    struct Node * p = head;
    //every time one new_node is created that inserts at the beginning
    struct Node * new_node;
    new_node = (struct Node *) malloc(sizeof(struct Node));

    printf("Enter data of the %d element : ", i);
    scanf("%d",&data);

    new_node->data = data;
    new_node->next = head;

    head = new_node;

  }
  //above will adds all the elements one by one at beginning
  //so to make the correct order of it then do it in reverse order
  //then all things will be fine

  head = reverse(head);

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
