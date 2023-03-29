// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;

    printf("Numero: ");
    scanf("%f", &n);

    if (n > 20) {
        printf("A metade de %.2f e %.2f", n, n/2);
    } else {
        printf("O triplo de %.2f e %.2f", n, n*3);
    }
    return 0;
}