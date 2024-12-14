#include <stdio.h>
#include <math.h>

int main() {
    int valor, potencia;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    potencia = pow(valor, 2);
    printf("O valor %d ao quadrado resulta em %d", valor, potencia);

    return 0;
}
