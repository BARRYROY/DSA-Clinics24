#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct root{
    int data;
    struct root* left_node;
    struct root* right_node;
}Root;

typedef Root* rootPtr;

rootPtr create_node(int data);
rootPtr insert_node(rootPtr root, int data);
void in_order_traversal(rootPtr root);
void pre_order_traversal(rootPtr root);
 void post_order_traversal(rootPtr root);
void free_tree(rootPtr root);
int checkBalance(rootPtr root, bool *isBalanced);
bool is_balanced(rootPtr root);
#endif
