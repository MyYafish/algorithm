#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int n = 6;
typedef struct TreeNode{
    int val;
    struct TreeNode * left,* right;
} treeNode;

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(!q && !p)
        return true;
    if ((p && !q) || (!p && q) || (p->val != q->val))
        return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

}

treeNode * preCreateBitree(treeNode  * root , int n , int a[])
{
    if(n < 0)
    {
//        root=NULL;
        return root ;
    }
    else
    {
        root=(treeNode *)malloc(sizeof(treeNode));
        root->val=a[n];
        preCreateBitree(root->right,n-1,a);
        preCreateBitree(root->right,n-1,a);
        return root;
    }
}


int main() {
    printf("Hello, World!\n");
    treeNode * root;
    int a[] = {1,2,3,4,5,6};
    preCreateBitree(root,6,a);
    return 0;
}