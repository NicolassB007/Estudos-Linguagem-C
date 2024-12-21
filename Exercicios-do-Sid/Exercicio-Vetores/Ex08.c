#include <stdio.h>
#include <string.h>

int main() {
    int qtd_usuario, i;

    printf("Quantos nomes serao: ");
    scanf("%d", &qtd_usuario);

    char nomes_usuarios[qtd_usuario][25];
    int telefone_usuarios[qtd_usuario];

    for (i = 0; i < qtd_usuario; i++) {
        printf("Nome do usuario: ");
        fflush(stdin);
        fgets(nomes_usuarios[i], 25, stdin);
        printf("Numero de telefone do usuario (APENAS numeros): ");
        scanf("%d", &telefone_usuarios[i]);
    }
    printf("\n");

    char usuario_escolhido[25];
    int comparador_strings;

    printf("Qual usuario voce quer saber o numero de telefone: ");
    fflush(stdin);
    fgets(usuario_escolhido, 25, stdin);

    for (i = 0; i < qtd_usuario; i++) {
        comparador_strings = strcmp(nomes_usuarios[i], usuario_escolhido);
        if (comparador_strings != 0) {
            printf("NOME NAO EXISTE OU NOME FOI ESCRITO ERRADO\n");
        }
        if (comparador_strings == 0) {
            printf("NOME -> %s", nomes_usuarios[i]);
            printf("NUMERO DE TELEFONE -> %d\n", telefone_usuarios[i]);
        }
    }

    return 0;
}