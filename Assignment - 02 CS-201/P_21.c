#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void create (int data)
{
    struct node *add = (struct node*)malloc(sizeof(struct node));
    add->data=data;
    add->next=NULL;
    if(head==NULL){
        head=add;
        head->next=head;
        head->prev=head;
        return;
    }
    struct node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=add;
    add->prev=temp;
    add->next=head;
    head->prev=add;
    return;
}

void print(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is Empty!");
        return;
    }
    printf("Elements of Circular Linked List are : ");
    while(temp->next!=head){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    return;
}


void insertFirst(int data){
    struct node *add = (struct node*)malloc(sizeof(struct node));
    add->data=data;
    add->next=NULL;
    add->prev=NULL;
    if(head==NULL){
        head=add;
        head->next=head;
        head->prev=head;
        return;
    }
    struct node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=add;
    add->prev=temp;
    add->next=head;
    head->prev=add;
    head=add;

    return;
}

void insertLast(int data){
     struct node *add = (struct node*)malloc(sizeof(struct node));
    add->data=data;
    add->next=NULL;
    add->prev=NULL;
    if(head==NULL){
        head=add;
        head->next=head;
        head->prev=head;
        return;
    }
    struct node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=add;
    add->prev=temp;
    add->next=head;
    head->prev=add;

    return;
}


void deleteFirst(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is Empty!");
        return;
    }
    else if(head->next==head){
        head=NULL;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    head=head->next;
    temp->next=head;
    head->prev=temp;

    return;
}

void deleteLast(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is Empty!");
        return;
    }
    else if(head->next==head){
        head=NULL;
        return;
    }
    while(temp->next->next!=head){
        temp=temp->next;
    }
    temp->next=head;
    head->prev=temp;
    return;
}


int main(){
    int n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);

    printf("Enter %d elements in Doubly Circular Linked List : ", n);
    while(n-->0){
        int a;
    scanf("%d",&a);
    create(a);
    }

    printf("\n--Linked List After Insertion of Elements--\n");
    insertFirst(80);
    insertLast(10);
    print();

    printf("\n--Linked List After Deletion of Elements--\n");
    deleteFirst();
    deleteLast();
    print();

    printf("\n");
    return 0;
}
