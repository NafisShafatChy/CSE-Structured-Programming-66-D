#include <stdio.h>

int main() {
    int row,col, A[10][10], B[10][10], sum[10][10];
    scanf("%d %d", &row, &col);
    for (int i=0;i<row; i++) {
        for (int j = 0; j<col;j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for (int i=0; i < row;i++) {
        for (int j = 0; j<col; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
