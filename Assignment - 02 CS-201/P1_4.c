#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
   struct node* ptr;
};
struct node* head;
void insert(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->ptr = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
       struct node* temp2 = head;
        while(temp2->ptr!= NULL){
        temp2 = temp2->ptr;
        }
        temp2->ptr = temp;
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
        temp = temp->ptr;
    }
    printf("\n");
}
void Beginning(int data){
     struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->ptr = head;
    head = temp;
}
void index_(int data , int n){
     struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
   if(n == 1){
       temp->ptr = head;
       head = temp;
   }
   else{
    struct node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->ptr;
    }
    temp->ptr=temp2->ptr;
    temp2->ptr=temp;
   }
}
void Deleteatn(int n)
{
    struct node* temp1 = head;
    if(n==1){
        head = temp1->ptr;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
    {
        temp1 = temp1->ptr;

    }
    struct node* temp2 = temp1->ptr;
    temp1->ptr = temp2->ptr;
    free(temp2);
}

void DeleteAtBegin(){
    struct node* temp1 = head;
        head = temp1->ptr;
        free(temp1);
        return;
}

void DeleteAtEnd(){
    struct node* temp1 = head;
    struct node* prev;
    while(temp1->ptr!=NULL){
        prev = temp1;
        temp1 = temp1->ptr;
    }
    if(temp1 == head){
        head = NULL;
        free(temp1);
        return;
    }
    prev->ptr = NULL;
    free(temp1);
}

void reverse(){
    struct node* curr= head;
    struct node* next= NULL;
    struct node* prev= NULL;
    while (curr!= NULL){
        next = curr->ptr;
        curr->ptr = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
  }

int main(){
while(1){
    int a,data,ind;
    printf("1 : To Enter at Beginning\n");
    printf("2 : To Enter at End\n");
    printf("3 : Enter at a Particular index\n");
    printf("4 : Print the Entire List\n");
    printf("5 : Exit\n");
    printf("6 : Delete at n\n");
    printf("7 : Delete at begining\n");
    printf("8 : Delete at end\n");
    printf("9 : Reverse the Linkred List\n");
    printf("Enter any choice : ");
    scanf("%d",&a);
    switch(a){
        case 1: printf("Enter value :\n");
                scanf("%d",&data);
                Beginning(data);
                break;
        case 2: printf("Enter value :\n");
                scanf("%d",&data);
                insert(data);
                break;
        case 3: printf("Enter value and index :\n");
                scanf("%d\n%d",&data,&ind);
                index_(data,ind);
                break;
        case 4: print();
                break;
        case 5: exit(0);
                break;
        case 6: printf("Enter index :\n");
                scanf("%d",&data);
                Deleteatn(data);
                break;
        case 7: DeleteAtBegin();
                break;
        case 8: DeleteAtEnd();
                break;
        case 9: reverse();
                break;

        default : printf("Enter value input :\n");
    }

}
}
