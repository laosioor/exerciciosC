// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[10];
    int q, v;

    while (1) {
        printf("Quantidade de elementos (1 a 9): ");
        scanf(" %d", &q);

        if (q > 9 || q < 1) {
            printf("Quantidade incorreta, forneca novamente!\n");
        } else {
            break;
        }
    }

    for (int i = 0; i < q; i++)
    {
        printf("array[%d]: ", i);
        scanf(" %d", &n[i]);
    }

    printf("Valor que sera inserido: ");
    scanf(" %d", &v);
    
    for (int i = q+1; i > 0; i--)
    {
        n[i] = n[i-1];
    }

    n[0] = v;

    for (int i = 0; i < q + 1; i++)
    {
        printf("array[%d] = %d\n", i, n[i]);
    }

    return 0;
}