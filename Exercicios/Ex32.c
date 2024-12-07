// Maior e Menor Valor
// Nao está finalizado

#include <stdio.h>

// Função que cria e armazena valores em um matriz
void cria_matriz() {
    int i, j, m, n;
    
    printf("Informe a quantidade de linha: ");
    scanf("%d", &m);
    printf("Informe a quantidade de coluna: ");
    scanf("%d", &n);

    int mat[m][n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}


int main() {
    cria_matriz();
    return 0;
}