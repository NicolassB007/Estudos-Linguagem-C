// Cálculo de Fatorial

#include <stdio.h>

void calculo_fatorial() {
    int fatorial, i, valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);

    fatorial = 1;
    for (i = 1; i <= valor; i++) {
        fatorial = fatorial * i;
    }

    printf("Fatorial = %d", fatorial);
}

int main() {
    calculo_fatorial();
    return 0;
}