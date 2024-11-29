// Calculando o valor a ser pago em um estacionamento:

#include <stdio.h>

int main() {
    int estacionamento;
    double horas, valor_cobrado;

    printf("Quantas horas o carro ficou estacionado: ");
    scanf("%lf", &horas);

    printf("Qual dos estacionamento o carro ficou (1 ou 2): ");
    scanf("%d", &estacionamento);
    switch (estacionamento) {
        case 1:
            printf("O estacionamento cobra R$ 2.25 por hora\n");
            printf("Seu carro ficou no estacionamento durante %2.lf horas\n", horas);

            valor_cobrado = horas * 2.25;
            printf("TOTAL A PAGAR: R$%.2lf", valor_cobrado);
            break;
        case 2:
            printf("O estacionamento cobra R$3.00 por hora\n");
            printf("Seu carro ficou no estacionamento durante %2.lf horas\n", horas);

            valor_cobrado = horas * 3.00;
            printf("TOTAL A PAGAR: R$%.2lf", valor_cobrado);
            break;
        default:
            printf("ESTACIONAMENTO INVALIDO");
    }

    return 0;
}