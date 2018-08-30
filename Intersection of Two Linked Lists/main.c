#include <stdio.h>
#include <opencl-c.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
    int val;
    struct ListNode * next;
};
struct ListNode * findNode(struct ListNode * node , int  index){
    int i = 0 ;
    while (i != index ){
        node = node->next;
        i++;
    }

    return node;
}
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {

    if(headA == NULL || headB) return  NULL;
    int lengthA = 0;
    int lengthB = 0;
    struct ListNode * p = headA;
    struct ListNode * q = headB;
    while (headA->next != NULL){
        headA = headA->next;
        lengthA++;
    }

    while (headB->next != NULL){
        headB = headB->next;
        lengthB++;
    }

    int length = abs((lengthA - lengthB));
    if(length){
        if(lengthA - lengthB > 0){
            p = findNode(headA,length);
        } else{
            q = findNode(headB,length);
        }
    }

    while (q!= p){
        p = p->next;
        q = q->next;
    }
    if(p){
        return p;
    } else{
        return NULL;
    }


}

int main() {
    printf("Hello, World!\n");
    return 0;
}