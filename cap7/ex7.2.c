// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaCirculo(float raio) {
    const float pi = acos(-1);

    return pi * pow(raio, 2);
}

float circunferenciaCirculo(float raio) {
    const float pi = acos(-1);

    return 2 * pi * raio; 
}

int main() {
    float raio;

    printf("Raio: ");
    scanf(" %f", &raio);
    
    printf("Area = %.2f\n", areaCirculo(raio));
    printf("Circunferencia = %.2f\n", circunferenciaCirculo(raio));

    return 0;
}