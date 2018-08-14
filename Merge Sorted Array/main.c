#include <stdio.h>

void merge(int* nums1, int m, int* nums2, int n) {
    int count = m;
   int end = m+n-1;
    m--;n--;
    while (m>=0 && n>=0){
        if(nums2[n] > nums1[m]){
            nums1[end--] = nums2[n--];
        } else{
            nums1[end--]=nums1[m--];
        }
    }


    while (n >= 0){
        nums1[end--] = nums2[n--];
    }

    for(int i = 0 ; i < 6; i++){
        printf("%d\n",nums1[i]);
    }


}

int main() {
    int a[] = {1,2,3,0,0,0};
    int b[] = {2,5,6};
    merge(a,3,b,3);
    return 0;
}