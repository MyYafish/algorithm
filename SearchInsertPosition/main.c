#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    int k = 0;
    for( ;i <numsSize ; i++){
        if(target > nums[i]){
            k = i;
        }
    }

    if(target < nums[0]){
        return 0;
    }

    if(nums[k] == target)
        return k;
    return k + 1;

}
int main() {
    int a[] = {1,3,5,6};
    int b = 0;
    printf("%d",searchInsert(a,4,b));
    return 0;
}