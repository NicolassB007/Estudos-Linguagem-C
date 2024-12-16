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
    int i, numero_conta, operacao, contador;
    double saldo_bancario;
    char espacos = {' '};

    contador = 1;

    do {
        tracos_superior();
        printf("%-15c CONTA CORRENTE", espacos);
        tracos_inferiores();

        printf("Qual o nome cliente: ");
        fgets(nome_cliente, 20, stdin);
        printf("Qual o número da conta: ");
        scanf("%d", &numero_conta);
        printf("Qual o saldo bancário: ");
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
        printf("Qual operação será efetuada: ");
        scanf("%d", &operacao);
        fflush(stdin);
        contador = contador + 1;
        printf("CONTADOR = %d\n\n", contador);
    } while (operacao >= 1 && operacao < 3);

    return 0;
}
