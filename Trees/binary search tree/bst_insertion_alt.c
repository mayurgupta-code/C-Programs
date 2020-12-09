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

// returns a node for inserting inside the insert function in BST
// key is the data for to insert in the node
struct Node* inserting_node(int key){
    struct Node* inserting_node;
    inserting_node =  (struct Node*)malloc(sizeof(struct Node));
    inserting_node->left = NULL;
    inserting_node->right = NULL;
    inserting_node->data = key;

    return inserting_node;

}

// Final Code of insertion in the Binary Search Tree
// new node is to be inserted always at the leaf
// so firstly we have to keep searching for the leaf node
struct Node* insert(struct Node* root, int key){
    printf("here\n");

    if (root == NULL){
        return inserting_node(key);
    }


    if (key < root->data){
        root->left = insert(root->left, key);
    }
    else{
        root->right = insert(root->right, key);
    }

    return root;
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

    printf("\nvalue of root %d\n", root->data);
    // insert(root, key)
    root = insert(root, 40);
    printf("\nvalue of root %d\n", root->data);

    printf("\nAfter inserting %d\n",40);

    // Inorder
    printf("Inorder is : ");
    Inorder(root);
    printf("\n");
    
  
return 0;
}