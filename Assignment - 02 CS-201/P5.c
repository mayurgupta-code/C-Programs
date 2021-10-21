#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* head;

struct node* newnode(int data){
struct node* temp = (struct node*)malloc(sizeof(struct node));
temp->data = data;
temp->next = NULL;
temp->prev = NULL;
return temp;
}

void addatend(int data){
    struct node* temp = newnode(data);
    if(head == NULL){
        head = temp;
        return;
    }
    struct node* temp2 = head;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->prev = temp2;
}

void print(){
    struct node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void findthenode(int i){
    struct node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    int j;
    for(j = 1;j<i;j++){
      temp = temp->prev;
    }
    printf("%d",temp->data);
}

int main(){
    head = NULL;
    printf("Enter size of linked list : ");
    int s,i,data;
    scanf("%d",&s);
    for(i=0;i<s;i++){
        printf("Enter %d element : " ,i);
        scanf("%d",&data);
        addatend(data);
    }
    print();
    printf("Enter a Index to find the nth node from the 'Last Node' of the linked list : ");
    scanf("%d",&i);
    findthenode(i);


}
