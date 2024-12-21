#include <stdio.h>
#include <string.h>

int main() {
    int qtd_alunos, i;

    printf("Quantos alunos serao: ");
    scanf("%d", &qtd_alunos);

    double notas[qtd_alunos], media, soma;
    char nomes_alunos[qtd_alunos][25];

    soma = 0;
    for (i = 0; i < qtd_alunos; i++) {
        printf("Qual o nome do aluno: ");
        fflush(stdin);
        fgets(nomes_alunos[i], 25, stdin);
        printf("Nota do aluno: ");
        scanf("%lf", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / qtd_alunos;

    printf("MEDIA -> %.2lf\n\n", media);
    for (i = 0; i < qtd_alunos; i++) {
        if (notas[i] > media) {
            printf("ALUNO -> %s", nomes_alunos[i]);
            printf("POSSUI A NOTA MAIOR QUE A MEDIA\n");
            printf("NOTA DO ALUNO -> %.2lf\n", notas
            [i]);
        }
    }

    return 0;
}