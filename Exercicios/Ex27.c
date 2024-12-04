// Cálculo de Área - Calculando area Circulos e retangulos e chamando-as

#include <stdio.h>

double area_circulo(double num) {
    double resultado_area_circulo;
    resultado_area_circulo = num * num;
    return resultado_area_circulo;
}

double area_retangulo(double num, double num2) {
    double resultado_area_retangulo;
    resultado_area_retangulo = num * num2;
    return resultado_area_retangulo;
}

int main() {
    double raio, base, altura, areaC, areaRe;

    printf("Informe o valor do raio: ");
    scanf("%lf", &raio);
    printf("Informe a base do retangulo: ");
    scanf("%lf", &base);
    printf("Informe a altura do retangulo: ");
    scanf("%lf", &altura);

    areaC = area_circulo(raio);
    areaRe = area_retangulo(base, altura);

    printf("AREA CIRCULO = %.2lf\n", areaC);
    printf("AREA RETANGULO = %.2lf", areaRe);

    return 0;
}