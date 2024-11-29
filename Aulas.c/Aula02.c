// Estrutura condicional
// if / else if / else
// se / senao se / senao

#include <stdio.h>

int main() {
    // Declarando variável
    int idade;

    // Entrada de dados
    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    // Processamento
    if (idade < 18) {
        printf("Voce e menor de idade");
    }
    else if (idade > 18 && idade < 60) {
        printf("Voce e um adulto");
    }

    else {
        printf("Voce e um idoso");
    }

    // Saída
    printf("Sua idade e %d", idade);
    return 0;
}
