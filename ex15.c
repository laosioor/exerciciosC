#include <stdio.h>
#include <stdlib.h>

int main() {
    float l, h;
    float p, a;

    printf("Diga-me o lado do retangulo: ");
    scanf("%f", &l);

    printf("Dizai-vos a altura agora: ");
    scanf("%f", &h);

    p = (2*l) + (2*h);
    a = l*h;

    printf("Perimetro: %.2f\n", p);
    printf("Area: %.2f", a);

    return 0;
}