#include <stdio.h>

int main() {
    int i ,esc_dia;

    for (i = 0; i < 10; i++) {
        printf("--");
    }
    printf("\n");
    printf("DIAS DA SEMANA");
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("--");
    }
    printf("\n");
    printf("Informe um valor de 1 ate 7: ");
    scanf("%d", &esc_dia);

    switch (esc_dia) {
        case 1:
            printf("DOMINGO-FEIRA");
            break;
        case 2:
            printf("SEGUNDA-FEIRA");
            break;
        case 3:
            printf("TERCA-FEIRA");
            break;
        case 4:
            printf("QUARTA-FEIRA");
            break;
        case 5:
            printf("QUINTA-FEIRA");
            break;
        case 6:
            printf("SEXTA-FEIRA");
            break;
        case 7:
            printf("SABADO-FEIRA");
            break;
    }
    return 0;
}