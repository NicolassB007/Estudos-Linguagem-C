// Estrutura switch
// Convertendo números para dias da semana:

#include <stdio.h>

int main() {
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    switch (valor) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segundo\n");
            break;
        case 3:
            printf("Terca\n");
            break;
        case 4: 
            printf("Quarta\n");
            break;
        case 5: 
            printf("Quinta\n");
            break;
        case 6: 
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
        default:
            printf("Valor invalido");
    }

    return 0;   
}