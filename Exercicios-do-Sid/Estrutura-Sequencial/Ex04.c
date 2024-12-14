#include <stdio.h>

int main() {
    double valor_novo, novo_saldo;

    printf("SALDO ATUAL -> R$500.00\n");

    printf("Informe o valor que entrou na conta: ");
    scanf("%lf", &valor_novo);

    novo_saldo = 500 + valor_novo;

    printf("SALDO ATUALIZADO\n");
    printf("SALDO ATUAL -> R$%.2lf", novo_saldo);

    return 0;
}
