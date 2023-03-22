#include <stdio.h>
#include <stdlib.h>

int main() {
    int b, h;
    int a;

    printf("Base: ");
    scanf("%d", &b);

    printf("Altura: ");
    scanf("%d", &h);

    a = (b*h)/2;

    printf("Área: %d", a);
    return 0;
}