// find the minimum node
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

void minValueNode(struct Node* root){
    
    while (root->left != NULL && root->right != NULL){
        root = root->left;
    }
    printf("\nData of leaf root : %d\n",root->data);
}

int main(){

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

    minValueNode(root);

return 0;
}