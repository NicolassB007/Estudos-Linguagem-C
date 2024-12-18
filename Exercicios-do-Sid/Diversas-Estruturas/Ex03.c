#include <stdio.h>
#include <locale.h>
#include <math.h>
// Em andamento

void traco_superior() {
    int i;
    for (i = 0; i < 20; i++) {
        printf("--");
    }
    printf("\n");
}

void traco_inferior() {
    int i;
    printf("\n");
    for (i = 0; i < 20; i++) {
        printf("--");
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    int esc, qtd_valores, i;
    double valores;
    char espacos = {' '};
    do {
        traco_superior();
        printf("%-15c OPCOES", espacos);
        traco_inferior();

        printf("[ 1 ] -> SOMA\n[ 2 ] -> MULTIPLICAR\n[ 3 ] -> SUBTRAIR\n[ 4 ] -> DIVIR\n[ 5 ] -> VALOR AO QUADRADO\n[ 6 ] -> RAIZ QUADRADA\n[ 7 ] -> SAIR\n");
        printf("ESCOLHA: ");
        scanf("%d", &esc);
        if (esc == 1) {
            int i;
            double soma;
            traco_superior();
            printf("%-6c SOMA", espacos);
            traco_inferior();
            printf("Quantos valores serao: ");
            scanf("%d", &qtd_valores);
            soma = 0;
            for (i = 0; i < qtd_valores; i++) {
                printf("%d valor: ", i + 1);
                scanf("%lf", &valores);
                soma = soma + valores;
            }
            printf("RESULTADO FINAL = %.2lf\n", soma);
        }
        else if (esc == 2) {
            double resultado;
            traco_superior();
            printf("%-2c MULTIPLICACAO", espacos);
            traco_inferior();
            printf("Quantos valores serao: ");
            scanf("%d", &qtd_valores);
            resultado = 1;
            for (i = 0; i < qtd_valores; i++) {
                printf("%d valor: ", i + 1);
                scanf("%lf", &valores);
                resultado = resultado * valores;
            }
            printf("RESULTADO FINAL = %.2lf\n", resultado);
        }
        else if (esc == 3) {
            double subtracao;
            traco_superior();
            printf("%-2c SUBTRACAO", espacos);
            traco_inferior();
            printf("Quantos valores serao: ");
            scanf("%d", &qtd_valores);
            double vet[qtd_valores];
            for (i = 0; i < qtd_valores; i++) {
                printf("%d valor: ", i + 1);
                scanf("%lf", &vet[i]);
            }
            for (i = 0; i < qtd_valores; i++) {
                if (i == 0) {
                    subtracao = vet[0];
                }
                if (i > 0) {
                    subtracao = subtracao - vet[i];
                }
            }
            printf("RESULTADO FINAL = %.2lf\n", subtracao);
        }
        else if (esc == 4) {
            int valor, valor2, divi;
            traco_superior();
            printf("%-2c DIVISAO", espacos);
            traco_inferior();
            printf("Primeiro valor: ");
            scanf("%d", &valor);
            printf("Segundo valor: ");
            scanf("%d", &valor2);
            divi = valor / valor2;
            printf("RESULTADO FINAL = %d\n", divi);
        }
        else if (esc == 5) {
            int valor, potencia;
            traco_superior();
            printf("%-2c ELEVAR O VALOR AO QUADRADO", espacos);
            traco_inferior();
            printf("Primeiro valor: ");
            scanf("%d", &valor);
            potencia = valor * valor;
            printf("RESULTADO FINAL = %d\n", potencia);
        }
        else if (esc == 6) {
            int valor, raiz;
            traco_superior();
            printf("%-2c RAIZ QUADRADA", espacos);
            traco_inferior();
            printf("Informe um valor valor: ");
            scanf("%d", &valor);
            raiz = sqrt(valor);
            printf("RESULTADO FINAL = %d\n", raiz);
        }
    } while (esc >= 1 && esc < 7);
    printf("VOCE ESCOLHEU A OPCAO 'SAIR'");
    return 0;
}