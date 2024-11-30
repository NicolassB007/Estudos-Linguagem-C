// Exercicios de vetores
// Média de notas:

#include <stdio.h>

int main() {
    int i;
    double notas[10], soma, medias;

    for (i = 0; i < 10; i++) {
        printf("Informe as 10 notas: ");
        scanf("%lf", &notas[i]);
    }

    soma = 0;
    for (i = 0; i < 10; i++) {
        soma = soma + notas[i];
        medias = soma / 10;
    }
    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf", medias);
    return 0;
}