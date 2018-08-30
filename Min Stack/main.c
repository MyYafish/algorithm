#include <stdio.h>
#include <stdlib.h>

int tag = 0;
int tag1 = 0;

typedef struct {
    int data[];
} MinStack;

MinStack * stack;

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {

    MinStack * stack = malloc(sizeof(MinStack) * maxSize);
    stack->data[maxSize];
    return stack;
}

MinStack* stackCreate(int maxSize) {

    MinStack * stack = malloc(sizeof(MinStack) * maxSize);
    stack->data[maxSize];
    return stack;
}

void minStackPush(MinStack* obj, int x) {

    if(tag == 0){
        obj->data[++tag] = x;
    } else{
        if(x > minStackTop(stack)){
            obj->data[++tag] = x;
        } else{
            obj->data[++tag] = x;
            stack->data[++tag1] = x;
        }
    }

}

void minStackPop(MinStack* obj) {
    if(tag == -1){
        return;
    }

    if(minStackTop(obj) > minStackTop(stack)){
        obj->data[tag] = NULL;
        tag--;
    } else{
        tag--;
        tag1--;
    }
}

int minStackTop(MinStack* obj) {
    return obj->data[tag1];
}

int minStackGetMin(MinStack* obj) {
    return obj->data[tag1];

}

void minStackFree(MinStack* obj) {
    free(obj);
    free(stack);
}

int main() {
    printf("Hello, World!\n");
    minStackCreate(5);
   stack = stackCreate(5);
    return 0;
}