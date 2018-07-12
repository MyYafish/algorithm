#include <stdio.h>
#include <memory.h>
#include <stdbool.h>

char * longsetCommonPrefix(char * strs[] ,int strsSize){
    char  * str = strs[0];
    for(int j = 0 ; j < strsSize ; j++){
            printf("%d : %d\n",strlen(str),strlen(strs[j]));
            if(strlen(str) >= strlen(strs[j])){
                str = strs[j];
            }
    }

    int mid = strlen(str)/2;
    for(int k = 0 ;k < strsSize; k++){
        if(dealStr(str,mid,strs,strsSize)){
            mid = mid +1;
        } else{
            mid = mid-1;
        }
    }
}

bool dealStr(char * str , int mid ,char * content[] , int conuntsum){
    char  dest[256] ;
    strncpy(dest , str , mid);
    for(int i = 0 ; i < conuntsum ; i++ ){
        if(begin_with(content[i] , dest)){
            return true;
        }
    }

    return false;
}

int begin_with(const char * str1,char *str2)
{
    if(str1 == NULL || str2 == NULL)
        return -1;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if((len1 < len2) ||  (len1 == 0 || len2 == 0))
        return -1;
    char *p = str2;
    int i = 0;
    while(*p != '\0')
    {
        if(*p != str1[i])
            return 0;
        p++;
        i++;
    }
    return 1;
}

int main() {
    printf("Hello, World!\n");
    char * str[] = {"qqqq","2ww","33"};
    longsetCommonPrefix(str,3);
    return 0;
}