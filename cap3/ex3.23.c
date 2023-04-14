// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n, m = 0;

    for (int i = 0; i < 10; i++) {
        printf("Nota %02d: ", i+1);
        scanf(" %f", &n);

        m += n;
    }

    m = m / 10;

    printf("A media aritmetica das dez notas e: %.2f", m);

    return 0;
}