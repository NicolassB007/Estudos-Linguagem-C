// Transposta de uma matriz:

#include <stdio.h>

int main() {
    int i, j, mat[3][2];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");

    printf("MATRIZ NORMAL\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ TRANSPOSTA\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}