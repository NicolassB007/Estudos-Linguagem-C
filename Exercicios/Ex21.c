// Diagonal principal: 

#include <stdio.h>

int main() {
    int i, j, mat[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("DIAGONAIS PRINCIPAIS\n");
    for (i = 0; i < 3; i++) {
        for (j = i; j == i; j++) {
            printf("%d ", mat[i][j]);
        }
    }

    return 0;
}