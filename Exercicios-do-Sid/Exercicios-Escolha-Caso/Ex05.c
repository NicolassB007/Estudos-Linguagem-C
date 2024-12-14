#include <stdio.h>

int main() {
    int ano, mes, contador_dias;

    printf("Informe um ano: ");
    scanf("%d", &ano);
    printf("Informe um mes: ");
    scanf("%d", &mes);

    printf("\n");

    contador_dias = 1;

    switch (mes) {
        case 1:
            printf("JANEIRO\n");
            while (contador_dias < 31) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 2:
            printf("FEVEREIRO\n");
            if (ano % 4 == 0) {
                while (contador_dias < 30) {
                    printf("%-2d ", contador_dias);
                    if (contador_dias % 7 == 0) {
                        printf("\n");
                    }
                    contador_dias += 1;
                }
            }
            else {
                while (contador_dias < 29) {
                    printf("%-2d ", contador_dias);
                    if (contador_dias % 7 == 0) {
                        printf("\n");
                    }
                    contador_dias += 1;
                }
            }
            break;
        case 3: 
            printf("MARÇO\n");
            while (contador_dias < 32) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 4:
            printf("ABRIL\n");
            while (contador_dias < 31) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 5:
            printf("MAIO\n");
            while (contador_dias < 32) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 6:
            printf("JUNHO\n");
            while (contador_dias < 31) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 7:
            printf("JULHO\n");
            while (contador_dias < 31) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 8:
            printf("AGOSTO\n");
            while (contador_dias < 32) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 9:
            printf("SETEMBRO\n");
            while (contador_dias < 31) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 10:
            printf("OUTUBRO\n");
            while (contador_dias < 32) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 11:
            printf("NOVEMBRO\n");
            while (contador_dias < 31) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        case 12:
            printf("DEZEMBRO\n");
            while (contador_dias < 32) {
                printf("%-2d ", contador_dias);
                if (contador_dias % 7 == 0) {
                    printf("\n");
                }
                contador_dias += 1;
            }
            break;
        default:
            printf("MES INVALIDO");
    }

    return 0;
}