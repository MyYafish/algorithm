#include <stdio.h>
#include <stdlib.h>

typedef  struct TreeNode{
    int val;
    struct TreeNode * left , * right;
}tree;

tree * createTree(int * a , int index , int count){

    tree * root = NULL;
    if(index < count){
        if(a[index] == NULL){
            return NULL;
        }

        root = (tree *)malloc(sizeof(tree));
        root->val = a[index];
        root->right = createTree(a,index * 2 + 2 , count);
        root->left = createTree(a,index * 2 + 1,count);
    }
    return root;

}

int minDepth(struct TreeNode* root) {

    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL) {
        return 1;
    }
    if(root->left== NULL){
        return minDepth(root->left) + 1;
    }else if(root->right == NULL){
        return minDepth(root->right) + 1;
    }else{
        return (minDepth(root->left)>minDepth(root->right)?minDepth(root->right):minDepth(root->left)) + 1;
    }

}

int main() {
    printf("Hello, World!\n");
    int a[] = {3,9,20,NULL,NULL,15,7};
    tree * root = createTree(a,0, sizeof(a)/ sizeof(a[0]));
    printf("%d",minDepth(root));
    return 0;
}