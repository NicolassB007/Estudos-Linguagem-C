// Multiplicação de matrizes:

#include <stdio.h>

int main() {
    int i, j, m, n, multi_matA;
    printf("Informe a quantidade de linhas da matriz A: ");
    scanf("%d", &m);
    printf("Informe a quantidade de colunas da matriz A: ");
    scanf("%d", &n);

    int mat[m][n];

    printf("\n");

    printf("MATRIZ A\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("MULTIPLICACAO MATRIZ A\n");
    multi_matA = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            multi_matA = multi_matA * mat[i][j];
        }
    }

    printf("RESULTADO DA MATRIZ A = %d\n", multi_matA);

    return 0;
}