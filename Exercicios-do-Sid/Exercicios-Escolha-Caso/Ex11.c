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
    char nome_cliente[20];
    int i, numero_conta;
    char espacos = {' '};

    tracos_superior();
    printf("%-15c CONTA CORRENTE", espacos);
    tracos_inferiores();

    printf("Qual o nome cliente: ");
    fgets(nome_cliente, 20, stdin);
    printf("Qual o número da conta: ");
    scanf("%d", &numero_conta);

    tracos_superior();
    printf("NOME DO CLIENTE -> %s", nome_cliente);
    printf("NUMERO DA CONTA -> %d", numero_conta);
    tracos_inferiores();

    tracos_superior();
    printf("%-15c FUNCIONALIDADES", espacos);
    tracos_inferiores();

    return 0;
}
