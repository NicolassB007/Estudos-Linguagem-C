// Cálculo de média:
#include <stdio.h>

double media_aritmetica() {
    int i, qtd_notas;
    double notas, soma, media;

    printf("Quantas notas tera: ");
    scanf("%d", &qtd_notas);

    for (i = 0; i < qtd_notas; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas);
        soma = soma + notas;
    }

    media = soma / qtd_notas;
    return media;
}

int main() {

    printf("MEDIA ARITMETICA = %.2lf", media_aritmetica());

    return 0;
}