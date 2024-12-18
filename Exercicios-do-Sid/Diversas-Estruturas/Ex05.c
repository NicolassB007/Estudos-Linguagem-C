#include <stdio.h>

int main() {
    int i, valores, maior_valor, menor_valor;

    printf("INFORME CINCO VALORES\n");
    
    for (i = 0; i < 5; i++) {
        printf("%d VALOR: ", i + 1);
        scanf("%d", &valores);
        if (i == 0) {
            maior_valor = valores;
            menor_valor = valores;
        }
        else if (valores > maior_valor) {
            maior_valor = valores;
        }
        else if (valores < menor_valor) {
            menor_valor = valores;
        }
    }
    printf("MAIOR VALOR -> %d\n", maior_valor);
    printf("MENOR VALOR -> %d", menor_valor);
    return 0;
}