#include <stdio.h>
#include <stdbool.h>

 struct TreeNode{
    int val;
    struct TreeNode * left;
    struct TreeNode * right;
};

//bool isSymmetric(struct TreeNode* root) {
//    if(!root) return true;
//    return symmetrics(root->left,root->right);
//}
//
//bool symmetrics(struct TreeNode * p , struct TreeNode * q){
//    if(!q && !p) return true;
//    if(!q||!p) return false;
//    return (p->val== q->val)&&symmetrics(p->left,q->right)&&symmetrics(p->right,q->left);
//}

void Recursion(int depth){
    printf("抱着%d ",depth);
    if (!depth) {
        printf(" 我的小鲤鱼 ");
    }else {
        Recursion(--depth);
    }
    printf("的我%d ",depth);
}

int main() {
    printf("Hello, World!\n");
    Recursion(2);
    return 0;
}