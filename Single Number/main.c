#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int ret = 0 ;
    for(int i = 0 ; i < numsSize ; i ++){
        ret ^=nums[i];
    }
    return ret;
}

int main() {
    int a[] = {1,3,1,-1,3};
    printf("%d\n",singleNumber(a, sizeof(a)/ sizeof(a[0])));
    return 0;
}