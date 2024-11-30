// Tabela de multiplicação:

#include <stdio.h>

int main() {
    int i, multi, valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    for (i = 0; i <= 10; i++) {
        multi = valor * i;
        printf("%d x %d = %d\n", valor, i, multi);
    }

    return 0;
}