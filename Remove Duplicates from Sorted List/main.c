#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int val;
    struct ListNode * next;
}listNode;

listNode * _createListNode(int a[] , int numSize){
    listNode * node = (listNode *)malloc(sizeof(listNode));
    node->next = NULL;
    node->val = a[0];
    listNode * header = node;
    for(int i = 1; i < numSize ; i++){
        listNode * node1 = (listNode *)malloc(sizeof(listNode));
        node1->val = a[i];
        node1->next = NULL;
        node->next = node1;
        node = node1;
    }
    return header;

}

listNode * deleteDuplicates(listNode * head) {
    listNode * current = head;
    listNode * start = head->next;

    if(!start->next){
        if(current->val == start->val){
            current->next = start->next;
            free(start);
        }
        return head;
    }

    while (start->next != NULL){

        if(current->val == start->val){
            current->next = start->next;
            free(start);
        } else{
            current = start;
        }
        start = start->next;
    }

    if(current->val == start->val){
        current->next = NULL;
        free(start);
    }

    return head;

}
int main() {
    printf("Hello, World!\n");
    int a[] = {1,3};
    deleteDuplicates(_createListNode(a,2));
    return 0;
}