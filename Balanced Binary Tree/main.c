#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} tree;

tree * newTree(int num){

    tree * node = (tree *)malloc(sizeof(tree));
    node->val = num;
    node->left = NULL;
    node->right = NULL;
    return  node;
};

tree * createTree(int a[] , int index , int total){
    tree * node = NULL;
    if(index < total){
        node = newTree(a[index]);
        node->left = createTree(a,index * 2 + 1, total);
        node->right = createTree(a,index * 2 + 2 , total);
    }
    return node;
}

int depath(tree * root){
    if(root == NULL) {
        printf("null :");
        return 0;
    }
    printf(" l =%d r =%d\n",depath(root->left),depath(root->right));
    return  (depath(root->left) > depath(root->right) ?depath(root->left) : depath(root->right)) + 1;
}


bool isBalanced(struct TreeNode* root) {
    if (root == NULL) return true;
    if (abs(depath(root->left) - depath(root->right)) <= 1 && isBalanced(root->left) &&
        isBalanced(root->right))
        return true;
    return false;
}



    int main() {
    printf("Hello, World!\n");
    int a[] = {1,2,3,4,5,6,7};
    tree * node1 = createTree(a,0, sizeof(a)/ sizeof(a[0]));
    printf("%d",depath(node1));
    return 0;
}