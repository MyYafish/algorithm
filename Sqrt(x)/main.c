#include <stdio.h>

int mySqrt(int x) {
    if(x== 0 || x == 1){
        return x;
    }

    int left = 1;
    int right = x;
    while (left < right - 1){
        int mid = left + (right - left)/2;
        int po = x/mid;
        if(po == mid) return mid;
        else if (po < mid){
            right = mid;
        }else{
            left = mid;
        }
    }
    return left;

}

int main() {
    printf("Hello, World!\n");
    printf("%d",mySqrt(9));
    return 0;
}