#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
   struct node* link;
};
    struct node* head1;
    struct node* head2;
void insert(int data , struct node** head){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    if(*head == NULL){
        *head = temp;
    }
    else{
       struct node* temp2 = *head;
        while(temp2->link!= NULL){
        temp2 = temp2->link;
        }
        temp2->link = temp;
    }
}

void sameElement()
{
    struct node *temp1,*temp2;
    temp1=head1;
    temp2=head2;
    while(temp1!=NULL){
        while(temp2!=NULL){
            if(temp1->data==temp2->data){
                printf("%d ",temp1->data);
                break;
                }
            temp2=temp2->link;
        }
        temp1=temp1->link;
        temp2=head2;
    }
}

void print(struct node* head){
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

int main(){
    head1 = NULL;
    head2 = NULL;
    printf("Input size of both linked list : ");
    int size, data = 0,pdata =0;
    scanf("%d",&size);
    printf("Input 1st linked list: ");
    for(int i = 0;i<size;i++){
        scanf("%d",&data);
        if(i==0){
            insert(data,&head1);
            pdata=data;
        }
        if(i!=0 && data!=pdata){
        insert(data ,&head1);
        pdata = data;
        }

    }

    data=0;
    pdata=0;

    printf("Input 2nd linked list : ");
    for(int i = 0;i<size;i++){
        scanf("%d",&data);
        if(i==0){
            insert(data,&head2);
            pdata=data;
        }
        if(i!=0 && data!=pdata){
        insert(data ,&head2);
        pdata = data;
        }
    }


    printf("\nPrinting Similar Elements: ");

    sameElement();

}
