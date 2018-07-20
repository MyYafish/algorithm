#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int j = 0;
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] != val){
            nums[j] = nums[i];
            j++;
        }
    }
    return  j;
}


int main() {
    int a[] = {0,2,4,3,0,0};
    printf("%d",removeElement(a,6,2));
    return 0;
}