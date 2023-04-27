// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;

    while (1)
    {
        printf("Numero entre 1 e 100: ");
        scanf(" %d", &n);

        if (n < 1 || n > 100)
        {
            printf("Numero incorreto!\n");
        } else
        {
            break;
        }
    }

    int a = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", a);
            if (j != n-1)
            {
                printf(" ");
            } else
            {
                printf("\n");
            }
        }
    }
    
    return 0;
}