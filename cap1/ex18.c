#include <stdio.h>
#include <stdlib.h>

int main() {
    float D, d;
    float a;

    printf("Diagonal maior: ");
    scanf("%f", &D);

    printf("Diagonal menor: ");
    scanf("%f", &d);

    a = D*d/2;

    printf("Area = %.2f", a);

    return 0;
}