#include <stdio.h>
// Em andamento

int main() {
    int qtd_valores, i;

    printf("Quantos valores serao utilizados: ");
    scanf("%d", &qtd_valores);

    int conjunto[qtd_valores], conjunto_2[qtd_valores];

    printf("VALORES PARA O PRIMEIRO CONJUNTO\n");
    for (i = 0; i < qtd_valores; i++) {
        printf("VALOR %d -> ", i + 1);
        scanf("%d", &conjunto[i]);
    } 

    printf("VALORES PARA O SEGUNDO CONJUNTO\n");
    for (i = 0; i < qtd_valores; i++) {
        printf("VALOR %d -> ", i + 1);
        scanf("%d", &conjunto_2[i]);
    } 

    printf("\n");
    printf("PRIMEIRO CONJUNTO\n");
    for (i = 0; i < qtd_valores; i++) {
        printf("%d ", conjunto[i]);
    }

    printf("\n");
    printf("SEGUNDO CONJUNTO\n");
    for (i = 0; i < qtd_valores; i++) {
        printf("%d ", conjunto_2[i]);
    }

    printf("\n");
    printf("VALORES EM COMUM EM AMBOS OS CONJUNTOS\n");

    return 0;
}