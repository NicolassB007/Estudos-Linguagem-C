#include <stdio.h>

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
    int codigo;
    char espaco = {' '};

    printf("[ 101 ] -> INFANTIL\n[ 102 ] -> JUVENIL\n[ 103 ] -> ADOLESCENTE\n[ 104 ] -> SENIOR\n[ 105 ] -> PROFISSIONAL\n[ 106 ] -> MASTER\n");
    printf("Informe o codigo da categoria: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 101:
            traco_superior();
            printf("%-8c INFANTIL", espaco);
            traco_inferior();
            printf("IDADES -> DE 6 ATE 8 ANOS DE IDADE\n");
            break;
        case 102:
            traco_superior();
            printf("%-8c JUVENIL", espaco);
            traco_inferior();
            printf("IDADES -> DE 8 ATE 10 ANOS DE IDADE\n");
            break;
        case 103:
            traco_superior();
            printf("%-8c ADOLESCENTE", espaco);
            traco_inferior();
            printf("IDADES -> DE 11 ATE 13 ANOS DE IDADE\n");
            break;
        case 104:
            traco_superior();
            printf("%-8c SENIOR", espaco);
            traco_inferior();
            printf("IDADES -> DE 14 ATE 17 ANOS DE IDADE\n");
            break;
        case 105:
            traco_superior();
            printf("%-8c PROFISSIONAL", espaco);
            traco_inferior();
            printf("IDADES -> DE 18 ATE 25 ANOS DE IDADE\n");
            break;
        case 106: 
            traco_superior();
            printf("%-8c MASTER", espaco);
            traco_inferior();
            printf("IDADES -> DE 25 ATE 40 ANOS DE IDADE\n");
            break;
        default:
            printf("APOSENTADO");
    }

    return 0;
}