#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    int esc;
    double valor, raiz_quadrada, metade_numero, dez_porcento_do_valor, dobro;

    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("[ 1 ] -> RAIZ QUADRADA\n");
    printf("[ 2 ] -> A METADE DO NÚMERO\n");
    printf("[ 3 ] -> 10% DO VALOR\n");
    printf("[ 4 ] -> O DOBRO\n");
    printf("ESCOLHA UMA OPÇÃO: ");
    scanf("%d", &esc);

    switch (esc) {
        case 1:
            printf("SUA ESCOLHA FOI RAIZ QUADRADA\n");
            printf("Informe um valor: ");
            scanf("%lf", &valor);

            raiz_quadrada = sqrt(valor);
            printf("A RAIZ QUADRADA DE %.2lf É %.2lf", valor, raiz_quadrada);
            break;
        case 2:
            printf("SUA ESCOLHA FOI A METADE DE UM NÚMERO\n");
            printf("Informe um valor: ");
            scanf("%lf", &valor);

            metade_numero = valor / 2;

            printf("A METADE DE %.2lf É %.2lf", valor, metade_numero);
            break;
        case 3:
            printf("A SUA FOI 10 PORCENTO DO VALOR\n");
            printf("Informe um valor: ");
            scanf("%lf", &valor);

            dez_porcento_do_valor = valor / (10 % 100);

            printf("DEZ PORCENTO DE %.2lf É %.2lf", valor, dez_porcento_do_valor);
            break;
        case 4:
            printf("SUA ESCOLHA FOI O DOBRO DO VALOR\n");
            printf("Informe um valor: ");
            scanf("%lf", &valor);

            dobro = valor * 2;

            printf("O DOBRO DE %.2lf É %.2lf", valor, dobro);
            break;
        default:
            printf("ESCOLHA INVÁLIDA\n");
            printf("PROGRAMA FINALIZADO!");
    }

    return 0;
}
