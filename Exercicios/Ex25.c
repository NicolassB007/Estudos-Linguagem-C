// FUNÇÕES
// Cálculo de Área

#include <stdio.h>

double area_circulo(double num) {
    double resultado_area;

    resultado_area = num * num;
    return resultado_area;
}

int main() {
    double raio;

    printf("Informe o raio do circulo: ");
    scanf("%lf", &raio);

    printf("AREA DO CIRCULO = %.2lf\n", area_circulo(raio));

    return 0;
}