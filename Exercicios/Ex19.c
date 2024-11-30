// Contar ocorrências

#include <stdio.h>

int main() {
    int i, valores[5], valor_escolhido, contador, vetor[5];

    printf("Escolha um numero para ser procurado e contado: ");
    scanf("%d", &valor_escolhido);

    for (i = 0; i < 5; i++) {
        printf("Informe 5 valores: ");
        scanf("%d", &valores[i]);
    }

    contador = 0;

    for (i = 0; i < 5; i++) {
        if (valor_escolhido == valores[i]) {
            contador = contador + 1;
        }
    }

    printf("O valor %d escolhido apareceu %d", valor_escolhido, contador);

    return 0;
}