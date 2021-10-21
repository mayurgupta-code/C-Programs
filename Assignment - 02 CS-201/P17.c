#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;

	struct node *next;
};
int main(){
	int data,i,n;
	printf("Enter Number of Nodes : ");
	scanf("%d",&n);

	struct node *head=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data of 0 Node : ");
	scanf("%d",&data);

	head->data=data;

	head->next=head;

	struct node *temp=NULL;
	temp=head;

	for(i=1;i<n;i++){
		struct node *t=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data of %d Node : ",i);
		scanf("%d",&data);

		t->data=data;

		t->next=temp->next;

		temp->next=t;

		temp=t;

	}

	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&data);
	newnode->data=data;
newnode->next=head;
temp->next=newnode;
head=newnode;

struct node *lastnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&data);
lastnode->data=data;
temp->next=lastnode;
lastnode->next=head;




	struct node *ptr=head;
	printf("\n---Linked List is---\n");
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
	return 0;

}
