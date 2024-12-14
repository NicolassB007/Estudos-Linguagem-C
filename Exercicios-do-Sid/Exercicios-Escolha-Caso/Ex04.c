#include <stdio.h>
// Quase finalizado

int main() {
    int dia, mes, ano;

    printf("Informe o dia de seu nascimento: ");
    scanf("%d", &dia);
    printf("Informe o mes de seu nascimento: ");
    scanf("%d", &mes);
    printf("Informe o ano de seu nascimento: ");
    scanf("%d", &ano);

    if (mes < 10) {
        printf("DATA DE NASCIMENTO -> %d/0%d/%d\n", dia, mes, ano);
    }
    else {
        printf("DATA DE NASCIMENTO -> %d/%d/%d\n", dia, mes, ano);
    }
    
    // Variáveis para as estações
    const int mes_inicio_outono = mes >= 3;
    const int mes_fim_outono = mes <= 6;
    const int dia_fim_outono = dia > 0 && dia < 21;
    const int todos_dias_mes = dia > 0 && dia <= 31;
    
    // Utilizado em partes específicas
    const int dia_para_ano_bissexto = dia > 0 && dia < 30;

    if (mes_inicio_outono && mes_fim_outono) {
        if (mes == 3 && dia >= 20 && dia < 32) {
            printf("%d/0%d/%d -> OUTONO", dia, mes, ano);
        }
        else if (mes == 6 && dia_fim_outono) {
            printf("%d/0%d/%d -> OUTONO", dia, mes, ano);
        }
        else if (mes >= 4 && mes <= 5) {
            printf("%d/0%d/%d -> OUTONO", dia, mes, ano);
        }
    }

    const int mes_inicio_inverno = mes >= 6;
    const int mes_fim_inverno = mes <= 9;
    const int dia_fim_inverno = dia > 0 && dia <= 21;

    if (mes_inicio_inverno && mes_fim_inverno) {
        if (mes == 6 && dia >= 21 && dia < 32) {
            printf("%d/0%d/%d -> INVERNO", dia, mes, ano);
        }
        else if (mes == 9 && dia_fim_inverno) {
            printf("%d/0%d/%d -> INVERNO", dia, mes, ano);
        }
        else if (mes >= 7 && mes <= 8) {
            printf("%d/0%d/%d -> INVERNO", dia, mes, ano);
        }
    }

    const int mes_inicio_primavera = mes >= 9;
    const int mes_fim_primavera = mes <= 12;
    // const int dia_inicio_primavera = dia > 0 && dia <= 22;
    const int dia_fim_primavera = dia > 0 && dia <= 21;

    if (mes_inicio_primavera && mes_fim_primavera) {
        if (mes == 9 && dia >= 22 && dia < 32) {
            printf("%d/0%d/%d -> PRIMAVERA", dia, mes, ano);
        }
        else if (mes == 12 && dia_fim_primavera) {
            printf("%d/%d/%d -> PRIMAVERA", dia, mes, ano);
        }
        else if (mes >= 10 && mes <= 11) {
            printf("%d/%d/%d -> PRIMAVERA", dia, mes, ano);
        }
    }

    const int dia_inicio_verao = dia > 0 && dia <= 22;
    const int dia_fim_verao = dia > 0 && dia <= 20;

    if (mes == 12 && dia >= 22 && dia < 32) {
        if (dia_inicio_verao) {
            printf("%d/%d/%d -> VERAO", dia, mes, ano);
        }
    }
    else if (mes >= 1 && mes <= 2) {
        printf("%d/0%d/%d -> VERAO", dia, mes, ano);
    }
    else if (mes == 3 && dia > 0 && dia <= 19) {
        printf("%d/0%d/%d -> VERAO", dia, mes, ano);
    }
    

    return 0;
}