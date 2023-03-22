#include <stdio.h>
#include <stdlib.h>

int main() {
    int B;
    int b;
    int h;
    int a;

    printf("Base maior: ");
    scanf("%d", &B);

    printf("Base menor: ");
    scanf("%d", &b);

    printf("Altura: ");
    scanf("%d", &h);

    a = (B + b) * h / 2;

    printf("Area = %d", a);

    return 0;
}