#include <stdio.h>

int main() {
    int qtd_valores, i;

    printf("Quantos valores serao: ");
    scanf("%d", &qtd_valores);

    int conjunto_valor[qtd_valores];

    for (i = 0; i < qtd_valores; i++) {
        printf("%d VALOR -> ", i + 1);
        scanf("%d", &conjunto_valor[i]);
    }

    int ultima_posicao;
    for (i = 0; i < qtd_valores; i++) {
        ultima_posicao = (qtd_valores - 1) - i;
        printf("%d - %d\n", conjunto_valor[i], conjunto_valor[ultima_posicao]);
    }

    return 0;
}