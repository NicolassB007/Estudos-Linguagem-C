// Matrizes
// Soma dos elementos

#include <stdio.h>

int main() {
    int i, j, mat[3][3], soma;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [ %d , %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    soma = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma = soma + mat[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("SOMA = %d", soma);

    return 0;
}