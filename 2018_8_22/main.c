#include <stdio.h>
#include <memory.h>
/*
 * Excel表序列号
 * */
int titleToNumber(char* s) {
    int length = (int)strlen(s) - 1;
    int sum = 0;
    int n = 1;
    for(int i = length ; i >= 0 ; i--){
        sum += ((s[i] - 'A') % 26 +1) * n;
        n *= 26;
    }
    return sum;
}
/*
 * 阶乘后的零
 * */

int trailingZeroes(int n) {
    int ret = 0 ;
    while (n >=5){
        n/=5;
        ret+=n;
    }
    return n;
}

/*
 * 旋转数组
 * */
void rotate(int* nums, int numsSize, int k) {
    int temp = 0 ;
    for(int step = 0 ; step < k; k ++){
        temp = nums[numsSize - 1];
        for(int j = numsSize - 1 ; j > 0 ; j--){
            nums[j] =  nums[j-1];
        }
        nums[0] = temp;
    }
}

void reversal(int* nums , int i ,int j){
    int  tem = 0;
    while (i < j && i>= 0){
        tem = nums[i];
        nums[i] = nums[j];
        nums[j] =tem;
        i++;
        j--;

    }

}

void rotate_2(int* nums, int numsSize, int k) {
    if(numsSize == 1) return;
    if(numsSize == 0) return;
    k %= numsSize;
    reversal(nums,0,numsSize - k - 1);
    reversal(nums,numsSize - k, numsSize -1);
    reversal(nums,0,numsSize-1);
    for(int i = 0 ; i < numsSize; i ++){
        printf("%d ",nums[i]);
    }
}

int main() {
    printf("Hello, World!\n");
    printf("%d\n",titleToNumber("Z"));
    int a[] = {1,2,3,4,5,6,7};
    rotate_2(a,7,8);
    __uint32_t  m = 12;
    printf("a = %d\n", m);
    printf("sizeof(a) = %d\n", sizeof(m));

    return 0;
}