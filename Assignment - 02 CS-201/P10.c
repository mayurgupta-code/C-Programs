#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* head;

void insert(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
       struct node* temp2 = head;
        while(temp2->link!= NULL){
        temp2 = temp2->link;
        }
        temp2->link = temp;
    }
}
void print(){
    if(head == NULL){
        printf("the list is empty\n");
        return;
    }
    printf("the list is : ");
    struct node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->link;
    }
    printf("\n");
}
void func(){
    int i=0;
    struct node *temp1=head;
    struct node *temp = head->link;
    
    while(temp!=NULL&&temp1!=NULL)
    {
        i = temp->data;
        temp->data=temp1->data;
        temp1->data=i;
        if(temp->link!=NULL){
        temp1=temp->link;
        temp=temp1->link;
        }
        else{
            break;
        }
    }
}
int main(){
    head = NULL;
    printf("Enter size of linked list : ");
    int size,i,data;
    scanf("%d",&size);
    for(i = 0;i<size;i++){
        scanf("%d",&data);
        insert(data);
    }
    printf("Before swapping: ");
    print();
    func();
    printf("After swapping: ");
    print();

}


