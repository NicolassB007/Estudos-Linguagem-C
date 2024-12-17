#include <stdio.h>
#include <locale.h>
#include <math.h>
// Em andamento

void traco_superior() {
    int i;
    for (i = 0; i <10; i++) {
        printf("--");
    }
    printf("\n");
}

void traco_inferior() {
    int i;
    printf("\n");
    for (i = 0; i <10; i++) {
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
        printf("%-5c OPÇÕES", espacos);
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
            printf("Quantos valores serão: ");
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
            printf("%-2c MULTIPLICAÇÃO", espacos);
            traco_inferior();
            printf("Quantos valores serão: ");
            scanf("%d", &qtd_valores);
            resultado = 1;
            for (i = 0; i < qtd_valores; i++) {
                printf("%d valor: ", i + 1);
                scanf("%lf", &valores);
                resultado = resultado * valores;
            }
            printf("RESULTADO FINAL = %.2lf\n", resultado);
        }
    } while (esc >= 1 && esc < 7);
    printf("VOCE ESCOLHEU A OPÇÃO 'SAIR'");

    return 0;
}
