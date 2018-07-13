#include <stdio.h>
#include <stdbool.h>
#include <memory.h>

char stack[256];
int top = -1;

void push(char  str){
    printf("%c\n",str);
    stack[++top] = str;
}

void  pop(){
    top--;
}

char visit(){
    if(top != -1){
        printf("%c== %d",stack[top],top);
        return stack[top];
    }
}

bool isValid(char* s) {

    for(int i = 0 ; i < strlen(s) ; i++){
        if(s[i] == '(' || s[i] =='[' || s[i] == '{'){
            push(s[i]);
        } else{
            if(s[i] == ')'){
                if(visit() == '('){
                    pop();
                    return true;
                } else{
                    return false;
                }
            } else if(s[i] == ']'){
                if(visit() == '['){
                    pop();
                    return true;
                } else{
                    return false;
                }
            } else if(s[i] == '}'){
                if(visit() == '{'){
                    pop();
                    return true;
                } else{
                    return false;
                }
            }
        }

    }

}
int main() {
    printf("Hello, World!\n");
    char  * str = "{}[{}]";
    if(isValid(str)){
        printf("匹配");
    } else{
        printf("不匹配");
    }
    return 0;
}