#include <stdio.h>
#include <stdlib.h>

int main() {
    float b, h;
    float a;

    printf("Base: ");
    scanf("%f", &b);

    printf("Altura: ");
    scanf("%f", &h);

    a = (b*h)/2;

    printf("Area = %.2f", a);
    return 0;
}