#include <stdio.h>
#include <string.h>

int main() {
    int qtd_pacientes, i;

    printf("Quantos pacientes serao: ");
    scanf("%d", &qtd_pacientes);

    char nomes_pacientes[qtd_pacientes][25];
    //int posicao_do_paciente[qtd_pacientes];
    int esc_usuario;

    for (i = 1; i <= qtd_pacientes; i++) {
        printf("Nome do paciente: ");
        fflush(stdin);
        fgets(nomes_pacientes[i], 25, stdin);
        // printf("Qual o numero do paciente: ");
        // scanf("%d", &posicao_do_paciente[i]);
    }
    printf("\n");

    printf("Qual o numero do paciente voce deseja saber: ");
    scanf("%d", &esc_usuario);

    for (i = 1; i <= qtd_pacientes; i++) {
        if (esc_usuario > qtd_pacientes) {
            printf("POSICAO INVALIDA\n");
            printf("PROGRAMA FINALIZADO\n");
            break;
        }
        if (esc_usuario == i) {
            printf("PACIENTE %s", nomes_pacientes[i]);
            printf("NUMERO DO PACIENTE: %d\n", i);
        }
        if (esc_usuario <= 0) {
            printf("POSICAO INVALIDA\n");
            printf("PROGRAMA FINALIZADO\n");
            break;
        }
    }

    return 0;
}