#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int codigo_produto, i;
    double valor_produto;
    char nome_produto[30];

    printf("Qual o nome do produto: ");
    fgets(nome_produto, 30, stdin);
    fflush(stdin);
    printf("Qual o valor do produto: ");
    scanf("%lf", &valor_produto);
    printf("Qual o código do produto: ");
    scanf("%d", &codigo_produto);

    for (i = 0; i < 18; i++) {
        printf("--");
    }
    printf("\n");
    printf("PRODUTO -> %s", nome_produto);
    printf("VALOR DO PRODUTO -> %.2lf\n", valor_produto);
    printf("CÓDIGO DO PRODUTO -> %d\n", codigo_produto);
    for (i = 0; i < 18; i++) {
        printf("--");
    }
    printf("\n");
    for (i = 4; i <= 35; i++) {
        if (i == 4 && codigo_produto == i) {
            printf("CODIGO %d = SUL", i);
        }
        else if (i == 5 && codigo_produto == i) {
            printf("CODIGO %d = NORDESTE", i);
        }
        else if (i >= 6 && i <= 7 && codigo_produto == i) {
            printf("CODIGO %d = NORTE", i);
        }
        else if (i == 8 && codigo_produto == i) {
            printf("CODIGO %d = SUDESTE", i);
        }
        else if (i >= 9 && i <= 23 && codigo_produto == i) {
            printf("CODIGO %d = LESTE", i);
        }
        else if (i == 24 && codigo_produto == i) {
            printf("CODIGO %d = CENTRO OESTE", i);
        }
        else if (i >= 25 && i <= 34 && codigo_produto == i) {
            printf("CODIGO %d = OESTE", i);
        }
        else if (i == 35 && codigo_produto == i) {
            printf("CODIGO %d = NORDESTE", i);
        }
    }

    return 0;
}
