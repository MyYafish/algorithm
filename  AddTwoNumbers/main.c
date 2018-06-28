#include <stdio.h>
#include <stdlib.h>

int stackcount = -1;

typedef struct ListNode {
    int val;
    struct  ListNode * next;
} listNode;

listNode * _init(int num[] , int numSize ){
    listNode * p = (listNode *)malloc(sizeof(listNode));
    p->val = num[0];
    p->next = NULL;
    listNode * start = p;
    for(int i = 1 ; i < numSize ; i ++){

        listNode * item = (listNode *)malloc(sizeof(listNode));
        item->val = num[i];
        item->next = NULL;
        start->next =  item;
        start = start->next;
    }
    return p;

}

void _pushStack(int val,int * stack){
    stack[stackcount++] = val;

}

int _popStack(int * stack){
    return stack[stackcount--];
}

listNode * _addTwoNumbers(listNode * l1 , listNode * l2){
    listNode * qp = (listNode *)malloc(sizeof(listNode));
    listNode * p = l1 ,*q = l2 ,*l3 = qp;
    int  carry = 0;
    while (p!= NULL || q != NULL){
        int x = (p!= NULL) ? p->val : 0;
        int y = (q!= NULL) ? q->val : 0;
        int sum = x + y + carry;
        carry = sum/10;
        listNode * a = (listNode *)malloc(sizeof(listNode));
        a->val = sum%10;
        a->next = NULL;
        l3->next = a;
        l3 = l3->next;
        if(p != NULL) p = p->next;
        if(q != NULL) q = q->next;
    }

    if(carry >0){
        listNode* a1 = (listNode *)malloc(sizeof(listNode));
        a1->val = carry;
        a1->next = NULL;
        l3->next = a1;
    }

    return qp->next;
}

int main() {
    printf("Hello, World!\n");
    int nums[] = {1,2,3};
    int numss[] = {2,3,4,5};
    listNode * pp = _init(&nums,3);
    listNode * ppp = _init(&numss , 4);
    _addTwoNumbers(pp,ppp);

    return 0;
}