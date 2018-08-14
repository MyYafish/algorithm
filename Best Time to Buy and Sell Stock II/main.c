#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0 ;
    int d = 0;
    for(int i = 1 ; i < pricesSize ; i ++){
        d = prices[i] - prices[i - 1];
        if(d > 0){
            max_profit += d;
        }
    }
    return max_profit;
}

int main() {
    printf("Hello, World!\n");
    int a[] = {7,1,5,3,6,4};
    printf("%d\n",maxProfit(a,6));
    return 0;
}