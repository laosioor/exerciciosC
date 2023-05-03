// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n;

    printf("Numero: ");
    scanf(" %f", &n);

    printf("Maior inteiro mais proximo: %.2f\n", ceil(n));
    printf("Menor inteiro mais proximo: %.2f", floor(n));

    return 0;
}