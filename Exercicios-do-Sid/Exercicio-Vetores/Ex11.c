#include <stdio.h>

int main() {
    int qtd_valores, i;

    printf("Quantos valores serao: ");
    scanf("%d", &qtd_valores);

    int valores[qtd_valores];

    for (i = 0; i < qtd_valores; i++) {
        printf("VALOR %d -> ", i + 1);
        scanf("%d", &valores[i]);
    }

    int aux;

    printf("ORDEM NORMAL\n");
    for (i = 0; i < qtd_valores; i++) {
        printf("%d ", valores[i]);
    }

    for (i = 0; i < qtd_valores; i++) {
        if (valores[i] > valores[i + 1]) {
            aux = valores[i];
            valores[i] = valores[i + 1];
            valores[i + 1] = aux;
        }
    }

    printf("\nORGANIZADO EM ORDEM CRESCENTE\n");
    for (i = 0; i < qtd_valores; i++) {
        printf("%d ", valores[i]);
    }
 
    return 0;
}