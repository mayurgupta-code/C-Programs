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
	printf("Enter data of 0 Node : ");
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
	struct node *del;
	del=head;
	head=head->next;
	temp->next=head;
	free(del);

	struct node *del1;
	del1=head;
	while(del1->next!=temp){
		del1=del1->next;

	}
	free(del1->next);
	del1->next=head;





	struct node *ptr=head;
  printf("\n--Linked List is--\n");
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
  printf("\n");


	return 0;

}
