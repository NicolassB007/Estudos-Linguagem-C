// Verificando se um número é par ou ímpar:
#include <stdio.h>

int main() {
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O valor %d e PAR", valor);
    }
    else {
        printf("O valor %d e IMPAR", valor);
    }

    return 0;
}