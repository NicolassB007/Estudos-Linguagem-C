#include <stdio.h>

void mensagem_positivo_ou_negativo(int num) {
    if (num < 0) {
        printf("O numero %d e NEGATIVO", num);
    }
    else if (num > 0) {
        printf("O numero %d e POSITIVO", num);
    }
    else {
        printf("O numero 0", num);
    }
}

int main() {
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    mensagem_positivo_ou_negativo(valor);

    return 0;
}