#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char letra_alfabeto;

    printf("Informe *UMA* letra do alfabeto brasileiro (EM MAIUSCULAS): ");
    scanf("%c", &letra_alfabeto);

    switch (letra_alfabeto) {
        case 'A':
            printf("A LETRA A � VOGAL");
            break;
        case 'E':
            printf("A LETRA E � VOGAL");
            break;
        case 'I':
            printf("A LETRA I � VOGAL");
            break;
        case 'O':
            printf("A LETRA O � VOGAL");
            break;
        case 'U':
            printf("A LETRA U � VOGAL");
            break;
        default:
            printf("A LETRA %c � CONSOANTE", letra_alfabeto);
    }

    return 0;
}
