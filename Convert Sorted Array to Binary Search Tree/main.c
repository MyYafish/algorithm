#include <stdio.h>
#include <stdlib.h>

typedef struct Tree{
    int val;
    struct Tree * left , *right;
}treeNode;

treeNode * newNode(int i){
    treeNode * node = (treeNode *)malloc(sizeof(treeNode));
    node->val = i;
    node->left = NULL;
    node->right = NULL;
    return node;
}
treeNode * _BST(int * mums,int begin , int end){
    if(begin > end){
        return NULL;
    }
    int mid = (begin + end)/2;
    treeNode * root = newNode(mums[mid]);
    root->left = _BST(mums,begin,mid -1);
    root->right = _BST(mums,mid + 1,end);
    return root;
}

treeNode* sortedArrayToBST(int* nums, int numsSize) {

    return _BST(nums,0,numsSize-1);

}


treeNode * createTree(int * a, int index , int total){
    treeNode * node = NULL;
    if(index < total){
        if(a[index] == NULL){
            return NULL;
        }
        node = newNode(a[index]);
        node->left = createTree(a,index* 2 +1 , total);
        node->right = createTree(a,index* 2 + 2,total);
    }
    return node;
}

int main() {
    printf("Hello, World!\n");
    int a[] = {-10,-3,0,5,9};
    treeNode * node = sortedArrayToBST(a, sizeof(a)/sizeof(a[0]));
    return 0;
}