// Validação de senha: 

#include <stdio.h>

int main() {
    int senha, tentativa;

    senha = 29173;
    printf("Informe a senha de 5 digitos: ");
    scanf("%d", &tentativa);

    do {
        if (tentativa == senha) {
            break;
        }
        printf("SENHA INCORRETA. TENTE NOVAMENTE\n");
        printf("Senha: ");
        scanf("%d", &tentativa);
    } while (tentativa != senha);
    printf("PARABENS, VOCE ACERTOU A SENHA\n");
    printf("ACESSO LIBERADO");
    
    return 0;
}