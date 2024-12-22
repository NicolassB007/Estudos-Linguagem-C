#include <stdio.h>
#include <string.h>

int main() {
    int qtd_nomes, i, j;

    printf("Quantos nomes serao: ");
    scanf("%d", &qtd_nomes);

    char nomes[qtd_nomes][25];

    for (int i = 0; i < qtd_nomes; i++) {
        printf("Nome -> ");
        fflush(stdin);
        fgets(nomes[i], 25, stdin);
    }

    printf("\n");
    printf("NOMES EM ORDEM NORMAL\n");
    for (int i = 0; i < qtd_nomes; i++) {
        printf("Nome -> %s", nomes[i]);
    }

    char aux[25];
    for (i = 0; i < (qtd_nomes - 1); i++) {
        for (j = 0; j < (qtd_nomes - 1); j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {    
                strcpy(aux, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], aux);
            }
        }
    }

    printf("\nNOMES EM ORDEM ALFABETICA\n");
    for (i = 0; i < qtd_nomes; i++) {
        fflush(stdin);
        printf("Nome -> %s", nomes[i]);
    }

    return 0;
}