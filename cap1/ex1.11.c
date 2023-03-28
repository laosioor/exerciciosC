#include <stdio.h>
#include <stdlib.h>

int main() {
    int D, d;
    int a;

    printf("Diagonal maior: ");
    scanf("%d", &D);

    printf("Diagonal menor: ");
    scanf("%d", &d);

    a = D*d/2;

    printf("Area = %d", a);

    return 0;
}