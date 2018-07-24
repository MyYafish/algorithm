#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int lengthOfLastWord(char* s) {
    int tlen = 0;
    for(int i = strlen(s)-1 ; i >= 0; i --){
       if(s[i]!=' '){
           tlen ++;
       } else{
           if(i != strlen(s) - 1 && tlen != 0){
               return tlen;
           }
           tlen = 0;
       }
    }

    return tlen;
}

int main() {
    char *str = "b     a   ";
    printf("%d",lengthOfLastWord(str));
    return 0;
}