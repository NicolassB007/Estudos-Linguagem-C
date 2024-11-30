// Fatorial:

#include <stdio.h>

int main() {
    int valor, fatorial;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    fatorial = 1;

    for (int i = 1; i <= valor; i++) {
        fatorial = fatorial * i;
    }

    printf("FATORIAL DE %d! = %d", valor, fatorial);

    return 0;
}