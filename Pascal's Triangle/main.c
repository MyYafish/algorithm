#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int** columnSizes) {
    int n = 0;
    for(int i = 1; i <= numRows ; i ++){
        n = n+i;
    }
    columnSizes = malloc(sizeof(int *) * numRows);
    for(int row = 0 ; row < numRows ; row ++){
        columnSizes[row] = malloc(sizeof(int) * (row+1));
        columnSizes[row][0] = columnSizes[row][row] = 1;
    }

    for(int row = 2; row < numRows ; row ++){
        for(int row1 = 1 ; row1 < row; row1 ++){
            columnSizes[row][row1] = columnSizes[row-1][row1] + columnSizes[row-1][row1-1];
        }
    }

    return columnSizes;

}

int main() {
    printf("Hello, World!\n");
    int **a;
   a = generate(5,a);
    for(int i = 0 ; i < 5; i++){
        for(int j = 0 ; j <= i; j ++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}