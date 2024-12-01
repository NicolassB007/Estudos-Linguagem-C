//  Maior elemento de cada linha:

#include <stdio.h>

int main() {
    int i, j, mat[3][3], maior_linha, contador;

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

    contador = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (contador == 0) {
                maior_linha = mat[i][j];
            }
            else if (contador >= 0) {
                if (mat[i][j] > maior_linha) {
                    maior_linha = mat[i][j];
                }
            }
            contador = contador + 1;
        }
        printf("MAIOR DA LINHA = %d\n", maior_linha);
    }

    return 0;
}