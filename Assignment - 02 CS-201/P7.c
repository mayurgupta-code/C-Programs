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

struct node* merge(){
    struct node* ans=NULL;
    struct node* current=NULL;
    struct node* temp1=head1;
    struct node* temp2=head2;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data<temp2->data){
         if(ans == NULL){
             ans = temp1;
             current = ans;
             temp1 = temp1->link;
             current->link = NULL;
         }
         else{
             current->link = temp1;
             current = temp1;
             temp1 = temp1->link;
             current->link = NULL;
         }
        }
        else if(temp1->data>temp2->data) {
            if(ans == NULL)
            {
                ans = temp2;
                current = ans;
                temp2 = temp2->link;
                current->link = NULL;
            }
            else{
                current->link = temp2;
                current = temp2;
                temp2 = temp2->link;
                current->link = NULL;
            }
        }
        else{
            if(ans == NULL)
            {
                ans = temp2;
                current = ans;
                temp2 = temp2->link;
                temp1 = temp1->link;
                current->link = NULL;
            }
            else{
                current->link = temp2;
                current = temp2;
                temp2 = temp2->link;
                temp1 = temp1->link;
                current->link = NULL;
            }
        }
    }

    while(temp1!=NULL){
        current->link = temp1;
        temp1 = NULL;
    }

    while(temp2!=NULL){
        current->link = temp2;
        temp2 = NULL;
    }

    return ans;
}

int main(){
    head1 = NULL;
    head2 = NULL;
    printf("Input size of both linked list : ");
    int size, data=0,pdata=0;
    scanf("%d",&size);
    printf("Input 1st linked list: ");
    for(int i = 0;i<size;i++){
        scanf("%d",&data);
        if(i==0){
        insert(data ,&head1);
        pdata = data;
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
        insert(data ,&head2);
        pdata = data;
        }
        if(i!=0 && data!=pdata){
        insert(data ,&head2);
        pdata = data;
        }
    }

    printf("After merging both the linked list : \n");
    struct node* aftermergeing = merge();
    while(aftermergeing!=NULL){
       printf("%d ",aftermergeing->data);
       aftermergeing = aftermergeing->link;
   }

}
