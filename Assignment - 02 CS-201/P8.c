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

void func(int size){
    int arr[size];
    struct node*temp=head;
    int i=0;
    int j=size-1;
    while(temp!=NULL)
    {
        if(temp->data%2==0){
            arr[i]=temp->data;
            i++;
            }
        else{
            arr[j]=temp->data;
            j--;
        }
        temp=temp->link;
    }
    temp=head;
    i=0;
    while(temp!=NULL)
    {
        temp->data=arr[i];
        i++;
        temp=temp->link;
    }
}

int main(){
    head = NULL;
    printf("Enter size of linked list : ");
    int size,i,data;
    scanf("%d",&size);
    printf("\n--Enter Data--\n");
    for(i = 0;i<size;i++){
        scanf("%d",&data);
        insert(data);
    }
    print();
    func(size);
    printf("\n---Now all the even numbers appear at the beginning---\n");
    print();

}
