#include <stdio.h>
#include <opencl-c.h>


int maxProfit(int* prices, int pricesSize) {
    int result = 0;
    if(prices == NULL || pricesSize == 0)
        return 0;
    int minbuy = prices[0];
    for(int i = 0 ; i < pricesSize ; i ++){
        result = max(result,prices[i] - minbuy);
        minbuy = min(minbuy , prices);
    }
    return result;
}

int main() {
    printf("Hello, World!\n");

    int a[] = {7,1,5,3,6,4};
   int b = maxProfit(a, sizeof(a)/ sizeof(a[0]));
    printf("%d",b);
    return 0;
}