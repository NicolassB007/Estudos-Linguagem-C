// Calculando a média de um aluno:
#include <stdio.h>

int main() {
    int nota, nota2, nota3;
    double media;

    printf("Primeira nota: ");
    scanf("%d", &nota);
    fflush(stdin);
    printf("Segunda nota: ");
    scanf("%d", &nota2);
    fflush(stdin);
    printf("Terceira nota: ");
    scanf("%d", &nota3);

    media = (nota + nota2 + nota3) / 3;

    printf("MEDIA = %.2lf", media);

    return 0;
}