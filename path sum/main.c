#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct TreeNode{
    int val;
    struct TreeNode * left , * right;
}tree;

tree * createTree(int * a , int index , int total){
    tree * node = NULL;
    if(index < total){
        if(a[index] == NULL)
            return NULL;
        node = (tree *)malloc(sizeof(tree));
        node->val = a[index];
        node->right = createTree(a , index * 2 + 2,total);
        node->left = createTree(a , index * 2 + 1,total);
    }
    return node;
}

void pre(tree * root){
    if(root){
        printf("%d\n",root->val);
        pre(root->left);
        pre(root->right);
    }
}

bool hasPathSum(struct TreeNode* root, int sum) {
    if(root == NULL) return  false;
    if(root->left == NULL && root->right == NULL && sum == root->val) return  true;
    return hasPathSum(root->right,sum-root->val) || hasPathSum(root->left,sum-root->val);


}

int main() {
    printf("Hello, World!\n");
    int a[] = {5,4,8,11,13,4,7,2,NULL,NULL,NULL,1};
    tree * root = createTree(a,0 , sizeof(a)/ sizeof(a[0]));
    pre(root);
    if(hasPathSum(root,1)){
        printf("匹配");
    }
    return 0;
}