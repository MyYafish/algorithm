#include <stdio.h>
int climbStairs(int n) {
   if(n == 0 || n == 1) return 1;
    return climbStairs(n-1) + climbStairs(n-2);
}

int main() {
    printf("Hello, World!\n");
    printf("%d",climbStairs(5));
    return 0;
}