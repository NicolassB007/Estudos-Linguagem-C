#include <stdio.h>

int main() {
    int qtd_valores, i;

    printf("Quantos valores sera inseridos: ");
    scanf("%d", &qtd_valores);

    double numeros[qtd_valores];

    for (i = 0; i < qtd_valores; i++) {
        printf("VALOR %d -> ", i);
        scanf("%lf", &numeros[i]);
    }

    printf("MOSTRANDO OS VALORES COMECANDO PELO ULTIMO\n");
    for (i = (qtd_valores - 1); i >= 0; i--) {
        printf("%.2lf ", numeros[i]);
    }

    return 0;
}