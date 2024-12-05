#include <stdio.h>

void par_ou_impar(int num) {
    if (num % 2 == 0) {
        printf("O numero %d e PAR", num);
    }
    else {
        printf("O numero %d e IMPAR", num);
    }
}

void menor_ou_maior_zero(int num) {
    if (num < 0) {
        printf("O numero %d e NEGATIVO", num);
    }
    else if (num > 0) {
        printf("O numero %d e POSITIVO", num);
    }
    else {
        printf("O numero e 0");
    }
}

int main() {
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    par_ou_impar(valor);
    printf("\n");
    menor_ou_maior_zero(valor);

    return 0;
}