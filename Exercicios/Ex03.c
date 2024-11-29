// Verificando se um ano é bissexto:
#include <stdio.h>

int main() {
    int ano;

    printf("Informe um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("O ano %d e BISSEXTO", ano);
    }
    else {
        printf("O ano %d NAO e BISSEXTO", ano);
    }

    return 0;
}