#include <stdio.h>
#include <stdlib.h>

int main() {
    float r;

    float d, c, a;
    float pi = 3.141592;
    printf("Raio: ");
    scanf("%f", &r);

    d = 2*r;
    c = 2* (pi * r);
    a = pi * (r * r);

    printf("Diametro = %.2f", d);
    printf("\nCircunferencia = %.2f", c);
    printf("\nArea = %.2f", a);

    return 0;
}