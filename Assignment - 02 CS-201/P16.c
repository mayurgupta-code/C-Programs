#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node * linked_list_creation(int);
void traversal(struct node *,int);


int main()
{
  int n;

  printf("\nEnter the number of Node in the Circular Linked List : ");
  scanf("%d",&n);
  struct node *head=linked_list_creation(n);
  traversal(head,n);
}
struct node * linked_list_creation(int n) // it will return head node of linked list
{
	struct node *head=(struct node *)malloc(sizeof(struct node));
	struct node *k=head;
	printf("\nEnter Head Data : ");
	scanf("%d",&head->data);
	int i=1;
	while(i<n)
	{
		struct node *next=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter %d Data : ",i);
		scanf("%d",&next->data);
		head->link=next;
		next->link=NULL;
		head=head->link;
		i++;
	}
	head->link=k->link->link;
	return k;
}
void traversal(struct node *head,int n)
{
	int i=0;
	while(i<n)
	{
		printf("%d\n",head->data);
		head=head->link;
		i++;
	}
}
