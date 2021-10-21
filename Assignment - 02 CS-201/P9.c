#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void insertatend(int data){
   struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        struct Node* temp2 = head;
        while(temp2->next!= NULL){
        temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}
void Delete(int n)
{
    struct Node* temp1 = head;
    if(n==1){
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
    {
        temp1 = temp1->next;

    }
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}
void Print()
{
    struct Node* temp = head;
    printf("List is:");
    while(temp != NULL)
    {
        printf(" %d",temp->data);
        temp= temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    int size,i,data;
    printf("Enter size of linked list :");
    scanf("%d",&size);
    for(i=0;i<size;i++){
         printf("Enter %d element : ",i);
         scanf("%d",&data);
         insertatend(data);
    }
    int n;
    printf("Enter a position to delete : ");
    scanf("%d",&n);
    Delete(n);
    Print();
}
