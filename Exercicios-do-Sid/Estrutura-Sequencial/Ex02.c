#include <stdio.h>

int main() {
    double valor, valor2, soma, subt, mult, div;

    printf("Primeiro valor: ");
    scanf("%lf", &valor);
    printf("Segundo valor: ");
    scanf("%lf", &valor2);

    soma = valor + valor2;
    subt = valor - valor2;
    mult = valor * valor2;
    div = valor / valor2;

    printf("SOMA = %.2lf\n", soma);
    printf("SUBTRACAO = %.2lf\n", subt);
    printf("MULTIPLICACAO = %.2lf\n", mult);
    printf("DIVISAO = %.2lf", div);

    return 0;
}
