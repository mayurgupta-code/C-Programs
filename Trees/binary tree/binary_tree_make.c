#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

};

// newNode allocates a new node with the given data 
// and left and right children pointer initialized by NULL
struct Node* newNode(int data){
    // Allocates memory for new node
    struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));

    // Assign data to this node
    new_node->data = data;

    // Initialize left and right children as NULL
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}

int main(){
    // create root
    struct Node* root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    

    return 0;
}