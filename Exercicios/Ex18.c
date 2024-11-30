// Inverter vetor

#include <stdio.h>

int main() {
    int i, vetor[5];

    for (i = 0; i < 5; i++) {
        printf("Informe os valores: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 4; i >= 0; i--) {
        printf("VETOR = %d\n", vetor[i]);
    }

    return 0;
}