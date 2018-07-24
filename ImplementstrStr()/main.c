#include <stdio.h>
#include <string.h>

int strStr(char * haystack , char * needle){

    int scelen=strlen(haystack);
    int zilen=strlen(needle);
    int i=0,j=0;
    while(i<scelen && j< zilen)
    {
        if(haystack[i]==needle[j]) {
            i++;
            j++;
        } else {
            i=i-j+1;
            j=0;
        }
        if(j==zilen)
            return i=i-j;

    }
    if(zilen == 0) return 0;
    return -1;

}

int main() {
    char * str1 = "aaaaa";

    char * str2 = "bba";

    printf("%d",strStr(str1,str2));
    return 0;
}