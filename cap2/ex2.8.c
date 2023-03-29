// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3;
    float t;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("N3: ");
    scanf("%f", &n3);

    if (n3 <= n1) {
        t = n3;
        n3 = n1;
        n1 = t;
    }

    if (n3 <= n2) {
        t = n3;
        n3 = n2;
        n2 = t;
    }

    if (n2 <= n1) {
        t = n2;
        n2 = n1;
        n1 = t;
    }

    printf("A soma dos dois numeros maiores fornecidos e %.2f", n2 + n3);

    return 0;
}