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
void begining(int data){
     struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    head = temp;
}
void index(int data , int n){
     struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
   if(n == 1){
       temp->link = head;
       head = temp;
   }
   else{
    struct node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->link;
    }
    temp->link=temp2->link;
    temp2->link=temp;
   }
}
void Deleteatn(int n)
{
    struct node* temp1 = head;
    if(n==1){
        head = temp1->link;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
    {
        temp1 = temp1->link;

    }
    struct node* temp2 = temp1->link;
    temp1->link = temp2->link;
    free(temp2);
}

void delatbegin(){
    struct node* temp1 = head;
        head = temp1->link;
        free(temp1);
        return;
}

void delatend(){
    struct node* temp1 = head;
    struct node* prev;
    while(temp1->link!=NULL){
        prev = temp1;
        temp1 = temp1->link;
    }
    if(temp1 == head){
        head = NULL;
        free(temp1);
        return;
    }
    prev->link = NULL;
    free(temp1);
}

void reverse(){
    struct node* curr= head;
    struct node* next= NULL;
    struct node* prev= NULL;
    while (curr!= NULL){
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
        head = prev;
    }

int main(){
while(1){
    int a,data,ind;
    printf("1 : To enter at begining\n");
    printf("2 : To enter at end\n");
    printf("3 : Enter at a particular index\n");
    printf("4 : print\n");
    printf("5 : exit\n");
    printf("6 : delete at n\n");
    printf("7 : delete at begining\n");
    printf("8 : delete at end\n");
    printf("9 : reverse the linkedlist\n");
    printf("Enter any choice : ");
    scanf("%d",&a);
    switch(a){
        case 1: printf("Enter value :\n");
                scanf("%d",&data);
                begining(data);
                break;
        case 2: printf("Enter value :\n");
                scanf("%d",&data);
                insert(data);
                break;
        case 3: printf("Enter value and index :\n");
                scanf("%d%d",&data,&ind);
                index(data,ind);
                break;
        case 4: print();
                break;
        case 5: exit(0);
                break;
        case 6: printf("Enter index :\n");
                scanf("%d",&data);
                Deleteatn(data);
                break;
        case 7: delatbegin();
                break;
        case 8: delatend();
                break;
        case 9: reverse();
                break;

        default : printf("Enter value input :\n");
    }

}
}
