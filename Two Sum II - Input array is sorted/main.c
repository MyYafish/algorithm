#include <stdio.h>
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

    if(numbersSize <= 0) return NULL;
    if(numbers[0] > target) return NULL;

    int l = 0 ; int r = numbersSize-1;
    while (l < r){
        if(target == numbers[l] + numbers[r]) return returnSize;
        else if(target < numbers[l] + numbers[r]) --r;
        else --l;
    }
}

void convertToTitle(int n){
    while (n > 0){
        char c = ((n-1)%26 + 'A');
        printf("%c\n",c);
        n = (n-1)/26;

    }
}

int majorityElement(int* nums, int numsSize) {
        int num = 0;
    int target = 0;
    for(int i = 0 ; i < numsSize ; i ++){
        if(num == 0){
            target = nums[i];
            ++num;
        } else{
            target == nums[i]?++num:--num;
        }
    }
    return target;
}
int titleToNumber(char* s) {
    for(int i = 0 ; i < sizeof(s)/ sizeof(s[0]); i++){
        
    }
}

int main() {
    printf("Hello, World!\n");
    convertToTitle(701);
    convertToTitle(1);
    int a[] = {3,2,3};
    printf("%d",majorityElement(a, sizeof(a)/ sizeof(a[0])));
    return 0;
}