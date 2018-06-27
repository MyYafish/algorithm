#include <stdio.h>
#include <stdlib.h>

int * sun(int * nums , int numsSize , int target){
    int * a = malloc(sizeof(int));
    for(int i = 0 ; i < numsSize ; i++){
        for(int j = i + 1; j < numsSize ; j++ ){
            if(nums[i] + nums[j] == target){
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;

}

int main() {
    printf("Hello, World!\n");
    int b[] = {1,2,3,4,5,6};
    int * p = sun(&b,6,5);
    for (int i = 0; i < sizeof(p)/ sizeof(int); ++i) {
        printf("%d",p[i]);
    }
    return 0;
}