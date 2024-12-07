// Conversão de temperatura

#include <stdio.h>

double converte_celsius_fahrenheit(double num) {
    double fahrenheit;
    fahrenheit = num * 1.8 + 32;
    return fahrenheit;
}

double converte_fahrenheit_celsius(double num) {
    double celsius;
    celsius = (double) 5 / 9 * (num - 32);
    return celsius;
}

int main() {
    double celsius, fahrenheit;

    printf("Informe a temperatura em celsius: ");
    scanf("%lf", &celsius);
    printf("Informe a temperatura em fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("FAHRENHEIT = %.2lf\n", converte_celsius_fahrenheit(celsius));
    printf("CELSIUS = %.2lf", converte_fahrenheit_celsius(fahrenheit));
    return 0;
}