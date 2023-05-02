// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int a[100][100] = {0};
    int q = 0, v = 1;

    printf("Numero entre 1 e 100: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Numero incorreto!\n");
        n = 0;
    }

    do {
        for (int i = q; i < n-q; i++)
        {
            for (int j = q; j < n-q; j++)
            {
                a[i][j] = v;
                v++;

                if (j == n-q-1)
                {
                    v = i+2;
                }
            }
        }
        q++;
    } while (q < n-1);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", a[i][j]);

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