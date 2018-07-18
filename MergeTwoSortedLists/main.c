#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int val;
    struct ListNode * next;
} listNode;

listNode * createListNode(listNode * node , int a[] , int num){
    listNode * node1 = (listNode *)malloc(sizeof(listNode));
    node1->next = NULL;
    node1->val = a[0];
    node = node1;
    for(int i= 1 ; i < num; i++){
        listNode * node2 = (listNode *)malloc(sizeof(listNode));
        node2->next = NULL;
        node2->val = a[i];
        node1->next = node2;
        node1 = node2;
    }

    return node;

};

listNode* mergeTwoLists(listNode* l1, listNode* l2) {
    if(l1 == NULL) return  l2;
    if(l2 == NULL) return  l1;

    listNode * newHeader = NULL;
    if(l1->val < l2->val){
        newHeader = l1;
        newHeader->next = mergeTwoLists(l1->next , l2);
    } else{
        newHeader = l2;
        newHeader->next = mergeTwoLists(l1, l2->next);
    }
    return  newHeader;

}

void ww_print(listNode * l1){
    while (l1->next != NULL){
        printf("%d\n",l1->val);
        l1 = l1->next;
    }
    printf("%d\n",l1->val);
}

int main() {
    printf("Hello, World!\n");
    listNode * l1 ;
    listNode * l2 ;
    listNode * l3 ;
    int a[] = {1,2,3,4};
    int b[] = {3,4,6};
    l1 = createListNode(l1,a,4);
    l2 = createListNode(l2,b,3);
    l3 = mergeTwoLists(l1 , l2);
    ww_print(l3);

    return 0;
}