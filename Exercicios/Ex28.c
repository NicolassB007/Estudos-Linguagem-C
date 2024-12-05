// Verificação de Número. - par ou ímpar

#include <stdio.h>

void mensagem_par_ou_impar(int num) {
    if (num % 2 == 0) {
        printf("O numero %d e PAR", num);
    }
    else {
        printf("O numero %d e IMPAR", num);
    }
}

int main() {
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    mensagem_par_ou_impar(valor);


    return 0;
}