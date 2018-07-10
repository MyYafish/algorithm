#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    if(x < 0)
        return false;
    int rev = 0;
    int y = x;
    while (x != 0){
        int pop = x%10;
        x /= 10;
        rev = rev * 10 + pop;
    }
    if(rev == y){
        return true;
    }
    return false;
}

bool isPalindrome1(int x){
    if(x < 0 || x%10 == 0 && x != 0){
        return  false;
    }
    int rev = 0;
    while (x > rev){
        rev = rev * 10 + x%10;
        x /= 10;
    }
    return x == rev || x == rev/10;
}

int main() {
    printf("Hello, World!\n");
//    if(isPalindrome(-121)){
//        printf("11111");
//    } else{
//        printf("22222");
//    }

    if(isPalindrome1(121)){
        printf("11111");
    } else{
        printf("22222");
    }
    return 0;
}