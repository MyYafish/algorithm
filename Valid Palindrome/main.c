#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isLetter(char a){
    if(a>= 'a' && a<= 'z')
        return true;
    else if (a>= 'A' && a<= 'Z')
        return true;
    else if (a>= '0' && a<= '9')
        return true;
    else
        return false;
}

bool isPalindrome(char* s) {
        int left = 0;
        int  right = strlen(s)-1;
    while (left < right){
        if(!isLetter(s[left])) ++left;
        else if(!isLetter(s[right])) --right;
        else if((s[left] + 32 - 'a') %32 != (s[right] + 32 - 'a') % 32)
            return false;
        else{
            ++left ; --right;
        }
    }
    return true;
}

int main() {
    char a[] = "race a car";
    if(isPalindrome(a)){
        printf("回文串");
    } else{
        printf("bu回文串");
    }
    printf("Hello, World!\n");
    return 0;
}