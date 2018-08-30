#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <memory.h>

bool isHappy(int n) {
    while (n!=1 && n!=4){
        int t = 0;
        while (n){
            t += (n%10)*(n%10);
            n /= 10;
        }
        n = t;
    }
    return n==1;

}

//Definition for singly-linked list.
struct ListNode {
     int val;
     struct ListNode *next;
};

void creatNode(int a[] , struct ListNode * head){

    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->val = a[0];
    head->next = NULL;
    struct ListNode* node =  head;
    for(int i = 1 ; i < 5 ;i++){
        struct ListNode * node1 = (struct ListNode *)malloc(sizeof(struct ListNode));
        node1->val = a[i];
        node1->next = NULL;
        node->next = node1;
        node = node1;
    }

}

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* node  = head;
        while (head->next != NULL){
            if(head->next->val == val){
                struct ListNode* q = head->next;
                head->next = head->next->next;
                free(q);
            } else{
                head = head->next;
            }
        }
    return node;
}

int countPrimes(int n) {
    bool a[n];
//    memset(a,true,n);
    for(int i = 0 ; i < n ;i ++){
        a[i] = true;
    }
    int count = 0;
    for(int i = 2; i < n ; i++){
        if(a[i] ){
            for(int j = i * 2 ; j< n; j+=i){
                a[j] = false;
            }
            count ++;
        }
    }
    return count;
}

bool isIsomorphic(char* s, char* t) {
    if(strlen(s) != strlen(t)) return false;
    int atob[256] = {0};
    int btoa[256] = {0};
    for(int i = 0 ; i < strlen(s) ;i ++){
        if(atob[s[i]] == 0){
            atob[s[i]] = t[i];
        }

        if(btoa[t[i]] == 0){
            btoa[t[i]] = s[i];
        }

        if(atob[s[i]] != t[i] || btoa[t[i]] != s[i]) return false;
    }

    return true;
}

struct ListNode* reverseList(struct ListNode* head) {
    if(!head) return NULL;
    struct ListNode * prh = NULL;
    struct ListNode * pnode = head;
    struct ListNode * prev = NULL;
    while (pnode->next != NULL){
        struct ListNode * pnext = pnode->next;
        if(pnext == NULL){
            prh = pnode;
        }

        pnode->next = prev;
        prev = pnode;
        pnode = pnext;
    }

    return prh;

}


bool containsDuplicate(int* nums, int numsSize) {
    int a[1000] = {0};
    for(int i = 0 ; i < numsSize; i++){
        if(a[nums[i]] != 0)
            return true;
        a[nums[i]] = 1;
    }
    return false;
}


int main() {
    printf("Hello, World!\n");
    if(isHappy(19)){
        printf("是欢乐数呀\n");
    } else{
        printf("不是欢乐数呀");
    }

    printf("%d",countPrimes(10));
    int a[] ={1,2,3,4,5};
    if(containsDuplicate(a,5)){
       printf("存在呀");
    } else{
        printf("bucunzaiya")
    }
    return 0;
}