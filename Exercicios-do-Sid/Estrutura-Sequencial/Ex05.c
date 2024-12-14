#include <stdio.h>

int main() {
    int total_prestacao, prestacoes_pagas, prestacoes_restantes;
    double valor_cada_prestacao, saldo_comprador, restante_para_pagar, total_pagar;

    printf("SALDO BANCARIO: ");
    scanf("%lf", &saldo_comprador);

    printf("Qual o valor de cada prestacao: ");
    scanf("%lf", &valor_cada_prestacao);
    printf("Quantas prestacoes sera: ");
    scanf("%d", &total_prestacao);
    printf("Quantas prestacoes foram pagas: ");
    scanf("%d", &prestacoes_pagas);

    total_pagar = total_prestacao * valor_cada_prestacao;

    if (total_prestacao > prestacoes_pagas) {
        prestacoes_restantes = total_prestacao - prestacoes_pagas;
        restante_para_pagar = prestacoes_restantes * valor_cada_prestacao;

        printf("FALTA PAGAR %d parcelas\n", prestacoes_restantes);
        printf("SERA PRECISO DE R$%.2lf para pagar o restante das parcelas", restante_para_pagar);
    }

    return 0;
}
