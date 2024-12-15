#include <stdio.h>

int main() {
    int n, i, valores, contador, aux, maior_valor;

    printf("Qual o valor de N (1, 2 ou 3): ");
    scanf("%d", &n);
    printf("Quantos valores ser: ");
    scanf("%d", &valores);

    int vet[valores];

    switch (n) {
        case 1:
            printf("\nORGANIZACAO EM ORDEM CRESCENTE\n");
            // Coleto e armazeno os valores no vetor 
            for (i = 0; i < valores; i++) {
                printf("Informe os valores: ");
                scanf("%d", &vet[i]);
            }
            printf("Ordem atual:\n");
            for (i = 0; i < valores; i++) {
                printf("%d ", vet[i]);
            }
            printf("\n\n");
            for (contador = 1; contador < valores; contador++) {
                for (i = 0; i < (valores - 1); i++) {
                    if (vet[i] > vet[i + 1]) {
                        aux = vet[i];
                        vet[i] = vet[i + 1];
                        vet[i + 1] = aux;
                    }
                }
            }

            printf("VALORES EM ORDEM CRESCENTE\n");
            for (i = 0; i < valores; i++) {
                printf("%d ", vet[i]);
            }
            break;
        case 2:
            printf("\nORGANIZACAO EM ORDEM DECRESCENTE\n");
            // Coleto e armazeno os valores no vetor 
            for (i = 0; i < valores; i++) {
                printf("Informe os valores: ");
                scanf("%d", &vet[i]);
            }
            printf("Ordem atual:\n");
            for (i = 0; i < valores; i++) {
                printf("%d ", vet[i]);
            }
            printf("\n\n");

            for (contador = 1; contador < valores; contador++) {
                for (i = 0; i < (valores - 1); i++) {
                    if (vet[i] < vet[i + 1]) {
                        aux = vet[i];
                        vet[i] = vet[i + 1];
                        vet[i + 1] = aux;
                    }
                }
            }
            
            printf("VALORES EM ORDEM DECRESCENTE\n");
            for (i = 0; i < valores; i++) {
                printf("%d ", vet[i]);
            }
            break;
        case 3:
            printf("\nMAIOR VALOR NO CENTRO\n");
            // Coleto e armazeno os valores no vetor 
            for (i = 0; i < valores; i++) {
                printf("Informe os valores: ");
                scanf("%d", &vet[i]);
            }
            maior_valor = 0;
            for (i = 0; i < valores; i++) {
                if (vet[i] > maior_valor) {
                    maior_valor = vet[i];
                }
            }

            int centro;
            centro = valores / 2;

            printf("\nMAIOR VALOR -> %d\n", maior_valor);

            if (centro % 2 == 0) {
                printf("\nVALORES COM O MAIOR VALOR NO CENTRO\n");
                for (i = 0; i < (valores - 1); i++) {
                    if (i == centro) {
                        aux = vet[i];
                        vet[centro] = maior_valor;
                        printf("%d ", vet[i]);
                        vet[i] = aux;
                    }
                    printf("%d ", vet[i]);
                }
            }
            else {
                printf("\nVALORES COM O MAIOR VALOR NO CENTRO\n");
                for (i = 0; i < (valores - 1); i++) {
                    if (i == centro) {
                        aux = vet[i];
                        vet[centro] = maior_valor;
                        printf("%d ", vet[i]);
                        vet[i] = aux;
                    }
                    printf("%d ", vet[i]);
                }
            }
            break;
        default:
            printf("VALOR DE N INVALIDO");
    }

    return 0;
}