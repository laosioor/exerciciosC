// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int me = 0, ma = 0;

    while (1)
    {
        printf("Entre com um valor: ");
        scanf(" %d", &n);
        
        if (n < 0) {
            break;
        }

        if (me == 0 && ma == 0) {
            me = n;
            ma = n;
        }

        if (n < me) {
            me = n;
        }

        if (n > ma) {
            ma = n;
        }
    }

    printf("Menor numero: %d\n", me);
    printf("Maior numero: %d\n", ma);

    
    return 0;
}