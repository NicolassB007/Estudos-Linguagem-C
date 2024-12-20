#include <stdio.h>
#include <string.h>

int main() {
    int i;
    double notas[5], soma, media;
    char nome[5][25];
    soma = 0;
    for (i = 0; i < 5; i++) {
        printf("NOME -> ");
        fgets(nome[i], 25, stdin);
        printf("%d NOTA: ", i + 1);
        scanf("%lf", &notas[i]);
        fflush(stdin);
        soma = soma + notas[i];
    }
    media = soma / 5;
    printf("MEDIA -> %.2lf\n", media);
    for (i = 0; i < 5; i++) {
        if (notas[i] > media) {
            printf("NOME DO ALUNO -> %s", nome[i]);
            printf("NOTA DO ALUNO -> %.2lf\n", notas[i]);
        }
    }
    return 0;
}