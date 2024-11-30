// Maior e menor número

#include <stdio.h>

int main() {
    int i, valores[5], maior_valor, menor_valor;

    for (i = 0; i < 5; i++) {
        printf("Informe os 20 valores: ");
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < 5; i++) {
        if (i == 0) {
            maior_valor = valores[i];
            menor_valor = valores[i];
        }
        else if (valores[i] > maior_valor) {
            maior_valor = valores[i];
        }
        else if (valores[i] < menor_valor){
            menor_valor = valores[i];
        }
    }

    printf("Maior valor = %d\n", maior_valor);
    printf("Menor valor = %d", menor_valor);

    return 0;
}