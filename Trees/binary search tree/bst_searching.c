// Binary tree implementation recursively
// Best way of implementing the tree is the stack
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create(){
    // printf("create here\n");
    int x;
    struct Node* newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter data (-1 for no node) : ");
    scanf("%d",&x);
    if (x == -1){
        return NULL;
    }
    newnode->data = x;
    printf("\nEnter left child of %d",x);
    newnode->left = create();
    printf("\nEnter right child of %d",x);
    newnode->right = create();

    return newnode;

}

void Preorder(struct Node* root){
    if (root == NULL){
        return;
    }

    printf("%d ", root->data);
    Preorder(root->left);
    Preorder(root->right);

}


void Inorder(struct Node* root){
    if (root == NULL){
        return;
    }

    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);

}

void Postorder(struct Node* root){
    if (root == NULL){
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    printf("%d ", root->data);

}

struct Node* Search(struct Node* root, int key){
    // if root is NULL or key i spresent at root
    if (root == NULL || root->data == key){
        return root;
    }

    // if key is greater than root's key
    if (root->data < key){
        return Search(root->right, key);
    }
    else{
        return Search(root->left, key);
    }
}

int main(){
    int key;
    struct Node* root;
    root = 0;
    root = create();

    // Preorder
    printf("Preorder is : ");
    Preorder(root);
    printf("\n");

    // Inorder
    printf("Inorder is : ");
    Inorder(root);
    printf("\n");

    // Postorder
    printf("Postorder is : ");
    Postorder(root);
    printf("\n");

    //searching 
    printf("Enter key to search : ");
    scanf("%d",&key);
    root = Search(root, key);

    if (root->data == key){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }
return 0;
}