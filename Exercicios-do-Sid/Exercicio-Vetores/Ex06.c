#include <stdio.h>

int main() {
    int vet[50], i, contador_101_ate_150;
    contador_101_ate_150 = 101;
    for (i = 0; i < 50; i++) {
        vet[i] = contador_101_ate_150;
        printf("%d\n", vet[i]);
        contador_101_ate_150 = contador_101_ate_150 + 1;
    }

    return 0;
}