#include <stdio.h>

int main() {
    int qtd_notas, i;

    printf("Quantas notas serao: ");
    scanf("%d", &qtd_notas);

    double notas[qtd_notas], soma, media;

    for (i = 0; i < qtd_notas; i++) {
        printf("NOTA %d -> ", i + 1);
        scanf("%lf", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / qtd_notas;
    printf("MEDIA -> %.2lf\n", media);
    for (i = 0; i < qtd_notas; i++) {
        if (notas[i] > media) {
            printf("NOTA %.2lf -> MAIOR QUE A MEDIA\n", notas[i]);
        }
    }
    for (i = 0; i < qtd_notas; i++) {
        if (notas[i] < media) {
            printf("NOTA %.2lf -> MENOR QUE A MEDIA\n", notas[i]);
        }
    }
    return 0;
}