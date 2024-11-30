// Cálculo de média: 

#include <stdio.h>

int main() {
    int valor, contador;
    double notas, soma, media;

    printf("Informe quantas notas serao: ");
    scanf("%d", &valor);
    contador = 0;
    while (valor > contador) {
        printf("Nota: ", contador);
        scanf("%lf", &notas);
        soma = soma + notas;
        contador = contador + 1;
    }
    media = soma / contador;
    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf", media);
    return 0;
}