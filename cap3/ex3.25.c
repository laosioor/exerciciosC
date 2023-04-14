// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n = 0, s = 0;
    int q = 0;

    while (1) {
        printf("Entre com um valor: ");
        scanf(" %f", &n);
        
        if (n < 0) {
            break;
        }

        s += n;

        q++;
    }

    float m = q > 0 ? s / q : 0; // se q for maior que 0, media recebe a s dividido por q, senao m recebe 0

    printf("Somatorio: %.2f\n", s);
    printf("Media: %.2f\n", m);
    printf("Quantidade: %d", q);

    return 0;
}