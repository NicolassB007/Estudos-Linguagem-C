// Soma dos pares: 

#include <stdio.h>

int main() {
    int soma, i;

    soma = 0;
    for (i = 1; i < 50; i++) {
        if (i % 2 == 0) {
            soma += i;
            printf("SOMA = %d\n", soma);
        }
    }

    return 0;
}