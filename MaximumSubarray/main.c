#include <stdio.h>
#include <stdbool.h>

int maxSubArray(int* nums, int numsSize) {

    int max = 0 , this = 0 ,count = nums[0];
    bool flag = false;

    for(int i = 0 ; i < numsSize ; i++){
        this += nums[i];
        if (this < 0){
            if(this > count){
                count = this;
            }
            this = 0;
        } else if(this >= max){
            max = this;
            flag = true;
        }
    }
    return flag?max:count;
}

int main() {
    printf("Hello, World!\n");
    int a[] = {-1,-2,-1,-3};
    printf("%d",maxSubArray(a,4));
    return 0;
}