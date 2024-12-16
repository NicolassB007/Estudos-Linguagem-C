#include <stdio.h>
#include <string.h>

int main() {

    char nome[30];
    char estado_civil[3];
    int i, tamanho_estado_civil;

    printf("Informe o seu nome: ");
    fgets(nome, 30, stdin);
    fflush(stdin);
    printf("[ S ] -> Solteiro\n[ C ] -> Casado\n[ V ] -> Viuvo\n[ DI ] -> Divorciado\n[ DE ] -> Desquitado\n");
    printf("Qual o seu estado civil: ");
    fgets(estado_civil, 3, stdin);
    printf("\n");

    tamanho_estado_civil = strlen(estado_civil);
    tamanho_estado_civil = tamanho_estado_civil - 1;

    for (i = 0; i < 15; i++) {
        printf("--");
    }
    printf("\n");
    printf("NOME -> %s", nome);
    printf("ESTADO CIVIL -> %s", estado_civil);
    printf("\n");
    for (i = 0; i < 15; i++) {
        printf("--");
    }
    printf("\n");
    if (estado_civil[0] == 'S' || estado_civil[0] == 's') {
        printf("NOME -> %s", nome);
        printf("SOLTEIRO");
    }
    else if (estado_civil[0] == 'C' || estado_civil[0] == 'c') {
        printf("NOME -> %s", nome);
        printf("CASADO");
    }
    else if (estado_civil[0] == 'V' || estado_civil[0] == 'v') {
        printf("NOME -> %s", nome);
        printf("VIUVO");
    }
    else if (estado_civil[0] == 'D' || estado_civil[0] == 'd') {
        if (estado_civil[1] == 'I' || estado_civil[1] == 'i') {
            printf("NOME -> %s", nome);
            printf("DIVORCIADO\n");
        }
    }
    else {
        printf("ESTADO CIVIL INVALIDO");
    }
    for (i = 0; i <= tamanho_estado_civil; i++) {
        if (estado_civil[i] == 'D' || estado_civil[i] == 'd') {
            if (estado_civil[i + 1] == 'E' || \
                estado_civil[i + 1] == 'e') {
                printf("NOME -> %s", nome);
                printf("DESQUITADO");
            }
        }
    }
    return 0;
}