#include <stdio.h>
#include <string.h>

void traco_superior() {
    int i;
    for (i = 0; i < 15; i++) {
        printf("--");
    }
    printf("\n");
}

void traco_inferior() {
    int i;
    printf("\n");
    for (i = 0; i < 15; i++) {
        printf("--");
    }
    printf("\n");
}

int main() {
    double valor, valor2, adicao, subt, multi, divi;
    char operador;
    char espacos = {' '};

    printf("Primeiro valor: ");
    scanf("%lf", &valor);
    printf("Segundo valor: ");
    scanf("%lf", &valor2);
    printf("Qual operacao aritmetica (basica) sera realizada: ");
    fflush(stdin);
    scanf("%c", &operador);

    switch (operador) {
        case '+':
            traco_superior();
            printf("%-10c ADICAO", espacos);
            traco_inferior();
            adicao = valor + valor2;
            printf("RESULTADO DA ADICAO = %.2lf", adicao);
            break;
        case '-':
            traco_superior();
            printf("%-5c SUBTRACAO", espacos);
            traco_inferior();
            subt = valor - valor2;
            printf("RESULTADO DA SUBTRACAO = %.2lf", subt);
            break;
        case 'x':
            traco_superior();
            printf("%-10c MULTIPLICACAO", espacos);
            traco_inferior();
            multi = valor * valor2;
            printf("RESULTADO DA MULTIPLICACAO = %.2lf", multi);
            break;
        case '/':
            traco_superior();
            printf("%-10c DIVISAO", espacos);
            traco_inferior();
            divi = valor / valor2;
            printf("RESULTADO DA MULTIPLICACAO = %.2lf", divi);
            break;
        default:
            printf("OPERADOR INVALIDO\n");
            printf("PROGAMA FINALIZADO");
    }

    return 0;
}