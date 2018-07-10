#include <stdio.h>
#include <memory.h>

int romanToInt(char * s){
    int tagVal[256];
    tagVal['I'] = 1;
    tagVal['V'] = 5;
    tagVal['X'] = 10;
    tagVal['C'] = 100;
    tagVal['D'] = 500;
    tagVal['M'] = 1000;
    tagVal['L'] = 50;
    int val = 0;
    for(int i = 0; i < strlen(s); i++){
        if(i+1 >= strlen(s) || tagVal[s[i+1]] <= tagVal[s[i]]){
            val += tagVal[s[i]];
        } else{
            val -= tagVal[s[i]];
        }
    }
    return val;

}

int main() {
    printf("Hello, World!\n");

    char  s[] = "DCXXI";
    printf("%d",romanToInt(&s));
    return 0;
}