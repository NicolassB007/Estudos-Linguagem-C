#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char nome[30];

    printf("Informe o nome do atleta: ");
    fgets(nome, 30, stdin);
    fflush(stdin);
    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade > 5 && idade < 10) {
        printf("NOME -> %s", nome);
        printf("IDADE -> %d\n", idade);
        printf("CATEGORIA -> INFANTIL");
    }
    else if (idade > 11 && idade < 15) {
        printf("NOME -> %s", nome);
        printf("IDADE -> %d\n", idade);
        printf("CATEGORIA -> JUVENIL");
    }
    else if(idade > 16 && idade < 20) {
        printf("NOME -> %s", nome);
        printf("IDADE -> %d\n", idade);
        printf("CATEGORIA -> JUNIOR");
    }
    else if (idade > 21 && idade < 25) {
        printf("NOME -> %s", nome);
        printf("IDADE -> %d\n", idade);
        printf("CATEGORIA -> PROFISSIONAL");
    }
    return 0;
}
