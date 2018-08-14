#include <stdio.h>
#include <stdlib.h>

typedef struct Tree{

    int val;
    struct Tree * left;
    struct Tree * right;

}TreeNode;

TreeNode * newNode(int val){
    TreeNode * node = (TreeNode *)malloc(sizeof(TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

TreeNode * createBinaryTree(TreeNode* root , int arr[],int i , int n){

    if(i < n){
        if(arr[i] == -1){
            return NULL;
        }
        root = newNode(arr[i]);
        root->left = createBinaryTree(root->left ,arr,2*i + 1,n);
        root->right = createBinaryTree(root->right ,arr,2*i + 2,n);
    }
    return root;

}

void log(TreeNode * root){
    if(root != NULL){
        printf("%d\n",root->val);
        log(root->left);
        log(root->right);
    }
}


int main() {
    printf("Hello, World!\n");
    int a[] = {0,-3,-1,9,-10,-1,5};
    TreeNode * root = createBinaryTree(root ,a,0, sizeof(a)/ sizeof(a[0]));

    log(root);

    return 0;
}