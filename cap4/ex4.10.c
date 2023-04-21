// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5];
    int cn[5];
    int b, q = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    printf("Copiar maiores que: ");
    scanf(" %d", &b);

    for (int i = 0; i < 5; i++)
    {
        if (n[i] > b) {
            cn[q] = n[i];
            q++;
        }
    }

    if (q > 0) {
        for (int i = 0; i < q; i++)
        {
            printf("arrayCopia[%d] = %d\n", i, cn[i]);
        }
    } else {
        printf("Nao houve copia!");
    }

    return 0;
}