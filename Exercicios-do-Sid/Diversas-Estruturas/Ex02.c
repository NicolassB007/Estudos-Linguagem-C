#include <stdio.h>

int main() {
    int valor, valor2, soma;

    soma = 0;
    do {
        printf("Primeiro valor: ");
        scanf("%d", &valor);
        printf("Segundo valor: ");
        scanf("%d", &valor2);
        soma = valor + valor2;
        printf("SOMA = %d\n", soma);
        if (soma == 15) {
            printf("SOMA IGUAL A 15");
            break;
        }
    } while (soma < 15);
    printf("SOMA MAIOR QUE 15");

    return 0;
}