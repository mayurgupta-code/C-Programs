#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void insertAtEnd(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    if(head == NULL){
        head = temp;
        temp->next=head;
    }
    else{
        struct node* temp1 = head;
        while(temp1->next!=head){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->next = head;
    }

}

void print(){
    if(head == NULL){
        printf("the list is empty : \n");
        return;
    }
    struct node* temp = head;
    int i=1;
    while(temp!=head || i==1){
        i=0;
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;
    printf("Enter size of the Circular Linked List : ");
    int n;
    scanf("%d",&n);
    int i,data;
    for(i=0;i<n;i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&data);
        insertAtEnd(data);
    }
    printf("The circular linked list is : ");
    print();
}
