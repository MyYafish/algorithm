#include <stdio.h>
#include <stdbool.h>

struct ListNode{
    int val;
    struct ListNode * next;
};

bool hasCycle(struct ListNode *head) {
        struct  ListNode * p1 =head , *p2 = head;
    if(p1 == NULL || p1->next == NULL){
        return false;
    }

    do{
        p1 = p1->next;
        p2 = p2->next->next;
    }while (p1 != p2 && p2 && p2->next);

        if(p1 == p2){
            return true;
        } else{
            return false;
        }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}