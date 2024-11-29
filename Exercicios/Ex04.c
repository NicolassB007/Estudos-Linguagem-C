// SWITCH
// Criando um menu simples:

#include <stdio.h>

int main() {
    int esc;
    double valor, valor2, soma, sub, multiplicacao, divi;

    printf("Informe um valor entre 1 e 4: ");
    scanf("%d", &esc);

    switch (esc) {
        case 1:
            printf("A opcao %d equivale a operacao de SOMA\n", esc);
            printf("Primeiro valor: ");
            scanf("%lf", &valor);
            printf("Segundo valor: ");
            scanf("%lf", &valor2);

            soma = valor + valor2;

            printf("A soma de %.2f + %.2lf e igual a %.2lf", valor, valor2, soma);
            break;

        case 2:
            printf("A opcao %d equivale a operacao de SUBTRACAO\n", esc);
            printf("Primeiro valor: ");
            scanf("%lf", &valor);
            printf("Segundo valor: ");
            scanf("%lf", &valor2);

            sub = valor - valor2;

            printf("A subtracao de %.2f - %.2lf e igual a %.2lf", valor, valor2, sub);
            break;

        case 3:
            printf("A opcao %d equivale a operacao de MULTIPLICACAO\n", esc);
            printf("Primeiro valor: ");
            scanf("%lf", &valor);
            printf("Segundo valor: ");
            scanf("%lf", &valor2);

            multiplicacao = valor * valor2;

            printf("A multiplicacao de %.2f * %.2lf e igual a %.2lf", valor, valor2, multiplicacao);
            break;
        case 4:
            printf("A opcao %d equivale a operacao de DIVISAO\n", esc);
            printf("Primeiro valor: ");
            scanf("%lf", &valor);
            printf("Segundo valor: ");
            scanf("%lf", &valor2);

            divi = valor / valor2;

            printf("A divisao de %.2f / %.2lf e igual a %.2lf", valor, valor2, divi);
            break;
        default:
            printf("OPCAO INVALIDA!\n");
    }

    return 0;
}