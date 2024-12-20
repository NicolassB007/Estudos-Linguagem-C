#include <stdio.h>
#include <math.h>

int main() {
    int i, j, contador, numero_primo;
    contador = 0;
    for (i = 2; i <= 300; i++) {
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                contador = contador + 1;
            }
        }
        if (contador == 2) {
            numero_primo = i;
            printf("%d\n", numero_primo);
        }
        contador = 0;
    }

    return 0; 
}