#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, h;
    int p, a;

    printf("Diga-me o lado do retangulo: ");
    scanf("%d", &l);

    printf("Dizai-vos a altura agora: ");
    scanf("%d", &h);

    p = (2*l) + (2*h);
    a = l*h;

    printf("Perimetro = %d\n", p);
    printf("Area = %d", a);

    return 0;
}