#include <stdio.h>
#include <sys/param.h>

/*
 * 打家劫舍
 * */
int rob(int* nums, int numsSize) {

    int a=0 ,b =0 ;
    for(int i = 0 ; i < numsSize ; ++i){
        int m = a , n = b;
        a = n + nums[i];
        b = MAX(m,n);
    }
    return MAX(a,b);

}

int rob_move(int * nums , int size){
    if(size == 0) return 0;
    if(size == 1) return nums[0];
    int dp[100];
    dp[0] = nums[0];
    dp[1] = MAX(nums[0],nums[1]);
    for(int i = 2; i < size ; i++){
        dp[i] = MAX(dp[i-1],nums[i]+dp[i-2]);
    }


    return dp[size-1];
}

int main() {
    printf("Hello, World!\n");
    int a[] = {2,7,9,3,1};
    printf("%d\n",rob(a,5));
    return 0;
}