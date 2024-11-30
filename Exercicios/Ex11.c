#include <stdio.h>

int main() {
    int anterior = 0, atual = 1, proximo, i;

    printf("Os 20 primeiros números da sequência de Fibonacci são:\n");

    for (i = 1; i <= 20; ++i) {
        printf("%d\n", anterior);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return 0;
}