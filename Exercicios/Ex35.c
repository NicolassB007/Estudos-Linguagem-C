// Impressão de um padrão

#include <stdio.h>

void imprime_triangulo(int num) {
    int i, j;

    for (i = 0; i < num; i++) {
        printf("*");
        for (j = 0; j < i ; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int altura;

    printf("Informe o valor da altura: ");
    scanf("%d", &altura);

    imprime_triangulo(altura);
    return 0;
}