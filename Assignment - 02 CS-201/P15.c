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

void countNodes(){
    struct node* temp = head;
    int ans=0,i=0;
    if(temp == NULL){
        printf("%d nodes are there in the linked list\n",ans);
        return;
    }
    else{
        while(temp!=head || i==0){
            i=1;
            ans++;
            temp = temp->next;
        }
        printf("There are %d nodes in the list\n",ans);
    }
}

int main(){
    head = NULL;
    while(1){
    printf("Enter your choice : \n");
    printf("1 : Insert Node \n");
    printf("2 : Count number of Nodes \n");
    printf("3 : Exit \n");
    int n,data;
    scanf("%d",&n);
    switch(n){
        case 1: printf("Enter Data : ");
                scanf("%d",&data);
                insertAtEnd(data);
                break;
        case 2: countNodes();
                break;
        case 3: exit(0);
        default: printf("Enter a valid input\n");
    }
}
}
