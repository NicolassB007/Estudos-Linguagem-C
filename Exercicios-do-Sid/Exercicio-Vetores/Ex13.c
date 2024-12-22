#include <stdio.h>

int main() {
    int qtd_conjunto_1, qtd_conjunto_2, i;

    printf("Quantos numeros tera o PRIMEIRO conjunto: ");
    scanf("%d", &qtd_conjunto_1);
    printf("Quantos numeros tera o SEGUNDO conjunto: ");
    scanf("%d", &qtd_conjunto_2);

    int total_valores = qtd_conjunto_1 + qtd_conjunto_2;
    int conjuntos[total_valores];

    printf("\n");
    printf("Quantos numeros tera o PRIMEIRO conjunto\n");
    for (i = 0; i < qtd_conjunto_1; i++) {
        printf("VALOR -> ");
        scanf("%d", &conjuntos[i]);
    }

    printf("\n");
    printf("Quantos numeros tera o SEGUNDO conjunto\n");
    for (i = qtd_conjunto_1; i < total_valores; i++) {
        printf("VALOR -> ");
        scanf("%d", &conjuntos[i]);
    }

    int aux;
    for (i = 0; i < (total_valores - 1); i++) {
        for (int j = 0; j < (total_valores - 1); j++) {
            if (conjuntos[j] > conjuntos[j + 1]) {
                aux = conjuntos[j];
                conjuntos[i] = conjuntos[j + 1];
                conjuntos[i + 1] = aux;
            }
        }
    }

    printf("CONJUNTO 1 E 2 ORGANIZADOS EM ORDEM CRESCENTE\n");
    for (i = 0; i < total_valores; i++) {
        printf("%d ", conjuntos[i]);
    }

    return 0;
}