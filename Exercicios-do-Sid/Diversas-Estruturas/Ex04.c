#include <stdio.h>
#include <string.h>

int main() {
    int qtd_usuarios, i;
    char nome[30];

    printf("Quantos usuarios serao: ");
    scanf("%d", &qtd_usuarios);
    int vet_idade[qtd_usuarios], soma_idades;
    double media_idades;
    soma_idades = 0;
    for (i = 0; i < qtd_usuarios; i++) {
        printf("Informe o nome: ");
        fflush(stdin);
        fgets(nome, 30, stdin);
        printf("Informe a idade: ");
        scanf("%d", &vet_idade[i]);
        printf("\n");
        printf("NOME -> %sIDADE -> %d\n", nome, vet_idade[i]);
        printf("\n");
    }
    for (i = 0; i < qtd_usuarios; i++) {
        soma_idades = soma_idades + vet_idade[i];
    }
    media_idades = soma_idades / qtd_usuarios; 
    printf("QUANTIDADE DE USUARIOS -> %d\n", qtd_usuarios); 
    printf("TOTAL IDADES -> %d\n", soma_idades);
    printf("MEDIA DAS IDADES -> %.2lf", media_idades);

    return 0;
}