#include <stdio.h>
#include <locale.h>
#include <string.h>
// Em andamento

void tracos_superior() {
    int i;
    for (i = 0; i < 25; i++) {
        printf("--");
    }
    printf("\n");
}

void tracos_inferiores() {
    int i;
    printf("\n");
    for (i = 0; i < 25; i++) {
        printf("--");
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    char nome_cliente[20];
    int i, numero_conta, operacao;
    double saldo_bancario, deposito, retirada;
    char espacos = {' '};

    do {
        tracos_superior();
        printf("%-15c CONTA CORRENTE", espacos);
        tracos_inferiores();

        printf("Qual o nome cliente: ");
        fgets(nome_cliente, 20, stdin);
        printf("Qual o numero da conta: ");
        scanf("%d", &numero_conta);
        printf("Qual o saldo bancario: ");
        scanf("%lf", &saldo_bancario);

        tracos_superior();
        printf("NOME DO CLIENTE -> %s", nome_cliente);
        printf("NUMERO DA CONTA -> %d\n", numero_conta);
        printf("SALDO DA CONTA -> %.2lf", saldo_bancario);
        tracos_inferiores();

        tracos_superior();
        printf("%-15c FUNCIONALIDADES", espacos);
        tracos_inferiores();
        printf("[ 1 ] -> DEPOSITO\n[ 2 ] -> RETIRADA\n[ 3 ] -> SAIR\n");
        printf("Qual operacao sera efetuada: ");
        scanf("%d", &operacao);
        if (operacao == 1) {
            printf("Qual o valor do deposito: ");
            scanf("%lf", &deposito);

            saldo_bancario = saldo_bancario + deposito;
            printf("Saldo apos o deposito -> %.2lf\n", saldo_bancario);
        }
        else if (operacao == 2) {
            printf("Qual o valor da retirada: ");
            scanf("%lf", &retirada);

            if (retirada > saldo_bancario) {
                printf("VOCE NAO TEM SALDO O SUFICIENTE PARA ESSA RETIRADA.\n");
            }
            else {
                saldo_bancario = saldo_bancario - retirada;
                printf("SALDO ATUAL -> %.2lf\n", saldo_bancario);
            }
        }
        fflush(stdin);
    } while (operacao >= 1 && operacao < 3);
    printf("OPERACAO FINALIZADA\n");

    return 0;
}
