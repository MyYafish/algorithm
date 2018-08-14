#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    int val;
    struct TreeNode * left;
    struct TreeNode * right;
} TreeNode;


TreeNode * newnode(int data){
    TreeNode * node = (TreeNode *)malloc(sizeof(TreeNode));
    node->val = data;
    node->left = node->right = NULL;
    return node;
}

TreeNode * insertLevelOrder(int arr[], TreeNode * root ,int i , int n ){
    if(i < n ){
        TreeNode * node = newnode(arr[i]);
        root = node;
        root->left = insertLevelOrder(arr,root->left, 2*i + 1,n);
        root->right = insertLevelOrder(arr,root->right, 2*i + 2,n);
    }
    return root;

}

int maxDeptah(TreeNode * root){
    if(root == NULL) {
        return 0;
    }

    int leftDepath = maxDeptah(root->left) + 1;
    int rightDepath = maxDeptah(root->right) + 1;

    return leftDepath > rightDepath ? leftDepath : rightDepath;
}


void inOrder(TreeNode * root){
    if(root != NULL){
        printf("%d\n",root->val);
        inOrder(root->left);
        inOrder(root->right);

    }

}



int main() {
    printf("Hello, World!\n");
    int arr[] = { 1, 2,3, 4, 5, 6, 6,6, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = insertLevelOrder(arr, root, 0, n);
    inOrder(root);
    printf("\n==%d",maxDeptah(root));
    return 0;
}