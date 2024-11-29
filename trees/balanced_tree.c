#include "tree.h"


bool is_balanced(rootPtr root){
    bool isBalanced = true;
    if(!root) return true;
    int ret = checkBalance(root, &isBalanced);
    printf("the return value from checkBalance is: %d .\n", ret);
    return isBalanced;
}

int checkBalance(rootPtr root, bool* isBalanced){
    if(!root) return 0;

    int left_height = checkBalance(root->left_node, isBalanced);
    int right_height = checkBalance(root->right_node, isBalanced);

    if(abs(left_height - right_height) > 1){
        *isBalanced = false;
    }

    return 1 + (left_height > right_height ? left_height : right_height);
}