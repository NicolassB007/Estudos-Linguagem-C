//  Cálculo de Área - Retangulo

#include <stdio.h>

double area_retangulo(double num, double num2) {
    double resultado_area;
    resultado_area = num * num2;
    return resultado_area;
}

int main() {
    double base, altura;
    
    printf("Informe a base do retangulo: ");
    scanf("%lf", &base);
    printf("Informe a altura do retangulo: ");
    scanf("%lf", &altura);

    printf("AREA DO RETANGULO = %.2lf\n", area_retangulo(base, altura));

    return 0;
}