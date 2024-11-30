// Validação de dados:

#include <stdio.h>

int main() {
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    while (valor > 0) {
        printf("Valor maior que zero\n\n");
        printf("Informe outro valor: ");
        scanf("%d", &valor);
    }

    printf("Valor menor que zero. PROGRAMA FINALIZADO");

    return 0;
}