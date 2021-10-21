#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node * linked_list_creation(int);
void find_linked_node(struct node *,int);
void traversal(struct node *,int);


int main(){

  int n;

  printf("\nEnter the Number of Nodes : ");
  scanf("%d",&n);
  struct node *head=linked_list_creation(n);
  traversal(head,n);
  find_linked_node(head,n);
}
struct node * linked_list_creation(int n) // it will return head node of linked list
{
	struct node *head=(struct node *)malloc(sizeof(struct node));
	struct node *k=head;
	printf("\nEnter Data : ");
	scanf("%d",&head->data);
	int i=1;
	while(i<n)
	{
		struct node *next=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter Data : ");
		scanf("%d",&next->data);
		head->link=next;
		next->link=NULL;
		head=head->link;
		i++;
	}
	head->link=k->link;
	return k;
}
void find_linked_node(struct node *head,int n)
{
	int i=0;
	while(i<n)
	{
		head=head->link->link;
		i++;
	}
	printf("%d",head->link->data);
}
void traversal(struct node *head,int n)
{
	int i=0;
	while(i<n)
	{
		printf("%d ",head->data);
		head=head->link;
		i++;
	}
}
