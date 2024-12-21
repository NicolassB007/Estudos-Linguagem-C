#include <stdio.h>

int main() {
    int qtd_salario, i;

    printf("Quantos salarios serao inseridos: ");
    scanf("%d", &qtd_salario);
    double salario[qtd_salario];

    for (i = 0; i < qtd_salario; i++) {
        printf("Informe o salario: ");
        scanf("%lf", &salario[i]);
    }

    double reajuste, percentual_do_reajuste_salarial, desconto_salario;

    printf("QUAL SERA O VALOR DO REAJUSTE SALARIAL: ");
    scanf("%lf", &percentual_do_reajuste_salarial);
    printf("\n");

    double salarios_aumentados[qtd_salario], salarios_reduzidos[qtd_salario];

    int esc;
    printf("VOCE QUER AUMENTO SALARIAL OU REDUCAO SALARIAL\n");
    printf("[ 0 ] -> AUMENTO SALARIAL\n[ 1 ] -> REDUCAO SALARIAL \n");
    printf("ESCOLHA: ");
    scanf("%d", &esc);

    if (esc == 0) {
        for (i = 0; i < qtd_salario; i++) {
            reajuste = percentual_do_reajuste_salarial / 100;
            desconto_salario = salario[i] * reajuste;

            salarios_aumentados[i] = salario[i] + desconto_salario;
            printf("SALARIO SEM AUMENTO R$%.2lf\n", salario[i]);
            printf("SALARIO COM AUMENTO R$%.2lf\n",salarios_aumentados[i]);
            printf("\n");
        }
    }
    else if (esc == 1) {
        for (i = 0; i < qtd_salario; i++) {
            reajuste = percentual_do_reajuste_salarial / 100;
            desconto_salario = salario[i] * reajuste;
            
            salarios_reduzidos[i] = salario[i] - desconto_salario;
            printf("SALARIO SEM AUMENTO R$%.2lf\n", salario[i]);
            printf("SALARIO COM AUMENTO R$%.2lf\n", salarios_reduzidos[i]);
            printf("\n");
        }
    }
    else {
        printf("ESCOLHA INVALIDA\n");
        printf("PROGRAMA FINALIZADO\n");
    }

    return 0;
}