#include <stdio.h>
#include <stdlib.h>


int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carr = 0;
    returnSize = (int *)malloc(sizeof(int) * digitsSize);
    for(int i = digitsSize -1 ; i >= 0 ; i --){
        if(digits[i] == 9){
            carr = 1;
        } else{
            carr = 0;
        }
    }
    if(carr == 1){
        returnSize = (int *)realloc(returnSize, sizeof(int) * (digitsSize + 1));
        returnSize[0] = 1;
        for(int i = 1; i < digitsSize +1; i++){
            returnSize[i] = 0;
        }
        return returnSize;
    } else{
        int carr1 = 0;
        for(int i = digitsSize - 1;  i >= 0; i--){
            if(i == digitsSize - 1){
                if(digits[i] == 9){
                    carr1 = 1;
                    returnSize[i] = 0;
                } else{
                    returnSize[i] = digits[i] + 1;
                }
            } else{
                if(digits[i] == 9){
                    returnSize[i] = 0;
                    carr1 = 1;
                } else{
                    returnSize[i] = digits[i] + carr1;
                }
            }
        }
        return  returnSize;
    }
    return NULL;

}

int main() {
    printf("Hello, World!\n");
    int a[] = {1,2,3};

    int * b = plusOne(a, sizeof(a)/ sizeof(int),b);
    for(int i = 0 ; i < 3; i++){
        printf("%d",b[i]);
    }
    return 0;
}