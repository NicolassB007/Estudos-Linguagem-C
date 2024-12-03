// Multiplicação de matrizes:

#include <stdio.h>

int main() {
    int i, j, m, n, l, c, multi_matA, multi_matB, resultado_multi;
    printf("Informe a quantidade de linhas da matriz A: ");
    scanf("%d", &m);
    printf("Informe a quantidade de colunas da matriz A: ");
    scanf("%d", &n);

    printf("\n");

    printf("Informe a quantidade de linhas da matriz B: ");
    scanf("%d", &l);
    printf("Informe a quantidade de colunas da matriz B: ");
    scanf("%d", &c);

    int mat[m][n], matB[l][c];

    printf("\n");

    printf("MATRIZ A\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");

    printf("MATRIZ B\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    printf("\n");

    //MULTIPLICACAO MATRIZ A
    multi_matA = 1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            multi_matA = multi_matA * mat[i][j];
        }
    }

    //MULTIPLICACAO MATRIZ B
    multi_matB = 1;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            multi_matB = multi_matB * matB[i][j];
        }
    }

    resultado_multi = multi_matA * multi_matB;

    printf("MATRIZ A\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ B\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }

    if (resultado_multi == 0) {
        printf("O resultado da multiplicacao de pelo menos uma da duas matrizes foi igual a 0\n");
        printf("Por esse motivo o resultado e igual a 0");
    }
    else {
        printf("O resultado da multiplicacao das matrizes e igual a %d", resultado_multi);
    }
    return 0;
}