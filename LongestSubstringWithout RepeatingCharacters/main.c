#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/param.h>
#include <memory.h>

int lengthOfLongestSubstring(char* s) {
    int ans = 0 ,len = strlen(s);
    int index[128];
    for(int j = 0 ,i = 0 ; j < len ;j++){
        i = max(index[s[j]],i);
        ans = max(ans , j-i+1);
        index[s[j]] = j + 1;
    }
    return ans;

}

int max(int a, int b){
    return (a > b ? a : b);
}

int main() {
    printf("Hello, World!\n");
    char * s = "abcabcbb";
    printf("%d",lengthOfLongestSubstring(s));
    return 0;
}