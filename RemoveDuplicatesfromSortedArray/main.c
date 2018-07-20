#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {

    int  i = 0;
    for(int j = 0 ; j < numsSize ; j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}
int main() {
    int a[] = {1,1,2,3,4,5,5,6};
    printf("%d",removeDuplicates(a,8));
    return 0;
}