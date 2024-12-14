#include <stdio.h>

int main() {
    double valor, valor2, valor3, resultado;

    printf("Primeiro valor: ");
    scanf("%lf", &valor);
    printf("Segundo valor: ");
    scanf("%lf", &valor2);
    printf("Terceiro valor: ");
    scanf("%lf", &valor3);

    resultado = (valor + valor2) * valor3;

    printf("O resultado da soma do primeiro pelo segundo multiplicado pelo terceiro e de %.2lf", resultado);

    return 0;
}
