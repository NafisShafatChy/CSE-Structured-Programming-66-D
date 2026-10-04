#include <stdio.h>

int main() {
    int row,col,matrix[10][10];
    scanf("%d %d", &row,&col);
    for(int i=0;i<row; i++){
        for (int j=0; j<col;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<row; i++) {
        for (int j=0;j<col;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
