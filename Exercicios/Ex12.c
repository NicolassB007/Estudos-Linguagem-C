// Exercícios com o laço while
// Menu interativo:

#include <stdio.h>

int main() {
    int esc, esc_operacao;
    double valor, valor2, base, altura, area, adicao, sub, multi, divi, exp;
    
    printf("MENU\n");
    printf("[ 1 ] Calculo de area\n[ 2 ] Calculadora simples\n[ 3 ] Sair\n");
    printf("Informe o numero da opcao escolhida: ");
    scanf("%d", &esc);
    while (esc < 3 && esc > 0) {
        if (esc == 1) {
            printf("VOCE ESCOLHEU O CALCULO DE AREA\n");
            printf("Informe a base do retangulo: ");
            scanf("%lf", &base);
            printf("Informe a altura do retangulo: ");
            scanf("%lf", &altura);

            area = base * altura;

            printf("Area = %.2lf\n", area);

            printf("Informe outra opcao: ");
            scanf("%d", &esc);
        }
        else {
            printf("VOCE ESCOLHEU CALCULADORA SIMPLES\n");
            printf("[ 1 ] Adicao\n[ 2 ] Subtracao\n[ 3 ] Multiplicacao\n[ 4 ] Divisao\n[ 5 ] Exponenciacao\n");
            printf("OPCAO: ");
            scanf("%d", &esc_operacao);
            switch (esc_operacao) {
                case 1:
                    printf("ADICAO\n");
                    printf("Primeiro valor: ");
                    scanf("%lf", &valor);
                    printf("Segundo valor: ");
                    scanf("%lf", &valor2);

                    adicao = valor + valor2;

                    printf("%.2lf + %.2lf = %.2lf\n", valor, valor2, adicao);
                    break;
                case 2:
                    printf("SUBTRACAO\n");
                    printf("Primeiro valor: ");
                    scanf("%lf", &valor);
                    printf("Segundo valor: ");
                    scanf("%lf", &valor2);

                    sub = valor - valor2;

                    printf("%.2lf - %.2lf = %.2lf\n", valor, valor2, sub);
                    break;
                case 3:
                    printf("MULTIPLICACAO\n");
                    printf("Primeiro valor: ");
                    scanf("%lf", &valor);
                    printf("Segundo valor: ");
                    scanf("%lf", &valor2);

                    multi = valor * valor2;

                    printf("%.2lf x %.2lf = %.2lf\n", valor, valor2, multi);
                    break;
                case 4:
                    printf("DIVISAO\n");
                    printf("Primeiro valor: ");
                    scanf("%lf", &valor);
                    printf("Segundo valor: ");
                    scanf("%lf", &valor2);

                    divi = valor / valor2;

                    printf("%.2lf / %.2lf = %.2lf\n", valor, valor2, divi);
                    break;
                case 5:
                    printf("EXPONENCIACAO\n");
                    printf("Primeiro valor: ");
                    scanf("%lf", &valor);

                    exp = valor * valor;

                    printf("%.2lf elevado a 2 = %.2lf\n", valor, valor2, exp);
                    break;
                default:
                    printf("VALOR INVALIDO");
            }
            printf("Informe uma opcao: ");
            scanf("%d", &esc);
        }
    }
    printf("VOCE SAIU DO MENU\n");
    
    return 0;
}