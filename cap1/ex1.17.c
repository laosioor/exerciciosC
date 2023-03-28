#include <stdio.h>
#include <stdlib.h>

int main() {
    float B;
    float b;
    float h;
    float a;

    printf("Base maior: ");
    scanf("%f", &B);

    printf("Base menor: ");
    scanf("%f", &b);

    printf("Altura: ");
    scanf("%f", &h);

    a = (B + b) * h / 2;

    printf("Area = %.2f", a);

    return 0;
}