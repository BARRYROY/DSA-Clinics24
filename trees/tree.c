#include "tree.h"

int main(){

    rootPtr root = NULL;
    // Insert nodes into the tree
    root = insert_node(root, 10);
    root = insert_node(root, 5);
    root = insert_node(root, 15);
    root = insert_node(root, 2);
    root = insert_node(root, 7);

    // Perform in-order traversal
    printf("In-order Traversal: ");
    in_order_traversal(root);
    printf("\n");

    // Free the allocated memory
    free_tree(root);

    return 0;
}


rootPtr create_node(int data){
    rootPtr newRoot = malloc(sizeof(Root));
    if(!newRoot){
        printf("Error allocating Memory to new root:");
        exit(1);
    }
    newRoot->data= data;
    newRoot->left_node = NULL;
    newRoot->right_node = NULL;
    return newRoot;
}

rootPtr insert_node(rootPtr root, int data){
    if(!root){
        return create_node(data);
    }
    if(root->data > data){
        root->left_node = insert_node(root->left_node, data);
    }else if ( root->data < data){
        root->right_node = insert_node(root->right_node, data);
    }
    
    return root;
}

void in_order_traversal(rootPtr root){
    if (root != NULL) {
        in_order_traversal(root->left_node);
        printf("%d ", root->data);
        in_order_traversal(root->right_node);
    }
    return;
}

void free_tree(rootPtr root){
    if (!root){
        free_tree(root->left_node);
        free_tree(root->right_node);
        free(root);
    }
}