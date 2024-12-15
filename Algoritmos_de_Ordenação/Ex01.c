#include <stdio.h>

int main() {
    int valores, i;

    printf("Quantos valores serao digitados: ");
    scanf("%d", &valores);

    int vet[valores], contador, aux;

    for (i = 0; i < valores; i++) {
        printf("%d valor -> ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nVALORES SEM ORGANIZACAO\n");
    for (i = 0; i < valores; i++) {
        printf("%d ", vet[i]);
    }

    // Laço que organiza em ordem CRESCENTE
    for (contador = 1; contador < valores; contador++ ) {
        for (i = 0; i < (valores - 1); i++) {
            if (vet[i] > vet[i + 1]) {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
    }

    printf("\n");
    printf("\nVALORES EM ORDEM CRESCENTE\n");
    for (i = 0; i < valores; i++) {
        printf("%d ", vet[i]);
    }

    // Laço que organiza em ordem DESCRECENTE
    for (contador = 1; contador < valores; contador++ ) {
        for (i = 0; i < (valores - 1); i++) {
            if (vet[i] < vet[i + 1]) {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
    }

    printf("\n");
    printf("\nVALORES EM ORDEM DECRESCENTE\n");
    for (i = 0; i < valores; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}